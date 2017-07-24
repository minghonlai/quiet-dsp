/*
 * Copyright (c) 2007 - 2015 Joseph Gaeddert
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

//
// tvmpch : finite impulse response (FIR) filter
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// tvmpch object structure
struct TVMPCH(_s) {
    TC * h;             // filter coefficients array [size; h_len x 1]
    unsigned int h_len; // filter length

    // use window object for internal buffer
    WINDOW() w;

    //
    float std;
    float alpha;
    float beta;
};

// create time-varying multi-path channel emulator object
//  _n      :   number of coefficients, _n > 0
//  _std    :   standard deviation
//  _tau    :   coherence time
TVMPCH() TVMPCH(_create)(unsigned int _n,
                         float        _std,
                         float        _tau)
{
    // validate input
    if (_n < 1) {
        fprintf(stderr,"error: tvmpch_%s_create(), filter length must be greater than one\n", EXTENSION_FULL);
        exit(1);
    } else if (_std < 0.0f) {
        fprintf(stderr,"error: tvmpch_%s_create(), standard deviation must be positive\n", EXTENSION_FULL);
        exit(1);
    } else if (_tau < 0.0f || _tau > 1.0f) {
        fprintf(stderr,"error: tvmpch_%s_create(), coherence time must be in [0,1]\n", EXTENSION_FULL);
        exit(1);
    }

    // create filter object and initialize
    TVMPCH() q = (TVMPCH()) malloc(sizeof(struct TVMPCH(_s)));
    q->h_len = _n;
    q->h     = (TC *) malloc((q->h_len)*sizeof(TC));
    q->beta  = _tau;
    q->std   = 2.0f * _std / sqrtf(q->beta);
    q->alpha = 1.0f - q->beta;

    // time-reverse coefficients
    unsigned int i;
    q->h[q->h_len-1] = 1.0f;
    for (i=0; i<q->h_len-1; i++)
        q->h[i] = 0.0f;

    // create window (internal buffer)
    q->w = WINDOW(_create)(q->h_len);

    // reset filter state (clear buffer)
    TVMPCH(_reset)(q);

    //
    return q;
}

// destroy tvmpch object
void TVMPCH(_destroy)(TVMPCH() _q)
{
    WINDOW(_destroy)(_q->w);
    free(_q->h);
    free(_q);
}

// reset internal state of filter object
void TVMPCH(_reset)(TVMPCH() _q)
{
    WINDOW(_reset)(_q->w);
}

// print filter object internals (taps, buffer)
void TVMPCH(_print)(TVMPCH() _q)
{
    printf("tvmpch_%s:\n", EXTENSION_FULL);
    unsigned int i;
    unsigned int n = _q->h_len;
    for (i=0; i<n; i++) {
        printf("  h(%3u) = ", i+1);
        PRINTVAL_TC(_q->h[n-i-1],%12.8f);
        printf(";\n");
    }
    //WINDOW(_print)(_q->w);
}

// push sample into filter object's internal buffer
//  _q      :   filter object
//  _x      :   input sample
void TVMPCH(_push)(TVMPCH() _q,
                   TI       _x)
{
    // update coefficients
    unsigned int i;
    for (i=0; i<_q->h_len-1; i++)
        _q->h[i] = _q->alpha*_q->h[i] + _q->beta*(randnf() + _Complex_I*randnf()) * _q->std * M_SQRT1_2;

    // push sample into window buffer
    WINDOW(_push)(_q->w, _x);
}

// compute output sample (dot product between internal
// filter coefficients and internal buffer)
//  _q      :   filter object
//  _y      :   output sample pointer
void TVMPCH(_execute)(TVMPCH() _q,
                      TO *     _y)
{
    // read buffer (retrieve pointer to aligned memory array)
    TI *r;
    WINDOW(_read)(_q->w, &r);

    // execute dot product
    DOTPROD(_run4)(r, _q->h, _q->h_len, _y);
}

// execute the filter on a block of input samples; the
// input and output buffers may be the same
//  _q      : filter object
//  _x      : pointer to input array [size: _n x 1]
//  _n      : number of input, output samples
//  _y      : pointer to output array [size: _n x 1]
void TVMPCH(_execute_block)(TVMPCH()     _q,
                            TI *         _x,
                            unsigned int _n,
                            TO *         _y)
{
    unsigned int i;
    for (i=0; i<_n; i++) {
        // push sample into filter
        TVMPCH(_push)(_q, _x[i]);

        // compute output sample
        TVMPCH(_execute)(_q, &_y[i]);
    }
}

#if 0
// get filter length
unsigned int TVMPCH(_get_length)(TVMPCH() _q)
{
    return _q->h_len;
}

// compute complex frequency response
//  _q      :   filter object
//  _fc     :   frequency
//  _H      :   output frequency response
void TVMPCH(_freqresponse)(TVMPCH()        _q,
                           float           _fc,
                           liquid_float_complex * _H)
{
    unsigned int i;
    liquid_float_complex H = 0.0f;

    // compute dot product between coefficients and exp{ 2 pi fc {0..n-1} }
    for (i=0; i<_q->h_len; i++)
        H += _q->h[i] * cexpf(_Complex_I*2*M_PI*_fc*i);

    // apply scaling
    H *= _q->scale;

    // set return value
    *_H = H;
}


// compute group delay in samples
//  _q      :   filter object
//  _fc     :   frequency
float TVMPCH(_groupdelay)(TVMPCH() _q,
                          float    _fc)
{
    // copy coefficients to be in correct order
    float h[_q->h_len];
    unsigned int i;
    unsigned int n = _q->h_len;
    for (i=0; i<n; i++)
        h[i] = crealf(_q->h[n-i-1]);

    return fir_group_delay(h, n, _fc);
}
#endif
