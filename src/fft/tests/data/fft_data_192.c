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
// autotest fft data for 192-point transform
//

#include <complex.h>

#include "liquid.h"

liquid_float_complex fft_test_x192[] = {
   -0.570749076040 +   1.623496753738*_Complex_I,
   -0.801441214588 +  -0.237768079755*_Complex_I,
   -1.136144657269 +   0.367681411439*_Complex_I,
   -0.021881616373 +  -1.310767380444*_Complex_I,
   -1.897076967315 +  -0.151633764169*_Complex_I,
   -0.065089420065 +   0.179240807290*_Complex_I,
   -0.459561140285 +   0.186362705450*_Complex_I,
   -1.459184572831 +  -0.172507317719*_Complex_I,
    0.768770035801 +  -0.603405455907*_Complex_I,
   -0.445592790811 +  -0.545504111400*_Complex_I,
   -1.133095461256 +   0.347109313928*_Complex_I,
    0.680343842697 +   0.984380778227*_Complex_I,
    1.434274246060 +  -0.455280274247*_Complex_I,
    1.367719846389 +  -0.017753112833*_Complex_I,
   -1.036796157162 +   0.202926093122*_Complex_I,
   -0.608495290895 +   1.377505175242*_Complex_I,
    0.677352983170 +   0.522913747818*_Complex_I,
    0.829598919707 +  -0.238489026179*_Complex_I,
    1.658006740638 +   1.321959544651*_Complex_I,
   -1.813019197848 +  -1.379543844064*_Complex_I,
   -0.105360926209 +   0.770250719958*_Complex_I,
    0.950326938828 +  -0.839058539588*_Complex_I,
    1.158809729841 +  -0.647245275247*_Complex_I,
   -0.360439558788 +  -0.056522073112*_Complex_I,
   -0.729658576111 +  -0.230389217591*_Complex_I,
   -0.147264114233 +  -0.844995936147*_Complex_I,
    3.006061814772 +   0.324561093094*_Complex_I,
    0.421672171136 +  -1.045335631843*_Complex_I,
    1.450421276223 +  -1.809661507608*_Complex_I,
    0.112589736618 +  -0.680553655537*_Complex_I,
   -0.962866997971 +   0.051225992580*_Complex_I,
   -0.069473575656 +   0.412572221634*_Complex_I,
    0.807441882459 +  -0.390366883673*_Complex_I,
    0.494922478167 +   0.666273714397*_Complex_I,
    0.534063543949 +   0.216473899855*_Complex_I,
    0.115686515954 +  -1.150016410968*_Complex_I,
   -0.911950154175 +  -1.906708901788*_Complex_I,
    0.035013270272 +   1.560677880077*_Complex_I,
   -0.689521651706 +  -0.963904151064*_Complex_I,
   -1.140202975221 +  -0.076069898430*_Complex_I,
   -0.246077937761 +   0.616853881528*_Complex_I,
   -0.251792408901 +  -0.385289165959*_Complex_I,
    0.144732608298 +  -0.544232656456*_Complex_I,
    0.716079834835 +   0.154716467884*_Complex_I,
   -0.454600091317 +  -0.778823717821*_Complex_I,
   -0.004009391933 +   0.239803231190*_Complex_I,
    0.128608781578 +   0.252750485610*_Complex_I,
   -0.104121384913 +  -1.189000295448*_Complex_I,
    0.242846644961 +   0.081301007736*_Complex_I,
    1.450965500668 +   0.361778385840*_Complex_I,
   -0.190106534680 +   0.071804478293*_Complex_I,
    0.420793349874 +   1.491145034929*_Complex_I,
    2.460108883286 +   0.757779280601*_Complex_I,
   -0.825692579645 +  -0.596573882891*_Complex_I,
    0.671589132843 +   1.011087599399*_Complex_I,
    1.284648906257 +  -0.045814861627*_Complex_I,
   -0.760224555847 +  -0.722324468953*_Complex_I,
   -1.322063665211 +  -2.308468943382*_Complex_I,
    2.293407378555 +   0.010203054084*_Complex_I,
    0.055649061121 +  -2.002674185757*_Complex_I,
   -0.282775998354 +  -1.935193634195*_Complex_I,
    1.737107472308 +  -1.107578165456*_Complex_I,
   -0.235741548678 +  -0.486998315145*_Complex_I,
   -0.270131100153 +  -2.340452003512*_Complex_I,
   -1.145976320980 +   1.671478612533*_Complex_I,
    1.046314822557 +   0.182117686556*_Complex_I,
   -0.745497599782 +  -0.723373842151*_Complex_I,
   -0.511430521736 +  -0.669552224448*_Complex_I,
    0.619398807961 +  -0.051926233859*_Complex_I,
    0.650768664429 +  -0.054337533084*_Complex_I,
   -0.377066273366 +   0.748578490695*_Complex_I,
    0.868445500849 +  -1.916678793529*_Complex_I,
   -0.745634363305 +   2.968322096526*_Complex_I,
    1.601642204548 +  -1.815842464572*_Complex_I,
   -0.110280900762 +  -0.375012568050*_Complex_I,
    1.082989689805 +   0.615940836645*_Complex_I,
    0.285506402216 +   0.273198983697*_Complex_I,
    0.277214797147 +   1.771337438831*_Complex_I,
    0.165028606876 +  -0.704451808040*_Complex_I,
    0.317894159247 +   0.492665087928*_Complex_I,
    0.601574563612 +  -0.904521376193*_Complex_I,
   -0.642798244158 +   0.327271328047*_Complex_I,
    0.011482342139 +  -0.787115819239*_Complex_I,
    0.244096373806 +   0.152569770967*_Complex_I,
    0.178980665283 +   0.813856965670*_Complex_I,
    1.492787787643 +  -0.413137630323*_Complex_I,
   -1.122949408956 +  -0.730572761342*_Complex_I,
    0.096736426284 +  -0.623125567869*_Complex_I,
   -0.054054998356 +   0.102181208006*_Complex_I,
    0.016144101863 +  -0.139709667178*_Complex_I,
    1.323423360215 +  -1.218385808067*_Complex_I,
    1.225801036168 +   1.825795241395*_Complex_I,
    1.773877495557 +   0.364293281834*_Complex_I,
   -1.266134039437 +   0.099487732018*_Complex_I,
   -0.417581296163 +   0.343715046363*_Complex_I,
    0.505757022167 +  -0.500849213570*_Complex_I,
    0.968334906502 +  -0.526257684744*_Complex_I,
    0.333143774360 +   0.396107354791*_Complex_I,
   -0.506358896777 +  -0.087644984012*_Complex_I,
    1.324525846569 +   1.494077333636*_Complex_I,
   -0.951951460363 +   0.994211347018*_Complex_I,
   -2.692462733023 +  -0.697601652243*_Complex_I,
   -1.072637853655 +   1.879429345687*_Complex_I,
   -0.193163794476 +   1.344807479696*_Complex_I,
   -0.036468538711 +  -2.246890819337*_Complex_I,
    0.123890932473 +  -1.171359056597*_Complex_I,
    1.614167761632 +  -0.084861961160*_Complex_I,
    0.813475153805 +  -1.363244160675*_Complex_I,
   -0.751043379055 +  -0.001003534113*_Complex_I,
   -1.127244933655 +   0.033479567244*_Complex_I,
    0.120947403072 +   0.172712059551*_Complex_I,
   -0.650772252959 +   1.321513948454*_Complex_I,
    1.305164416475 +  -0.787832375788*_Complex_I,
   -0.312608725354 +  -0.233463073219*_Complex_I,
   -0.754485246213 +  -0.132782409884*_Complex_I,
    1.522953329225 +   0.109222954313*_Complex_I,
   -0.495952414190 +   0.544687157445*_Complex_I,
    0.506640354547 +  -1.676292292327*_Complex_I,
    0.495984603346 +   0.705582611126*_Complex_I,
    0.555362258234 +   1.175515543993*_Complex_I,
   -1.380515094250 +   0.427692852149*_Complex_I,
    0.003538138035 +   1.425908489255*_Complex_I,
    1.062943493718 +   1.079328766594*_Complex_I,
    0.035769210794 +   0.546944179639*_Complex_I,
   -1.009393498146 +  -0.836699998466*_Complex_I,
   -1.299667858035 +  -1.876603335383*_Complex_I,
    1.400213634255 +  -1.094331065468*_Complex_I,
   -0.978532602360 +  -1.133768146514*_Complex_I,
   -0.126022453004 +  -0.548218141207*_Complex_I,
   -0.459386774097 +  -1.142543752432*_Complex_I,
   -0.634282978000 +   0.401478043588*_Complex_I,
    0.536619631169 +  -0.637851111890*_Complex_I,
   -2.177417556650 +  -0.582755642600*_Complex_I,
    1.956859485192 +   0.756502126757*_Complex_I,
   -1.033248608338 +   0.083674820018*_Complex_I,
    0.361227297522 +   0.246987978580*_Complex_I,
    0.200321461901 +   0.997822511718*_Complex_I,
   -1.130355402825 +  -0.097176654080*_Complex_I,
    1.384768698791 +  -0.772817911874*_Complex_I,
    0.926525539860 +   0.145277765291*_Complex_I,
   -0.540081956252 +   0.372734113022*_Complex_I,
    0.327046375183 +   1.452638689757*_Complex_I,
   -0.402162597503 +  -0.571759031309*_Complex_I,
    1.213886497238 +   0.862378057918*_Complex_I,
   -0.024799349445 +  -0.640880433466*_Complex_I,
    0.605895117723 +   1.040856615204*_Complex_I,
    0.875424648817 +  -1.747168830682*_Complex_I,
    1.792252094005 +   1.449436965826*_Complex_I,
   -0.058686051876 +   0.024079540685*_Complex_I,
   -1.197793455172 +   0.076528126740*_Complex_I,
   -1.451475019825 +   2.506331331519*_Complex_I,
    0.115177207244 +   0.581887944455*_Complex_I,
   -0.894760295667 +   0.941285480086*_Complex_I,
    0.167847546335 +   0.113650691315*_Complex_I,
    0.580138910850 +   1.482400230136*_Complex_I,
   -0.638693285492 +   0.706252192544*_Complex_I,
   -0.679198255352 +  -0.864392741247*_Complex_I,
    0.309224287292 +   0.802306837308*_Complex_I,
    0.089371278986 +  -1.059876744659*_Complex_I,
    1.352756771804 +  -0.303374747952*_Complex_I,
    0.142478845463 +   1.679379378038*_Complex_I,
   -0.307104681980 +  -1.525241010787*_Complex_I,
    0.947136026136 +  -0.176290475474*_Complex_I,
   -0.191221819400 +   0.872369793925*_Complex_I,
   -0.694209420142 +   0.251537117440*_Complex_I,
    1.193931121456 +   0.364438121717*_Complex_I,
    0.364530798418 +   0.953151437736*_Complex_I,
   -2.204969193002 +   0.591100538765*_Complex_I,
    1.152638435048 +   0.423855010290*_Complex_I,
   -0.190087319373 +  -0.236280077579*_Complex_I,
   -0.959025701481 +  -1.046604614844*_Complex_I,
   -0.059036610250 +   0.757806508323*_Complex_I,
    1.193828263334 +   0.991816149312*_Complex_I,
   -0.644717162130 +   0.685130498159*_Complex_I,
    0.386929662859 +   0.246269623980*_Complex_I,
    0.747830541986 +  -0.853860497506*_Complex_I,
    0.563215051840 +  -1.553462734011*_Complex_I,
   -0.411175328612 +   0.338710437150*_Complex_I,
   -1.017739241999 +  -0.234632452129*_Complex_I,
   -2.270318833952 +   0.624001888473*_Complex_I,
    0.530109233459 +  -3.021054334701*_Complex_I,
   -0.733212401282 +   0.337380481817*_Complex_I,
    0.686400469100 +   1.434988023046*_Complex_I,
   -1.537557685024 +   0.266727612837*_Complex_I,
    2.377907246279 +  -0.647849557308*_Complex_I,
    1.588677766399 +  -0.611004042543*_Complex_I,
    0.547569751159 +  -0.942144527428*_Complex_I,
   -0.489770632777 +  -1.190329237689*_Complex_I,
   -0.588811442748 +   1.025069940138*_Complex_I,
   -0.380574882230 +  -1.193424193517*_Complex_I,
   -2.719012193329 +  -0.412270955448*_Complex_I,
    1.447794971270 +   0.160429136252*_Complex_I};

