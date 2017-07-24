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
// autotest fft data for 79-point transform
//

#include <complex.h>

#include "liquid.h"

liquid_float_complex fft_test_x79[] = {
   -0.831644933479 +  -1.369566252119*_Complex_I,
    1.382261515245 +   0.344632239578*_Complex_I,
    1.522173067917 +  -0.879128649493*_Complex_I,
    0.412263305825 +  -2.214373495146*_Complex_I,
    0.167471424272 +   2.442885876862*_Complex_I,
   -0.995700286447 +  -0.269798312873*_Complex_I,
   -0.495500240228 +  -1.483255164915*_Complex_I,
   -1.294110579031 +   0.198434791977*_Complex_I,
   -0.725558739350 +   0.113152102484*_Complex_I,
    0.245130536761 +  -1.776484046331*_Complex_I,
   -0.902695579029 +  -0.321701515101*_Complex_I,
    0.612573133829 +   0.706900606440*_Complex_I,
   -1.446805571584 +   0.549130825767*_Complex_I,
    0.779487733787 +   1.006717179605*_Complex_I,
    0.482652400616 +  -0.602577004101*_Complex_I,
   -0.075416135474 +   0.994234640494*_Complex_I,
    1.169794509155 +   0.142737162623*_Complex_I,
   -0.552532601786 +  -0.192607542361*_Complex_I,
    0.410837027020 +  -0.565889656334*_Complex_I,
    0.141957082162 +  -0.801461876260*_Complex_I,
   -0.593199921160 +   0.901175943982*_Complex_I,
   -1.360958657407 +  -0.483045804780*_Complex_I,
   -1.919982203277 +   0.057049812902*_Complex_I,
    0.597068489025 +   1.216028879537*_Complex_I,
    0.553702635589 +   1.236264938570*_Complex_I,
   -0.600595429992 +   0.147163421599*_Complex_I,
    0.311936436694 +  -0.216250614525*_Complex_I,
   -1.091501993588 +   0.833497783365*_Complex_I,
    1.744199597330 +   0.588786957660*_Complex_I,
    2.530575868723 +   1.039372684186*_Complex_I,
    1.028391846884 +  -0.023635041523*_Complex_I,
    1.289280692909 +  -1.032658504022*_Complex_I,
   -0.717633308140 +  -0.744729509226*_Complex_I,
    0.305920738055 +   0.657498377749*_Complex_I,
   -1.129964121827 +  -0.435663177627*_Complex_I,
    1.648005569065 +   1.195099617541*_Complex_I,
   -2.115562921407 +  -1.910525019001*_Complex_I,
   -0.596385890353 +   0.887009643025*_Complex_I,
   -0.230825994339 +  -0.188182502664*_Complex_I,
    0.263886383603 +  -0.439257543266*_Complex_I,
   -0.523070205646 +   0.777409974948*_Complex_I,
   -0.219529035132 +   1.383569408478*_Complex_I,
   -0.718591132998 +   0.789138773979*_Complex_I,
   -0.584598456206 +   0.201764886974*_Complex_I,
   -0.569756495022 +  -0.592160140902*_Complex_I,
    0.187040275696 +   1.071817729923*_Complex_I,
   -0.157385303066 +  -0.207843225364*_Complex_I,
    1.277595054999 +  -0.235819967829*_Complex_I,
   -0.096458535032 +   0.092010581965*_Complex_I,
    0.359513513761 +   0.945023449614*_Complex_I,
   -0.907097860111 +   0.645605162871*_Complex_I,
   -0.651303141773 +   2.145291744091*_Complex_I,
    0.114198590617 +   1.903139164821*_Complex_I,
   -0.079111313379 +   0.022610329502*_Complex_I,
   -1.170099271217 +  -0.560852156056*_Complex_I,
   -0.857261592064 +   0.764585655287*_Complex_I,
   -0.308274947188 +   0.793759490894*_Complex_I,
    1.075701520371 +   0.665603485423*_Complex_I,
    0.121769228873 +   1.080351294531*_Complex_I,
    1.775909597196 +  -0.152691005919*_Complex_I,
    1.592857837122 +   1.642268527260*_Complex_I,
    0.206041280093 +   0.680507676427*_Complex_I,
   -0.447718650910 +  -1.049968522775*_Complex_I,
   -1.571476809016 +   0.131194680122*_Complex_I,
    1.668956017050 +  -0.788549453555*_Complex_I,
   -1.464619492806 +  -0.514115875797*_Complex_I,
    2.085001980617 +   0.514847563050*_Complex_I,
    0.928930120111 +  -0.581073787447*_Complex_I,
    0.446239202479 +  -0.653366428964*_Complex_I,
    1.064861444804 +  -0.041135862801*_Complex_I,
    0.072500637635 +   1.082811081123*_Complex_I,
   -1.400912797632 +  -0.318643643314*_Complex_I,
   -0.475876438927 +   0.416837808588*_Complex_I,
   -0.066362697792 +   0.020225742927*_Complex_I,
   -0.153794040015 +  -0.251785474065*_Complex_I,
   -1.237542116335 +   0.809600386690*_Complex_I,
    0.871326964554 +   0.924351961256*_Complex_I,
   -2.389508044422 +  -0.601457844861*_Complex_I,
    0.080578131708 +   0.388813172800*_Complex_I};

