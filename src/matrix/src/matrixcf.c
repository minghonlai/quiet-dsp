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
// Complex floating-point matrix (single precision)
// 

#include "liquid.internal.h"

#define MATRIX(name)    LIQUID_CONCAT(matrixcf, name)
#define MATRIX_NAME     "matrixcf"

#define T               liquid_float_complex   // general type
#define TP              float           // primitive type
#define T_COMPLEX       1               // is type complex?

#define T_ABS(X)        cabsf(X)
#define TP_ABS(X)       fabsf(X)

#define MATRIX_PRINT_ELEMENT(X,R,C,r,c)     \
    printf("%7.2f+j%6.2f ",                 \
        crealf(matrix_access(X,R,C,r,c)),   \
        cimagf(matrix_access(X,R,C,r,c)));

#include "matrix.base.c"
#include "matrix.cgsolve.c"
#include "matrix.chol.c"
#include "matrix.gramschmidt.c"
#include "matrix.inv.c"
#include "matrix.linsolve.c"
#include "matrix.ludecomp.c"
#include "matrix.qrdecomp.c"
#include "matrix.math.c"

