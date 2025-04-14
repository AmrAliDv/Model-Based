#include "ne_ds.h"
#include "Enhanced_BMS_7ded21a_1_ds_sys_struct.h"
#include "Enhanced_BMS_7ded21a_1_ds_obs_act.h"
#include "Enhanced_BMS_7ded21a_1_ds.h"
#include "Enhanced_BMS_7ded21a_1_ds_externals.h"
#include "Enhanced_BMS_7ded21a_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Enhanced_BMS_7ded21a_1_ds_obs_act ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t51 , NeDsMethodOutput * out ) { real_T
Battery_Battery_Table_Based1_electricalModel_xGdynamic [ 5 ] ; real_T
Battery_Battery_Table_Based2_electricalModel_xGdynamic [ 5 ] ; real_T
Battery_Battery_Table_Based_electricalModel_xGdynamic [ 5 ] ; real_T t2 [ 5 ]
; real_T Battery_Battery_Table_Based1_electricalModel_i ; real_T
Battery_Battery_Table_Based1_electricalModel_v ; real_T
Battery_Battery_Table_Based2_electricalModel_i ; real_T
Battery_Battery_Table_Based2_thermalModel_Q ; real_T
Battery_Battery_Table_Based_electricalModel_i ; real_T
Battery_Battery_Table_Based_electricalModel_v ; real_T
Battery_Convective_Heat_Transfer1_Q ; real_T Battery_Current_Sensor1_I ;
real_T Battery_Current_Sensor2_I ; real_T Battery_Current_Sensor_I ; real_T
Battery_MOSFET_Ideal_Switching1_diode_i ; real_T
Battery_MOSFET_Ideal_Switching1_diode_v_diode ; real_T
Battery_MOSFET_Ideal_Switching2_diode_i ; real_T
Battery_MOSFET_Ideal_Switching3_diode_i ; real_T
Battery_MOSFET_Ideal_Switching4_diode_i ; real_T
Battery_MOSFET_Ideal_Switching4_diode_v_diode ; real_T
Battery_MOSFET_Ideal_Switching5_diode_i ; real_T
Battery_MOSFET_Ideal_Switching5_diode_v_diode ; real_T
Battery_MOSFET_Ideal_Switching_diode_i ; real_T
Battery_MOSFET_Ideal_Switching_diode_v_diode ; real_T Battery_Resistor1_i ;
real_T Battery_Resistor2_i ; real_T Battery_Resistor3_i ; real_T
Battery_Resistor4_i ; real_T Battery_Resistor5_i ; real_T
Battery_Voltage_Sensor_V ; real_T piece11 ; real_T t15 ; real_T t20 ; real_T
t35 ; real_T t40 ; real_T t42 ; real_T t46 ; size_t t10 ; ( void ) LC ;
Battery_Battery_Table_Based_electricalModel_i = ( ( t51 -> mX . mX [ 24ULL ]
* - 0.1 + t51 -> mX . mX [ 25ULL ] * 0.05 ) + t51 -> mX . mX [ 26ULL ] * 0.05
) + t51 -> mU . mX [ 6ULL ] ; t2 [ 0ULL ] = t51 -> mX . mX [ 29ULL ] ; t2 [
1ULL ] = 0.0 ; t2 [ 2ULL ] = 0.0 ; t2 [ 3ULL ] = 0.0 ; t2 [ 4ULL ] = 0.0 ;
for ( t10 = 0ULL ; t10 < 5ULL ; t10 ++ ) {
Battery_Battery_Table_Based_electricalModel_xGdynamic [ t10 ] = t2 [ t10 ] ;
} Battery_Battery_Table_Based_electricalModel_v = - t51 -> mX . mX [ 27ULL ]
+ t51 -> mX . mX [ 24ULL ] ; Battery_Battery_Table_Based1_electricalModel_i =
( ( t51 -> mX . mX [ 27ULL ] * - 0.1 + t51 -> mX . mX [ 31ULL ] * 0.05 ) +
t51 -> mX . mX [ 32ULL ] * 0.05 ) + t51 -> mU . mX [ 6ULL ] ; t2 [ 0ULL ] =
t51 -> mX . mX [ 35ULL ] ; t2 [ 1ULL ] = 0.0 ; t2 [ 2ULL ] = 0.0 ; t2 [ 3ULL
] = 0.0 ; t2 [ 4ULL ] = 0.0 ; for ( t10 = 0ULL ; t10 < 5ULL ; t10 ++ ) {
Battery_Battery_Table_Based1_electricalModel_xGdynamic [ t10 ] = t2 [ t10 ] ;
} Battery_Battery_Table_Based1_electricalModel_v = - t51 -> mX . mX [ 33ULL ]
+ t51 -> mX . mX [ 27ULL ] ; Battery_Battery_Table_Based2_electricalModel_i =
( ( t51 -> mX . mX [ 33ULL ] * - 0.1 + t51 -> mX . mX [ 37ULL ] * 0.05 ) +
t51 -> mX . mX [ 38ULL ] * 0.05 ) + t51 -> mU . mX [ 6ULL ] ; t2 [ 0ULL ] =
t51 -> mX . mX [ 40ULL ] ; t2 [ 1ULL ] = 0.0 ; t2 [ 2ULL ] = 0.0 ; t2 [ 3ULL
] = 0.0 ; t2 [ 4ULL ] = 0.0 ; for ( t10 = 0ULL ; t10 < 5ULL ; t10 ++ ) {
Battery_Battery_Table_Based2_electricalModel_xGdynamic [ t10 ] = t2 [ t10 ] ;
} Battery_Battery_Table_Based2_thermalModel_Q = t51 -> mX . mX [ 8ULL ] *
0.00050950000000000008 + t51 -> mX . mX [ 16ULL ] * - 0.00050950000000000008
; Battery_Convective_Heat_Transfer1_Q = t51 -> mX . mX [ 0ULL ] * -
0.00050950000000000008 + t51 -> mX . mX [ 8ULL ] * 0.00050950000000000008 ;
Battery_Current_Sensor_I = ( ( ( ( t51 -> mX . mX [ 27ULL ] * - 0.1 + t51 ->
mX . mX [ 33ULL ] * 0.1 ) + t51 -> mX . mX [ 37ULL ] * - 0.05 ) + t51 -> mX .
mX [ 38ULL ] * - 0.05 ) + t51 -> mX . mX [ 31ULL ] * 0.05 ) + t51 -> mX . mX
[ 32ULL ] * 0.05 ; Battery_Current_Sensor1_I = ( ( ( ( t51 -> mX . mX [ 27ULL
] * 0.1 + t51 -> mX . mX [ 24ULL ] * - 0.1 ) + t51 -> mX . mX [ 25ULL ] *
0.05 ) + t51 -> mX . mX [ 26ULL ] * 0.05 ) + t51 -> mX . mX [ 31ULL ] * -
0.05 ) + t51 -> mX . mX [ 32ULL ] * - 0.05 ; Battery_Current_Sensor2_I = (
t51 -> mX . mX [ 24ULL ] * 0.1 + t51 -> mX . mX [ 25ULL ] * - 0.05 ) + t51 ->
mX . mX [ 26ULL ] * - 0.05 ; Battery_MOSFET_Ideal_Switching_diode_i = ( t51
-> mX . mX [ 24ULL ] * - 0.05 + t51 -> mX . mX [ 25ULL ] * 0.05 ) + t51 -> mX
. mX [ 42ULL ] ; Battery_MOSFET_Ideal_Switching_diode_v_diode = t51 -> mX .
mX [ 27ULL ] - t51 -> mX . mX [ 25ULL ] ; t15 = - t51 -> mX . mX [ 27ULL ] +
t51 -> mX . mX [ 25ULL ] ; Battery_MOSFET_Ideal_Switching1_diode_i = ( t51 ->
mX . mX [ 24ULL ] * - 0.05 + t51 -> mX . mX [ 26ULL ] * 0.05 ) + t51 -> mX .
mX [ 44ULL ] ; Battery_MOSFET_Ideal_Switching1_diode_v_diode = t51 -> mX . mX
[ 27ULL ] - t51 -> mX . mX [ 26ULL ] ; t20 = - t51 -> mX . mX [ 27ULL ] + t51
-> mX . mX [ 26ULL ] ; Battery_MOSFET_Ideal_Switching2_diode_i = ( t51 -> mX
. mX [ 33ULL ] * - 0.05 + t51 -> mX . mX [ 37ULL ] * 0.05 ) + t51 -> mX . mX
[ 46ULL ] ; Battery_MOSFET_Ideal_Switching3_diode_i = ( t51 -> mX . mX [
33ULL ] * - 0.05 + t51 -> mX . mX [ 38ULL ] * 0.05 ) + t51 -> mX . mX [ 48ULL
] ; Battery_MOSFET_Ideal_Switching4_diode_i = ( t51 -> mX . mX [ 27ULL ] * -
0.05 + t51 -> mX . mX [ 31ULL ] * 0.05 ) + t51 -> mX . mX [ 50ULL ] ;
Battery_MOSFET_Ideal_Switching4_diode_v_diode = t51 -> mX . mX [ 33ULL ] -
t51 -> mX . mX [ 31ULL ] ; t35 = - t51 -> mX . mX [ 33ULL ] + t51 -> mX . mX
[ 31ULL ] ; Battery_MOSFET_Ideal_Switching5_diode_i = ( t51 -> mX . mX [
27ULL ] * - 0.05 + t51 -> mX . mX [ 32ULL ] * 0.05 ) + t51 -> mX . mX [ 52ULL
] ; Battery_MOSFET_Ideal_Switching5_diode_v_diode = t51 -> mX . mX [ 33ULL ]
- t51 -> mX . mX [ 32ULL ] ; t40 = - t51 -> mX . mX [ 33ULL ] + t51 -> mX .
mX [ 32ULL ] ; t42 = t51 -> mX . mX [ 24ULL ] * 0.05 + t51 -> mX . mX [ 25ULL
] * - 0.05 ; Battery_Resistor1_i = t51 -> mX . mX [ 27ULL ] * 0.05 + t51 ->
mX . mX [ 31ULL ] * - 0.05 ; Battery_Resistor2_i = t51 -> mX . mX [ 33ULL ] *
0.05 + t51 -> mX . mX [ 37ULL ] * - 0.05 ; Battery_Resistor3_i = t51 -> mX .
mX [ 24ULL ] * 0.05 + t51 -> mX . mX [ 26ULL ] * - 0.05 ; Battery_Resistor4_i
= t51 -> mX . mX [ 27ULL ] * 0.05 + t51 -> mX . mX [ 32ULL ] * - 0.05 ;
Battery_Resistor5_i = t51 -> mX . mX [ 33ULL ] * 0.05 + t51 -> mX . mX [
38ULL ] * - 0.05 ; Battery_Voltage_Sensor_V = t51 -> mX . mX [ 24ULL ] - t51
-> mX . mX [ 27ULL ] ; t46 = t51 -> mX . mX [ 27ULL ] - t51 -> mX . mX [
33ULL ] ; piece11 = t51 -> mX . mX [ 0ULL ] * 0.00050950000000000008 ; out ->
mOBS_ACT . mX [ 0ULL ] = t51 -> mX . mX [ 0ULL ] ; out -> mOBS_ACT . mX [
1ULL ] = t51 -> mX . mX [ 0ULL ] ; out -> mOBS_ACT . mX [ 2ULL ] = t51 -> mX
. mX [ 0ULL ] ; out -> mOBS_ACT . mX [ 3ULL ] = t51 -> mX . mX [ 0ULL ] ; out
-> mOBS_ACT . mX [ 4ULL ] = t51 -> mX . mX [ 1ULL ] * 0.00027777777777777778
; out -> mOBS_ACT . mX [ 5ULL ] = t51 -> mX . mX [ 0ULL ] ; out -> mOBS_ACT .
mX [ 6ULL ] = Battery_Battery_Table_Based_electricalModel_i ; out -> mOBS_ACT
. mX [ 7ULL ] = t51 -> mX . mX [ 27ULL ] ; out -> mOBS_ACT . mX [ 8ULL ] =
t51 -> mX . mX [ 2ULL ] ; out -> mOBS_ACT . mX [ 9ULL ] = t51 -> mX . mX [
2ULL ] ; out -> mOBS_ACT . mX [ 10ULL ] = t51 -> mX . mX [ 28ULL ] ; out ->
mOBS_ACT . mX [ 11ULL ] = 1.0 ; out -> mOBS_ACT . mX [ 12ULL ] = t51 -> mX .
mX [ 24ULL ] ; for ( t10 = 3ULL ; t10 - 3ULL < 5ULL ; t10 ++ ) { out ->
mOBS_ACT . mX [ t10 + 10ULL ] = t51 -> mX . mX [ t10 + 0ULL ] ; } for ( t10 =
0ULL ; t10 < 5ULL ; t10 ++ ) { out -> mOBS_ACT . mX [ t10 + 18ULL ] =
Battery_Battery_Table_Based_electricalModel_xGdynamic [ t10 ] ; } out ->
mOBS_ACT . mX [ 23ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 24ULL ] = 1.0 ; out ->
mOBS_ACT . mX [ 25ULL ] = t51 -> mX . mX [ 30ULL ] * 1000.0 ; out -> mOBS_ACT
. mX [ 26ULL ] = t51 -> mX . mX [ 28ULL ] ; out -> mOBS_ACT . mX [ 27ULL ] =
Battery_Battery_Table_Based_electricalModel_v ; out -> mOBS_ACT . mX [ 28ULL
] = 1.0 ; out -> mOBS_ACT . mX [ 29ULL ] = 1.0 ; out -> mOBS_ACT . mX [ 30ULL
] = 1.0 ; out -> mOBS_ACT . mX [ 31ULL ] = 1.0 ; out -> mOBS_ACT . mX [ 32ULL
] = 1.0 ; out -> mOBS_ACT . mX [ 33ULL ] =
Battery_Battery_Table_Based_electricalModel_i ; out -> mOBS_ACT . mX [ 34ULL
] = t51 -> mX . mX [ 27ULL ] ; out -> mOBS_ACT . mX [ 35ULL ] = t51 -> mX .
mX [ 2ULL ] ; out -> mOBS_ACT . mX [ 36ULL ] = t51 -> mX . mX [ 24ULL ] ; out
-> mOBS_ACT . mX [ 37ULL ] = t51 -> mX . mX [ 28ULL ] ; out -> mOBS_ACT . mX
[ 38ULL ] = t51 -> mX . mX [ 28ULL ] ; out -> mOBS_ACT . mX [ 39ULL ] = t51
-> mX . mX [ 0ULL ] ; out -> mOBS_ACT . mX [ 40ULL ] = t51 -> mX . mX [ 0ULL
] ; out -> mOBS_ACT . mX [ 41ULL ] = 149.359925 + ( t51 -> mX . mX [ 0ULL ] *
- 0.0010190000000000002 + t51 -> mX . mX [ 8ULL ] * 0.00050950000000000008 )
* 1000.0 ; out -> mOBS_ACT . mX [ 42ULL ] = t51 -> mX . mX [ 0ULL ] ; out ->
mOBS_ACT . mX [ 43ULL ] = t51 -> mX . mX [ 0ULL ] ; out -> mOBS_ACT . mX [
44ULL ] = t51 -> mX . mX [ 30ULL ] * 1000.0 ; out -> mOBS_ACT . mX [ 45ULL ]
= Battery_Battery_Table_Based_electricalModel_v ; out -> mOBS_ACT . mX [
46ULL ] = t51 -> mX . mX [ 8ULL ] ; out -> mOBS_ACT . mX [ 47ULL ] = t51 ->
mX . mX [ 8ULL ] ; out -> mOBS_ACT . mX [ 48ULL ] = t51 -> mX . mX [ 8ULL ] ;
out -> mOBS_ACT . mX [ 49ULL ] = t51 -> mX . mX [ 8ULL ] ; out -> mOBS_ACT .
mX [ 50ULL ] = t51 -> mX . mX [ 9ULL ] * 0.00027777777777777778 ; out ->
mOBS_ACT . mX [ 51ULL ] = t51 -> mX . mX [ 8ULL ] ; out -> mOBS_ACT . mX [
52ULL ] = Battery_Battery_Table_Based1_electricalModel_i ; out -> mOBS_ACT .
mX [ 53ULL ] = t51 -> mX . mX [ 33ULL ] ; out -> mOBS_ACT . mX [ 54ULL ] =
t51 -> mX . mX [ 10ULL ] ; out -> mOBS_ACT . mX [ 55ULL ] = t51 -> mX . mX [
10ULL ] ; out -> mOBS_ACT . mX [ 56ULL ] = t51 -> mX . mX [ 34ULL ] ; out ->
mOBS_ACT . mX [ 57ULL ] = 1.0 ; out -> mOBS_ACT . mX [ 58ULL ] = t51 -> mX .
mX [ 27ULL ] ; for ( t10 = 11ULL ; t10 - 11ULL < 5ULL ; t10 ++ ) { out ->
mOBS_ACT . mX [ t10 + 48ULL ] = t51 -> mX . mX [ t10 + 0ULL ] ; } for ( t10 =
0ULL ; t10 < 5ULL ; t10 ++ ) { out -> mOBS_ACT . mX [ t10 + 64ULL ] =
Battery_Battery_Table_Based1_electricalModel_xGdynamic [ t10 ] ; } out ->
mOBS_ACT . mX [ 69ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 70ULL ] = 1.0 ; out ->
mOBS_ACT . mX [ 71ULL ] = t51 -> mX . mX [ 36ULL ] * 1000.0 ; out -> mOBS_ACT
. mX [ 72ULL ] = t51 -> mX . mX [ 34ULL ] ; out -> mOBS_ACT . mX [ 73ULL ] =
Battery_Battery_Table_Based1_electricalModel_v ; out -> mOBS_ACT . mX [ 74ULL
] = 1.0 ; out -> mOBS_ACT . mX [ 75ULL ] = 1.0 ; out -> mOBS_ACT . mX [ 76ULL
] = 1.0 ; out -> mOBS_ACT . mX [ 77ULL ] = 1.0 ; out -> mOBS_ACT . mX [ 78ULL
] = 1.0 ; out -> mOBS_ACT . mX [ 79ULL ] =
Battery_Battery_Table_Based1_electricalModel_i ; out -> mOBS_ACT . mX [ 80ULL
] = t51 -> mX . mX [ 33ULL ] ; out -> mOBS_ACT . mX [ 81ULL ] = t51 -> mX .
mX [ 10ULL ] ; out -> mOBS_ACT . mX [ 82ULL ] = t51 -> mX . mX [ 27ULL ] ;
out -> mOBS_ACT . mX [ 83ULL ] = t51 -> mX . mX [ 34ULL ] ; out -> mOBS_ACT .
mX [ 84ULL ] = t51 -> mX . mX [ 34ULL ] ; out -> mOBS_ACT . mX [ 85ULL ] =
t51 -> mX . mX [ 8ULL ] ; out -> mOBS_ACT . mX [ 86ULL ] = t51 -> mX . mX [
8ULL ] ; out -> mOBS_ACT . mX [ 87ULL ] = ( ( t51 -> mX . mX [ 0ULL ] *
0.00050950000000000008 + t51 -> mX . mX [ 8ULL ] * - 0.0010190000000000002 )
+ t51 -> mX . mX [ 16ULL ] * 0.00050950000000000008 ) * 1000.0 ; out ->
mOBS_ACT . mX [ 88ULL ] = t51 -> mX . mX [ 8ULL ] ; out -> mOBS_ACT . mX [
89ULL ] = t51 -> mX . mX [ 8ULL ] ; out -> mOBS_ACT . mX [ 90ULL ] = t51 ->
mX . mX [ 36ULL ] * 1000.0 ; out -> mOBS_ACT . mX [ 91ULL ] =
Battery_Battery_Table_Based1_electricalModel_v ; out -> mOBS_ACT . mX [ 92ULL
] = t51 -> mX . mX [ 34ULL ] ; out -> mOBS_ACT . mX [ 93ULL ] = t51 -> mX .
mX [ 16ULL ] ; out -> mOBS_ACT . mX [ 94ULL ] = t51 -> mX . mX [ 16ULL ] ;
out -> mOBS_ACT . mX [ 95ULL ] = t51 -> mX . mX [ 16ULL ] ; out -> mOBS_ACT .
mX [ 96ULL ] = t51 -> mX . mX [ 16ULL ] ; out -> mOBS_ACT . mX [ 97ULL ] =
t51 -> mX . mX [ 17ULL ] * 0.00027777777777777778 ; out -> mOBS_ACT . mX [
98ULL ] = t51 -> mX . mX [ 16ULL ] ; out -> mOBS_ACT . mX [ 99ULL ] =
Battery_Battery_Table_Based2_electricalModel_i ; out -> mOBS_ACT . mX [
100ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 101ULL ] = t51 -> mX . mX [ 18ULL ] ;
out -> mOBS_ACT . mX [ 102ULL ] = t51 -> mX . mX [ 18ULL ] ; out -> mOBS_ACT
. mX [ 103ULL ] = t51 -> mX . mX [ 39ULL ] ; out -> mOBS_ACT . mX [ 104ULL ]
= 1.0 ; out -> mOBS_ACT . mX [ 105ULL ] = t51 -> mX . mX [ 33ULL ] ; for (
t10 = 19ULL ; t10 - 19ULL < 5ULL ; t10 ++ ) { out -> mOBS_ACT . mX [ t10 +
87ULL ] = t51 -> mX . mX [ t10 + 0ULL ] ; } for ( t10 = 0ULL ; t10 < 5ULL ;
t10 ++ ) { out -> mOBS_ACT . mX [ t10 + 111ULL ] =
Battery_Battery_Table_Based2_electricalModel_xGdynamic [ t10 ] ; } out ->
mOBS_ACT . mX [ 116ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 117ULL ] = 1.0 ; out
-> mOBS_ACT . mX [ 118ULL ] = t51 -> mX . mX [ 41ULL ] * 1000.0 ; out ->
mOBS_ACT . mX [ 119ULL ] = t51 -> mX . mX [ 39ULL ] ; out -> mOBS_ACT . mX [
120ULL ] = t51 -> mX . mX [ 33ULL ] ; out -> mOBS_ACT . mX [ 121ULL ] = 1.0 ;
out -> mOBS_ACT . mX [ 122ULL ] = 1.0 ; out -> mOBS_ACT . mX [ 123ULL ] = 1.0
; out -> mOBS_ACT . mX [ 124ULL ] = 1.0 ; out -> mOBS_ACT . mX [ 125ULL ] =
1.0 ; out -> mOBS_ACT . mX [ 126ULL ] =
Battery_Battery_Table_Based2_electricalModel_i ; out -> mOBS_ACT . mX [
127ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 128ULL ] = t51 -> mX . mX [ 18ULL ] ;
out -> mOBS_ACT . mX [ 129ULL ] = t51 -> mX . mX [ 33ULL ] ; out -> mOBS_ACT
. mX [ 130ULL ] = t51 -> mX . mX [ 39ULL ] ; out -> mOBS_ACT . mX [ 131ULL ]
= t51 -> mX . mX [ 39ULL ] ; out -> mOBS_ACT . mX [ 132ULL ] = t51 -> mX . mX
[ 16ULL ] ; out -> mOBS_ACT . mX [ 133ULL ] = t51 -> mX . mX [ 16ULL ] ; out
-> mOBS_ACT . mX [ 134ULL ] = Battery_Battery_Table_Based2_thermalModel_Q *
1000.0 ; out -> mOBS_ACT . mX [ 135ULL ] = t51 -> mX . mX [ 16ULL ] ; out ->
mOBS_ACT . mX [ 136ULL ] = t51 -> mX . mX [ 16ULL ] ; out -> mOBS_ACT . mX [
137ULL ] = t51 -> mX . mX [ 41ULL ] * 1000.0 ; out -> mOBS_ACT . mX [ 138ULL
] = t51 -> mX . mX [ 33ULL ] ; out -> mOBS_ACT . mX [ 139ULL ] = t51 -> mX .
mX [ 39ULL ] ; out -> mOBS_ACT . mX [ 140ULL ] = t51 -> mX . mX [ 28ULL ] ;
out -> mOBS_ACT . mX [ 141ULL ] = t51 -> mX . mX [ 8ULL ] ; out -> mOBS_ACT .
mX [ 142ULL ] = t51 -> mX . mX [ 0ULL ] ; out -> mOBS_ACT . mX [ 143ULL ] =
Battery_Convective_Heat_Transfer1_Q * 1000.0 ; out -> mOBS_ACT . mX [ 144ULL
] = Battery_Convective_Heat_Transfer1_Q * 1962.708537782139 ; out -> mOBS_ACT
. mX [ 145ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 146ULL ] = t51 -> mX . mX [
16ULL ] ; out -> mOBS_ACT . mX [ 147ULL ] = t51 -> mX . mX [ 8ULL ] ; out ->
mOBS_ACT . mX [ 148ULL ] = Battery_Battery_Table_Based2_thermalModel_Q * -
1000.0 ; out -> mOBS_ACT . mX [ 149ULL ] =
Battery_Battery_Table_Based2_thermalModel_Q * - 1962.708537782139 ; out ->
mOBS_ACT . mX [ 150ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 151ULL ] =
Battery_Current_Sensor_I ; out -> mOBS_ACT . mX [ 152ULL ] =
Battery_Current_Sensor_I ; out -> mOBS_ACT . mX [ 153ULL ] = t51 -> mX . mX [
33ULL ] ; out -> mOBS_ACT . mX [ 154ULL ] = t51 -> mX . mX [ 33ULL ] ; out ->
mOBS_ACT . mX [ 155ULL ] = Battery_Current_Sensor1_I ; out -> mOBS_ACT . mX [
156ULL ] = Battery_Current_Sensor1_I ; out -> mOBS_ACT . mX [ 157ULL ] = t51
-> mX . mX [ 27ULL ] ; out -> mOBS_ACT . mX [ 158ULL ] = t51 -> mX . mX [
27ULL ] ; out -> mOBS_ACT . mX [ 159ULL ] = Battery_Current_Sensor1_I ; out
-> mOBS_ACT . mX [ 160ULL ] = Battery_Current_Sensor2_I ; out -> mOBS_ACT .
mX [ 161ULL ] = Battery_Current_Sensor2_I ; out -> mOBS_ACT . mX [ 162ULL ] =
t51 -> mX . mX [ 24ULL ] ; out -> mOBS_ACT . mX [ 163ULL ] = t51 -> mX . mX [
24ULL ] ; out -> mOBS_ACT . mX [ 164ULL ] = Battery_Current_Sensor2_I ; out
-> mOBS_ACT . mX [ 165ULL ] = Battery_Current_Sensor_I ; out -> mOBS_ACT . mX
[ 166ULL ] = t51 -> mX . mX [ 25ULL ] ; out -> mOBS_ACT . mX [ 167ULL ] = t51
-> mU . mX [ 5ULL ] ; out -> mOBS_ACT . mX [ 168ULL ] = 0.0 ; out -> mOBS_ACT
. mX [ 169ULL ] = t51 -> mX . mX [ 27ULL ] ; out -> mOBS_ACT . mX [ 170ULL ]
= - 1.0 ; out -> mOBS_ACT . mX [ 171ULL ] = 1.0 ; out -> mOBS_ACT . mX [
172ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 173ULL ] =
Battery_MOSFET_Ideal_Switching_diode_i ; out -> mOBS_ACT . mX [ 174ULL ] =
t51 -> mX . mX [ 25ULL ] ; out -> mOBS_ACT . mX [ 175ULL ] = t51 -> mX . mX [
27ULL ] ; out -> mOBS_ACT . mX [ 176ULL ] = t51 -> mX . mX [ 43ULL ] ; out ->
mOBS_ACT . mX [ 177ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 178ULL ] = - t51 ->
mX . mX [ 25ULL ] + t51 -> mX . mX [ 27ULL ] ; out -> mOBS_ACT . mX [ 179ULL
] = t51 -> mX . mX [ 25ULL ] ; out -> mOBS_ACT . mX [ 180ULL ] = 0.0 ; out ->
mOBS_ACT . mX [ 181ULL ] = 298.15 ; out -> mOBS_ACT . mX [ 182ULL ] = 298.15
; out -> mOBS_ACT . mX [ 183ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 184ULL ] =
0.0 ; out -> mOBS_ACT . mX [ 185ULL ] =
Battery_MOSFET_Ideal_Switching_diode_i ; out -> mOBS_ACT . mX [ 186ULL ] =
0.0 ; out -> mOBS_ACT . mX [ 187ULL ] =
Battery_MOSFET_Ideal_Switching_diode_i ; out -> mOBS_ACT . mX [ 188ULL ] =
Battery_MOSFET_Ideal_Switching_diode_i ; out -> mOBS_ACT . mX [ 189ULL ] =
t51 -> mX . mX [ 25ULL ] ; out -> mOBS_ACT . mX [ 190ULL ] = t51 -> mX . mX [
27ULL ] ; out -> mOBS_ACT . mX [ 191ULL ] =
Battery_MOSFET_Ideal_Switching_diode_i *
Battery_MOSFET_Ideal_Switching_diode_v_diode * 0.001 * 1000.0 ; out ->
mOBS_ACT . mX [ 192ULL ] = Battery_MOSFET_Ideal_Switching_diode_v_diode ; out
-> mOBS_ACT . mX [ 193ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 194ULL ] =
Battery_MOSFET_Ideal_Switching_diode_v_diode ; out -> mOBS_ACT . mX [ 195ULL
] = t51 -> mX . mX [ 42ULL ] - Battery_MOSFET_Ideal_Switching_diode_i ; out
-> mOBS_ACT . mX [ 196ULL ] = t51 -> mU . mX [ 5ULL ] ; out -> mOBS_ACT . mX
[ 197ULL ] = t51 -> mX . mX [ 42ULL ] ; out -> mOBS_ACT . mX [ 198ULL ] = t51
-> mX . mX [ 27ULL ] ; out -> mOBS_ACT . mX [ 199ULL ] = t51 -> mX . mX [
25ULL ] ; out -> mOBS_ACT . mX [ 200ULL ] = t51 -> mX . mX [ 42ULL ] * t15 *
0.001 * 1000.0 ; out -> mOBS_ACT . mX [ 201ULL ] = t15 ; out -> mOBS_ACT . mX
[ 202ULL ] = t51 -> mU . mX [ 5ULL ] ; out -> mOBS_ACT . mX [ 203ULL ] = t51
-> mX . mX [ 25ULL ] - t51 -> mX . mX [ 27ULL ] ; out -> mOBS_ACT . mX [
204ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 205ULL ] = t51 -> mX . mX [ 26ULL ] ;
out -> mOBS_ACT . mX [ 206ULL ] = t51 -> mU . mX [ 0ULL ] ; out -> mOBS_ACT .
mX [ 207ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 208ULL ] = t51 -> mX . mX [
27ULL ] ; out -> mOBS_ACT . mX [ 209ULL ] = - 1.0 ; out -> mOBS_ACT . mX [
210ULL ] = 1.0 ; out -> mOBS_ACT . mX [ 211ULL ] = 0.0 ; out -> mOBS_ACT . mX
[ 212ULL ] = Battery_MOSFET_Ideal_Switching1_diode_i ; out -> mOBS_ACT . mX [
213ULL ] = t51 -> mX . mX [ 26ULL ] ; out -> mOBS_ACT . mX [ 214ULL ] = t51
-> mX . mX [ 27ULL ] ; out -> mOBS_ACT . mX [ 215ULL ] = t51 -> mX . mX [
45ULL ] ; out -> mOBS_ACT . mX [ 216ULL ] = 0.0 ; out -> mOBS_ACT . mX [
217ULL ] = - t51 -> mX . mX [ 26ULL ] + t51 -> mX . mX [ 27ULL ] ; out ->
mOBS_ACT . mX [ 218ULL ] = t51 -> mX . mX [ 26ULL ] ; out -> mOBS_ACT . mX [
219ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 220ULL ] = 298.15 ; out -> mOBS_ACT .
mX [ 221ULL ] = 298.15 ; out -> mOBS_ACT . mX [ 222ULL ] = 0.0 ; out ->
mOBS_ACT . mX [ 223ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 224ULL ] =
Battery_MOSFET_Ideal_Switching1_diode_i ; out -> mOBS_ACT . mX [ 225ULL ] =
0.0 ; out -> mOBS_ACT . mX [ 226ULL ] =
Battery_MOSFET_Ideal_Switching1_diode_i ; out -> mOBS_ACT . mX [ 227ULL ] =
Battery_MOSFET_Ideal_Switching1_diode_i ; out -> mOBS_ACT . mX [ 228ULL ] =
t51 -> mX . mX [ 26ULL ] ; out -> mOBS_ACT . mX [ 229ULL ] = t51 -> mX . mX [
27ULL ] ; out -> mOBS_ACT . mX [ 230ULL ] =
Battery_MOSFET_Ideal_Switching1_diode_i *
Battery_MOSFET_Ideal_Switching1_diode_v_diode * 0.001 * 1000.0 ; out ->
mOBS_ACT . mX [ 231ULL ] = Battery_MOSFET_Ideal_Switching1_diode_v_diode ;
out -> mOBS_ACT . mX [ 232ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 233ULL ] =
Battery_MOSFET_Ideal_Switching1_diode_v_diode ; out -> mOBS_ACT . mX [ 234ULL
] = t51 -> mX . mX [ 44ULL ] - Battery_MOSFET_Ideal_Switching1_diode_i ; out
-> mOBS_ACT . mX [ 235ULL ] = t51 -> mU . mX [ 0ULL ] ; out -> mOBS_ACT . mX
[ 236ULL ] = t51 -> mX . mX [ 44ULL ] ; out -> mOBS_ACT . mX [ 237ULL ] = t51
-> mX . mX [ 27ULL ] ; out -> mOBS_ACT . mX [ 238ULL ] = t51 -> mX . mX [
26ULL ] ; out -> mOBS_ACT . mX [ 239ULL ] = t51 -> mX . mX [ 44ULL ] * t20 *
0.001 * 1000.0 ; out -> mOBS_ACT . mX [ 240ULL ] = t20 ; out -> mOBS_ACT . mX
[ 241ULL ] = t51 -> mU . mX [ 0ULL ] ; out -> mOBS_ACT . mX [ 242ULL ] = t51
-> mX . mX [ 26ULL ] - t51 -> mX . mX [ 27ULL ] ; out -> mOBS_ACT . mX [
243ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 244ULL ] = t51 -> mX . mX [ 37ULL ] ;
out -> mOBS_ACT . mX [ 245ULL ] = t51 -> mU . mX [ 3ULL ] ; out -> mOBS_ACT .
mX [ 246ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 247ULL ] = 0.0 ; out -> mOBS_ACT
. mX [ 248ULL ] = - 1.0 ; out -> mOBS_ACT . mX [ 249ULL ] = 1.0 ; out ->
mOBS_ACT . mX [ 250ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 251ULL ] =
Battery_MOSFET_Ideal_Switching2_diode_i ; out -> mOBS_ACT . mX [ 252ULL ] =
t51 -> mX . mX [ 37ULL ] ; out -> mOBS_ACT . mX [ 253ULL ] = 0.0 ; out ->
mOBS_ACT . mX [ 254ULL ] = t51 -> mX . mX [ 47ULL ] ; out -> mOBS_ACT . mX [
255ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 256ULL ] = - t51 -> mX . mX [ 37ULL ]
; out -> mOBS_ACT . mX [ 257ULL ] = t51 -> mX . mX [ 37ULL ] ; out ->
mOBS_ACT . mX [ 258ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 259ULL ] = 298.15 ;
out -> mOBS_ACT . mX [ 260ULL ] = 298.15 ; out -> mOBS_ACT . mX [ 261ULL ] =
0.0 ; out -> mOBS_ACT . mX [ 262ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 263ULL ]
= Battery_MOSFET_Ideal_Switching2_diode_i ; out -> mOBS_ACT . mX [ 264ULL ] =
0.0 ; out -> mOBS_ACT . mX [ 265ULL ] =
Battery_MOSFET_Ideal_Switching2_diode_i ; out -> mOBS_ACT . mX [ 266ULL ] =
Battery_MOSFET_Ideal_Switching2_diode_i ; out -> mOBS_ACT . mX [ 267ULL ] =
t51 -> mX . mX [ 37ULL ] ; out -> mOBS_ACT . mX [ 268ULL ] = 0.0 ; out ->
mOBS_ACT . mX [ 269ULL ] = Battery_MOSFET_Ideal_Switching2_diode_i * - t51 ->
mX . mX [ 37ULL ] * 0.001 * 1000.0 ; out -> mOBS_ACT . mX [ 270ULL ] = - t51
-> mX . mX [ 37ULL ] ; out -> mOBS_ACT . mX [ 271ULL ] = 0.0 ; out ->
mOBS_ACT . mX [ 272ULL ] = - t51 -> mX . mX [ 37ULL ] ; out -> mOBS_ACT . mX
[ 273ULL ] = t51 -> mX . mX [ 46ULL ] -
Battery_MOSFET_Ideal_Switching2_diode_i ; out -> mOBS_ACT . mX [ 274ULL ] =
t51 -> mU . mX [ 3ULL ] ; out -> mOBS_ACT . mX [ 275ULL ] = t51 -> mX . mX [
46ULL ] ; out -> mOBS_ACT . mX [ 276ULL ] = 0.0 ; out -> mOBS_ACT . mX [
277ULL ] = t51 -> mX . mX [ 37ULL ] ; out -> mOBS_ACT . mX [ 278ULL ] = t51
-> mX . mX [ 37ULL ] * t51 -> mX . mX [ 46ULL ] * 0.001 * 1000.0 ; out ->
mOBS_ACT . mX [ 279ULL ] = t51 -> mX . mX [ 37ULL ] ; out -> mOBS_ACT . mX [
280ULL ] = t51 -> mU . mX [ 3ULL ] ; out -> mOBS_ACT . mX [ 281ULL ] = t51 ->
mX . mX [ 37ULL ] ; out -> mOBS_ACT . mX [ 282ULL ] = 0.0 ; out -> mOBS_ACT .
mX [ 283ULL ] = t51 -> mX . mX [ 38ULL ] ; out -> mOBS_ACT . mX [ 284ULL ] =
t51 -> mU . mX [ 4ULL ] ; out -> mOBS_ACT . mX [ 285ULL ] = 0.0 ; out ->
mOBS_ACT . mX [ 286ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 287ULL ] = - 1.0 ;
out -> mOBS_ACT . mX [ 288ULL ] = 1.0 ; out -> mOBS_ACT . mX [ 289ULL ] = 0.0
; out -> mOBS_ACT . mX [ 290ULL ] = Battery_MOSFET_Ideal_Switching3_diode_i ;
out -> mOBS_ACT . mX [ 291ULL ] = t51 -> mX . mX [ 38ULL ] ; out -> mOBS_ACT
. mX [ 292ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 293ULL ] = t51 -> mX . mX [
49ULL ] ; out -> mOBS_ACT . mX [ 294ULL ] = 0.0 ; out -> mOBS_ACT . mX [
295ULL ] = - t51 -> mX . mX [ 38ULL ] ; out -> mOBS_ACT . mX [ 296ULL ] = t51
-> mX . mX [ 38ULL ] ; out -> mOBS_ACT . mX [ 297ULL ] = 0.0 ; out ->
mOBS_ACT . mX [ 298ULL ] = 298.15 ; out -> mOBS_ACT . mX [ 299ULL ] = 298.15
; out -> mOBS_ACT . mX [ 300ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 301ULL ] =
0.0 ; out -> mOBS_ACT . mX [ 302ULL ] =
Battery_MOSFET_Ideal_Switching3_diode_i ; out -> mOBS_ACT . mX [ 303ULL ] =
0.0 ; out -> mOBS_ACT . mX [ 304ULL ] =
Battery_MOSFET_Ideal_Switching3_diode_i ; out -> mOBS_ACT . mX [ 305ULL ] =
Battery_MOSFET_Ideal_Switching3_diode_i ; out -> mOBS_ACT . mX [ 306ULL ] =
t51 -> mX . mX [ 38ULL ] ; out -> mOBS_ACT . mX [ 307ULL ] = 0.0 ; out ->
mOBS_ACT . mX [ 308ULL ] = Battery_MOSFET_Ideal_Switching3_diode_i * - t51 ->
mX . mX [ 38ULL ] * 0.001 * 1000.0 ; out -> mOBS_ACT . mX [ 309ULL ] = - t51
-> mX . mX [ 38ULL ] ; out -> mOBS_ACT . mX [ 310ULL ] = 0.0 ; out ->
mOBS_ACT . mX [ 311ULL ] = - t51 -> mX . mX [ 38ULL ] ; out -> mOBS_ACT . mX
[ 312ULL ] = t51 -> mX . mX [ 48ULL ] -
Battery_MOSFET_Ideal_Switching3_diode_i ; out -> mOBS_ACT . mX [ 313ULL ] =
t51 -> mU . mX [ 4ULL ] ; out -> mOBS_ACT . mX [ 314ULL ] = t51 -> mX . mX [
48ULL ] ; out -> mOBS_ACT . mX [ 315ULL ] = 0.0 ; out -> mOBS_ACT . mX [
316ULL ] = t51 -> mX . mX [ 38ULL ] ; out -> mOBS_ACT . mX [ 317ULL ] = t51
-> mX . mX [ 38ULL ] * t51 -> mX . mX [ 48ULL ] * 0.001 * 1000.0 ; out ->
mOBS_ACT . mX [ 318ULL ] = t51 -> mX . mX [ 38ULL ] ; out -> mOBS_ACT . mX [
319ULL ] = t51 -> mU . mX [ 4ULL ] ; out -> mOBS_ACT . mX [ 320ULL ] = t51 ->
mX . mX [ 38ULL ] ; out -> mOBS_ACT . mX [ 321ULL ] = 0.0 ; out -> mOBS_ACT .
mX [ 322ULL ] = t51 -> mX . mX [ 31ULL ] ; out -> mOBS_ACT . mX [ 323ULL ] =
t51 -> mU . mX [ 1ULL ] ; out -> mOBS_ACT . mX [ 324ULL ] = 0.0 ; out ->
mOBS_ACT . mX [ 325ULL ] = t51 -> mX . mX [ 33ULL ] ; out -> mOBS_ACT . mX [
326ULL ] = - 1.0 ; out -> mOBS_ACT . mX [ 327ULL ] = 1.0 ; out -> mOBS_ACT .
mX [ 328ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 329ULL ] =
Battery_MOSFET_Ideal_Switching4_diode_i ; out -> mOBS_ACT . mX [ 330ULL ] =
t51 -> mX . mX [ 31ULL ] ; out -> mOBS_ACT . mX [ 331ULL ] = t51 -> mX . mX [
33ULL ] ; out -> mOBS_ACT . mX [ 332ULL ] = t51 -> mX . mX [ 51ULL ] ; out ->
mOBS_ACT . mX [ 333ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 334ULL ] = - t51 ->
mX . mX [ 31ULL ] + t51 -> mX . mX [ 33ULL ] ; out -> mOBS_ACT . mX [ 335ULL
] = t51 -> mX . mX [ 31ULL ] ; out -> mOBS_ACT . mX [ 336ULL ] = 0.0 ; out ->
mOBS_ACT . mX [ 337ULL ] = 298.15 ; out -> mOBS_ACT . mX [ 338ULL ] = 298.15
; out -> mOBS_ACT . mX [ 339ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 340ULL ] =
0.0 ; out -> mOBS_ACT . mX [ 341ULL ] =
Battery_MOSFET_Ideal_Switching4_diode_i ; out -> mOBS_ACT . mX [ 342ULL ] =
0.0 ; out -> mOBS_ACT . mX [ 343ULL ] =
Battery_MOSFET_Ideal_Switching4_diode_i ; out -> mOBS_ACT . mX [ 344ULL ] =
Battery_MOSFET_Ideal_Switching4_diode_i ; out -> mOBS_ACT . mX [ 345ULL ] =
t51 -> mX . mX [ 31ULL ] ; out -> mOBS_ACT . mX [ 346ULL ] = t51 -> mX . mX [
33ULL ] ; out -> mOBS_ACT . mX [ 347ULL ] =
Battery_MOSFET_Ideal_Switching4_diode_i *
Battery_MOSFET_Ideal_Switching4_diode_v_diode * 0.001 * 1000.0 ; out ->
mOBS_ACT . mX [ 348ULL ] = Battery_MOSFET_Ideal_Switching4_diode_v_diode ;
out -> mOBS_ACT . mX [ 349ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 350ULL ] =
Battery_MOSFET_Ideal_Switching4_diode_v_diode ; out -> mOBS_ACT . mX [ 351ULL
] = t51 -> mX . mX [ 50ULL ] - Battery_MOSFET_Ideal_Switching4_diode_i ; out
-> mOBS_ACT . mX [ 352ULL ] = t51 -> mU . mX [ 1ULL ] ; out -> mOBS_ACT . mX
[ 353ULL ] = t51 -> mX . mX [ 50ULL ] ; out -> mOBS_ACT . mX [ 354ULL ] = t51
-> mX . mX [ 33ULL ] ; out -> mOBS_ACT . mX [ 355ULL ] = t51 -> mX . mX [
31ULL ] ; out -> mOBS_ACT . mX [ 356ULL ] = t51 -> mX . mX [ 50ULL ] * t35 *
0.001 * 1000.0 ; out -> mOBS_ACT . mX [ 357ULL ] = t35 ; out -> mOBS_ACT . mX
[ 358ULL ] = t51 -> mU . mX [ 1ULL ] ; out -> mOBS_ACT . mX [ 359ULL ] = t51
-> mX . mX [ 31ULL ] - t51 -> mX . mX [ 33ULL ] ; out -> mOBS_ACT . mX [
360ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 361ULL ] = t51 -> mX . mX [ 32ULL ] ;
out -> mOBS_ACT . mX [ 362ULL ] = t51 -> mU . mX [ 2ULL ] ; out -> mOBS_ACT .
mX [ 363ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 364ULL ] = t51 -> mX . mX [
33ULL ] ; out -> mOBS_ACT . mX [ 365ULL ] = - 1.0 ; out -> mOBS_ACT . mX [
366ULL ] = 1.0 ; out -> mOBS_ACT . mX [ 367ULL ] = 0.0 ; out -> mOBS_ACT . mX
[ 368ULL ] = Battery_MOSFET_Ideal_Switching5_diode_i ; out -> mOBS_ACT . mX [
369ULL ] = t51 -> mX . mX [ 32ULL ] ; out -> mOBS_ACT . mX [ 370ULL ] = t51
-> mX . mX [ 33ULL ] ; out -> mOBS_ACT . mX [ 371ULL ] = t51 -> mX . mX [
53ULL ] ; out -> mOBS_ACT . mX [ 372ULL ] = 0.0 ; out -> mOBS_ACT . mX [
373ULL ] = - t51 -> mX . mX [ 32ULL ] + t51 -> mX . mX [ 33ULL ] ; out ->
mOBS_ACT . mX [ 374ULL ] = t51 -> mX . mX [ 32ULL ] ; out -> mOBS_ACT . mX [
375ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 376ULL ] = 298.15 ; out -> mOBS_ACT .
mX [ 377ULL ] = 298.15 ; out -> mOBS_ACT . mX [ 378ULL ] = 0.0 ; out ->
mOBS_ACT . mX [ 379ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 380ULL ] =
Battery_MOSFET_Ideal_Switching5_diode_i ; out -> mOBS_ACT . mX [ 381ULL ] =
0.0 ; out -> mOBS_ACT . mX [ 382ULL ] =
Battery_MOSFET_Ideal_Switching5_diode_i ; out -> mOBS_ACT . mX [ 383ULL ] =
Battery_MOSFET_Ideal_Switching5_diode_i ; out -> mOBS_ACT . mX [ 384ULL ] =
t51 -> mX . mX [ 32ULL ] ; out -> mOBS_ACT . mX [ 385ULL ] = t51 -> mX . mX [
33ULL ] ; out -> mOBS_ACT . mX [ 386ULL ] =
Battery_MOSFET_Ideal_Switching5_diode_i *
Battery_MOSFET_Ideal_Switching5_diode_v_diode * 0.001 * 1000.0 ; out ->
mOBS_ACT . mX [ 387ULL ] = Battery_MOSFET_Ideal_Switching5_diode_v_diode ;
out -> mOBS_ACT . mX [ 388ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 389ULL ] =
Battery_MOSFET_Ideal_Switching5_diode_v_diode ; out -> mOBS_ACT . mX [ 390ULL
] = t51 -> mX . mX [ 52ULL ] - Battery_MOSFET_Ideal_Switching5_diode_i ; out
-> mOBS_ACT . mX [ 391ULL ] = t51 -> mU . mX [ 2ULL ] ; out -> mOBS_ACT . mX
[ 392ULL ] = t51 -> mX . mX [ 52ULL ] ; out -> mOBS_ACT . mX [ 393ULL ] = t51
-> mX . mX [ 33ULL ] ; out -> mOBS_ACT . mX [ 394ULL ] = t51 -> mX . mX [
32ULL ] ; out -> mOBS_ACT . mX [ 395ULL ] = t51 -> mX . mX [ 52ULL ] * t40 *
0.001 * 1000.0 ; out -> mOBS_ACT . mX [ 396ULL ] = t40 ; out -> mOBS_ACT . mX
[ 397ULL ] = t51 -> mU . mX [ 2ULL ] ; out -> mOBS_ACT . mX [ 398ULL ] = t51
-> mX . mX [ 32ULL ] - t51 -> mX . mX [ 33ULL ] ; out -> mOBS_ACT . mX [
399ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 400ULL ] = 293.15 ; out -> mOBS_ACT .
mX [ 401ULL ] = t51 -> mX . mX [ 16ULL ] ; out -> mOBS_ACT . mX [ 402ULL ] =
t51 -> mX . mX [ 16ULL ] ; out -> mOBS_ACT . mX [ 403ULL ] = t42 ; out ->
mOBS_ACT . mX [ 404ULL ] = t51 -> mX . mX [ 25ULL ] ; out -> mOBS_ACT . mX [
405ULL ] = t51 -> mX . mX [ 24ULL ] ; out -> mOBS_ACT . mX [ 406ULL ] = t42 *
20.0 ; out -> mOBS_ACT . mX [ 407ULL ] = Battery_Resistor1_i ; out ->
mOBS_ACT . mX [ 408ULL ] = t51 -> mX . mX [ 31ULL ] ; out -> mOBS_ACT . mX [
409ULL ] = t51 -> mX . mX [ 27ULL ] ; out -> mOBS_ACT . mX [ 410ULL ] =
Battery_Resistor1_i * 20.0 ; out -> mOBS_ACT . mX [ 411ULL ] =
Battery_Resistor2_i ; out -> mOBS_ACT . mX [ 412ULL ] = t51 -> mX . mX [
37ULL ] ; out -> mOBS_ACT . mX [ 413ULL ] = t51 -> mX . mX [ 33ULL ] ; out ->
mOBS_ACT . mX [ 414ULL ] = Battery_Resistor2_i * 20.0 ; out -> mOBS_ACT . mX
[ 415ULL ] = Battery_Resistor3_i ; out -> mOBS_ACT . mX [ 416ULL ] = t51 ->
mX . mX [ 26ULL ] ; out -> mOBS_ACT . mX [ 417ULL ] = t51 -> mX . mX [ 24ULL
] ; out -> mOBS_ACT . mX [ 418ULL ] = Battery_Resistor3_i * 20.0 ; out ->
mOBS_ACT . mX [ 419ULL ] = Battery_Resistor4_i ; out -> mOBS_ACT . mX [
420ULL ] = t51 -> mX . mX [ 32ULL ] ; out -> mOBS_ACT . mX [ 421ULL ] = t51
-> mX . mX [ 27ULL ] ; out -> mOBS_ACT . mX [ 422ULL ] = Battery_Resistor4_i
* 20.0 ; out -> mOBS_ACT . mX [ 423ULL ] = Battery_Resistor5_i ; out ->
mOBS_ACT . mX [ 424ULL ] = t51 -> mX . mX [ 38ULL ] ; out -> mOBS_ACT . mX [
425ULL ] = t51 -> mX . mX [ 33ULL ] ; out -> mOBS_ACT . mX [ 426ULL ] =
Battery_Resistor5_i * 20.0 ; out -> mOBS_ACT . mX [ 427ULL ] = t51 -> mU . mX
[ 0ULL ] ; out -> mOBS_ACT . mX [ 428ULL ] = t51 -> mU . mX [ 1ULL ] ; out ->
mOBS_ACT . mX [ 429ULL ] = t51 -> mU . mX [ 2ULL ] ; out -> mOBS_ACT . mX [
430ULL ] = t51 -> mU . mX [ 3ULL ] ; out -> mOBS_ACT . mX [ 431ULL ] = t51 ->
mU . mX [ 4ULL ] ; out -> mOBS_ACT . mX [ 432ULL ] = t51 -> mU . mX [ 5ULL ]
; out -> mOBS_ACT . mX [ 433ULL ] =
Battery_Battery_Table_Based_electricalModel_i ; out -> mOBS_ACT . mX [ 434ULL
] = Battery_Battery_Table_Based_electricalModel_i ; out -> mOBS_ACT . mX [
435ULL ] = t51 -> mX . mX [ 24ULL ] ; out -> mOBS_ACT . mX [ 436ULL ] = t51
-> mX . mX [ 24ULL ] ; out -> mOBS_ACT . mX [ 437ULL ] =
Battery_Battery_Table_Based_electricalModel_i ; out -> mOBS_ACT . mX [ 438ULL
] = t51 -> mX . mX [ 24ULL ] ; out -> mOBS_ACT . mX [ 439ULL ] = t51 -> mX .
mX [ 24ULL ] ; out -> mOBS_ACT . mX [ 440ULL ] =
Battery_Battery_Table_Based1_electricalModel_i ; out -> mOBS_ACT . mX [
441ULL ] = Battery_Battery_Table_Based1_electricalModel_i ; out -> mOBS_ACT .
mX [ 442ULL ] = t51 -> mX . mX [ 27ULL ] ; out -> mOBS_ACT . mX [ 443ULL ] =
t51 -> mX . mX [ 27ULL ] ; out -> mOBS_ACT . mX [ 444ULL ] =
Battery_Battery_Table_Based1_electricalModel_i ; out -> mOBS_ACT . mX [
445ULL ] = t51 -> mX . mX [ 27ULL ] ; out -> mOBS_ACT . mX [ 446ULL ] = t51
-> mX . mX [ 27ULL ] ; out -> mOBS_ACT . mX [ 447ULL ] =
Battery_Battery_Table_Based2_electricalModel_i ; out -> mOBS_ACT . mX [
448ULL ] = Battery_Battery_Table_Based2_electricalModel_i ; out -> mOBS_ACT .
mX [ 449ULL ] = t51 -> mX . mX [ 33ULL ] ; out -> mOBS_ACT . mX [ 450ULL ] =
t51 -> mX . mX [ 33ULL ] ; out -> mOBS_ACT . mX [ 451ULL ] =
Battery_Battery_Table_Based2_electricalModel_i ; out -> mOBS_ACT . mX [
452ULL ] = t51 -> mX . mX [ 33ULL ] ; out -> mOBS_ACT . mX [ 453ULL ] = t51
-> mX . mX [ 33ULL ] ; out -> mOBS_ACT . mX [ 454ULL ] = t51 -> mX . mX [
0ULL ] ; out -> mOBS_ACT . mX [ 455ULL ] = t51 -> mX . mX [ 0ULL ] ; out ->
mOBS_ACT . mX [ 456ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 457ULL ] = t51 -> mX
. mX [ 0ULL ] ; out -> mOBS_ACT . mX [ 458ULL ] = t51 -> mX . mX [ 0ULL ] ;
out -> mOBS_ACT . mX [ 459ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 460ULL ] = t51
-> mX . mX [ 8ULL ] ; out -> mOBS_ACT . mX [ 461ULL ] = t51 -> mX . mX [ 8ULL
] ; out -> mOBS_ACT . mX [ 462ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 463ULL ] =
t51 -> mX . mX [ 8ULL ] ; out -> mOBS_ACT . mX [ 464ULL ] = t51 -> mX . mX [
8ULL ] ; out -> mOBS_ACT . mX [ 465ULL ] = 0.0 ; out -> mOBS_ACT . mX [
466ULL ] = t51 -> mX . mX [ 16ULL ] ; out -> mOBS_ACT . mX [ 467ULL ] = t51
-> mX . mX [ 16ULL ] ; out -> mOBS_ACT . mX [ 468ULL ] = 0.0 ; out ->
mOBS_ACT . mX [ 469ULL ] = t51 -> mX . mX [ 16ULL ] ; out -> mOBS_ACT . mX [
470ULL ] = t51 -> mX . mX [ 16ULL ] ; out -> mOBS_ACT . mX [ 471ULL ] = 0.0 ;
out -> mOBS_ACT . mX [ 472ULL ] = t51 -> mX . mX [ 0ULL ] ; out -> mOBS_ACT .
mX [ 473ULL ] = 293.15 ; out -> mOBS_ACT . mX [ 474ULL ] = 0.0 ; out ->
mOBS_ACT . mX [ 475ULL ] = 293.15 ; out -> mOBS_ACT . mX [ 476ULL ] = -
149.359925 + piece11 * 1000.0 ; out -> mOBS_ACT . mX [ 477ULL ] = 293.15 ;
out -> mOBS_ACT . mX [ 478ULL ] = 293.15 ; out -> mOBS_ACT . mX [ 479ULL ] =
t51 -> mX . mX [ 0ULL ] ; out -> mOBS_ACT . mX [ 480ULL ] = 293.15 ; out ->
mOBS_ACT . mX [ 481ULL ] = - 149.359925 + piece11 * 1000.0 ; out -> mOBS_ACT
. mX [ 482ULL ] = ( t51 -> mX . mX [ 0ULL ] * 0.00050950000000000008 -
0.149359925 ) * 1962.708537782139 ; out -> mOBS_ACT . mX [ 483ULL ] = 0.0 ;
out -> mOBS_ACT . mX [ 484ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 485ULL ] =
Battery_Voltage_Sensor_V ; out -> mOBS_ACT . mX [ 486ULL ] = t51 -> mX . mX [
27ULL ] ; out -> mOBS_ACT . mX [ 487ULL ] = t51 -> mX . mX [ 24ULL ] ; out ->
mOBS_ACT . mX [ 488ULL ] = t46 ; out -> mOBS_ACT . mX [ 489ULL ] = t51 -> mX
. mX [ 33ULL ] ; out -> mOBS_ACT . mX [ 490ULL ] = t51 -> mX . mX [ 27ULL ] ;
out -> mOBS_ACT . mX [ 491ULL ] = t46 ; out -> mOBS_ACT . mX [ 492ULL ] = t51
-> mX . mX [ 33ULL ] ; out -> mOBS_ACT . mX [ 493ULL ] = 0.0 ; out ->
mOBS_ACT . mX [ 494ULL ] = t51 -> mX . mX [ 33ULL ] ; out -> mOBS_ACT . mX [
495ULL ] = t51 -> mX . mX [ 33ULL ] ; out -> mOBS_ACT . mX [ 496ULL ] =
Battery_Voltage_Sensor_V ; out -> mOBS_ACT . mX [ 497ULL ] = t51 -> mX . mX [
24ULL ] ; out -> mOBS_ACT . mX [ 498ULL ] = 0.0 ; out -> mOBS_ACT . mX [
499ULL ] = t51 -> mX . mX [ 24ULL ] ; out -> mOBS_ACT . mX [ 500ULL ] = t51
-> mU . mX [ 6ULL ] ; out -> mOBS_ACT . mX [ 501ULL ] = t51 -> mU . mX [ 6ULL
] ; out -> mOBS_ACT . mX [ 502ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 503ULL ] =
- t51 -> mX . mX [ 24ULL ] ; out -> mOBS_ACT . mX [ 504ULL ] = 0.0 ; out ->
mOBS_ACT . mX [ 505ULL ] = t51 -> mU . mX [ 6ULL ] ; out -> mOBS_ACT . mX [
506ULL ] = t51 -> mX . mX [ 24ULL ] ; out -> mOBS_ACT . mX [ 507ULL ] = 0.0 ;
out -> mOBS_ACT . mX [ 508ULL ] = t51 -> mX . mX [ 24ULL ] ; out -> mOBS_ACT
. mX [ 509ULL ] = t51 -> mX . mX [ 24ULL ] ; ( void ) LC ; ( void ) out ;
return 0 ; }
