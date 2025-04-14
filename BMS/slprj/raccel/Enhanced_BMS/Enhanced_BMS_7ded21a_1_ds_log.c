#include "ne_ds.h"
#include "Enhanced_BMS_7ded21a_1_ds_sys_struct.h"
#include "Enhanced_BMS_7ded21a_1_ds_log.h"
#include "Enhanced_BMS_7ded21a_1_ds.h"
#include "Enhanced_BMS_7ded21a_1_ds_externals.h"
#include "Enhanced_BMS_7ded21a_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Enhanced_BMS_7ded21a_1_ds_log ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t123 , NeDsMethodOutput * out ) { static real_T
_cg_const_1 [ 3 ] = { 278.15 , 293.15 , 313.15 } ; ETTSf3049b48 t3 ;
ETTSf3049b48 t4 ; real_T
Battery_Battery_Table_Based1_electricalModel_xGdynamic [ 5 ] ; real_T
Battery_Battery_Table_Based2_electricalModel_xGdynamic [ 5 ] ; real_T
Battery_Battery_Table_Based_electricalModel_xGdynamic [ 5 ] ; real_T t53 [ 5
] ; real_T nonscalar2 [ 3 ] ; real_T t50 [ 1 ] ; real_T t54 [ 1 ] ; real_T
Battery_Battery_Table_Based1_electricalModel_i ; real_T
Battery_Battery_Table_Based1_electricalModel_ocv ; real_T
Battery_Battery_Table_Based2_electricalModel_i ; real_T
Battery_Battery_Table_Based2_electricalModel_ocv ; real_T
Battery_Battery_Table_Based_electricalModel_i ; real_T
Battery_Battery_Table_Based_electricalModel_ocv ; real_T
Battery_Current_Sensor1_I ; real_T Battery_Current_Sensor2_I ; real_T
Battery_Current_Sensor_I ; real_T Battery_MOSFET_Ideal_Switching1_diode_i ;
real_T Battery_MOSFET_Ideal_Switching1_diode_v_diode ; real_T
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
Battery_Voltage_Sensor_V ; real_T piece11 ; real_T t107 ; real_T t112 ;
real_T t114 ; real_T t118 ; real_T t70 ; real_T t74 ; real_T t75 ; real_T t83
; real_T t84 ; real_T t87 ; real_T t92 ; size_t t10 [ 1 ] ; size_t t7 [ 1 ] ;
size_t t8 [ 1 ] ; size_t t60 ; size_t t66 ; nonscalar2 [ 0 ] = _cg_const_1 [
0 ] ; nonscalar2 [ 1 ] = _cg_const_1 [ 1 ] ; nonscalar2 [ 2 ] = _cg_const_1 [
2 ] ; Battery_Battery_Table_Based_electricalModel_i = ( ( t123 -> mX . mX [
24ULL ] * - 0.1 + t123 -> mX . mX [ 25ULL ] * 0.05 ) + t123 -> mX . mX [
26ULL ] * 0.05 ) + t123 -> mU . mX [ 6ULL ] ; t54 [ 0ULL ] = t123 -> mX . mX
[ 28ULL ] ; t7 [ 0 ] = 11ULL ; t8 [ 0 ] = 1ULL ; tlu2_linear_linear_prelookup
( & t4 . mField0 [ 0ULL ] , & t4 . mField1 [ 0ULL ] , & t4 . mField2 [ 0ULL ]
, ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t54 [ 0ULL ] , & t7 [ 0ULL
] , & t8 [ 0ULL ] ) ; t54 [ 0ULL ] = t123 -> mX . mX [ 0ULL ] ; t10 [ 0 ] =
3ULL ; tlu2_linear_linear_prelookup ( & t3 . mField0 [ 0ULL ] , & t3 .
mField1 [ 0ULL ] , & t3 . mField2 [ 0ULL ] , & nonscalar2 [ 0ULL ] , & t54 [
0ULL ] , & t10 [ 0ULL ] , & t8 [ 0ULL ] ) ; tlu2_2d_linear_linear_value ( &
t50 [ 0ULL ] , & t4 . mField0 [ 0ULL ] , & t4 . mField2 [ 0ULL ] , & t3 .
mField0 [ 0ULL ] , & t3 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField0 , & t7 [ 0ULL ] , & t10 [ 0ULL ] , & t8 [ 0ULL ] ) ;
Battery_Battery_Table_Based_electricalModel_ocv = t50 [ 0ULL ] ; t50 [ 0ULL ]
= pmf_get_inf ( ) ; for ( t66 = 0ULL ; t66 < 33ULL ; t66 ++ ) { t60 = t66 /
33ULL ; t70 = t50 [ t60 > 0ULL ? 0ULL : t60 ] ; t83 = ( ( _NeDynamicSystem *
) ( LC ) ) -> mField0 [ t66 ] * 1.0E-5 ; t50 [ t60 > 0ULL ? 0ULL : t60 ] =
t70 > t83 ? t83 : t70 ; } Battery_Battery_Table_Based_electricalModel_ocv =
Battery_Battery_Table_Based_electricalModel_ocv > t50 [ 0ULL ] ?
Battery_Battery_Table_Based_electricalModel_ocv : t50 [ 0ULL ] ; t53 [ 0ULL ]
= t123 -> mX . mX [ 29ULL ] ; t53 [ 1ULL ] = 0.0 ; t53 [ 2ULL ] = 0.0 ; t53 [
3ULL ] = 0.0 ; t53 [ 4ULL ] = 0.0 ; for ( t66 = 0ULL ; t66 < 5ULL ; t66 ++ )
{ Battery_Battery_Table_Based_electricalModel_xGdynamic [ t66 ] = t53 [ t66 ]
; } tlu2_2d_linear_linear_value ( & t50 [ 0ULL ] , & t4 . mField0 [ 0ULL ] ,
& t4 . mField2 [ 0ULL ] , & t3 . mField0 [ 0ULL ] , & t3 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t7 [ 0ULL ] , & t10 [ 0ULL ]
, & t8 [ 0ULL ] ) ; t74 = t50 [ 0ULL ] ; t70 = - t123 -> mX . mX [ 27ULL ] +
t123 -> mX . mX [ 24ULL ] ; Battery_Battery_Table_Based1_electricalModel_i =
( ( t123 -> mX . mX [ 27ULL ] * - 0.1 + t123 -> mX . mX [ 31ULL ] * 0.05 ) +
t123 -> mX . mX [ 32ULL ] * 0.05 ) + t123 -> mU . mX [ 6ULL ] ; t54 [ 0ULL ]
= t123 -> mX . mX [ 34ULL ] ; tlu2_linear_linear_prelookup ( & t4 . mField0 [
0ULL ] , & t4 . mField1 [ 0ULL ] , & t4 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t54 [ 0ULL ] , & t7 [ 0ULL ] , &
t8 [ 0ULL ] ) ; t54 [ 0ULL ] = t123 -> mX . mX [ 8ULL ] ;
tlu2_linear_linear_prelookup ( & t3 . mField0 [ 0ULL ] , & t3 . mField1 [
0ULL ] , & t3 . mField2 [ 0ULL ] , & nonscalar2 [ 0ULL ] , & t54 [ 0ULL ] , &
t10 [ 0ULL ] , & t8 [ 0ULL ] ) ; tlu2_2d_linear_linear_value ( & t50 [ 0ULL ]
, & t4 . mField0 [ 0ULL ] , & t4 . mField2 [ 0ULL ] , & t3 . mField0 [ 0ULL ]
, & t3 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , &
t7 [ 0ULL ] , & t10 [ 0ULL ] , & t8 [ 0ULL ] ) ;
Battery_Battery_Table_Based1_electricalModel_ocv = t50 [ 0ULL ] ; t50 [ 0ULL
] = pmf_get_inf ( ) ; for ( t66 = 0ULL ; t66 < 33ULL ; t66 ++ ) { t60 = t66 /
33ULL ; t75 = t50 [ t60 > 0ULL ? 0ULL : t60 ] ; t83 = ( ( _NeDynamicSystem *
) ( LC ) ) -> mField3 [ t66 ] * 1.0E-5 ; t50 [ t60 > 0ULL ? 0ULL : t60 ] =
t75 > t83 ? t83 : t75 ; } Battery_Battery_Table_Based1_electricalModel_ocv =
Battery_Battery_Table_Based1_electricalModel_ocv > t50 [ 0ULL ] ?
Battery_Battery_Table_Based1_electricalModel_ocv : t50 [ 0ULL ] ; t53 [ 0ULL
] = t123 -> mX . mX [ 35ULL ] ; t53 [ 1ULL ] = 0.0 ; t53 [ 2ULL ] = 0.0 ; t53
[ 3ULL ] = 0.0 ; t53 [ 4ULL ] = 0.0 ; for ( t66 = 0ULL ; t66 < 5ULL ; t66 ++
) { Battery_Battery_Table_Based1_electricalModel_xGdynamic [ t66 ] = t53 [
t66 ] ; } tlu2_2d_linear_linear_value ( & t50 [ 0ULL ] , & t4 . mField0 [
0ULL ] , & t4 . mField2 [ 0ULL ] , & t3 . mField0 [ 0ULL ] , & t3 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t7 [ 0ULL ] , & t10
[ 0ULL ] , & t8 [ 0ULL ] ) ; t75 = - t123 -> mX . mX [ 33ULL ] + t123 -> mX .
mX [ 27ULL ] ; Battery_Battery_Table_Based2_electricalModel_i = ( ( t123 ->
mX . mX [ 33ULL ] * - 0.1 + t123 -> mX . mX [ 37ULL ] * 0.05 ) + t123 -> mX .
mX [ 38ULL ] * 0.05 ) + t123 -> mU . mX [ 6ULL ] ; t54 [ 0ULL ] = t123 -> mX
. mX [ 39ULL ] ; tlu2_linear_linear_prelookup ( & t4 . mField0 [ 0ULL ] , &
t4 . mField1 [ 0ULL ] , & t4 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t54 [ 0ULL ] , & t7 [ 0ULL ] , & t8 [ 0ULL ] ) ; t54 [
0ULL ] = t123 -> mX . mX [ 16ULL ] ; tlu2_linear_linear_prelookup ( & t3 .
mField0 [ 0ULL ] , & t3 . mField1 [ 0ULL ] , & t3 . mField2 [ 0ULL ] , &
nonscalar2 [ 0ULL ] , & t54 [ 0ULL ] , & t10 [ 0ULL ] , & t8 [ 0ULL ] ) ;
tlu2_2d_linear_linear_value ( & t54 [ 0ULL ] , & t4 . mField0 [ 0ULL ] , & t4
. mField2 [ 0ULL ] , & t3 . mField0 [ 0ULL ] , & t3 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField5 , & t7 [ 0ULL ] , & t10 [ 0ULL ] , &
t8 [ 0ULL ] ) ; Battery_Battery_Table_Based2_electricalModel_ocv = t54 [ 0ULL
] ; t54 [ 0ULL ] = pmf_get_inf ( ) ; for ( t66 = 0ULL ; t66 < 33ULL ; t66 ++
) { t60 = t66 / 33ULL ; t83 = t54 [ t60 > 0ULL ? 0ULL : t60 ] ; t84 = ( (
_NeDynamicSystem * ) ( LC ) ) -> mField5 [ t66 ] * 1.0E-5 ; t54 [ t60 > 0ULL
? 0ULL : t60 ] = t83 > t84 ? t84 : t83 ; }
Battery_Battery_Table_Based2_electricalModel_ocv =
Battery_Battery_Table_Based2_electricalModel_ocv > t54 [ 0ULL ] ?
Battery_Battery_Table_Based2_electricalModel_ocv : t54 [ 0ULL ] ; t53 [ 0ULL
] = t123 -> mX . mX [ 40ULL ] ; t53 [ 1ULL ] = 0.0 ; t53 [ 2ULL ] = 0.0 ; t53
[ 3ULL ] = 0.0 ; t53 [ 4ULL ] = 0.0 ; for ( t60 = 0ULL ; t60 < 5ULL ; t60 ++
) { Battery_Battery_Table_Based2_electricalModel_xGdynamic [ t60 ] = t53 [
t60 ] ; } tlu2_2d_linear_linear_value ( & t54 [ 0ULL ] , & t4 . mField0 [
0ULL ] , & t4 . mField2 [ 0ULL ] , & t3 . mField0 [ 0ULL ] , & t3 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , & t7 [ 0ULL ] , & t10
[ 0ULL ] , & t8 [ 0ULL ] ) ; t83 = t123 -> mX . mX [ 8ULL ] *
0.00050950000000000008 + t123 -> mX . mX [ 16ULL ] * - 0.00050950000000000008
; t84 = t123 -> mX . mX [ 0ULL ] * - 0.00050950000000000008 + t123 -> mX . mX
[ 8ULL ] * 0.00050950000000000008 ; Battery_Current_Sensor_I = ( ( ( ( t123
-> mX . mX [ 27ULL ] * - 0.1 + t123 -> mX . mX [ 33ULL ] * 0.1 ) + t123 -> mX
. mX [ 37ULL ] * - 0.05 ) + t123 -> mX . mX [ 38ULL ] * - 0.05 ) + t123 -> mX
. mX [ 31ULL ] * 0.05 ) + t123 -> mX . mX [ 32ULL ] * 0.05 ;
Battery_Current_Sensor1_I = ( ( ( ( t123 -> mX . mX [ 27ULL ] * 0.1 + t123 ->
mX . mX [ 24ULL ] * - 0.1 ) + t123 -> mX . mX [ 25ULL ] * 0.05 ) + t123 -> mX
. mX [ 26ULL ] * 0.05 ) + t123 -> mX . mX [ 31ULL ] * - 0.05 ) + t123 -> mX .
mX [ 32ULL ] * - 0.05 ; Battery_Current_Sensor2_I = ( t123 -> mX . mX [ 24ULL
] * 0.1 + t123 -> mX . mX [ 25ULL ] * - 0.05 ) + t123 -> mX . mX [ 26ULL ] *
- 0.05 ; Battery_MOSFET_Ideal_Switching_diode_i = ( t123 -> mX . mX [ 24ULL ]
* - 0.05 + t123 -> mX . mX [ 25ULL ] * 0.05 ) + t123 -> mX . mX [ 42ULL ] ;
Battery_MOSFET_Ideal_Switching_diode_v_diode = t123 -> mX . mX [ 27ULL ] -
t123 -> mX . mX [ 25ULL ] ; t87 = - t123 -> mX . mX [ 27ULL ] + t123 -> mX .
mX [ 25ULL ] ; Battery_MOSFET_Ideal_Switching1_diode_i = ( t123 -> mX . mX [
24ULL ] * - 0.05 + t123 -> mX . mX [ 26ULL ] * 0.05 ) + t123 -> mX . mX [
44ULL ] ; Battery_MOSFET_Ideal_Switching1_diode_v_diode = t123 -> mX . mX [
27ULL ] - t123 -> mX . mX [ 26ULL ] ; t92 = - t123 -> mX . mX [ 27ULL ] +
t123 -> mX . mX [ 26ULL ] ; Battery_MOSFET_Ideal_Switching2_diode_i = ( t123
-> mX . mX [ 33ULL ] * - 0.05 + t123 -> mX . mX [ 37ULL ] * 0.05 ) + t123 ->
mX . mX [ 46ULL ] ; Battery_MOSFET_Ideal_Switching3_diode_i = ( t123 -> mX .
mX [ 33ULL ] * - 0.05 + t123 -> mX . mX [ 38ULL ] * 0.05 ) + t123 -> mX . mX
[ 48ULL ] ; Battery_MOSFET_Ideal_Switching4_diode_i = ( t123 -> mX . mX [
27ULL ] * - 0.05 + t123 -> mX . mX [ 31ULL ] * 0.05 ) + t123 -> mX . mX [
50ULL ] ; Battery_MOSFET_Ideal_Switching4_diode_v_diode = t123 -> mX . mX [
33ULL ] - t123 -> mX . mX [ 31ULL ] ; t107 = - t123 -> mX . mX [ 33ULL ] +
t123 -> mX . mX [ 31ULL ] ; Battery_MOSFET_Ideal_Switching5_diode_i = ( t123
-> mX . mX [ 27ULL ] * - 0.05 + t123 -> mX . mX [ 32ULL ] * 0.05 ) + t123 ->
mX . mX [ 52ULL ] ; Battery_MOSFET_Ideal_Switching5_diode_v_diode = t123 ->
mX . mX [ 33ULL ] - t123 -> mX . mX [ 32ULL ] ; t112 = - t123 -> mX . mX [
33ULL ] + t123 -> mX . mX [ 32ULL ] ; t114 = t123 -> mX . mX [ 24ULL ] * 0.05
+ t123 -> mX . mX [ 25ULL ] * - 0.05 ; Battery_Resistor1_i = t123 -> mX . mX
[ 27ULL ] * 0.05 + t123 -> mX . mX [ 31ULL ] * - 0.05 ; Battery_Resistor2_i =
t123 -> mX . mX [ 33ULL ] * 0.05 + t123 -> mX . mX [ 37ULL ] * - 0.05 ;
Battery_Resistor3_i = t123 -> mX . mX [ 24ULL ] * 0.05 + t123 -> mX . mX [
26ULL ] * - 0.05 ; Battery_Resistor4_i = t123 -> mX . mX [ 27ULL ] * 0.05 +
t123 -> mX . mX [ 32ULL ] * - 0.05 ; Battery_Resistor5_i = t123 -> mX . mX [
33ULL ] * 0.05 + t123 -> mX . mX [ 38ULL ] * - 0.05 ;
Battery_Voltage_Sensor_V = t123 -> mX . mX [ 24ULL ] - t123 -> mX . mX [
27ULL ] ; t118 = t123 -> mX . mX [ 27ULL ] - t123 -> mX . mX [ 33ULL ] ;
piece11 = t123 -> mX . mX [ 0ULL ] * 0.00050950000000000008 ; out -> mLOG .
mX [ 0ULL ] = t123 -> mX . mX [ 0ULL ] ; out -> mLOG . mX [ 1ULL ] = t123 ->
mX . mX [ 0ULL ] ; out -> mLOG . mX [ 2ULL ] = t123 -> mX . mX [ 0ULL ] ; out
-> mLOG . mX [ 3ULL ] = t123 -> mX . mX [ 0ULL ] ; out -> mLOG . mX [ 4ULL ]
= t123 -> mX . mX [ 1ULL ] * 0.00027777777777777778 ; out -> mLOG . mX [ 5ULL
] = t123 -> mX . mX [ 0ULL ] ; out -> mLOG . mX [ 6ULL ] =
Battery_Battery_Table_Based_electricalModel_i ; out -> mLOG . mX [ 7ULL ] =
t123 -> mX . mX [ 27ULL ] ; out -> mLOG . mX [ 8ULL ] = t123 -> mX . mX [
2ULL ] ; out -> mLOG . mX [ 9ULL ] = t123 -> mX . mX [ 2ULL ] ; out -> mLOG .
mX [ 10ULL ] = t123 -> mX . mX [ 28ULL ] ; out -> mLOG . mX [ 11ULL ] = t123
-> mX . mX [ 24ULL ] ; for ( t66 = 3ULL ; t66 - 3ULL < 5ULL ; t66 ++ ) { out
-> mLOG . mX [ t66 + 9ULL ] = t123 -> mX . mX [ t66 + 0ULL ] ; } for ( t66 =
0ULL ; t66 < 5ULL ; t66 ++ ) { out -> mLOG . mX [ t66 + 17ULL ] =
Battery_Battery_Table_Based_electricalModel_xGdynamic [ t66 ] ; } out -> mLOG
. mX [ 22ULL ] = t123 -> mX . mX [ 30ULL ] * 1000.0 ; out -> mLOG . mX [
23ULL ] = t123 -> mX . mX [ 28ULL ] ; out -> mLOG . mX [ 24ULL ] = t70 ; out
-> mLOG . mX [ 25ULL ] = t123 -> mX . mX [ 1ULL ] ; out -> mLOG . mX [ 26ULL
] = Battery_Battery_Table_Based_electricalModel_i ; out -> mLOG . mX [ 27ULL
] = t123 -> mX . mX [ 27ULL ] ; out -> mLOG . mX [ 28ULL ] = t123 -> mX . mX
[ 2ULL ] ; out -> mLOG . mX [ 29ULL ] =
Battery_Battery_Table_Based_electricalModel_ocv ; out -> mLOG . mX [ 30ULL ]
= t123 -> mX . mX [ 24ULL ] ; out -> mLOG . mX [ 31ULL ] =
Battery_Battery_Table_Based_electricalModel_i *
Battery_Battery_Table_Based_electricalModel_i * ( t74 > 8.200000000000002E-8
? t74 : 8.200000000000002E-8 ) * 0.001 + ( ( ( ( t123 -> mX . mX [ 3ULL ] *
t123 -> mX . mX [ 3ULL ] *
Battery_Battery_Table_Based_electricalModel_xGdynamic [ 0ULL ] + t123 -> mX .
mX [ 4ULL ] * t123 -> mX . mX [ 4ULL ] *
Battery_Battery_Table_Based_electricalModel_xGdynamic [ 1ULL ] ) + t123 -> mX
. mX [ 5ULL ] * t123 -> mX . mX [ 5ULL ] *
Battery_Battery_Table_Based_electricalModel_xGdynamic [ 2ULL ] ) + t123 -> mX
. mX [ 6ULL ] * t123 -> mX . mX [ 6ULL ] *
Battery_Battery_Table_Based_electricalModel_xGdynamic [ 3ULL ] ) + t123 -> mX
. mX [ 7ULL ] * t123 -> mX . mX [ 7ULL ] *
Battery_Battery_Table_Based_electricalModel_xGdynamic [ 4ULL ] ) * 0.001 ;
out -> mLOG . mX [ 32ULL ] = t123 -> mX . mX [ 28ULL ] ; out -> mLOG . mX [
33ULL ] = t123 -> mX . mX [ 28ULL ] ; out -> mLOG . mX [ 34ULL ] = t123 -> mX
. mX [ 0ULL ] ; out -> mLOG . mX [ 35ULL ] = t123 -> mX . mX [ 0ULL ] ; out
-> mLOG . mX [ 36ULL ] = 149.359925 + ( t123 -> mX . mX [ 0ULL ] * -
0.0010190000000000002 + t123 -> mX . mX [ 8ULL ] * 0.00050950000000000008 ) *
1000.0 ; out -> mLOG . mX [ 37ULL ] = t123 -> mX . mX [ 0ULL ] ; out -> mLOG
. mX [ 38ULL ] = t123 -> mX . mX [ 0ULL ] ; out -> mLOG . mX [ 39ULL ] = t123
-> mX . mX [ 30ULL ] * 1000.0 ; out -> mLOG . mX [ 40ULL ] = t70 ; out ->
mLOG . mX [ 41ULL ] = t123 -> mX . mX [ 3ULL ] ; out -> mLOG . mX [ 42ULL ] =
t123 -> mX . mX [ 8ULL ] ; out -> mLOG . mX [ 43ULL ] = t123 -> mX . mX [
8ULL ] ; out -> mLOG . mX [ 44ULL ] = t123 -> mX . mX [ 8ULL ] ; out -> mLOG
. mX [ 45ULL ] = t123 -> mX . mX [ 8ULL ] ; out -> mLOG . mX [ 46ULL ] = t123
-> mX . mX [ 9ULL ] * 0.00027777777777777778 ; out -> mLOG . mX [ 47ULL ] =
t123 -> mX . mX [ 8ULL ] ; out -> mLOG . mX [ 48ULL ] =
Battery_Battery_Table_Based1_electricalModel_i ; out -> mLOG . mX [ 49ULL ] =
t123 -> mX . mX [ 33ULL ] ; out -> mLOG . mX [ 50ULL ] = t123 -> mX . mX [
10ULL ] ; out -> mLOG . mX [ 51ULL ] = t123 -> mX . mX [ 10ULL ] ; out ->
mLOG . mX [ 52ULL ] = t123 -> mX . mX [ 34ULL ] ; out -> mLOG . mX [ 53ULL ]
= t123 -> mX . mX [ 27ULL ] ; for ( t66 = 11ULL ; t66 - 11ULL < 5ULL ; t66 ++
) { out -> mLOG . mX [ t66 + 43ULL ] = t123 -> mX . mX [ t66 + 0ULL ] ; } for
( t66 = 0ULL ; t66 < 5ULL ; t66 ++ ) { out -> mLOG . mX [ t66 + 59ULL ] =
Battery_Battery_Table_Based1_electricalModel_xGdynamic [ t66 ] ; } out ->
mLOG . mX [ 64ULL ] = t123 -> mX . mX [ 36ULL ] * 1000.0 ; out -> mLOG . mX [
65ULL ] = t123 -> mX . mX [ 34ULL ] ; out -> mLOG . mX [ 66ULL ] = t75 ; out
-> mLOG . mX [ 67ULL ] = t123 -> mX . mX [ 9ULL ] ; out -> mLOG . mX [ 68ULL
] = Battery_Battery_Table_Based1_electricalModel_i ; out -> mLOG . mX [ 69ULL
] = t123 -> mX . mX [ 33ULL ] ; out -> mLOG . mX [ 70ULL ] = t123 -> mX . mX
[ 10ULL ] ; out -> mLOG . mX [ 71ULL ] =
Battery_Battery_Table_Based1_electricalModel_ocv ; out -> mLOG . mX [ 72ULL ]
= t123 -> mX . mX [ 27ULL ] ; out -> mLOG . mX [ 73ULL ] =
Battery_Battery_Table_Based1_electricalModel_i *
Battery_Battery_Table_Based1_electricalModel_i * ( t50 [ 0ULL ] >
8.200000000000002E-8 ? t50 [ 0ULL ] : 8.200000000000002E-8 ) * 0.001 + ( ( (
( t123 -> mX . mX [ 11ULL ] * t123 -> mX . mX [ 11ULL ] *
Battery_Battery_Table_Based1_electricalModel_xGdynamic [ 0ULL ] + t123 -> mX
. mX [ 12ULL ] * t123 -> mX . mX [ 12ULL ] *
Battery_Battery_Table_Based1_electricalModel_xGdynamic [ 1ULL ] ) + t123 ->
mX . mX [ 13ULL ] * t123 -> mX . mX [ 13ULL ] *
Battery_Battery_Table_Based1_electricalModel_xGdynamic [ 2ULL ] ) + t123 ->
mX . mX [ 14ULL ] * t123 -> mX . mX [ 14ULL ] *
Battery_Battery_Table_Based1_electricalModel_xGdynamic [ 3ULL ] ) + t123 ->
mX . mX [ 15ULL ] * t123 -> mX . mX [ 15ULL ] *
Battery_Battery_Table_Based1_electricalModel_xGdynamic [ 4ULL ] ) * 0.001 ;
out -> mLOG . mX [ 74ULL ] = t123 -> mX . mX [ 34ULL ] ; out -> mLOG . mX [
75ULL ] = t123 -> mX . mX [ 34ULL ] ; out -> mLOG . mX [ 76ULL ] = t123 -> mX
. mX [ 8ULL ] ; out -> mLOG . mX [ 77ULL ] = t123 -> mX . mX [ 8ULL ] ; out
-> mLOG . mX [ 78ULL ] = ( ( t123 -> mX . mX [ 0ULL ] *
0.00050950000000000008 + t123 -> mX . mX [ 8ULL ] * - 0.0010190000000000002 )
+ t123 -> mX . mX [ 16ULL ] * 0.00050950000000000008 ) * 1000.0 ; out -> mLOG
. mX [ 79ULL ] = t123 -> mX . mX [ 8ULL ] ; out -> mLOG . mX [ 80ULL ] = t123
-> mX . mX [ 8ULL ] ; out -> mLOG . mX [ 81ULL ] = t123 -> mX . mX [ 36ULL ]
* 1000.0 ; out -> mLOG . mX [ 82ULL ] = t75 ; out -> mLOG . mX [ 83ULL ] =
t123 -> mX . mX [ 11ULL ] ; out -> mLOG . mX [ 84ULL ] = t123 -> mX . mX [
34ULL ] ; out -> mLOG . mX [ 85ULL ] = t123 -> mX . mX [ 16ULL ] ; out ->
mLOG . mX [ 86ULL ] = t123 -> mX . mX [ 16ULL ] ; out -> mLOG . mX [ 87ULL ]
= t123 -> mX . mX [ 16ULL ] ; out -> mLOG . mX [ 88ULL ] = t123 -> mX . mX [
16ULL ] ; out -> mLOG . mX [ 89ULL ] = t123 -> mX . mX [ 17ULL ] *
0.00027777777777777778 ; out -> mLOG . mX [ 90ULL ] = t123 -> mX . mX [ 16ULL
] ; out -> mLOG . mX [ 91ULL ] =
Battery_Battery_Table_Based2_electricalModel_i ; out -> mLOG . mX [ 92ULL ] =
t123 -> mX . mX [ 18ULL ] ; out -> mLOG . mX [ 93ULL ] = t123 -> mX . mX [
18ULL ] ; out -> mLOG . mX [ 94ULL ] = t123 -> mX . mX [ 39ULL ] ; out ->
mLOG . mX [ 95ULL ] = t123 -> mX . mX [ 33ULL ] ; for ( t66 = 19ULL ; t66 -
19ULL < 5ULL ; t66 ++ ) { out -> mLOG . mX [ t66 + 77ULL ] = t123 -> mX . mX
[ t66 + 0ULL ] ; } for ( t66 = 0ULL ; t66 < 5ULL ; t66 ++ ) { out -> mLOG .
mX [ t66 + 101ULL ] = Battery_Battery_Table_Based2_electricalModel_xGdynamic
[ t66 ] ; } out -> mLOG . mX [ 106ULL ] = t123 -> mX . mX [ 41ULL ] * 1000.0
; out -> mLOG . mX [ 107ULL ] = t123 -> mX . mX [ 39ULL ] ; out -> mLOG . mX
[ 108ULL ] = t123 -> mX . mX [ 33ULL ] ; out -> mLOG . mX [ 109ULL ] = t123
-> mX . mX [ 17ULL ] ; out -> mLOG . mX [ 110ULL ] =
Battery_Battery_Table_Based2_electricalModel_i ; out -> mLOG . mX [ 111ULL ]
= t123 -> mX . mX [ 18ULL ] ; out -> mLOG . mX [ 112ULL ] =
Battery_Battery_Table_Based2_electricalModel_ocv ; out -> mLOG . mX [ 113ULL
] = t123 -> mX . mX [ 33ULL ] ; out -> mLOG . mX [ 114ULL ] =
Battery_Battery_Table_Based2_electricalModel_i *
Battery_Battery_Table_Based2_electricalModel_i * ( t54 [ 0ULL ] >
8.200000000000002E-8 ? t54 [ 0ULL ] : 8.200000000000002E-8 ) * 0.001 + ( ( (
( t123 -> mX . mX [ 19ULL ] * t123 -> mX . mX [ 19ULL ] *
Battery_Battery_Table_Based2_electricalModel_xGdynamic [ 0ULL ] + t123 -> mX
. mX [ 20ULL ] * t123 -> mX . mX [ 20ULL ] *
Battery_Battery_Table_Based2_electricalModel_xGdynamic [ 1ULL ] ) + t123 ->
mX . mX [ 21ULL ] * t123 -> mX . mX [ 21ULL ] *
Battery_Battery_Table_Based2_electricalModel_xGdynamic [ 2ULL ] ) + t123 ->
mX . mX [ 22ULL ] * t123 -> mX . mX [ 22ULL ] *
Battery_Battery_Table_Based2_electricalModel_xGdynamic [ 3ULL ] ) + t123 ->
mX . mX [ 23ULL ] * t123 -> mX . mX [ 23ULL ] *
Battery_Battery_Table_Based2_electricalModel_xGdynamic [ 4ULL ] ) * 0.001 ;
out -> mLOG . mX [ 115ULL ] = t123 -> mX . mX [ 39ULL ] ; out -> mLOG . mX [
116ULL ] = t123 -> mX . mX [ 39ULL ] ; out -> mLOG . mX [ 117ULL ] = t123 ->
mX . mX [ 16ULL ] ; out -> mLOG . mX [ 118ULL ] = t123 -> mX . mX [ 16ULL ] ;
out -> mLOG . mX [ 119ULL ] = t83 * 1000.0 ; out -> mLOG . mX [ 120ULL ] =
t123 -> mX . mX [ 16ULL ] ; out -> mLOG . mX [ 121ULL ] = t123 -> mX . mX [
16ULL ] ; out -> mLOG . mX [ 122ULL ] = t123 -> mX . mX [ 41ULL ] * 1000.0 ;
out -> mLOG . mX [ 123ULL ] = t123 -> mX . mX [ 33ULL ] ; out -> mLOG . mX [
124ULL ] = t123 -> mX . mX [ 19ULL ] ; out -> mLOG . mX [ 125ULL ] = t123 ->
mX . mX [ 39ULL ] ; out -> mLOG . mX [ 126ULL ] = t123 -> mX . mX [ 28ULL ] ;
out -> mLOG . mX [ 127ULL ] = t123 -> mX . mX [ 8ULL ] ; out -> mLOG . mX [
128ULL ] = t123 -> mX . mX [ 0ULL ] ; out -> mLOG . mX [ 129ULL ] = t84 *
1000.0 ; out -> mLOG . mX [ 130ULL ] = t84 * 1962.708537782139 ; out -> mLOG
. mX [ 131ULL ] = t123 -> mX . mX [ 16ULL ] ; out -> mLOG . mX [ 132ULL ] =
t123 -> mX . mX [ 8ULL ] ; out -> mLOG . mX [ 133ULL ] = t83 * - 1000.0 ; out
-> mLOG . mX [ 134ULL ] = t83 * - 1962.708537782139 ; out -> mLOG . mX [
135ULL ] = Battery_Current_Sensor_I ; out -> mLOG . mX [ 136ULL ] =
Battery_Current_Sensor_I ; out -> mLOG . mX [ 137ULL ] = t123 -> mX . mX [
33ULL ] ; out -> mLOG . mX [ 138ULL ] = t123 -> mX . mX [ 33ULL ] ; out ->
mLOG . mX [ 139ULL ] = Battery_Current_Sensor1_I ; out -> mLOG . mX [ 140ULL
] = Battery_Current_Sensor1_I ; out -> mLOG . mX [ 141ULL ] = t123 -> mX . mX
[ 27ULL ] ; out -> mLOG . mX [ 142ULL ] = t123 -> mX . mX [ 27ULL ] ; out ->
mLOG . mX [ 143ULL ] = Battery_Current_Sensor1_I ; out -> mLOG . mX [ 144ULL
] = Battery_Current_Sensor2_I ; out -> mLOG . mX [ 145ULL ] =
Battery_Current_Sensor2_I ; out -> mLOG . mX [ 146ULL ] = t123 -> mX . mX [
24ULL ] ; out -> mLOG . mX [ 147ULL ] = t123 -> mX . mX [ 24ULL ] ; out ->
mLOG . mX [ 148ULL ] = Battery_Current_Sensor2_I ; out -> mLOG . mX [ 149ULL
] = Battery_Current_Sensor_I ; out -> mLOG . mX [ 150ULL ] = t123 -> mX . mX
[ 25ULL ] ; out -> mLOG . mX [ 151ULL ] = t123 -> mU . mX [ 5ULL ] ; out ->
mLOG . mX [ 152ULL ] = t123 -> mX . mX [ 27ULL ] ; out -> mLOG . mX [ 153ULL
] = Battery_MOSFET_Ideal_Switching_diode_i ; out -> mLOG . mX [ 154ULL ] =
t123 -> mX . mX [ 25ULL ] ; out -> mLOG . mX [ 155ULL ] = t123 -> mX . mX [
27ULL ] ; out -> mLOG . mX [ 156ULL ] = t123 -> mX . mX [ 43ULL ] ; out ->
mLOG . mX [ 157ULL ] = - t123 -> mX . mX [ 25ULL ] + t123 -> mX . mX [ 27ULL
] ; out -> mLOG . mX [ 158ULL ] = t123 -> mX . mX [ 25ULL ] ; out -> mLOG .
mX [ 159ULL ] = Battery_MOSFET_Ideal_Switching_diode_i ; out -> mLOG . mX [
160ULL ] = Battery_MOSFET_Ideal_Switching_diode_i ; out -> mLOG . mX [ 161ULL
] = Battery_MOSFET_Ideal_Switching_diode_i ; out -> mLOG . mX [ 162ULL ] =
t123 -> mX . mX [ 25ULL ] ; out -> mLOG . mX [ 163ULL ] = t123 -> mX . mX [
27ULL ] ; out -> mLOG . mX [ 164ULL ] =
Battery_MOSFET_Ideal_Switching_diode_i *
Battery_MOSFET_Ideal_Switching_diode_v_diode * 0.001 * 1000.0 ; out -> mLOG .
mX [ 165ULL ] = Battery_MOSFET_Ideal_Switching_diode_v_diode ; out -> mLOG .
mX [ 166ULL ] = Battery_MOSFET_Ideal_Switching_diode_v_diode ; out -> mLOG .
mX [ 167ULL ] = Battery_MOSFET_Ideal_Switching_diode_i * 0.001 + 0.799999992
; out -> mLOG . mX [ 168ULL ] = t123 -> mX . mX [ 42ULL ] -
Battery_MOSFET_Ideal_Switching_diode_i ; out -> mLOG . mX [ 169ULL ] = t123
-> mU . mX [ 5ULL ] ; out -> mLOG . mX [ 170ULL ] = t123 -> mX . mX [ 42ULL ]
; out -> mLOG . mX [ 171ULL ] = t123 -> mX . mX [ 27ULL ] ; out -> mLOG . mX
[ 172ULL ] = t123 -> mX . mX [ 25ULL ] ; out -> mLOG . mX [ 173ULL ] = t123
-> mX . mX [ 42ULL ] * t87 * 0.001 * 1000.0 ; out -> mLOG . mX [ 174ULL ] =
t87 ; out -> mLOG . mX [ 175ULL ] = t123 -> mU . mX [ 5ULL ] ; out -> mLOG .
mX [ 176ULL ] = t123 -> mX . mX [ 25ULL ] - t123 -> mX . mX [ 27ULL ] ; out
-> mLOG . mX [ 177ULL ] = t123 -> mX . mX [ 26ULL ] ; out -> mLOG . mX [
178ULL ] = t123 -> mU . mX [ 0ULL ] ; out -> mLOG . mX [ 179ULL ] = t123 ->
mX . mX [ 27ULL ] ; out -> mLOG . mX [ 180ULL ] =
Battery_MOSFET_Ideal_Switching1_diode_i ; out -> mLOG . mX [ 181ULL ] = t123
-> mX . mX [ 26ULL ] ; out -> mLOG . mX [ 182ULL ] = t123 -> mX . mX [ 27ULL
] ; out -> mLOG . mX [ 183ULL ] = t123 -> mX . mX [ 45ULL ] ; out -> mLOG .
mX [ 184ULL ] = - t123 -> mX . mX [ 26ULL ] + t123 -> mX . mX [ 27ULL ] ; out
-> mLOG . mX [ 185ULL ] = t123 -> mX . mX [ 26ULL ] ; out -> mLOG . mX [
186ULL ] = Battery_MOSFET_Ideal_Switching1_diode_i ; out -> mLOG . mX [
187ULL ] = Battery_MOSFET_Ideal_Switching1_diode_i ; out -> mLOG . mX [
188ULL ] = Battery_MOSFET_Ideal_Switching1_diode_i ; out -> mLOG . mX [
189ULL ] = t123 -> mX . mX [ 26ULL ] ; out -> mLOG . mX [ 190ULL ] = t123 ->
mX . mX [ 27ULL ] ; out -> mLOG . mX [ 191ULL ] =
Battery_MOSFET_Ideal_Switching1_diode_i *
Battery_MOSFET_Ideal_Switching1_diode_v_diode * 0.001 * 1000.0 ; out -> mLOG
. mX [ 192ULL ] = Battery_MOSFET_Ideal_Switching1_diode_v_diode ; out -> mLOG
. mX [ 193ULL ] = Battery_MOSFET_Ideal_Switching1_diode_v_diode ; out -> mLOG
. mX [ 194ULL ] = Battery_MOSFET_Ideal_Switching1_diode_i * 0.001 +
0.799999992 ; out -> mLOG . mX [ 195ULL ] = t123 -> mX . mX [ 44ULL ] -
Battery_MOSFET_Ideal_Switching1_diode_i ; out -> mLOG . mX [ 196ULL ] = t123
-> mU . mX [ 0ULL ] ; out -> mLOG . mX [ 197ULL ] = t123 -> mX . mX [ 44ULL ]
; out -> mLOG . mX [ 198ULL ] = t123 -> mX . mX [ 27ULL ] ; out -> mLOG . mX
[ 199ULL ] = t123 -> mX . mX [ 26ULL ] ; out -> mLOG . mX [ 200ULL ] = t123
-> mX . mX [ 44ULL ] * t92 * 0.001 * 1000.0 ; out -> mLOG . mX [ 201ULL ] =
t92 ; out -> mLOG . mX [ 202ULL ] = t123 -> mU . mX [ 0ULL ] ; out -> mLOG .
mX [ 203ULL ] = t123 -> mX . mX [ 26ULL ] - t123 -> mX . mX [ 27ULL ] ; out
-> mLOG . mX [ 204ULL ] = t123 -> mX . mX [ 37ULL ] ; out -> mLOG . mX [
205ULL ] = t123 -> mU . mX [ 3ULL ] ; out -> mLOG . mX [ 206ULL ] =
Battery_MOSFET_Ideal_Switching2_diode_i ; out -> mLOG . mX [ 207ULL ] = t123
-> mX . mX [ 37ULL ] ; out -> mLOG . mX [ 208ULL ] = t123 -> mX . mX [ 47ULL
] ; out -> mLOG . mX [ 209ULL ] = - t123 -> mX . mX [ 37ULL ] ; out -> mLOG .
mX [ 210ULL ] = t123 -> mX . mX [ 37ULL ] ; out -> mLOG . mX [ 211ULL ] =
Battery_MOSFET_Ideal_Switching2_diode_i ; out -> mLOG . mX [ 212ULL ] =
Battery_MOSFET_Ideal_Switching2_diode_i ; out -> mLOG . mX [ 213ULL ] =
Battery_MOSFET_Ideal_Switching2_diode_i ; out -> mLOG . mX [ 214ULL ] = t123
-> mX . mX [ 37ULL ] ; out -> mLOG . mX [ 215ULL ] =
Battery_MOSFET_Ideal_Switching2_diode_i * - t123 -> mX . mX [ 37ULL ] * 0.001
* 1000.0 ; out -> mLOG . mX [ 216ULL ] = - t123 -> mX . mX [ 37ULL ] ; out ->
mLOG . mX [ 217ULL ] = - t123 -> mX . mX [ 37ULL ] ; out -> mLOG . mX [
218ULL ] = Battery_MOSFET_Ideal_Switching2_diode_i * 0.001 + 0.799999992 ;
out -> mLOG . mX [ 219ULL ] = t123 -> mX . mX [ 46ULL ] -
Battery_MOSFET_Ideal_Switching2_diode_i ; out -> mLOG . mX [ 220ULL ] = t123
-> mU . mX [ 3ULL ] ; out -> mLOG . mX [ 221ULL ] = t123 -> mX . mX [ 46ULL ]
; out -> mLOG . mX [ 222ULL ] = t123 -> mX . mX [ 37ULL ] ; out -> mLOG . mX
[ 223ULL ] = t123 -> mX . mX [ 37ULL ] * t123 -> mX . mX [ 46ULL ] * 0.001 *
1000.0 ; out -> mLOG . mX [ 224ULL ] = t123 -> mX . mX [ 37ULL ] ; out ->
mLOG . mX [ 225ULL ] = t123 -> mU . mX [ 3ULL ] ; out -> mLOG . mX [ 226ULL ]
= t123 -> mX . mX [ 37ULL ] ; out -> mLOG . mX [ 227ULL ] = t123 -> mX . mX [
38ULL ] ; out -> mLOG . mX [ 228ULL ] = t123 -> mU . mX [ 4ULL ] ; out ->
mLOG . mX [ 229ULL ] = Battery_MOSFET_Ideal_Switching3_diode_i ; out -> mLOG
. mX [ 230ULL ] = t123 -> mX . mX [ 38ULL ] ; out -> mLOG . mX [ 231ULL ] =
t123 -> mX . mX [ 49ULL ] ; out -> mLOG . mX [ 232ULL ] = - t123 -> mX . mX [
38ULL ] ; out -> mLOG . mX [ 233ULL ] = t123 -> mX . mX [ 38ULL ] ; out ->
mLOG . mX [ 234ULL ] = Battery_MOSFET_Ideal_Switching3_diode_i ; out -> mLOG
. mX [ 235ULL ] = Battery_MOSFET_Ideal_Switching3_diode_i ; out -> mLOG . mX
[ 236ULL ] = Battery_MOSFET_Ideal_Switching3_diode_i ; out -> mLOG . mX [
237ULL ] = t123 -> mX . mX [ 38ULL ] ; out -> mLOG . mX [ 238ULL ] =
Battery_MOSFET_Ideal_Switching3_diode_i * - t123 -> mX . mX [ 38ULL ] * 0.001
* 1000.0 ; out -> mLOG . mX [ 239ULL ] = - t123 -> mX . mX [ 38ULL ] ; out ->
mLOG . mX [ 240ULL ] = - t123 -> mX . mX [ 38ULL ] ; out -> mLOG . mX [
241ULL ] = Battery_MOSFET_Ideal_Switching3_diode_i * 0.001 + 0.799999992 ;
out -> mLOG . mX [ 242ULL ] = t123 -> mX . mX [ 48ULL ] -
Battery_MOSFET_Ideal_Switching3_diode_i ; out -> mLOG . mX [ 243ULL ] = t123
-> mU . mX [ 4ULL ] ; out -> mLOG . mX [ 244ULL ] = t123 -> mX . mX [ 48ULL ]
; out -> mLOG . mX [ 245ULL ] = t123 -> mX . mX [ 38ULL ] ; out -> mLOG . mX
[ 246ULL ] = t123 -> mX . mX [ 38ULL ] * t123 -> mX . mX [ 48ULL ] * 0.001 *
1000.0 ; out -> mLOG . mX [ 247ULL ] = t123 -> mX . mX [ 38ULL ] ; out ->
mLOG . mX [ 248ULL ] = t123 -> mU . mX [ 4ULL ] ; out -> mLOG . mX [ 249ULL ]
= t123 -> mX . mX [ 38ULL ] ; out -> mLOG . mX [ 250ULL ] = t123 -> mX . mX [
31ULL ] ; out -> mLOG . mX [ 251ULL ] = t123 -> mU . mX [ 1ULL ] ; out ->
mLOG . mX [ 252ULL ] = t123 -> mX . mX [ 33ULL ] ; out -> mLOG . mX [ 253ULL
] = Battery_MOSFET_Ideal_Switching4_diode_i ; out -> mLOG . mX [ 254ULL ] =
t123 -> mX . mX [ 31ULL ] ; out -> mLOG . mX [ 255ULL ] = t123 -> mX . mX [
33ULL ] ; out -> mLOG . mX [ 256ULL ] = t123 -> mX . mX [ 51ULL ] ; out ->
mLOG . mX [ 257ULL ] = - t123 -> mX . mX [ 31ULL ] + t123 -> mX . mX [ 33ULL
] ; out -> mLOG . mX [ 258ULL ] = t123 -> mX . mX [ 31ULL ] ; out -> mLOG .
mX [ 259ULL ] = Battery_MOSFET_Ideal_Switching4_diode_i ; out -> mLOG . mX [
260ULL ] = Battery_MOSFET_Ideal_Switching4_diode_i ; out -> mLOG . mX [
261ULL ] = Battery_MOSFET_Ideal_Switching4_diode_i ; out -> mLOG . mX [
262ULL ] = t123 -> mX . mX [ 31ULL ] ; out -> mLOG . mX [ 263ULL ] = t123 ->
mX . mX [ 33ULL ] ; out -> mLOG . mX [ 264ULL ] =
Battery_MOSFET_Ideal_Switching4_diode_i *
Battery_MOSFET_Ideal_Switching4_diode_v_diode * 0.001 * 1000.0 ; out -> mLOG
. mX [ 265ULL ] = Battery_MOSFET_Ideal_Switching4_diode_v_diode ; out -> mLOG
. mX [ 266ULL ] = Battery_MOSFET_Ideal_Switching4_diode_v_diode ; out -> mLOG
. mX [ 267ULL ] = Battery_MOSFET_Ideal_Switching4_diode_i * 0.001 +
0.799999992 ; out -> mLOG . mX [ 268ULL ] = t123 -> mX . mX [ 50ULL ] -
Battery_MOSFET_Ideal_Switching4_diode_i ; out -> mLOG . mX [ 269ULL ] = t123
-> mU . mX [ 1ULL ] ; out -> mLOG . mX [ 270ULL ] = t123 -> mX . mX [ 50ULL ]
; out -> mLOG . mX [ 271ULL ] = t123 -> mX . mX [ 33ULL ] ; out -> mLOG . mX
[ 272ULL ] = t123 -> mX . mX [ 31ULL ] ; out -> mLOG . mX [ 273ULL ] = t123
-> mX . mX [ 50ULL ] * t107 * 0.001 * 1000.0 ; out -> mLOG . mX [ 274ULL ] =
t107 ; out -> mLOG . mX [ 275ULL ] = t123 -> mU . mX [ 1ULL ] ; out -> mLOG .
mX [ 276ULL ] = t123 -> mX . mX [ 31ULL ] - t123 -> mX . mX [ 33ULL ] ; out
-> mLOG . mX [ 277ULL ] = t123 -> mX . mX [ 32ULL ] ; out -> mLOG . mX [
278ULL ] = t123 -> mU . mX [ 2ULL ] ; out -> mLOG . mX [ 279ULL ] = t123 ->
mX . mX [ 33ULL ] ; out -> mLOG . mX [ 280ULL ] =
Battery_MOSFET_Ideal_Switching5_diode_i ; out -> mLOG . mX [ 281ULL ] = t123
-> mX . mX [ 32ULL ] ; out -> mLOG . mX [ 282ULL ] = t123 -> mX . mX [ 33ULL
] ; out -> mLOG . mX [ 283ULL ] = t123 -> mX . mX [ 53ULL ] ; out -> mLOG .
mX [ 284ULL ] = - t123 -> mX . mX [ 32ULL ] + t123 -> mX . mX [ 33ULL ] ; out
-> mLOG . mX [ 285ULL ] = t123 -> mX . mX [ 32ULL ] ; out -> mLOG . mX [
286ULL ] = Battery_MOSFET_Ideal_Switching5_diode_i ; out -> mLOG . mX [
287ULL ] = Battery_MOSFET_Ideal_Switching5_diode_i ; out -> mLOG . mX [
288ULL ] = Battery_MOSFET_Ideal_Switching5_diode_i ; out -> mLOG . mX [
289ULL ] = t123 -> mX . mX [ 32ULL ] ; out -> mLOG . mX [ 290ULL ] = t123 ->
mX . mX [ 33ULL ] ; out -> mLOG . mX [ 291ULL ] =
Battery_MOSFET_Ideal_Switching5_diode_i *
Battery_MOSFET_Ideal_Switching5_diode_v_diode * 0.001 * 1000.0 ; out -> mLOG
. mX [ 292ULL ] = Battery_MOSFET_Ideal_Switching5_diode_v_diode ; out -> mLOG
. mX [ 293ULL ] = Battery_MOSFET_Ideal_Switching5_diode_v_diode ; out -> mLOG
. mX [ 294ULL ] = Battery_MOSFET_Ideal_Switching5_diode_i * 0.001 +
0.799999992 ; out -> mLOG . mX [ 295ULL ] = t123 -> mX . mX [ 52ULL ] -
Battery_MOSFET_Ideal_Switching5_diode_i ; out -> mLOG . mX [ 296ULL ] = t123
-> mU . mX [ 2ULL ] ; out -> mLOG . mX [ 297ULL ] = t123 -> mX . mX [ 52ULL ]
; out -> mLOG . mX [ 298ULL ] = t123 -> mX . mX [ 33ULL ] ; out -> mLOG . mX
[ 299ULL ] = t123 -> mX . mX [ 32ULL ] ; out -> mLOG . mX [ 300ULL ] = t123
-> mX . mX [ 52ULL ] * t112 * 0.001 * 1000.0 ; out -> mLOG . mX [ 301ULL ] =
t112 ; out -> mLOG . mX [ 302ULL ] = t123 -> mU . mX [ 2ULL ] ; out -> mLOG .
mX [ 303ULL ] = t123 -> mX . mX [ 32ULL ] - t123 -> mX . mX [ 33ULL ] ; out
-> mLOG . mX [ 304ULL ] = t123 -> mX . mX [ 16ULL ] ; out -> mLOG . mX [
305ULL ] = t123 -> mX . mX [ 16ULL ] ; out -> mLOG . mX [ 306ULL ] = t114 ;
out -> mLOG . mX [ 307ULL ] = t123 -> mX . mX [ 25ULL ] ; out -> mLOG . mX [
308ULL ] = t123 -> mX . mX [ 24ULL ] ; out -> mLOG . mX [ 309ULL ] = t114 *
20.0 ; out -> mLOG . mX [ 310ULL ] = t114 * t114 * 20.0 ; out -> mLOG . mX [
311ULL ] = Battery_Resistor1_i ; out -> mLOG . mX [ 312ULL ] = t123 -> mX .
mX [ 31ULL ] ; out -> mLOG . mX [ 313ULL ] = t123 -> mX . mX [ 27ULL ] ; out
-> mLOG . mX [ 314ULL ] = Battery_Resistor1_i * 20.0 ; out -> mLOG . mX [
315ULL ] = Battery_Resistor1_i * Battery_Resistor1_i * 20.0 ; out -> mLOG .
mX [ 316ULL ] = Battery_Resistor2_i ; out -> mLOG . mX [ 317ULL ] = t123 ->
mX . mX [ 37ULL ] ; out -> mLOG . mX [ 318ULL ] = t123 -> mX . mX [ 33ULL ] ;
out -> mLOG . mX [ 319ULL ] = Battery_Resistor2_i * 20.0 ; out -> mLOG . mX [
320ULL ] = Battery_Resistor2_i * Battery_Resistor2_i * 20.0 ; out -> mLOG .
mX [ 321ULL ] = Battery_Resistor3_i ; out -> mLOG . mX [ 322ULL ] = t123 ->
mX . mX [ 26ULL ] ; out -> mLOG . mX [ 323ULL ] = t123 -> mX . mX [ 24ULL ] ;
out -> mLOG . mX [ 324ULL ] = Battery_Resistor3_i * 20.0 ; out -> mLOG . mX [
325ULL ] = Battery_Resistor3_i * Battery_Resistor3_i * 20.0 ; out -> mLOG .
mX [ 326ULL ] = Battery_Resistor4_i ; out -> mLOG . mX [ 327ULL ] = t123 ->
mX . mX [ 32ULL ] ; out -> mLOG . mX [ 328ULL ] = t123 -> mX . mX [ 27ULL ] ;
out -> mLOG . mX [ 329ULL ] = Battery_Resistor4_i * 20.0 ; out -> mLOG . mX [
330ULL ] = Battery_Resistor4_i * Battery_Resistor4_i * 20.0 ; out -> mLOG .
mX [ 331ULL ] = Battery_Resistor5_i ; out -> mLOG . mX [ 332ULL ] = t123 ->
mX . mX [ 38ULL ] ; out -> mLOG . mX [ 333ULL ] = t123 -> mX . mX [ 33ULL ] ;
out -> mLOG . mX [ 334ULL ] = Battery_Resistor5_i * 20.0 ; out -> mLOG . mX [
335ULL ] = Battery_Resistor5_i * Battery_Resistor5_i * 20.0 ; out -> mLOG .
mX [ 336ULL ] = t123 -> mU . mX [ 0ULL ] ; out -> mLOG . mX [ 337ULL ] = t123
-> mU . mX [ 1ULL ] ; out -> mLOG . mX [ 338ULL ] = t123 -> mU . mX [ 2ULL ]
; out -> mLOG . mX [ 339ULL ] = t123 -> mU . mX [ 3ULL ] ; out -> mLOG . mX [
340ULL ] = t123 -> mU . mX [ 4ULL ] ; out -> mLOG . mX [ 341ULL ] = t123 ->
mU . mX [ 5ULL ] ; out -> mLOG . mX [ 342ULL ] =
Battery_Battery_Table_Based_electricalModel_i ; out -> mLOG . mX [ 343ULL ] =
Battery_Battery_Table_Based_electricalModel_i ; out -> mLOG . mX [ 344ULL ] =
t123 -> mX . mX [ 24ULL ] ; out -> mLOG . mX [ 345ULL ] = t123 -> mX . mX [
24ULL ] ; out -> mLOG . mX [ 346ULL ] =
Battery_Battery_Table_Based_electricalModel_i ; out -> mLOG . mX [ 347ULL ] =
t123 -> mX . mX [ 24ULL ] ; out -> mLOG . mX [ 348ULL ] = t123 -> mX . mX [
24ULL ] ; out -> mLOG . mX [ 349ULL ] =
Battery_Battery_Table_Based1_electricalModel_i ; out -> mLOG . mX [ 350ULL ]
= Battery_Battery_Table_Based1_electricalModel_i ; out -> mLOG . mX [ 351ULL
] = t123 -> mX . mX [ 27ULL ] ; out -> mLOG . mX [ 352ULL ] = t123 -> mX . mX
[ 27ULL ] ; out -> mLOG . mX [ 353ULL ] =
Battery_Battery_Table_Based1_electricalModel_i ; out -> mLOG . mX [ 354ULL ]
= t123 -> mX . mX [ 27ULL ] ; out -> mLOG . mX [ 355ULL ] = t123 -> mX . mX [
27ULL ] ; out -> mLOG . mX [ 356ULL ] =
Battery_Battery_Table_Based2_electricalModel_i ; out -> mLOG . mX [ 357ULL ]
= Battery_Battery_Table_Based2_electricalModel_i ; out -> mLOG . mX [ 358ULL
] = t123 -> mX . mX [ 33ULL ] ; out -> mLOG . mX [ 359ULL ] = t123 -> mX . mX
[ 33ULL ] ; out -> mLOG . mX [ 360ULL ] =
Battery_Battery_Table_Based2_electricalModel_i ; out -> mLOG . mX [ 361ULL ]
= t123 -> mX . mX [ 33ULL ] ; out -> mLOG . mX [ 362ULL ] = t123 -> mX . mX [
33ULL ] ; out -> mLOG . mX [ 363ULL ] = t123 -> mX . mX [ 0ULL ] ; out ->
mLOG . mX [ 364ULL ] = t123 -> mX . mX [ 0ULL ] ; out -> mLOG . mX [ 365ULL ]
= t123 -> mX . mX [ 0ULL ] ; out -> mLOG . mX [ 366ULL ] = t123 -> mX . mX [
0ULL ] ; out -> mLOG . mX [ 367ULL ] = t123 -> mX . mX [ 8ULL ] ; out -> mLOG
. mX [ 368ULL ] = t123 -> mX . mX [ 8ULL ] ; out -> mLOG . mX [ 369ULL ] =
t123 -> mX . mX [ 8ULL ] ; out -> mLOG . mX [ 370ULL ] = t123 -> mX . mX [
8ULL ] ; out -> mLOG . mX [ 371ULL ] = t123 -> mX . mX [ 16ULL ] ; out ->
mLOG . mX [ 372ULL ] = t123 -> mX . mX [ 16ULL ] ; out -> mLOG . mX [ 373ULL
] = t123 -> mX . mX [ 16ULL ] ; out -> mLOG . mX [ 374ULL ] = t123 -> mX . mX
[ 16ULL ] ; out -> mLOG . mX [ 375ULL ] = t123 -> mX . mX [ 0ULL ] ; out ->
mLOG . mX [ 376ULL ] = - 149.359925 + piece11 * 1000.0 ; out -> mLOG . mX [
377ULL ] = t123 -> mX . mX [ 0ULL ] ; out -> mLOG . mX [ 378ULL ] = -
149.359925 + piece11 * 1000.0 ; out -> mLOG . mX [ 379ULL ] = ( t123 -> mX .
mX [ 0ULL ] * 0.00050950000000000008 - 0.149359925 ) * 1962.708537782139 ;
out -> mLOG . mX [ 380ULL ] = Battery_Voltage_Sensor_V ; out -> mLOG . mX [
381ULL ] = t123 -> mX . mX [ 27ULL ] ; out -> mLOG . mX [ 382ULL ] = t123 ->
mX . mX [ 24ULL ] ; out -> mLOG . mX [ 383ULL ] = t118 ; out -> mLOG . mX [
384ULL ] = t123 -> mX . mX [ 33ULL ] ; out -> mLOG . mX [ 385ULL ] = t123 ->
mX . mX [ 27ULL ] ; out -> mLOG . mX [ 386ULL ] = t118 ; out -> mLOG . mX [
387ULL ] = t123 -> mX . mX [ 33ULL ] ; out -> mLOG . mX [ 388ULL ] = t123 ->
mX . mX [ 33ULL ] ; out -> mLOG . mX [ 389ULL ] = t123 -> mX . mX [ 33ULL ] ;
out -> mLOG . mX [ 390ULL ] = Battery_Voltage_Sensor_V ; out -> mLOG . mX [
391ULL ] = t123 -> mX . mX [ 24ULL ] ; out -> mLOG . mX [ 392ULL ] = t123 ->
mX . mX [ 24ULL ] ; out -> mLOG . mX [ 393ULL ] = t123 -> mU . mX [ 6ULL ] ;
out -> mLOG . mX [ 394ULL ] = t123 -> mU . mX [ 6ULL ] ; out -> mLOG . mX [
395ULL ] = - t123 -> mX . mX [ 24ULL ] ; out -> mLOG . mX [ 396ULL ] = t123
-> mU . mX [ 6ULL ] ; out -> mLOG . mX [ 397ULL ] = t123 -> mX . mX [ 24ULL ]
; out -> mLOG . mX [ 398ULL ] = t123 -> mX . mX [ 24ULL ] ; out -> mLOG . mX
[ 399ULL ] = t123 -> mX . mX [ 24ULL ] ; out -> mLOG . mX [ 400ULL ] = t123
-> mX . mX [ 35ULL ] ; out -> mLOG . mX [ 401ULL ] = t123 -> mX . mX [ 40ULL
] ; out -> mLOG . mX [ 402ULL ] = t123 -> mX . mX [ 29ULL ] ; ( void ) LC ; (
void ) out ; return 0 ; }
