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
// autotest fft data for 317-point transform
//

#include <complex.h>

#include "liquid.h"

liquid_float_complex fft_test_x317[] = {
    0.554097588235 +   0.674837317416*_Complex_I,
    0.530737753317 +  -0.079409691311*_Complex_I,
    0.132225792019 +  -2.683942671459*_Complex_I,
   -0.433831796385 +  -0.644436889896*_Complex_I,
    0.531193579547 +  -0.234132120154*_Complex_I,
    0.372970050685 +   0.234590738463*_Complex_I,
    0.469189910453 +   1.347839137560*_Complex_I,
    1.407357556116 +  -0.732654574714*_Complex_I,
   -0.892419998715 +   1.232301421325*_Complex_I,
   -2.097695896055 +   0.374300022370*_Complex_I,
    0.841647143326 +   1.509643189344*_Complex_I,
    2.033126977287 +  -0.280107016121*_Complex_I,
    0.436605233661 +  -0.542582266432*_Complex_I,
   -0.564143476179 +  -1.316474379263*_Complex_I,
    1.205813790177 +   0.314460438693*_Complex_I,
   -0.290370012573 +  -0.142559201647*_Complex_I,
    0.389754456864 +   0.846145131479*_Complex_I,
    1.072733277575 +   0.217097105341*_Complex_I,
   -0.530701360675 +   0.621669741612*_Complex_I,
   -0.747465971012 +  -1.217065085995*_Complex_I,
    0.285811246522 +  -0.575506757253*_Complex_I,
    1.731868270921 +  -1.695420723201*_Complex_I,
    2.062026927380 +  -0.467312976619*_Complex_I,
   -0.238522083883 +   0.733481847031*_Complex_I,
    0.962605683108 +  -0.932743731262*_Complex_I,
   -0.244109153061 +   0.048909057472*_Complex_I,
   -0.521908701077 +  -0.335290348825*_Complex_I,
   -0.224377634061 +   0.812682493510*_Complex_I,
   -0.808168093175 +  -2.606743537297*_Complex_I,
   -0.383229234780 +   0.204386340920*_Complex_I,
   -1.604057984500 +   0.282386325516*_Complex_I,
    1.123689375175 +   0.294576201783*_Complex_I,
    1.045506847212 +   0.558518419936*_Complex_I,
    0.444874000589 +   0.832776075751*_Complex_I,
    0.381774427538 +   0.783400026120*_Complex_I,
    0.591805517099 +   0.899143948342*_Complex_I,
    0.995508244414 +  -0.835798382940*_Complex_I,
   -2.173146523457 +   0.954135191444*_Complex_I,
    2.429109028004 +   0.404032043829*_Complex_I,
   -0.642851155627 +  -0.253033059825*_Complex_I,
   -0.960201285491 +  -0.932974674369*_Complex_I,
    0.052794955676 +   0.070183835184*_Complex_I,
   -0.122786042744 +   0.417387287207*_Complex_I,
    0.200201640049 +  -0.342343750496*_Complex_I,
    0.152601120150 +   0.746938165561*_Complex_I,
   -0.720582709452 +   1.464296507060*_Complex_I,
    0.286243449065 +  -0.356130710199*_Complex_I,
   -0.855441109470 +   0.260173089323*_Complex_I,
    1.241960323905 +  -1.220424835146*_Complex_I,
    0.410436718259 +  -0.915784426815*_Complex_I,
   -0.608754986761 +   1.196797063902*_Complex_I,
    0.842595164718 +   1.776375320466*_Complex_I,
    0.461313891161 +   0.132552548247*_Complex_I,
   -1.038934516657 +  -0.503009712801*_Complex_I,
   -0.174516309894 +  -1.414963943166*_Complex_I,
   -1.312041533200 +   0.350893580013*_Complex_I,
    0.208956667743 +  -0.958786287939*_Complex_I,
    0.803660420194 +   1.011070131954*_Complex_I,
    2.165017913712 +  -1.468093310734*_Complex_I,
    1.129645943719 +   0.537365498647*_Complex_I,
   -1.595984272966 +  -0.203122161061*_Complex_I,
    1.001865195124 +  -1.388137201018*_Complex_I,
    0.824523455412 +   0.399895307714*_Complex_I,
    1.390174301291 +   2.631574565038*_Complex_I,
   -0.950205283612 +  -1.131255194597*_Complex_I,
    1.905487211032 +  -0.077934597969*_Complex_I,
    1.003876696894 +  -0.060334922974*_Complex_I,
   -0.739566795906 +  -0.125966238551*_Complex_I,
    0.638862295532 +   0.312440320520*_Complex_I,
    0.812688518156 +  -0.687832384174*_Complex_I,
   -0.247460071939 +   1.506637100983*_Complex_I,
    1.119835012306 +   1.284530437377*_Complex_I,
    0.514075655596 +   0.315432575412*_Complex_I,
   -0.556581507109 +  -2.240098527759*_Complex_I,
    0.249592136667 +   0.505876736625*_Complex_I,
    0.138808728752 +  -0.362938299441*_Complex_I,
   -1.295018476090 +  -0.498162870507*_Complex_I,
    0.633165144610 +  -1.395172629954*_Complex_I,
    0.932960550573 +  -0.237180627122*_Complex_I,
    1.661895463725 +   0.690503082347*_Complex_I,
    0.333824445072 +  -1.788741666587*_Complex_I,
    0.489887999458 +  -0.706548054495*_Complex_I,
   -0.548551848905 +   0.898884888429*_Complex_I,
   -0.608101416118 +  -0.201679435156*_Complex_I,
    0.890886957534 +  -0.480205878554*_Complex_I,
   -0.000052987921 +   0.753051843488*_Complex_I,
   -2.008688335321 +  -0.531405355010*_Complex_I,
    0.178224821311 +   0.093166214057*_Complex_I,
   -1.028365245165 +  -0.852475963885*_Complex_I,
    0.686303677542 +   1.543109809415*_Complex_I,
    1.711982713732 +  -0.058899888612*_Complex_I,
    1.120881384941 +   0.023773370634*_Complex_I,
    0.452547007139 +  -0.345550830853*_Complex_I,
    0.851642145828 +   0.918449585078*_Complex_I,
    1.354411836149 +   0.053840956523*_Complex_I,
    0.186505302140 +   0.455350659118*_Complex_I,
    1.178867803924 +   0.561242592990*_Complex_I,
   -0.867274007830 +   0.778369347385*_Complex_I,
   -0.763210306046 +  -0.056553236256*_Complex_I,
   -0.925493602469 +   1.802123360882*_Complex_I,
   -0.381880717193 +   0.836790955039*_Complex_I,
    0.740584915503 +   0.410451383495*_Complex_I,
   -1.739773756173 +  -0.008392421431*_Complex_I,
   -0.927812449353 +   0.225621894111*_Complex_I,
    0.291685537968 +  -0.631710150727*_Complex_I,
    1.044752342554 +  -0.921336822198*_Complex_I,
    0.379926674636 +   0.104269280376*_Complex_I,
   -0.747794397492 +  -1.586409810217*_Complex_I,
   -0.707471806222 +  -3.451349626151*_Complex_I,
   -0.610242217287 +  -0.050520690817*_Complex_I,
   -1.141609802996 +  -0.450890109498*_Complex_I,
   -0.110600652376 +   0.711135784835*_Complex_I,
   -2.154140310955 +  -0.464833145767*_Complex_I,
    2.215673027150 +   0.378163057373*_Complex_I,
   -0.654346983910 +  -0.446467309237*_Complex_I,
    0.054883600089 +  -0.699447750344*_Complex_I,
    0.806739839269 +   0.085857123252*_Complex_I,
   -1.606523541279 +   0.816575059374*_Complex_I,
    0.592874861350 +  -0.160053556472*_Complex_I,
   -0.487687814535 +   2.062004006591*_Complex_I,
   -0.494854876646 +   1.222171460716*_Complex_I,
    1.143598578272 +  -0.256116050124*_Complex_I,
    2.400451006261 +  -0.615247709498*_Complex_I,
    1.794972603823 +   0.061326347413*_Complex_I,
   -1.785033202582 +   1.285030637182*_Complex_I,
    0.952408789671 +  -0.061111017884*_Complex_I,
    0.045375503932 +  -0.337506966204*_Complex_I,
    0.098933506757 +   1.552870310423*_Complex_I,
   -0.114562876521 +   0.289943289341*_Complex_I,
   -0.283731751338 +  -0.946113439136*_Complex_I,
    0.461130821204 +   0.048895395259*_Complex_I,
   -1.174095369155 +   0.023986190137*_Complex_I,
   -0.098711272023 +   0.155133236840*_Complex_I,
    1.644296831488 +  -0.763890180558*_Complex_I,
   -0.598417564337 +  -0.286264760137*_Complex_I,
    0.526726895394 +   1.073518895905*_Complex_I,
   -0.853228628205 +  -1.282488324989*_Complex_I,
   -1.020706122357 +   0.248901790873*_Complex_I,
    1.313386656293 +   1.883626375861*_Complex_I,
   -0.596968080006 +   1.198886796626*_Complex_I,
   -1.090527229732 +   1.322486318068*_Complex_I,
    0.055643681240 +  -1.476648993263*_Complex_I,
   -0.134166277120 +   0.538780165850*_Complex_I,
   -0.394194728658 +   0.287017836253*_Complex_I,
    0.451499019863 +   0.196444291722*_Complex_I,
   -1.227900659262 +   0.066951464777*_Complex_I,
    0.281655958102 +   0.477082252845*_Complex_I,
    1.584578121348 +   2.263167026855*_Complex_I,
   -0.337702889133 +  -1.675522983729*_Complex_I,
   -1.262293072370 +   0.295093464675*_Complex_I,
   -1.466903736895 +   0.492057686013*_Complex_I,
   -1.485463891249 +   1.082857775981*_Complex_I,
   -0.275569696975 +  -0.635382067043*_Complex_I,
    1.705596337300 +   2.104558859516*_Complex_I,
    0.704228406430 +   1.560694307633*_Complex_I,
    0.940747890984 +   0.080075753674*_Complex_I,
   -0.671195049979 +  -0.305225546505*_Complex_I,
    1.351213152915 +  -0.159424965469*_Complex_I,
   -0.168781019368 +   0.642571757925*_Complex_I,
   -0.431378015911 +  -0.017150397606*_Complex_I,
    0.084141441624 +   0.021065037620*_Complex_I,
   -0.464340239256 +  -0.192995496761*_Complex_I,
   -1.333718595841 +  -0.017151207176*_Complex_I,
    1.699781888517 +   1.611185583580*_Complex_I,
   -0.413570253776 +  -0.044257707528*_Complex_I,
    2.258631378215 +  -0.166004542094*_Complex_I,
   -0.465389665786 +   0.871749883624*_Complex_I,
    1.029189363291 +   0.713498194652*_Complex_I,
   -0.094915760832 +  -1.625030317385*_Complex_I,
   -1.232066038521 +  -0.607872994844*_Complex_I,
    1.502005331699 +  -0.020525271340*_Complex_I,
   -0.683321223012 +  -0.293225147764*_Complex_I,
   -0.907670613167 +  -0.107969897144*_Complex_I,
    0.462429724200 +  -0.775625444256*_Complex_I,
   -1.205101490966 +  -0.132384994859*_Complex_I,
   -1.179628062446 +   2.189754291494*_Complex_I,
   -0.631509862810 +   1.222985676196*_Complex_I,
    0.789563515020 +   0.698677701769*_Complex_I,
    1.687609752565 +   0.400827580780*_Complex_I,
   -0.645610608306 +  -0.014606261491*_Complex_I,
   -1.361740989948 +  -0.117827247124*_Complex_I,
    1.314229682964 +  -0.603800894199*_Complex_I,
   -1.956380418062 +   1.043229034913*_Complex_I,
   -0.801537986631 +   2.532651178906*_Complex_I,
   -2.386565797106 +  -1.098115563132*_Complex_I,
    0.220407348326 +  -1.279188578233*_Complex_I,
   -0.692180379497 +   0.560515689944*_Complex_I,
   -0.356604504521 +   0.793303202093*_Complex_I,
   -0.159496968171 +  -1.294766371488*_Complex_I,
    1.198119217621 +  -1.994862046372*_Complex_I,
   -0.568527073111 +   0.401071277388*_Complex_I,
    2.987226058138 +  -0.073884662975*_Complex_I,
    1.799586418676 +  -0.574490253290*_Complex_I,
    0.011347684988 +  -0.745307885407*_Complex_I,
    0.729683796427 +  -1.060721735894*_Complex_I,
   -1.966760785708 +  -0.605669511192*_Complex_I,
    1.142741187156 +   0.019297308388*_Complex_I,
   -1.561621247893 +  -0.095007722087*_Complex_I,
    0.336572557763 +  -0.651058510390*_Complex_I,
    0.040766936719 +   1.217219328749*_Complex_I,
    0.200903662048 +   0.393373958513*_Complex_I,
   -1.236464108144 +   0.541280738924*_Complex_I,
    0.117909377974 +  -0.607773139351*_Complex_I,
    0.379616825601 +  -0.643186918605*_Complex_I,
    0.643537081891 +   0.275436892658*_Complex_I,
    0.225873382688 +  -0.158194256053*_Complex_I,
    0.053176096756 +   1.458472268368*_Complex_I,
    1.414145044178 +  -0.733638770750*_Complex_I,
    1.347289531912 +   0.169321860659*_Complex_I,
   -0.840384203303 +   0.763005504852*_Complex_I,
    1.214072735988 +   1.485891717688*_Complex_I,
   -0.348223438412 +   1.020459174171*_Complex_I,
    0.073882541886 +  -0.905791314139*_Complex_I,
   -0.705446913782 +   0.056186574618*_Complex_I,
   -0.960863041873 +  -0.196833332985*_Complex_I,
    1.006218030516 +  -0.467774405167*_Complex_I,
    0.602372049969 +  -2.674593305127*_Complex_I,
   -0.934722056514 +  -0.016922494007*_Complex_I,
    0.257679561629 +  -0.885684235693*_Complex_I,
    0.044866947149 +   0.936359293985*_Complex_I,
    0.950842198317 +   1.868559062575*_Complex_I,
    1.498943799171 +  -0.019107821973*_Complex_I,
   -1.868507034816 +   0.197524971623*_Complex_I,
    0.970832401725 +  -0.074109462719*_Complex_I,
   -2.886469419266 +   0.142475981345*_Complex_I,
    1.240964551237 +   0.153090872958*_Complex_I,
   -0.000396756859 +  -1.046593294557*_Complex_I,
    1.117655103664 +   1.647657701398*_Complex_I,
    1.162930856009 +  -0.975104959968*_Complex_I,
   -0.934535360620 +   0.307953402722*_Complex_I,
   -0.573780565126 +  -0.375508524005*_Complex_I,
   -0.103208834185 +   2.105768262189*_Complex_I,
   -1.379507684252 +  -0.280894989725*_Complex_I,
    0.859242654654 +   0.201801911064*_Complex_I,
    0.214128192305 +  -0.427748749718*_Complex_I,
    1.559388133754 +  -2.233121573297*_Complex_I,
    0.019639327733 +   0.360300645061*_Complex_I,
   -0.133932495128 +  -0.722680847651*_Complex_I,
    0.863036773382 +  -2.922284619456*_Complex_I,
    0.334598761557 +  -0.983050027547*_Complex_I,
   -1.077563482460 +   0.417379502415*_Complex_I,
   -0.198656810153 +   0.569701104618*_Complex_I,
    0.913145816840 +   2.052526155977*_Complex_I,
    0.854066622796 +  -0.413714533361*_Complex_I,
   -0.414380668765 +  -1.405489197548*_Complex_I,
   -1.110627741502 +  -1.820107908459*_Complex_I,
   -0.613940194705 +   1.779435308312*_Complex_I,
   -2.105251634607 +   0.525272681631*_Complex_I,
    0.609098015750 +  -0.895402748194*_Complex_I,
    1.934336563550 +   0.543860167180*_Complex_I,
   -0.782446497605 +   0.641226314552*_Complex_I,
   -0.955134630524 +  -0.077175268361*_Complex_I,
   -0.210873574493 +  -1.715168716896*_Complex_I,
    1.628059930554 +  -1.533301168339*_Complex_I,
   -1.421933758706 +  -0.241187651806*_Complex_I,
    2.187891215143 +  -0.023407875710*_Complex_I,
    0.548885995861 +   0.285435244871*_Complex_I,
    0.674430997216 +  -0.481078429799*_Complex_I,
    0.397489182610 +  -0.446320110483*_Complex_I,
   -0.865204055951 +  -0.020571209344*_Complex_I,
   -0.155857632710 +  -1.473838050536*_Complex_I,
   -0.825650581473 +   0.501060420785*_Complex_I,
    0.506220809313 +   1.124359364738*_Complex_I,
    0.199383983129 +   0.552775919340*_Complex_I,
   -0.675785644869 +  -0.015515289402*_Complex_I,
    0.347119071389 +  -0.046308125867*_Complex_I,
   -0.580411900444 +   0.473043358519*_Complex_I,
   -1.073929642005 +  -1.146130174539*_Complex_I,
   -1.137495899690 +  -1.309784871827*_Complex_I,
    1.171486989096 +   1.823857109273*_Complex_I,
   -0.742946853968 +   0.049703242746*_Complex_I,
   -0.160432289828 +   1.724103887278*_Complex_I,
   -0.546035353551 +   0.386968779514*_Complex_I,
   -1.213047883956 +  -0.537389928129*_Complex_I,
   -1.339236442910 +  -1.248701576327*_Complex_I,
   -0.815367922604 +   0.085728302177*_Complex_I,
   -2.349193819868 +   0.427831727302*_Complex_I,
   -0.276194199790 +   1.234485714534*_Complex_I,
   -0.355231570763 +  -0.995816467388*_Complex_I,
    1.137208262430 +   0.216271557004*_Complex_I,
    0.962040804090 +  -1.065610794498*_Complex_I,
   -0.668324382362 +   0.822590130460*_Complex_I,
   -1.202015945307 +  -1.480043875470*_Complex_I,
    1.179225549720 +   1.767048172045*_Complex_I,
   -0.684123959923 +  -0.862865878982*_Complex_I,
   -0.174319873616 +   0.167752215701*_Complex_I,
   -1.446536704664 +   1.172516467428*_Complex_I,
    0.858114162859 +   2.295181364008*_Complex_I,
    0.124270375245 +   0.997986406329*_Complex_I,
    0.394906672949 +   1.154862665198*_Complex_I,
    1.053903228740 +   1.779817113028*_Complex_I,
   -0.230950556520 +  -0.175979989611*_Complex_I,
   -1.265383803223 +  -0.026310311336*_Complex_I,
    0.762972265227 +   1.429231386216*_Complex_I,
    1.162409662447 +  -1.112322698285*_Complex_I,
    0.775539802471 +  -1.323064642721*_Complex_I,
    0.666613966503 +  -0.129946108336*_Complex_I,
    1.930414467502 +   0.436695033239*_Complex_I,
    0.885068429064 +   0.115321831962*_Complex_I,
    1.551024374006 +   0.416463074882*_Complex_I,
    0.247974255137 +   0.627306468118*_Complex_I,
    0.781609286510 +   0.378212834621*_Complex_I,
    0.332343800329 +   0.539122959506*_Complex_I,
    0.519709930109 +  -1.064947224271*_Complex_I,
   -0.635850608190 +   1.257862397877*_Complex_I,
    1.628515077193 +  -1.103666746889*_Complex_I,
   -0.849325965524 +  -1.767990899186*_Complex_I,
    0.743956616560 +  -2.505409755963*_Complex_I,
    0.830498883146 +   0.057323145873*_Complex_I,
   -1.470980958211 +  -1.558079958147*_Complex_I,
   -0.088063460329 +   0.426467567974*_Complex_I,
   -0.219298752127 +  -0.711676070690*_Complex_I,
   -0.283866135348 +   1.254036523517*_Complex_I,
   -0.254391988290 +   0.215410095075*_Complex_I,
   -0.590092311740 +  -1.507631350024*_Complex_I,
   -1.535360519901 +  -0.437319427483*_Complex_I,
    1.026878345705 +  -0.182042614613*_Complex_I};

