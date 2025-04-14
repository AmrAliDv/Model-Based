#include "ne_ds.h"
#include "Enhanced_BMS_7ded21a_1_ds_sys_struct.h"
#include "Enhanced_BMS_7ded21a_1_ds_f.h"
#include "Enhanced_BMS_7ded21a_1_ds.h"
#include "Enhanced_BMS_7ded21a_1_ds_externals.h"
#include "Enhanced_BMS_7ded21a_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Enhanced_BMS_7ded21a_1_ds_f ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t158 , NeDsMethodOutput * out ) { static real_T
_cg_const_1 [ 3 ] = { 278.15 , 293.15 , 313.15 } ; ETTSf3049b48 t0 ;
ETTSf3049b48 t1 ; ETTSf3049b48 t2 ; ETTSf3049b48 t3 ; ETTSf3049b48 t4 ;
ETTSf3049b48 t5 ; real_T
Battery_Battery_Table_Based1_electricalModel_xGdynamic [ 5 ] ; real_T
Battery_Battery_Table_Based2_electricalModel_xGdynamic [ 5 ] ; real_T
Battery_Battery_Table_Based_electricalModel_xGdynamic [ 5 ] ; real_T t88 [ 5
] ; real_T nonscalar2 [ 3 ] ; real_T nonscalar4 [ 3 ] ; real_T t86 [ 1 ] ;
real_T t93 [ 1 ] ; real_T Battery_Battery_Table_Based1_electricalModel_i ;
real_T Battery_Battery_Table_Based2_electricalModel_i ; real_T t10 ; real_T
t11 ; real_T t12 ; real_T t13 ; real_T t14 ; real_T t145 ; real_T t149 ;
real_T t15 ; real_T t150 ; real_T t157 ; real_T t17 ; real_T t20 ; real_T t22
; real_T t23 ; real_T t24 ; real_T t25 ; real_T t26 ; real_T t9 ; real_T
zc_int0 ; real_T zc_int10 ; real_T zc_int11 ; real_T zc_int12 ; real_T
zc_int13 ; real_T zc_int14 ; real_T zc_int2 ; real_T zc_int3 ; real_T zc_int6
; real_T zc_int9 ; size_t t29 [ 1 ] ; size_t t31 [ 1 ] ; size_t t99 [ 1 ] ;
size_t t113 ; size_t t114 ; size_t t118 ; nonscalar2 [ 0 ] = _cg_const_1 [ 0
] ; nonscalar2 [ 1 ] = _cg_const_1 [ 1 ] ; nonscalar2 [ 2 ] = _cg_const_1 [ 2
] ; nonscalar4 [ 0 ] = 14400.0 ; nonscalar4 [ 1 ] = 14400.0 ; nonscalar4 [ 2
] = 14400.0 ; t150 = ( ( t158 -> mX . mX [ 24ULL ] * - 0.1 + t158 -> mX . mX
[ 25ULL ] * 0.05 ) + t158 -> mX . mX [ 26ULL ] * 0.05 ) + t158 -> mU . mX [
6ULL ] ; t93 [ 0ULL ] = t158 -> mX . mX [ 28ULL ] ; t99 [ 0 ] = 11ULL ; t29 [
0 ] = 1ULL ; tlu2_linear_linear_prelookup ( & t4 . mField0 [ 0ULL ] , & t4 .
mField1 [ 0ULL ] , & t4 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField1 , & t93 [ 0ULL ] , & t99 [ 0ULL ] , & t29 [ 0ULL ] ) ; t93 [
0ULL ] = t158 -> mX . mX [ 0ULL ] ; t31 [ 0 ] = 3ULL ;
tlu2_linear_linear_prelookup ( & t3 . mField0 [ 0ULL ] , & t3 . mField1 [
0ULL ] , & t3 . mField2 [ 0ULL ] , & nonscalar2 [ 0ULL ] , & t93 [ 0ULL ] , &
t31 [ 0ULL ] , & t29 [ 0ULL ] ) ; tlu2_2d_linear_linear_value ( & t86 [ 0ULL
] , & t4 . mField0 [ 0ULL ] , & t4 . mField2 [ 0ULL ] , & t3 . mField0 [ 0ULL
] , & t3 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 ,
& t99 [ 0ULL ] , & t31 [ 0ULL ] , & t29 [ 0ULL ] ) ; t157 = t86 [ 0ULL ] ;
t88 [ 0ULL ] = t158 -> mX . mX [ 29ULL ] ; t88 [ 1ULL ] = 0.0 ; t88 [ 2ULL ]
= 0.0 ; t88 [ 3ULL ] = 0.0 ; t88 [ 4ULL ] = 0.0 ; for ( t118 = 0ULL ; t118 <
5ULL ; t118 ++ ) { Battery_Battery_Table_Based_electricalModel_xGdynamic [
t118 ] = t88 [ t118 ] ; } tlu2_2d_linear_linear_value ( & t86 [ 0ULL ] , & t4
. mField0 [ 0ULL ] , & t4 . mField2 [ 0ULL ] , & t3 . mField0 [ 0ULL ] , & t3
. mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t99 [
0ULL ] , & t31 [ 0ULL ] , & t29 [ 0ULL ] ) ; zc_int10 = t86 [ 0ULL ] ;
tlu2_1d_linear_linear_value ( & t86 [ 0ULL ] , & t3 . mField0 [ 0ULL ] , & t3
. mField2 [ 0ULL ] , & nonscalar4 [ 0ULL ] , & t31 [ 0ULL ] , & t29 [ 0ULL ]
) ; zc_int9 = t86 [ 0ULL ] ; Battery_Battery_Table_Based1_electricalModel_i =
( ( t158 -> mX . mX [ 27ULL ] * - 0.1 + t158 -> mX . mX [ 31ULL ] * 0.05 ) +
t158 -> mX . mX [ 32ULL ] * 0.05 ) + t158 -> mU . mX [ 6ULL ] ; t93 [ 0ULL ]
= t158 -> mX . mX [ 34ULL ] ; tlu2_linear_linear_prelookup ( & t5 . mField0 [
0ULL ] , & t5 . mField1 [ 0ULL ] , & t5 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t93 [ 0ULL ] , & t99 [ 0ULL ] ,
& t29 [ 0ULL ] ) ; t93 [ 0ULL ] = t158 -> mX . mX [ 8ULL ] ;
tlu2_linear_linear_prelookup ( & t1 . mField0 [ 0ULL ] , & t1 . mField1 [
0ULL ] , & t1 . mField2 [ 0ULL ] , & nonscalar2 [ 0ULL ] , & t93 [ 0ULL ] , &
t31 [ 0ULL ] , & t29 [ 0ULL ] ) ; tlu2_2d_linear_linear_value ( & t86 [ 0ULL
] , & t5 . mField0 [ 0ULL ] , & t5 . mField2 [ 0ULL ] , & t1 . mField0 [ 0ULL
] , & t1 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 ,
& t99 [ 0ULL ] , & t31 [ 0ULL ] , & t29 [ 0ULL ] ) ; zc_int12 = t86 [ 0ULL ]
; t88 [ 0ULL ] = t158 -> mX . mX [ 35ULL ] ; t88 [ 1ULL ] = 0.0 ; t88 [ 2ULL
] = 0.0 ; t88 [ 3ULL ] = 0.0 ; t88 [ 4ULL ] = 0.0 ; for ( t113 = 0ULL ; t113
< 5ULL ; t113 ++ ) { Battery_Battery_Table_Based1_electricalModel_xGdynamic [
t113 ] = t88 [ t113 ] ; } tlu2_2d_linear_linear_value ( & t86 [ 0ULL ] , & t5
. mField0 [ 0ULL ] , & t5 . mField2 [ 0ULL ] , & t1 . mField0 [ 0ULL ] , & t1
. mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t99 [
0ULL ] , & t31 [ 0ULL ] , & t29 [ 0ULL ] ) ; zc_int3 = t86 [ 0ULL ] ;
tlu2_1d_linear_linear_value ( & t86 [ 0ULL ] , & t1 . mField0 [ 0ULL ] , & t1
. mField2 [ 0ULL ] , & nonscalar4 [ 0ULL ] , & t31 [ 0ULL ] , & t29 [ 0ULL ]
) ; Battery_Battery_Table_Based2_electricalModel_i = ( ( t158 -> mX . mX [
33ULL ] * - 0.1 + t158 -> mX . mX [ 37ULL ] * 0.05 ) + t158 -> mX . mX [
38ULL ] * 0.05 ) + t158 -> mU . mX [ 6ULL ] ; t93 [ 0ULL ] = t158 -> mX . mX
[ 39ULL ] ; tlu2_linear_linear_prelookup ( & t0 . mField0 [ 0ULL ] , & t0 .
mField1 [ 0ULL ] , & t0 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField1 , & t93 [ 0ULL ] , & t99 [ 0ULL ] , & t29 [ 0ULL ] ) ; t93 [
0ULL ] = t158 -> mX . mX [ 16ULL ] ; tlu2_linear_linear_prelookup ( & t2 .
mField0 [ 0ULL ] , & t2 . mField1 [ 0ULL ] , & t2 . mField2 [ 0ULL ] , &
nonscalar2 [ 0ULL ] , & t93 [ 0ULL ] , & t31 [ 0ULL ] , & t29 [ 0ULL ] ) ;
tlu2_2d_linear_linear_value ( & t93 [ 0ULL ] , & t0 . mField0 [ 0ULL ] , & t0
. mField2 [ 0ULL ] , & t2 . mField0 [ 0ULL ] , & t2 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField5 , & t99 [ 0ULL ] , & t31 [ 0ULL ] ,
& t29 [ 0ULL ] ) ; zc_int14 = t93 [ 0ULL ] ; t88 [ 0ULL ] = t158 -> mX . mX [
40ULL ] ; t88 [ 1ULL ] = 0.0 ; t88 [ 2ULL ] = 0.0 ; t88 [ 3ULL ] = 0.0 ; t88
[ 4ULL ] = 0.0 ; for ( t114 = 0ULL ; t114 < 5ULL ; t114 ++ ) {
Battery_Battery_Table_Based2_electricalModel_xGdynamic [ t114 ] = t88 [ t114
] ; } tlu2_2d_linear_linear_value ( & t93 [ 0ULL ] , & t0 . mField0 [ 0ULL ]
, & t0 . mField2 [ 0ULL ] , & t2 . mField0 [ 0ULL ] , & t2 . mField2 [ 0ULL ]
, ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , & t99 [ 0ULL ] , & t31 [
0ULL ] , & t29 [ 0ULL ] ) ; zc_int6 = t93 [ 0ULL ] ;
tlu2_1d_linear_linear_value ( & t93 [ 0ULL ] , & t2 . mField0 [ 0ULL ] , & t2
. mField2 [ 0ULL ] , & nonscalar4 [ 0ULL ] , & t31 [ 0ULL ] , & t29 [ 0ULL ]
) ; t149 = t93 [ 0ULL ] ; t11 = ( t158 -> mX . mX [ 24ULL ] * - 0.05 + t158
-> mX . mX [ 25ULL ] * 0.05 ) + t158 -> mX . mX [ 42ULL ] ; t10 = - t158 ->
mX . mX [ 25ULL ] + t158 -> mX . mX [ 27ULL ] ; t12 = - t158 -> mX . mX [
27ULL ] + t158 -> mX . mX [ 25ULL ] ; t14 = ( t158 -> mX . mX [ 24ULL ] * -
0.05 + t158 -> mX . mX [ 26ULL ] * 0.05 ) + t158 -> mX . mX [ 44ULL ] ; t13 =
- t158 -> mX . mX [ 26ULL ] + t158 -> mX . mX [ 27ULL ] ; t15 = - t158 -> mX
. mX [ 27ULL ] + t158 -> mX . mX [ 26ULL ] ; t17 = ( t158 -> mX . mX [ 33ULL
] * - 0.05 + t158 -> mX . mX [ 37ULL ] * 0.05 ) + t158 -> mX . mX [ 46ULL ] ;
t20 = ( t158 -> mX . mX [ 33ULL ] * - 0.05 + t158 -> mX . mX [ 38ULL ] * 0.05
) + t158 -> mX . mX [ 48ULL ] ; t23 = ( t158 -> mX . mX [ 27ULL ] * - 0.05 +
t158 -> mX . mX [ 31ULL ] * 0.05 ) + t158 -> mX . mX [ 50ULL ] ; t22 = - t158
-> mX . mX [ 31ULL ] + t158 -> mX . mX [ 33ULL ] ; t24 = - t158 -> mX . mX [
33ULL ] + t158 -> mX . mX [ 31ULL ] ; t26 = ( t158 -> mX . mX [ 27ULL ] * -
0.05 + t158 -> mX . mX [ 32ULL ] * 0.05 ) + t158 -> mX . mX [ 52ULL ] ; t25 =
- t158 -> mX . mX [ 32ULL ] + t158 -> mX . mX [ 33ULL ] ; t145 = - t158 -> mX
. mX [ 33ULL ] + t158 -> mX . mX [ 32ULL ] ; tlu2_2d_linear_linear_value ( &
t93 [ 0ULL ] , & t0 . mField0 [ 0ULL ] , & t0 . mField2 [ 0ULL ] , & t2 .
mField0 [ 0ULL ] , & t2 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField8 , & t99 [ 0ULL ] , & t31 [ 0ULL ] , & t29 [ 0ULL ] ) ; t9 = t93
[ 0ULL ] ; tlu2_2d_linear_linear_value ( & t93 [ 0ULL ] , & t4 . mField0 [
0ULL ] , & t4 . mField2 [ 0ULL ] , & t3 . mField0 [ 0ULL ] , & t3 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField9 , & t99 [ 0ULL ] , &
t31 [ 0ULL ] , & t29 [ 0ULL ] ) ; zc_int2 = t93 [ 0ULL ] ;
tlu2_2d_linear_linear_value ( & t93 [ 0ULL ] , & t5 . mField0 [ 0ULL ] , & t5
. mField2 [ 0ULL ] , & t1 . mField0 [ 0ULL ] , & t1 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField11 , & t99 [ 0ULL ] , & t31 [ 0ULL ] ,
& t29 [ 0ULL ] ) ; if ( t158 -> mM . mX [ 0ULL ] != 0 ) { t99 [ 0ULL ] = 0ULL
; for ( t118 = 0ULL ; t118 < 33ULL ; t118 ++ ) { t113 = t118 / 33ULL ; t114 =
( t118 - t118 % 33ULL ) + t99 [ t113 > 0ULL ? 0ULL : t113 ] ; if ( ( (
_NeDynamicSystem * ) ( LC ) ) -> mField0 [ t118 ] * 1.0E-5 < ( (
_NeDynamicSystem * ) ( LC ) ) -> mField0 [ t114 > 32ULL ? 32ULL : t114 ] *
1.0E-5 ) { t99 [ t113 > 0ULL ? 0ULL : t113 ] = t118 % 33ULL ; } } zc_int0 = (
( _NeDynamicSystem * ) ( LC ) ) -> mField0 [ t99 [ 0ULL ] > 32ULL ? 32ULL :
t99 [ 0ULL ] ] * 1.0E-5 ; } else { zc_int0 = t157 ; } if ( t158 -> mM . mX [
1ULL ] != 0 ) { t157 = 0.14400000000000002 ; } else { t157 = zc_int9 ; } if (
t158 -> mM . mX [ 41ULL ] != 0 ) { zc_int9 = 8.200000000000002E-8 ; } else {
zc_int9 = zc_int10 ; } if ( t158 -> mM . mX [ 2ULL ] != 0 ) { zc_int11 =
8.200000000000002E-8 ; } else { zc_int11 = zc_int3 ; } if ( t158 -> mM . mX [
23ULL ] != 0 ) { t99 [ 0ULL ] = 0ULL ; for ( t118 = 0ULL ; t118 < 33ULL ;
t118 ++ ) { t113 = t118 / 33ULL ; t114 = ( t118 - t118 % 33ULL ) + t99 [ t113
> 0ULL ? 0ULL : t113 ] ; if ( ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 [
t118 ] * 1.0E-5 < ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 [ t114 > 32ULL
? 32ULL : t114 ] * 1.0E-5 ) { t99 [ t113 > 0ULL ? 0ULL : t113 ] = t118 %
33ULL ; } } zc_int3 = ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 [ t99 [
0ULL ] > 32ULL ? 32ULL : t99 [ 0ULL ] ] * 1.0E-5 ; } else { zc_int3 =
zc_int12 ; } if ( t158 -> mM . mX [ 3ULL ] != 0 ) { zc_int13 =
8.200000000000002E-8 ; } else { zc_int13 = zc_int6 ; } if ( t158 -> mM . mX [
38ULL ] != 0 ) { t99 [ 0ULL ] = 0ULL ; for ( t118 = 0ULL ; t118 < 33ULL ;
t118 ++ ) { t113 = t118 / 33ULL ; t114 = ( t118 - t118 % 33ULL ) + t99 [ t113
> 0ULL ? 0ULL : t113 ] ; if ( ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 [
t118 ] * 1.0E-5 < ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 [ t114 > 32ULL
? 32ULL : t114 ] * 1.0E-5 ) { t99 [ t113 > 0ULL ? 0ULL : t113 ] = t118 %
33ULL ; } } zc_int6 = ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 [ t99 [
0ULL ] > 32ULL ? 32ULL : t99 [ 0ULL ] ] * 1.0E-5 ; } else { zc_int6 =
zc_int14 ; } if ( t158 -> mM . mX [ 12ULL ] != 0 ) { t99 [ 0ULL ] = 0ULL ;
for ( t118 = 0ULL ; t118 < 33ULL ; t118 ++ ) { t113 = t118 / 33ULL ; t114 = (
t118 - t118 % 33ULL ) + t99 [ t113 > 0ULL ? 0ULL : t113 ] ; if ( ( (
_NeDynamicSystem * ) ( LC ) ) -> mField9 [ t118 ] * 1.0E-5 < ( (
_NeDynamicSystem * ) ( LC ) ) -> mField9 [ t114 > 32ULL ? 32ULL : t114 ] *
1.0E-5 ) { t99 [ t113 > 0ULL ? 0ULL : t113 ] = t118 % 33ULL ; } } zc_int12 =
( ( _NeDynamicSystem * ) ( LC ) ) -> mField9 [ t99 [ 0ULL ] > 32ULL ? 32ULL :
t99 [ 0ULL ] ] * 1.0E-5 ; } else { zc_int12 = zc_int2 ; } zc_int2 = 1.0 / (
zc_int12 == 0.0 ? 1.0E-16 : zc_int12 ) ; if ( t158 -> mM . mX [ 34ULL ] != 0
) { zc_int12 = 0.14400000000000002 ; } else { zc_int12 = t86 [ 0ULL ] ; } if
( t158 -> mM . mX [ 37ULL ] != 0 ) { t99 [ 0ULL ] = 0ULL ; for ( t118 = 0ULL
; t118 < 33ULL ; t118 ++ ) { t113 = t118 / 33ULL ; t114 = ( t118 - t118 %
33ULL ) + t99 [ t113 > 0ULL ? 0ULL : t113 ] ; if ( ( ( _NeDynamicSystem * ) (
LC ) ) -> mField11 [ t118 ] * 1.0E-5 < ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField11 [ t114 > 32ULL ? 32ULL : t114 ] * 1.0E-5 ) { t99 [ t113 > 0ULL ?
0ULL : t113 ] = t118 % 33ULL ; } } zc_int10 = ( ( _NeDynamicSystem * ) ( LC )
) -> mField11 [ t99 [ 0ULL ] > 32ULL ? 32ULL : t99 [ 0ULL ] ] * 1.0E-5 ; }
else { zc_int10 = t93 [ 0ULL ] ; } zc_int14 = 1.0 / ( zc_int10 == 0.0 ?
1.0E-16 : zc_int10 ) ; if ( t158 -> mM . mX [ 39ULL ] != 0 ) { t149 =
0.14400000000000002 ; } if ( t158 -> mM . mX [ 40ULL ] != 0 ) { t99 [ 0ULL ]
= 0ULL ; for ( t118 = 0ULL ; t118 < 33ULL ; t118 ++ ) { t113 = t118 / 33ULL ;
t114 = ( t118 - t118 % 33ULL ) + t99 [ t113 > 0ULL ? 0ULL : t113 ] ; if ( ( (
_NeDynamicSystem * ) ( LC ) ) -> mField8 [ t118 ] * 1.0E-5 < ( (
_NeDynamicSystem * ) ( LC ) ) -> mField8 [ t114 > 32ULL ? 32ULL : t114 ] *
1.0E-5 ) { t99 [ t113 > 0ULL ? 0ULL : t113 ] = t118 % 33ULL ; } } zc_int10 =
( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 [ t99 [ 0ULL ] > 32ULL ? 32ULL :
t99 [ 0ULL ] ] * 1.0E-5 ; } else { zc_int10 = t9 ; } zc_int10 = 1.0 / (
zc_int10 == 0.0 ? 1.0E-16 : zc_int10 ) ; if ( t158 -> mM . mX [ 4ULL ] != 0 )
{ out -> mF . mX [ 36ULL ] = t10 - ( t158 -> mX . mX [ 43ULL ] + 0.8 ) ; }
else { out -> mF . mX [ 36ULL ] = t10 - ( t158 -> mX . mX [ 43ULL ] * 0.001 +
0.8 ) ; } if ( t158 -> mM . mX [ 4ULL ] != 0 ) { out -> mF . mX [ 37ULL ] =
t11 - ( t158 -> mX . mX [ 43ULL ] * 1.0E-5 + 8.0000000000000013E-6 ) ; } else
{ out -> mF . mX [ 37ULL ] = t11 - ( t158 -> mX . mX [ 43ULL ] +
8.0000000000000013E-6 ) ; } if ( t158 -> mM . mX [ 5ULL ] != 0 ) { out -> mF
. mX [ 38ULL ] = t12 - t158 -> mX . mX [ 42ULL ] * 0.01 ; } else { out -> mF
. mX [ 38ULL ] = t12 * 1.0E-6 - t158 -> mX . mX [ 42ULL ] ; } if ( t158 -> mM
. mX [ 6ULL ] != 0 ) { out -> mF . mX [ 39ULL ] = t13 - ( t158 -> mX . mX [
45ULL ] + 0.8 ) ; } else { out -> mF . mX [ 39ULL ] = t13 - ( t158 -> mX . mX
[ 45ULL ] * 0.001 + 0.8 ) ; } if ( t158 -> mM . mX [ 6ULL ] != 0 ) { out ->
mF . mX [ 40ULL ] = t14 - ( t158 -> mX . mX [ 45ULL ] * 1.0E-5 +
8.0000000000000013E-6 ) ; } else { out -> mF . mX [ 40ULL ] = t14 - ( t158 ->
mX . mX [ 45ULL ] + 8.0000000000000013E-6 ) ; } if ( t158 -> mM . mX [ 7ULL ]
!= 0 ) { out -> mF . mX [ 41ULL ] = t15 - t158 -> mX . mX [ 44ULL ] * 0.01 ;
} else { out -> mF . mX [ 41ULL ] = t15 * 1.0E-6 - t158 -> mX . mX [ 44ULL ]
; } if ( t158 -> mM . mX [ 8ULL ] != 0 ) { out -> mF . mX [ 42ULL ] = - t158
-> mX . mX [ 37ULL ] - ( t158 -> mX . mX [ 47ULL ] + 0.8 ) ; } else { out ->
mF . mX [ 42ULL ] = - t158 -> mX . mX [ 37ULL ] - ( t158 -> mX . mX [ 47ULL ]
* 0.001 + 0.8 ) ; } if ( t158 -> mM . mX [ 8ULL ] != 0 ) { out -> mF . mX [
43ULL ] = t17 - ( t158 -> mX . mX [ 47ULL ] * 1.0E-5 + 8.0000000000000013E-6
) ; } else { out -> mF . mX [ 43ULL ] = t17 - ( t158 -> mX . mX [ 47ULL ] +
8.0000000000000013E-6 ) ; } if ( t158 -> mM . mX [ 9ULL ] != 0 ) { out -> mF
. mX [ 44ULL ] = t158 -> mX . mX [ 37ULL ] - t158 -> mX . mX [ 46ULL ] * 0.01
; } else { out -> mF . mX [ 44ULL ] = t158 -> mX . mX [ 37ULL ] * 1.0E-6 -
t158 -> mX . mX [ 46ULL ] ; } if ( t158 -> mM . mX [ 10ULL ] != 0 ) { out ->
mF . mX [ 45ULL ] = - t158 -> mX . mX [ 38ULL ] - ( t158 -> mX . mX [ 49ULL ]
+ 0.8 ) ; } else { out -> mF . mX [ 45ULL ] = - t158 -> mX . mX [ 38ULL ] - (
t158 -> mX . mX [ 49ULL ] * 0.001 + 0.8 ) ; } if ( t158 -> mM . mX [ 10ULL ]
!= 0 ) { out -> mF . mX [ 46ULL ] = t20 - ( t158 -> mX . mX [ 49ULL ] *
1.0E-5 + 8.0000000000000013E-6 ) ; } else { out -> mF . mX [ 46ULL ] = t20 -
( t158 -> mX . mX [ 49ULL ] + 8.0000000000000013E-6 ) ; } if ( t158 -> mM .
mX [ 11ULL ] != 0 ) { out -> mF . mX [ 47ULL ] = t158 -> mX . mX [ 38ULL ] -
t158 -> mX . mX [ 48ULL ] * 0.01 ; } else { out -> mF . mX [ 47ULL ] = t158
-> mX . mX [ 38ULL ] * 1.0E-6 - t158 -> mX . mX [ 48ULL ] ; } if ( t158 -> mM
. mX [ 13ULL ] != 0 ) { out -> mF . mX [ 48ULL ] = t22 - ( t158 -> mX . mX [
51ULL ] + 0.8 ) ; } else { out -> mF . mX [ 48ULL ] = t22 - ( t158 -> mX . mX
[ 51ULL ] * 0.001 + 0.8 ) ; } if ( t158 -> mM . mX [ 13ULL ] != 0 ) { out ->
mF . mX [ 49ULL ] = t23 - ( t158 -> mX . mX [ 51ULL ] * 1.0E-5 +
8.0000000000000013E-6 ) ; } else { out -> mF . mX [ 49ULL ] = t23 - ( t158 ->
mX . mX [ 51ULL ] + 8.0000000000000013E-6 ) ; } if ( t158 -> mM . mX [ 14ULL
] != 0 ) { out -> mF . mX [ 50ULL ] = t24 - t158 -> mX . mX [ 50ULL ] * 0.01
; } else { out -> mF . mX [ 50ULL ] = t24 * 1.0E-6 - t158 -> mX . mX [ 50ULL
] ; } if ( t158 -> mM . mX [ 15ULL ] != 0 ) { out -> mF . mX [ 51ULL ] = t25
- ( t158 -> mX . mX [ 53ULL ] + 0.8 ) ; } else { out -> mF . mX [ 51ULL ] =
t25 - ( t158 -> mX . mX [ 53ULL ] * 0.001 + 0.8 ) ; } if ( t158 -> mM . mX [
15ULL ] != 0 ) { out -> mF . mX [ 52ULL ] = t26 - ( t158 -> mX . mX [ 53ULL ]
* 1.0E-5 + 8.0000000000000013E-6 ) ; } else { out -> mF . mX [ 52ULL ] = t26
- ( t158 -> mX . mX [ 53ULL ] + 8.0000000000000013E-6 ) ; } if ( t158 -> mM .
mX [ 16ULL ] != 0 ) { out -> mF . mX [ 53ULL ] = t145 - t158 -> mX . mX [
52ULL ] * 0.01 ; } else { out -> mF . mX [ 53ULL ] = t145 * 1.0E-6 - t158 ->
mX . mX [ 52ULL ] ; } out -> mF . mX [ 0ULL ] = - 0.0 ; out -> mF . mX [ 1ULL
] = - t150 * ( real_T ) ( t150 < 0.0 ) / ( t157 == 0.0 ? 1.0E-16 : t157 ) ;
out -> mF . mX [ 2ULL ] = - ( t158 -> mX . mX [ 3ULL ] * zc_int2 /
1627.0628375266881 ) ; out -> mF . mX [ 3ULL ] = 0.0 ; out -> mF . mX [ 4ULL
] = 0.0 ; out -> mF . mX [ 5ULL ] = 0.0 ; out -> mF . mX [ 6ULL ] = 0.0 ; out
-> mF . mX [ 7ULL ] = 0.149359925 ; out -> mF . mX [ 8ULL ] = - 0.0 ; out ->
mF . mX [ 9ULL ] = - Battery_Battery_Table_Based1_electricalModel_i * (
real_T ) ( Battery_Battery_Table_Based1_electricalModel_i < 0.0 ) / (
zc_int12 == 0.0 ? 1.0E-16 : zc_int12 ) ; out -> mF . mX [ 10ULL ] = - ( t158
-> mX . mX [ 11ULL ] * zc_int14 / 1564.8239842061851 ) ; out -> mF . mX [
11ULL ] = 0.0 ; out -> mF . mX [ 12ULL ] = 0.0 ; out -> mF . mX [ 13ULL ] =
0.0 ; out -> mF . mX [ 14ULL ] = 0.0 ; out -> mF . mX [ 15ULL ] = - 0.0 ; out
-> mF . mX [ 16ULL ] = - 0.0 ; out -> mF . mX [ 17ULL ] = -
Battery_Battery_Table_Based2_electricalModel_i * ( real_T ) (
Battery_Battery_Table_Based2_electricalModel_i < 0.0 ) / ( t149 == 0.0 ?
1.0E-16 : t149 ) ; out -> mF . mX [ 18ULL ] = - ( t158 -> mX . mX [ 19ULL ] *
zc_int10 / 1633.3472493891418 ) ; out -> mF . mX [ 19ULL ] = 0.0 ; out -> mF
. mX [ 20ULL ] = 0.0 ; out -> mF . mX [ 21ULL ] = 0.0 ; out -> mF . mX [
22ULL ] = 0.0 ; out -> mF . mX [ 23ULL ] = - 0.0 ; out -> mF . mX [ 24ULL ] =
- ( t150 * zc_int9 + zc_int0 ) ; out -> mF . mX [ 25ULL ] = - ( t158 -> mX .
mX [ 1ULL ] / ( t157 == 0.0 ? 1.0E-16 : t157 ) ) ; out -> mF . mX [ 26ULL ] =
- ( t150 * t150 * zc_int9 * 0.001 + ( ( ( ( t158 -> mX . mX [ 3ULL ] * t158
-> mX . mX [ 3ULL ] * Battery_Battery_Table_Based_electricalModel_xGdynamic [
0ULL ] + t158 -> mX . mX [ 4ULL ] * t158 -> mX . mX [ 4ULL ] *
Battery_Battery_Table_Based_electricalModel_xGdynamic [ 1ULL ] ) + t158 -> mX
. mX [ 5ULL ] * t158 -> mX . mX [ 5ULL ] *
Battery_Battery_Table_Based_electricalModel_xGdynamic [ 2ULL ] ) + t158 -> mX
. mX [ 6ULL ] * t158 -> mX . mX [ 6ULL ] *
Battery_Battery_Table_Based_electricalModel_xGdynamic [ 3ULL ] ) + t158 -> mX
. mX [ 7ULL ] * t158 -> mX . mX [ 7ULL ] *
Battery_Battery_Table_Based_electricalModel_xGdynamic [ 4ULL ] ) * 0.001 ) ;
out -> mF . mX [ 27ULL ] = - zc_int2 / 27.169961699684265 ; out -> mF . mX [
28ULL ] = - ( Battery_Battery_Table_Based1_electricalModel_i * zc_int11 +
zc_int3 ) / 9.3387366666665912 ; out -> mF . mX [ 29ULL ] = - ( t158 -> mX .
mX [ 9ULL ] / ( zc_int12 == 0.0 ? 1.0E-16 : zc_int12 ) ) ; out -> mF . mX [
30ULL ] = - ( Battery_Battery_Table_Based1_electricalModel_i *
Battery_Battery_Table_Based1_electricalModel_i * zc_int11 * 0.001 + ( ( ( (
t158 -> mX . mX [ 11ULL ] * t158 -> mX . mX [ 11ULL ] *
Battery_Battery_Table_Based1_electricalModel_xGdynamic [ 0ULL ] + t158 -> mX
. mX [ 12ULL ] * t158 -> mX . mX [ 12ULL ] *
Battery_Battery_Table_Based1_electricalModel_xGdynamic [ 1ULL ] ) + t158 ->
mX . mX [ 13ULL ] * t158 -> mX . mX [ 13ULL ] *
Battery_Battery_Table_Based1_electricalModel_xGdynamic [ 2ULL ] ) + t158 ->
mX . mX [ 14ULL ] * t158 -> mX . mX [ 14ULL ] *
Battery_Battery_Table_Based1_electricalModel_xGdynamic [ 3ULL ] ) + t158 ->
mX . mX [ 15ULL ] * t158 -> mX . mX [ 15ULL ] *
Battery_Battery_Table_Based1_electricalModel_xGdynamic [ 4ULL ] ) * 0.001 ) ;
out -> mF . mX [ 31ULL ] = - zc_int14 / 25.511987746051755 ; out -> mF . mX [
32ULL ] = - ( Battery_Battery_Table_Based2_electricalModel_i * zc_int13 +
zc_int6 ) / 1.2854033333333064 ; out -> mF . mX [ 33ULL ] = - ( t158 -> mX .
mX [ 17ULL ] / ( t149 == 0.0 ? 1.0E-16 : t149 ) ) ; out -> mF . mX [ 34ULL ]
= - ( Battery_Battery_Table_Based2_electricalModel_i *
Battery_Battery_Table_Based2_electricalModel_i * zc_int13 * 0.001 + ( ( ( (
t158 -> mX . mX [ 19ULL ] * t158 -> mX . mX [ 19ULL ] *
Battery_Battery_Table_Based2_electricalModel_xGdynamic [ 0ULL ] + t158 -> mX
. mX [ 20ULL ] * t158 -> mX . mX [ 20ULL ] *
Battery_Battery_Table_Based2_electricalModel_xGdynamic [ 1ULL ] ) + t158 ->
mX . mX [ 21ULL ] * t158 -> mX . mX [ 21ULL ] *
Battery_Battery_Table_Based2_electricalModel_xGdynamic [ 2ULL ] ) + t158 ->
mX . mX [ 22ULL ] * t158 -> mX . mX [ 22ULL ] *
Battery_Battery_Table_Based2_electricalModel_xGdynamic [ 3ULL ] ) + t158 ->
mX . mX [ 23ULL ] * t158 -> mX . mX [ 23ULL ] *
Battery_Battery_Table_Based2_electricalModel_xGdynamic [ 4ULL ] ) * 0.001 ) ;
out -> mF . mX [ 35ULL ] = - zc_int10 / 26.229060937518479 ; ( void ) LC ; (
void ) out ; return 0 ; }
