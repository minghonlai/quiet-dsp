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
// autotest fft data for 63-point transform
//

#include <complex.h>

#include "liquid.h"

liquid_float_complex fft_test_x63[] = {
   -0.165065089334 +   1.102101871091*_Complex_I,
   -0.981973148546 +   0.541468656777*_Complex_I,
   -0.253554650102 +  -0.121332795252*_Complex_I,
    0.944969891304 +  -0.207365910694*_Complex_I,
    0.435801732783 +   1.116850636842*_Complex_I,
   -2.058668461583 +   1.768420128659*_Complex_I,
    0.404062083774 +  -1.055764673267*_Complex_I,
   -1.173590903686 +   0.058528368777*_Complex_I,
   -0.598414155862 +  -0.497560622574*_Complex_I,
   -1.861198860149 +   0.229658791022*_Complex_I,
   -2.562456370500 +   0.495624931472*_Complex_I,
    0.673656989316 +   2.905410000205*_Complex_I,
    0.867056802014 +   1.798292948964*_Complex_I,
   -2.078980954663 +   0.098338397564*_Complex_I,
   -0.330038784071 +   0.481340360434*_Complex_I,
    1.276384585521 +   1.297002232435*_Complex_I,
    0.261810533047 +  -1.797403878425*_Complex_I,
   -2.153713373163 +  -0.426579749412*_Complex_I,
    0.065709110586 +  -0.887295333513*_Complex_I,
   -0.504714672950 +  -0.491403278968*_Complex_I,
    0.314910052074 +  -0.711703174875*_Complex_I,
    0.817545815846 +   2.684246900528*_Complex_I,
    0.899097356674 +   2.316804935463*_Complex_I,
    1.234132120370 +  -0.619880076717*_Complex_I,
    0.791329122849 +  -1.491623691612*_Complex_I,
   -1.543373050418 +  -0.676542277175*_Complex_I,
    0.671442701409 +   0.216191301849*_Complex_I,
    0.131373689049 +   0.579119405459*_Complex_I,
   -0.372079387235 +  -0.810986260520*_Complex_I,
    0.509295824480 +   2.533724020332*_Complex_I,
    1.724705779066 +   0.166621824873*_Complex_I,
    1.578021811166 +   0.495673960042*_Complex_I,
   -0.388517506381 +   0.654051926694*_Complex_I,
    0.780148148992 +  -1.186745985806*_Complex_I,
   -0.998699640841 +  -2.290498316764*_Complex_I,
    1.225655499248 +   0.539258663300*_Complex_I,
    0.647174747272 +  -1.701050133294*_Complex_I,
   -1.961810462975 +  -0.885111538141*_Complex_I,
    0.708722105215 +   2.298722273781*_Complex_I,
    0.003407269436 +  -0.160897403251*_Complex_I,
   -1.461677661847 +   0.035003203295*_Complex_I,
   -0.003031847788 +   0.263418857310*_Complex_I,
   -0.921189208563 +  -0.548149166993*_Complex_I,
    1.607243811931 +   1.460044138769*_Complex_I,
    1.474955000858 +  -0.319625335378*_Complex_I,
   -1.479420038984 +   0.442261731228*_Complex_I,
   -0.501705519202 +  -0.107677110586*_Complex_I,
   -0.555052849202 +  -2.288466181238*_Complex_I,
    0.115695886330 +   0.958546419969*_Complex_I,
   -0.272372848704 +  -0.160652497732*_Complex_I,
    0.329785731274 +  -0.424936229335*_Complex_I,
    0.480745655276 +   1.205406168541*_Complex_I,
    0.070825951395 +   2.104542991271*_Complex_I,
   -0.006185321246 +   0.587388482318*_Complex_I,
   -0.694069041213 +   0.770735193308*_Complex_I,
    0.908386043892 +  -1.602236263851*_Complex_I,
   -0.699555084329 +   0.976937982289*_Complex_I,
   -0.954674992562 +  -0.016401236894*_Complex_I,
   -0.309302754137 +   0.958214618988*_Complex_I,
   -0.127271579222 +   1.856678631720*_Complex_I,
   -0.871347344939 +  -2.036988579664*_Complex_I,
    0.135839855058 +  -0.627341937358*_Complex_I,
   -0.335848209970 +  -2.547865701465*_Complex_I};