liquid_float_complex fft_test_y79[] = {
   -2.198332092440 +  12.650658598176*_Complex_I,
   -6.456670989242 +  -7.479301674890*_Complex_I,
   -2.895336385229 +   1.221846928494*_Complex_I,
   -4.636342294176 +  -0.801909581371*_Complex_I,
   -9.731802903280 +  -5.232001275010*_Complex_I,
    6.761030360809 +  -1.721885218978*_Complex_I,
    1.867893673405 + -10.436764472711*_Complex_I,
    7.129857916226 + -15.261303660272*_Complex_I,
   16.581711031970 +   5.179082607705*_Complex_I,
  -16.126836936739 +  -5.300370279404*_Complex_I,
   -4.576577504775 + -12.699766318030*_Complex_I,
   -7.579093623452 + -12.405022376124*_Complex_I,
   -1.692330593182 +  -8.516631597504*_Complex_I,
   -6.195245930268 +   0.070273567822*_Complex_I,
    1.551185200774 +  -5.151973196311*_Complex_I,
   -7.892299216869 +  -6.606437030189*_Complex_I,
   11.038003489600 +   4.657211823028*_Complex_I,
    7.075974564323 +   0.545694748078*_Complex_I,
   -6.869510368707 +  -0.939533375646*_Complex_I,
  -12.801782277417 +   4.703619318878*_Complex_I,
    4.730103334639 +   3.588402018073*_Complex_I,
    4.302722751897 +   5.818086352910*_Complex_I,
    2.141745733069 +  -1.961941960610*_Complex_I,
    5.318048536295 +  -0.010643144676*_Complex_I,
   10.574791653730 +  -2.110839910741*_Complex_I,
   18.403982142892 +  -4.968829844315*_Complex_I,
   -4.861819678415 +   0.167673326078*_Complex_I,
   -2.630720570170 +   1.594403564449*_Complex_I,
    0.363441779769 + -10.436412333140*_Complex_I,
   -8.279198460723 +  -3.380426807459*_Complex_I,
   -0.740797623754 +  -2.814734090095*_Complex_I,
   -9.827753678018 + -12.010129525106*_Complex_I,
    0.873038175248 +  -1.031218712521*_Complex_I,
   -8.699339400800 +  12.933077680277*_Complex_I,
   -5.053719376427 +   3.839008815587*_Complex_I,
  -17.469957324379 +  -0.249103089343*_Complex_I,
    3.184401964192 +   3.862169536519*_Complex_I,
    0.438203015374 +  -2.050441604463*_Complex_I,
  -14.617902230891 +  13.404027008609*_Complex_I,
   -3.326663756629 +  -9.464457202630*_Complex_I,
  -16.780077393079 +   4.427043334783*_Complex_I,
    2.414049361911 + -12.349549334690*_Complex_I,
   -2.071827347449 +   0.131158553257*_Complex_I,
   12.619462722043 +   3.785353059626*_Complex_I,
    0.681152626465 +  -5.767839231705*_Complex_I,
   -2.536944134501 +  -4.990736350292*_Complex_I,
   -9.887559098728 + -30.445442814418*_Complex_I,
   -8.158210630371 +  -2.609637272072*_Complex_I,
   14.923059038703 +   2.059503206139*_Complex_I,
    4.682549931928 +  -0.864654149312*_Complex_I,
    3.308241623127 +  -8.932248210446*_Complex_I,
   -7.447372005399 + -15.848177608870*_Complex_I,
   11.470445857602 + -17.244634800179*_Complex_I,
   -0.352198189530 +  -5.465835457604*_Complex_I,
    0.595131131258 +   1.784167835328*_Complex_I,
   -4.958773866897 +   1.052005175981*_Complex_I,
   -8.549314756256 +  10.245571680581*_Complex_I,
  -13.074676867355 +  -9.163782974489*_Complex_I,
   -2.244945835090 +  13.220346166155*_Complex_I,
   -4.198374817495 +  10.065229182925*_Complex_I,
   -0.700355709960 +   6.827087899627*_Complex_I,
    2.412030908809 +  -6.042014368503*_Complex_I,
   -1.467215162979 +  16.669129234939*_Complex_I,
    1.755798753328 +  -6.540065639162*_Complex_I,
   -6.456991908144 +  -7.304947059496*_Complex_I,
   -2.375547326101 +  18.123374474356*_Complex_I,
    6.311057482521 +  -9.358027340793*_Complex_I,
    2.466570091641 +   5.305925828815*_Complex_I,
    0.001957161866 +  18.960020221647*_Complex_I,
   -3.859854792754 +  -4.745420470903*_Complex_I,
    2.984060727978 +  -4.759922601530*_Complex_I,
    4.314065539668 +  -4.099188676984*_Complex_I,
   -4.122177040779 +   6.664910801689*_Complex_I,
    4.892466468902 +  19.707013122151*_Complex_I,
   21.618605295806 + -12.301445853986*_Complex_I,
   -0.720795540227 +   3.447422417270*_Complex_I,
    6.265639354108 +  13.611595323686*_Complex_I,
  -11.081101178789 + -14.511845349920*_Complex_I,
    4.451917671114 + -12.130333484146*_Complex_I};