liquid_float_complex fft_test_y192[] = {
   11.637079481157 +  -8.771861743960*_Complex_I,
  -26.395324212554 + -12.523034709229*_Complex_I,
  -13.199274560613 +   4.197128353434*_Complex_I,
    2.770319150971 + -22.367461652042*_Complex_I,
    0.642915300037 +   6.363791329048*_Complex_I,
   -1.448465724858 +  11.100404880196*_Complex_I,
   -6.231101627932 +  -0.711426629573*_Complex_I,
    6.572370237538 +  -9.008077010635*_Complex_I,
    7.543400860435 +  28.757508480923*_Complex_I,
  -17.693058117854 + -14.497870123296*_Complex_I,
  -18.350699894294 +  19.700720310742*_Complex_I,
  -22.388250522169 +   7.667843634853*_Complex_I,
   14.220360999832 +  11.088627215515*_Complex_I,
   14.686986747880 +   4.769183572180*_Complex_I,
  -16.224161466491 +  18.657410968166*_Complex_I,
   -5.561225898629 +   0.059313803898*_Complex_I,
   13.221567254519 +  -8.899219750894*_Complex_I,
  -20.776362788232 + -12.895144971233*_Complex_I,
   16.702761314442 +  -1.206621684382*_Complex_I,
    1.152218624052 +  10.429943215921*_Complex_I,
    1.406407090905 + -25.487932735618*_Complex_I,
    5.058858691359 +  14.007031493308*_Complex_I,
    3.915927218401 +  -3.143885706619*_Complex_I,
    0.511679691204 +   7.640849778701*_Complex_I,
   -9.519895102966 + -18.415287292132*_Complex_I,
    2.876304518596 +  20.969442045845*_Complex_I,
    7.342107433201 + -12.347059316472*_Complex_I,
   -0.618433952859 +  25.041216941337*_Complex_I,
    0.580421597502 + -14.237985250543*_Complex_I,
    8.771852508251 +   0.733917062704*_Complex_I,
    3.782207555074 +  16.248301038041*_Complex_I,
   -8.524579539709 +   9.295327847229*_Complex_I,
   -4.768100090762 + -10.116200145201*_Complex_I,
    5.053774488844 +  -2.415715341537*_Complex_I,
   14.309532012096 +  -0.424419688667*_Complex_I,
   12.756379146573 +   5.032080306349*_Complex_I,
   34.330424118154 +  10.117580842288*_Complex_I,
   -5.753681073486 +  -1.411149381440*_Complex_I,
    1.264859359146 +   4.528836925970*_Complex_I,
   -2.586666114372 +  13.851391335293*_Complex_I,
   -1.713098457415 +  20.890928009489*_Complex_I,
  -13.434363693601 +  24.394077211392*_Complex_I,
  -10.022671324009 +  17.664609245348*_Complex_I,
   -1.725934813257 +   1.891913667017*_Complex_I,
    9.110355361482 +  -0.179266402064*_Complex_I,
   -6.803970453739 +   1.078079859350*_Complex_I,
   15.245357404619 + -16.002907380848*_Complex_I,
   18.798658922559 +  -8.909897678113*_Complex_I,
   -9.340116247154 +  -1.125951004947*_Complex_I,
    3.688509570515 + -32.689986273951*_Complex_I,
    0.407888797988 +  12.869443175340*_Complex_I,
   11.996274048535 +  -2.662751606922*_Complex_I,
    7.018158515976 +  28.262862824837*_Complex_I,
    7.922722654625 +  14.250007388651*_Complex_I,
    2.975237590008 + -10.603333565612*_Complex_I,
    0.455653895495 +   1.453939650391*_Complex_I,
   -9.066906825176 +  25.796872875146*_Complex_I,
   -0.918183225634 + -10.468224002255*_Complex_I,
   -0.142851335912 +  22.780663054656*_Complex_I,
    2.282086213671 +  29.891813625626*_Complex_I,
    7.221536839959 +   7.770574674805*_Complex_I,
  -37.398067728397 +  -1.105557754066*_Complex_I,
  -17.142633714292 +   6.118620955162*_Complex_I,
   -6.477664567284 +  -7.690396365101*_Complex_I,
   16.982767357512 + -18.131798098394*_Complex_I,
    1.080785945291 +  16.906857138491*_Complex_I,
    0.599451587747 +  26.081775902564*_Complex_I,
   -0.978816302785 +   5.925677319285*_Complex_I,
   10.210787997091 +  -9.910196007357*_Complex_I,
  -19.147402098057 +  -2.498686289732*_Complex_I,
   21.966256137493 + -22.859882129197*_Complex_I,
  -15.265643040019 +  -4.426471861527*_Complex_I,
   12.929479693820 +  22.330642231752*_Complex_I,
    2.740221347659 +  24.061774049828*_Complex_I,
  -14.562401185320 + -19.628678597306*_Complex_I,
   20.997689192967 +   5.792733814018*_Complex_I,
    5.119546713501 +   3.964059886246*_Complex_I,
   -1.928221405609 +  -6.512384434671*_Complex_I,
   -2.156293329162 +   7.753329775994*_Complex_I,
   -3.573953149890 +  -9.239991326571*_Complex_I,
  -13.630949945730 +  -8.106005746278*_Complex_I,
   12.825262070728 +  -4.660266138913*_Complex_I,
   -1.891349427851 +   9.400617516536*_Complex_I,
  -18.076150879307 +  22.373408216149*_Complex_I,
  -15.956268983268 + -21.975317374526*_Complex_I,
    0.164201332756 +  24.388112510894*_Complex_I,
   -4.597078387934 +   7.039522987551*_Complex_I,
  -12.697120797033 +   9.467372419639*_Complex_I,
    0.666493946055 +  16.398714904237*_Complex_I,
   14.501434995333 +  -1.201151824518*_Complex_I,
   -5.674281705139 +   5.888174371162*_Complex_I,
  -20.163201241601 +  -1.818438322864*_Complex_I,
  -30.219423076971 + -13.719313314399*_Complex_I,
  -13.990403694826 +   2.714807784298*_Complex_I,
   11.250768761115 +   3.628822569150*_Complex_I,
   -0.733728572049 +   2.948828784375*_Complex_I,
   -3.826671819253 +   4.571602216696*_Complex_I,
   23.522991447544 +  -2.821207413423*_Complex_I,
    5.182638636295 +  -2.280239804828*_Complex_I,
  -14.978530389737 +  34.007674915178*_Complex_I,
   12.067946114665 +  -7.231592873495*_Complex_I,
  -18.036308190888 +  -1.167944458385*_Complex_I,
  -14.570445828147 +  33.703221498009*_Complex_I,
  -14.355007896334 +   8.624163479423*_Complex_I,
  -12.522417307559 +   2.964999959389*_Complex_I,
    1.285831266251 +  17.486913574970*_Complex_I,
  -18.400444537057 +  10.275105944079*_Complex_I,
  -10.798107010917 +  -9.398928074828*_Complex_I,
   -3.735870933695 +  -3.928195596167*_Complex_I,
  -28.347786532915 +  -4.087804201121*_Complex_I,
   22.446246894740 +  -3.314141727023*_Complex_I,
  -12.595391479166 + -20.525839403734*_Complex_I,
  -28.712938572605 +  -6.003936755853*_Complex_I,
   28.019514492138 + -30.082449455145*_Complex_I,
  -11.209466775921 +  26.443062244454*_Complex_I,
    1.207579305184 +  15.519647647646*_Complex_I,
   -4.037012632720 +  -7.499501325179*_Complex_I,
   10.741743378262 +  10.026834979238*_Complex_I,
   18.870849049565 +  11.960677218574*_Complex_I,
    5.853418449079 +  -7.462260554939*_Complex_I,
    4.335224360674 +   3.129860437677*_Complex_I,
   12.605242126520 +   4.554248036599*_Complex_I,
  -16.969702130369 + -29.534520407430*_Complex_I,
   -6.120705955107 +  -4.482591730189*_Complex_I,
  -12.926535006552 +  -1.874171675105*_Complex_I,
   14.665201057893 +  -1.128035925962*_Complex_I,
   24.051538767781 + -15.958257482748*_Complex_I,
   19.820057240718 + -22.152759047970*_Complex_I,
  -24.058042894391 +  13.729789221856*_Complex_I,
   19.182753493650 +  -1.045899761274*_Complex_I,
    7.427878004795 + -14.645722900400*_Complex_I,
    0.354829774210 + -28.351378771571*_Complex_I,
   -0.079617808212 +   3.973765307882*_Complex_I,
   -0.956500599215 + -15.489797280577*_Complex_I,
    0.762491009085 + -25.453122941666*_Complex_I,
  -11.840853996701 +  12.962212817110*_Complex_I,
   35.495866538641 +   9.686565151838*_Complex_I,
   -0.038469688004 +   4.392742866312*_Complex_I,
  -19.123338054473 +   2.775599118392*_Complex_I,
  -11.096274610813 +   9.852185716742*_Complex_I,
   15.297635548840 + -11.871123303123*_Complex_I,
  -20.554975892285 +   3.876667437210*_Complex_I,
   35.623881203832 +  -7.111604836972*_Complex_I,
   -6.116783490647 +   6.858127980009*_Complex_I,
    7.214111046309 +  -6.503534651808*_Complex_I,
   13.222866709925 +  14.222914198476*_Complex_I,
    7.177684846410 +   4.449199979110*_Complex_I,
    8.704887882540 +  13.440615520893*_Complex_I,
    3.880333256992 + -21.379125009121*_Complex_I,
    7.048477459126 +  -5.798390953651*_Complex_I,
   -2.887754540526 +   0.926387706089*_Complex_I,
   -4.738508647891 +   1.592531834771*_Complex_I,
  -29.140442148645 +   1.326408413819*_Complex_I,
  -17.686809708344 +   9.306299214767*_Complex_I,
  -11.287941537086 +  18.573964519700*_Complex_I,
  -14.430331062949 +  20.500648002089*_Complex_I,
    5.833514963456 +  -0.787459203485*_Complex_I,
    6.996874871331 +   4.372973087460*_Complex_I,
   10.606258817386 + -15.371196814824*_Complex_I,
    7.173199494850 +  -3.739254103514*_Complex_I,
    0.650868123207 +   1.129252104053*_Complex_I,
    2.934818232673 + -15.452697731691*_Complex_I,
    5.965230433753 +  25.063178506013*_Complex_I,
   23.622843424435 +  -9.618416072703*_Complex_I,
    7.156185469219 +   3.585963809070*_Complex_I,
   -5.732158086481 + -13.452361329340*_Complex_I,
   -9.590479206366 +  -9.053169128213*_Complex_I,
    2.000269872570 +  -9.513605072784*_Complex_I,
   11.315627899677 +  22.817996942644*_Complex_I,
   12.413894814140 +  13.626175038709*_Complex_I,
   29.172874942325 +   1.484706508481*_Complex_I,
    0.015766090270 +   4.368571218197*_Complex_I,
   15.563774953007 +   4.894512943893*_Complex_I,
  -11.842691536265 +  35.592965762670*_Complex_I,
  -12.994473369362 +   2.698888313132*_Complex_I,
    8.754669228150 +  11.235443005907*_Complex_I,
  -10.328265749913 +   2.323163803747*_Complex_I,
  -13.439572075998 +  13.889640848681*_Complex_I,
   -3.977518922953 +   0.690204512797*_Complex_I,
  -10.800653995412 +  -6.554357023667*_Complex_I,
  -11.525124988298 + -20.660565069742*_Complex_I,
   19.162721444200 +   9.408214211732*_Complex_I,
   -0.088361438150 +  -0.665881998403*_Complex_I,
  -18.557501816859 + -12.065202621962*_Complex_I,
    8.534483256201 +   9.270859667546*_Complex_I,
   10.095451307996 + -11.066538969502*_Complex_I,
  -21.844145113512 + -28.094981179422*_Complex_I,
  -19.202996015641 +   7.054377546211*_Complex_I,
  -15.529186020599 +   7.476299951687*_Complex_I,
  -18.157842430552 +  -5.316780213393*_Complex_I,
   -5.293208686973 +  -3.663831551237*_Complex_I,
   10.661425533836 +  11.243445036012*_Complex_I};