liquid_float_complex fft_test_y317[] = {
   19.891894947904 +   5.655090929781*_Complex_I,
   18.838569316919 + -27.216365987549*_Complex_I,
  -11.140787864820 +  -1.700693291107*_Complex_I,
    9.248191980131 + -11.880625755527*_Complex_I,
    0.877433246927 +   5.210710512463*_Complex_I,
   12.613756002695 + -22.914829471885*_Complex_I,
   -7.522954808149 +   2.580642036625*_Complex_I,
  -24.806396396859 +  14.114587974426*_Complex_I,
    9.875249841730 + -22.004495722041*_Complex_I,
  -18.222931551932 +   2.572927350772*_Complex_I,
   20.867583356509 +  -1.458843546852*_Complex_I,
   38.916192529134 +  -7.826129128685*_Complex_I,
  -19.618271263978 + -21.217111192894*_Complex_I,
    0.549362128526 +  18.584275483073*_Complex_I,
   -5.258299327834 +  -0.446452119776*_Complex_I,
   -6.830532675831 + -35.800356213084*_Complex_I,
   16.124101912097 +  -2.387751210287*_Complex_I,
   19.602770799308 + -18.449258115561*_Complex_I,
   -4.933124103618 +   8.281766183665*_Complex_I,
  -13.560383009984 +   0.970618524872*_Complex_I,
   41.610229013366 +   5.152249379736*_Complex_I,
    1.415309104711 +  11.210809107531*_Complex_I,
  -40.441003535705 + -12.405906077032*_Complex_I,
  -12.530216678354 +  22.864679881966*_Complex_I,
  -29.573667819723 + -22.154070735316*_Complex_I,
   -8.933348019353 + -25.720405793092*_Complex_I,
   -3.072833505067 +  16.874820762270*_Complex_I,
   -8.751051523099 +  -9.544252802963*_Complex_I,
   19.619902222112 + -22.765558912475*_Complex_I,
    3.204939906092 + -25.426020065167*_Complex_I,
  -18.600493227238 +   2.762236432333*_Complex_I,
   10.833867918922 + -38.070397977737*_Complex_I,
   25.869914191964 + -19.192002503531*_Complex_I,
   12.052348942398 +  -1.338816803484*_Complex_I,
  -38.656067918699 + -24.135381967263*_Complex_I,
    5.700781235700 +  11.219859126000*_Complex_I,
  -23.338619501120 +  32.607593688928*_Complex_I,
  -10.686035441793 +  16.337999228208*_Complex_I,
   -9.517260831300 +  17.469953582495*_Complex_I,
   11.452433021422 +  -2.244848000851*_Complex_I,
    3.355159985201 +  -0.950021809091*_Complex_I,
   11.960645612996 +   6.893274528846*_Complex_I,
    9.585251410761 +  10.141135223678*_Complex_I,
   -7.050051336892 +  27.613088292755*_Complex_I,
    7.367552651770 +  -6.006047409882*_Complex_I,
   19.902478672101 + -16.730550563777*_Complex_I,
   32.759288191850 +   1.162079163303*_Complex_I,
  -10.679222098466 +  -0.414496389670*_Complex_I,
  -17.167648316558 +  13.231819142930*_Complex_I,
  -15.270670234876 +  12.750590771914*_Complex_I,
    7.808635317834 +  -1.976327148026*_Complex_I,
    3.659364354893 +  12.967348190608*_Complex_I,
    8.516191035487 +  -3.814776057042*_Complex_I,
   -2.967686164798 +  -2.759276437723*_Complex_I,
  -10.217022770046 +  22.446524490020*_Complex_I,
  -13.759629399132 +   0.428077429397*_Complex_I,
   12.108694472460 +  17.906136235301*_Complex_I,
    0.500310973628 +  10.379459504754*_Complex_I,
   22.170113416067 + -17.601071337137*_Complex_I,
   -4.547207763897 +  13.535378900333*_Complex_I,
   35.073898289289 +  -3.750408416097*_Complex_I,
   12.960162045071 + -10.329236328497*_Complex_I,
    5.155047938611 +  11.233862622741*_Complex_I,
  -19.366076595616 +   3.290152177759*_Complex_I,
   -2.547983907745 +  -4.318523679571*_Complex_I,
   13.079902614417 + -31.788319997011*_Complex_I,
   -0.294946700028 +  20.014494355305*_Complex_I,
   18.602791112148 +  -1.875890460773*_Complex_I,
  -13.396328282272 +   9.288327370031*_Complex_I,
   -3.117158916891 +   2.544747297232*_Complex_I,
   14.226131115223 +  17.462152594662*_Complex_I,
  -19.578473387664 +  34.411911283259*_Complex_I,
   -6.579019542175 +   1.022001674347*_Complex_I,
   30.972194959263 +  -8.350211186911*_Complex_I,
  -23.959086942588 +  -4.745490152344*_Complex_I,
   18.433629972547 +  33.672506545950*_Complex_I,
   -3.583025093477 +  29.006005065761*_Complex_I,
   -3.421689832344 +  -6.516619591564*_Complex_I,
   17.468290088683 +  14.351378688148*_Complex_I,
  -20.170011170114 + -44.394817543067*_Complex_I,
  -13.150516148634 +  45.749703126153*_Complex_I,
   -6.345962437499 +   5.896690541701*_Complex_I,
   -3.508737698320 +  25.459472943049*_Complex_I,
   -9.590464636095 + -37.162638669309*_Complex_I,
   -7.707872774343 +  -4.065042502767*_Complex_I,
    4.310656075828 +  55.425516805330*_Complex_I,
   -8.841697395726 +   7.827822742296*_Complex_I,
    6.538079696486 +  18.790190957680*_Complex_I,
    3.052383346750 + -35.409567370640*_Complex_I,
    6.790218518127 +   6.485107042363*_Complex_I,
   -1.939520400173 +   9.749487460014*_Complex_I,
   27.335153513982 + -28.544990200718*_Complex_I,
    1.310416901033 +  -3.384377012660*_Complex_I,
   39.882940481275 +  -2.284359214074*_Complex_I,
   10.547528262920 + -12.560415251324*_Complex_I,
  -39.735255177309 +  13.592975359455*_Complex_I,
  -15.339971072116 + -16.475578099072*_Complex_I,
   17.033232877918 +   3.802866771597*_Complex_I,
   28.013870016133 +   2.419611488016*_Complex_I,
   -2.265805112454 +   0.312114751003*_Complex_I,
  -33.149667339304 + -13.689695655857*_Complex_I,
   17.388116065076 +   0.542000357078*_Complex_I,
   24.899620116312 + -12.668755714836*_Complex_I,
    4.917415611451 +  -9.932194848538*_Complex_I,
  -11.738607295144 +  -8.914945728892*_Complex_I,
  -19.712014537454 +  22.399807137247*_Complex_I,
    5.053485084584 +  17.298193889941*_Complex_I,
   -7.079518754159 +  17.581889100321*_Complex_I,
  -10.281582568059 +   8.089169898931*_Complex_I,
    1.422571832929 +   3.080323599470*_Complex_I,
    8.605408612244 +  -3.487094722779*_Complex_I,
  -11.890704936363 +   9.663054150701*_Complex_I,
    9.768366151498 +  15.851583190991*_Complex_I,
   15.643908708786 +  -4.022026320351*_Complex_I,
  -23.153672099048 +  27.718041721476*_Complex_I,
  -10.673968698682 +  -2.656942822276*_Complex_I,
   -3.084198946373 +   5.011470019270*_Complex_I,
   30.294417286976 +  -0.649680240512*_Complex_I,
    9.336689517258 + -15.513350621571*_Complex_I,
   -0.332156127181 +   9.028518696767*_Complex_I,
  -18.028373273009 +   0.865624445339*_Complex_I,
   18.478442253114 +  -4.603304072176*_Complex_I,
  -23.690660760663 +  23.776870282847*_Complex_I,
   15.985913856353 +  -2.839961425057*_Complex_I,
    1.572606311668 + -19.612416936799*_Complex_I,
   16.810087235424 +   0.199177019879*_Complex_I,
  -15.975160985564 +   6.532163069799*_Complex_I,
  -32.272173936218 + -31.217876380070*_Complex_I,
   15.826696571154 +  18.609590632164*_Complex_I,
   47.902645387609 +  17.126787301492*_Complex_I,
   -2.541073313860 +  14.418504375704*_Complex_I,
   14.540095561207 +  20.121389424019*_Complex_I,
   26.277876001597 +  -3.644634538637*_Complex_I,
   -2.512888880479 + -30.538233732588*_Complex_I,
   16.529338657188 +  22.345368961768*_Complex_I,
   -1.812032422371 + -34.161479691113*_Complex_I,
   -0.453702679159 +  -6.380888555304*_Complex_I,
   -3.152766309700 + -11.666085457234*_Complex_I,
  -11.122245781125 + -11.927016012323*_Complex_I,
   36.608207324428 +  15.883213693451*_Complex_I,
   -7.991006509076 +  50.985368963626*_Complex_I,
    4.226949261924 +   1.424207754420*_Complex_I,
   17.463446429822 +   6.779880329142*_Complex_I,
   -3.489655564559 +   0.384578586369*_Complex_I,
   -5.888919363255 +  -5.109974862115*_Complex_I,
   -7.227459554733 +  29.423681452522*_Complex_I,
   -5.599219759541 + -23.600754528481*_Complex_I,
   -1.449537808914 +  -5.756622299277*_Complex_I,
  -19.475712102355 + -23.900197536654*_Complex_I,
  -21.448274996924 +  26.188122613033*_Complex_I,
  -29.449414779539 +   4.514251604734*_Complex_I,
    0.711130838156 +   9.386706325613*_Complex_I,
   -4.964574769823 +   3.355702966205*_Complex_I,
  -69.341381991121 + -15.186662242307*_Complex_I,
   -9.570125543135 + -19.565859787554*_Complex_I,
  -10.294086283004 +   8.398169381304*_Complex_I,
   -1.885058572468 +  -6.759464252726*_Complex_I,
   27.070270898380 +  -0.178665040288*_Complex_I,
   47.866947417745 + -31.409630574884*_Complex_I,
   -8.921385543048 +  26.098382682234*_Complex_I,
   -2.790785416910 +   9.787980555385*_Complex_I,
  -11.714395450184 +   2.331009478742*_Complex_I,
  -15.110851454222 + -16.495034888485*_Complex_I,
    4.191147002221 +  12.009574674807*_Complex_I,
   13.441299656087 +  -6.566453769009*_Complex_I,
   37.589069138284 +  -3.493855465671*_Complex_I,
   12.583644012597 +  15.635478070296*_Complex_I,
  -10.233844300260 +  -2.537026190645*_Complex_I,
   32.544552127969 +  -9.371296682693*_Complex_I,
    5.840669998388 +  -0.465346273045*_Complex_I,
  -32.889192462170 + -18.684446717050*_Complex_I,
  -15.105348929262 +   9.854947012189*_Complex_I,
    2.561152455963 + -17.413141080242*_Complex_I,
   13.746092833724 +  -1.220057764138*_Complex_I,
  -23.803933926504 +  19.459415272545*_Complex_I,
   13.809596770429 + -10.104944386386*_Complex_I,
   -8.303454415515 +   8.117739395766*_Complex_I,
    6.133097727305 +  -1.569418595484*_Complex_I,
   -8.760751262525 + -27.389777662710*_Complex_I,
   10.131599125171 +   6.687127259801*_Complex_I,
  -25.519018101480 +  18.199522992831*_Complex_I,
  -13.233035001671 +  -6.395819934405*_Complex_I,
   11.700095411690 + -15.584918347062*_Complex_I,
   18.906883235021 +  -7.460982609320*_Complex_I,
  -17.459921203210 +   1.804228941706*_Complex_I,
   12.317579017635 +  10.356522098016*_Complex_I,
   26.023982632040 +  -7.991255808237*_Complex_I,
  -37.779207166301 +  -2.527619516503*_Complex_I,
  -16.084376241401 + -20.612256188135*_Complex_I,
   -6.114349663136 + -23.064645190863*_Complex_I,
   -2.116498608238 +  50.021918384600*_Complex_I,
   -7.117672685723 +  -8.176883387504*_Complex_I,
   -5.412565357343 +  22.014215119309*_Complex_I,
    6.088100003823 + -14.490088332571*_Complex_I,
  -23.952484213391 +  -6.311185058243*_Complex_I,
  -41.692266879065 + -16.754070143984*_Complex_I,
   15.044401210058 +   3.664913601471*_Complex_I,
  -33.750320820834 +  36.019579795022*_Complex_I,
   13.347039200739 + -32.112552097269*_Complex_I,
  -15.461626675606 +  23.718105709185*_Complex_I,
  -12.296412987482 +  11.603712083795*_Complex_I,
   -5.811459938628 +  -7.925008172416*_Complex_I,
   -1.192572683531 + -17.231195267270*_Complex_I,
  -20.865176875222 + -31.216074954599*_Complex_I,
  -28.168417257904 +  -6.162171521961*_Complex_I,
   14.071723863194 + -13.359093220787*_Complex_I,
  -10.855751735127 +  -2.119685075188*_Complex_I,
   10.100698435956 +  -0.047663624125*_Complex_I,
  -16.742422653794 + -24.530696829578*_Complex_I,
    4.000721417241 +  -9.851748070066*_Complex_I,
   13.784754826511 +  11.502447326859*_Complex_I,
   24.102575046761 +   1.552286673184*_Complex_I,
    6.070752306643 +  -4.812888456253*_Complex_I,
   -5.300318786685 +  -5.773884122203*_Complex_I,
    4.177402715108 +   4.644324663894*_Complex_I,
  -34.005084599492 +  24.853411330269*_Complex_I,
   -4.077672998994 +   2.001774715846*_Complex_I,
  -21.978658258889 + -16.888801388499*_Complex_I,
   16.217687213434 +  24.308462530919*_Complex_I,
    9.698665151728 + -11.152518442318*_Complex_I,
   -0.713578550754 +  -0.408153703877*_Complex_I,
  -13.404489453311 + -13.338812872852*_Complex_I,
   12.438700016349 +  34.570234225070*_Complex_I,
   -9.926721954129 +   6.906926926113*_Complex_I,
   34.152883393921 +  32.217622455379*_Complex_I,
   18.232286791872 +  37.874687752978*_Complex_I,
   12.000459208850 +  -4.948870303603*_Complex_I,
  -32.687697613521 + -14.030824660001*_Complex_I,
    9.549264725873 + -11.955689902942*_Complex_I,
   14.839058751293 + -31.933475859189*_Complex_I,
  -14.754140603346 + -24.878350781691*_Complex_I,
   10.712939318393 +  -5.996862342613*_Complex_I,
  -17.907934788390 +   6.090055602127*_Complex_I,
   36.124946787489 +  -5.830186488894*_Complex_I,
    8.800236613602 +  -2.072057513781*_Complex_I,
    3.437540103841 +   0.664749616099*_Complex_I,
   31.950715457487 +  -0.220151294656*_Complex_I,
   -0.045173525280 +  19.196581987850*_Complex_I,
    1.870859081457 + -31.599244764015*_Complex_I,
    0.209529336033 +   0.187035118051*_Complex_I,
  -20.188770724804 +  -1.836423923991*_Complex_I,
   -0.878467583840 +  20.234622217282*_Complex_I,
   -2.102494717199 +  -2.913862105328*_Complex_I,
  -12.424351209312 +  16.006770035694*_Complex_I,
    4.029466210003 +  -4.407643696893*_Complex_I,
    5.945482525641 +   6.202857230453*_Complex_I,
  -10.003725089675 +  12.495974119472*_Complex_I,
  -30.517926092302 + -12.650897630264*_Complex_I,
    4.362955303417 + -12.091129699738*_Complex_I,
   16.312617526910 +  33.224889607577*_Complex_I,
   -7.191052604298 +  20.407651857657*_Complex_I,
   20.796924916343 +  -6.364968926767*_Complex_I,
  -12.625716653882 +  13.205109334295*_Complex_I,
    8.088234917787 +   7.824060551408*_Complex_I,
    1.922368898588 +  47.121922176668*_Complex_I,
  -22.856735196688 +  24.367218386007*_Complex_I,
   -7.383851526948 +  16.988073661561*_Complex_I,
   44.161092935665 +  -5.907735807977*_Complex_I,
   21.472541358807 + -13.144261767738*_Complex_I,
  -11.542368964090 +  15.544417175199*_Complex_I,
   27.503706468722 + -11.522885641815*_Complex_I,
   47.558932357808 +   7.448305631246*_Complex_I,
   11.766347399663 +  19.611745304561*_Complex_I,
    9.190381176578 +  15.613955528574*_Complex_I,
    4.579716108010 + -19.097122607568*_Complex_I,
    8.259625237826 +   5.225672702106*_Complex_I,
  -29.407167921996 +   2.730538989362*_Complex_I,
   28.823600196176 +  29.176827923246*_Complex_I,
    7.192706095305 + -13.060381105412*_Complex_I,
   25.710478454828 +   0.151963358956*_Complex_I,
    2.912008664120 + -30.634293042262*_Complex_I,
  -18.887195071024 +  24.458778149068*_Complex_I,
  -11.270981360031 +  36.740254138082*_Complex_I,
  -27.910677769149 + -46.983604943585*_Complex_I,
   28.541376587410 + -11.613642790751*_Complex_I,
    4.477974452509 +  19.232597353019*_Complex_I,
   -4.293520064043 +  21.064976071666*_Complex_I,
  -35.598030786598 +  22.993609231670*_Complex_I,
   15.465979612020 +  -7.083850274044*_Complex_I,
  -20.864435551224 + -11.252291347107*_Complex_I,
   -8.098484900823 +  15.454651546399*_Complex_I,
    7.922777952587 + -23.004986313444*_Complex_I,
    5.362453523073 +  -0.810615362821*_Complex_I,
   23.691538716715 +   5.018112888735*_Complex_I,
   -0.840977210667 +   5.291230447587*_Complex_I,
  -14.732575553595 +   5.007945078325*_Complex_I,
   11.153523811020 +   9.041741420055*_Complex_I,
   10.332014628129 + -19.924730861837*_Complex_I,
  -14.993931961657 +  31.489106362903*_Complex_I,
   18.595068458053 + -35.418285443670*_Complex_I,
   39.450078173463 +   1.995244884889*_Complex_I,
   -1.199515997336 + -39.429463141214*_Complex_I,
   32.594746366756 +  11.337568560792*_Complex_I,
   12.403678050012 + -21.176744666160*_Complex_I,
    3.346525369966 +  -1.001631596928*_Complex_I,
  -19.825849167391 +  26.742894636469*_Complex_I,
    4.915352470909 +   3.753914873323*_Complex_I,
    8.679746038045 +  -3.972380637551*_Complex_I,
   -3.287311421377 +  20.200996274143*_Complex_I,
   22.907843859952 +   3.994757951688*_Complex_I,
    2.844877291610 +  -4.339174940613*_Complex_I,
    4.103872158917 +  -8.872001060599*_Complex_I,
   28.989825837444 + -23.300936570044*_Complex_I,
   -7.955654262813 +  31.438036806524*_Complex_I,
   -6.389510821525 +  -2.868211291181*_Complex_I,
    2.583272449361 + -13.352995160958*_Complex_I,
  -38.239266883463 +  23.653429024344*_Complex_I,
    8.079210774309 +  23.697861354779*_Complex_I,
  -37.713434701568 +   2.799035443775*_Complex_I,
  -26.751551315717 +   8.673836408974*_Complex_I,
  -33.613333707208 +  -0.367929968698*_Complex_I,
  -14.541161127911 +  -5.708211292132*_Complex_I,
   -3.393160511476 + -24.278587890684*_Complex_I,
   26.111359371252 + -28.934022170518*_Complex_I,
   14.009362482345 + -20.358022264859*_Complex_I,
    7.316431660011 +  26.887415857021*_Complex_I,
    8.199534997352 +  -2.435205163079*_Complex_I};