liquid_float_complex fft_test_y63[] = {
   -7.089662066859 +   9.296545614813*_Complex_I,
   -8.501752827269 +   5.888942352564*_Complex_I,
    3.278359396134 +   3.509899786067*_Complex_I,
    5.034502581381 + -10.325422246173*_Complex_I,
    0.779395837363 + -11.641131257781*_Complex_I,
    6.583373182868 +  -0.765170650399*_Complex_I,
    7.673022911242 +   5.376349934527*_Complex_I,
    6.901124231347 + -11.572359190453*_Complex_I,
  -12.551588348101 +  -5.650836104556*_Complex_I,
   13.135291423808 +  -9.005088743334*_Complex_I,
    6.256581548275 +   7.656394164588*_Complex_I,
   -9.007597317001 +   6.540328187752*_Complex_I,
    5.970311877450 +  11.718061229294*_Complex_I,
    3.567004157825 +   0.672928597121*_Complex_I,
  -14.427943038803 +   8.900678790697*_Complex_I,
    1.056847529506 +   3.528462625077*_Complex_I,
   13.620920754920 +  14.305922963856*_Complex_I,
    8.760078200432 +  11.222488908434*_Complex_I,
    5.722531558556 +   7.234622735459*_Complex_I,
   -5.247983376866 + -11.345081644681*_Complex_I,
    1.314257740811 +   1.904662960921*_Complex_I,
    0.730895747988 +   5.589496067590*_Complex_I,
    6.527229987789 + -10.176960210420*_Complex_I,
   -4.341510788445 +  -8.731233871509*_Complex_I,
    7.581071089827 +  -9.540336644811*_Complex_I,
    4.648868334483 +  -7.155035929172*_Complex_I,
   -2.205072254220 +  17.534621681153*_Complex_I,
    6.858512702532 +   3.813829755562*_Complex_I,
    0.193418696750 +  11.693363675036*_Complex_I,
    5.619907773283 +   4.653892039135*_Complex_I,
   -1.855582230893 +  10.861851324746*_Complex_I,
   14.627670681377 +  -2.489204973764*_Complex_I,
    0.605824410285 +  -7.016190132363*_Complex_I,
    2.624656390216 +   3.561441210498*_Complex_I,
    0.709206425704 +  12.728091932012*_Complex_I,
   -3.982794699993 +   6.878915353589*_Complex_I,
  -13.376734767433 +   1.691306437014*_Complex_I,
   -2.349794152830 +  -0.330132617385*_Complex_I,
   -3.726616620789 +  15.817788395019*_Complex_I,
  -16.729175354871 +  -8.409111133317*_Complex_I,
   17.882515293846 +  -3.208404044366*_Complex_I,
   -7.470918853421 +  18.877686110403*_Complex_I,
   12.668798353590 +  -9.060907565117*_Complex_I,
   -6.220564671186 +  -5.153664668923*_Complex_I,
   -1.712331740792 + -15.816196915449*_Complex_I,
  -11.816550492910 +  12.590312098504*_Complex_I,
    5.948638061621 +  10.638444837386*_Complex_I,
   13.008103746204 + -15.557670122101*_Complex_I,
  -13.266957624044 +   3.898836567164*_Complex_I,
   -1.862920665209 +  -4.724933699937*_Complex_I,
   -4.695828593392 +   9.661188336137*_Complex_I,
   -7.542434926702 +  17.373541879534*_Complex_I,
    1.008284652559 +   2.011360297386*_Complex_I,
   -6.854631802630 +  -4.014486905376*_Complex_I,
   -6.668218293484 +   4.636855650199*_Complex_I,
    3.172812378583 + -20.418734887614*_Complex_I,
  -23.330375903759 + -12.181015318516*_Complex_I,
    6.267118807644 +  17.748053544942*_Complex_I,
   -8.369069881119 +   5.704956182541*_Complex_I,
    9.266781179990 +  -5.431082220535*_Complex_I,
   -2.621123339590 +  -4.576508645033*_Complex_I,
    3.116382580437 + -13.991211520556*_Complex_I,
  -15.293666222030 +   1.998407515632*_Complex_I};

