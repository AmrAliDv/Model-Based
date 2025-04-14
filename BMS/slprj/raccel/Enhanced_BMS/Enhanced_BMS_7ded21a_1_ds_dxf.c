#include "ne_ds.h"
#include "Enhanced_BMS_7ded21a_1_ds_sys_struct.h"
#include "Enhanced_BMS_7ded21a_1_ds_dxf.h"
#include "Enhanced_BMS_7ded21a_1_ds.h"
#include "Enhanced_BMS_7ded21a_1_ds_externals.h"
#include "Enhanced_BMS_7ded21a_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Enhanced_BMS_7ded21a_1_ds_dxf ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t448 , NeDsMethodOutput * out ) { static real_T
_cg_const_10 [ 5 ] = { 0.0 , 0.0 , 0.0 , 0.0 , 2.0 } ; static real_T
_cg_const_11 [ 5 ] = { 1.0 , 0.0 , 0.0 , 0.0 , 0.0 } ; static real_T
_cg_const_6 [ 5 ] = { 2.0 , 0.0 , 0.0 , 0.0 , 0.0 } ; static real_T
_cg_const_7 [ 5 ] = { 0.0 , 2.0 , 0.0 , 0.0 , 0.0 } ; static real_T
_cg_const_8 [ 5 ] = { 0.0 , 0.0 , 2.0 , 0.0 , 0.0 } ; static real_T
_cg_const_9 [ 5 ] = { 0.0 , 0.0 , 0.0 , 2.0 , 0.0 } ; static real_T
_cg_const_1 [ 3 ] = { 278.15 , 293.15 , 313.15 } ; ETTSf3049b48 t0 ;
ETTSf3049b48 t1 ; ETTSf3049b48 t2 ; ETTSf3049b48 t3 ; ETTSf3049b48 t4 ;
ETTSf3049b48 t5 ; real_T t205 [ 10 ] ; real_T t208 [ 10 ] ; real_T t211 [ 10
] ; real_T t215 [ 9 ] ; real_T t219 [ 9 ] ; real_T t203 [ 7 ] ; real_T t206 [
7 ] ; real_T t209 [ 7 ] ; real_T t213 [ 6 ] ; real_T t214 [ 6 ] ; real_T t217
[ 6 ] ; real_T t218 [ 6 ] ; real_T t221 [ 6 ] ; real_T t222 [ 6 ] ; real_T
Battery_Battery_Table_Based1_electricalModel_xGdynamic [ 5 ] ; real_T
Battery_Battery_Table_Based2_electricalModel_xGdynamic [ 5 ] ; real_T
intermediate_der17 [ 5 ] ; real_T intermediate_der38 [ 5 ] ; real_T
intermediate_der56 [ 5 ] ; real_T t159 [ 5 ] ; real_T t160 [ 5 ] ; real_T
t161 [ 5 ] ; real_T t162 [ 5 ] ; real_T t163 [ 5 ] ; real_T t204 [ 5 ] ;
real_T t212 [ 5 ] ; real_T t216 [ 5 ] ; real_T t220 [ 5 ] ; real_T t223 [ 5 ]
; real_T nonscalar2 [ 3 ] ; real_T nonscalar4 [ 3 ] ; real_T t142 [ 1 ] ;
real_T t190 [ 1 ] ; real_T intermediate_der205 ; real_T intermediate_der206 ;
real_T intermediate_der211 ; real_T intermediate_der215 ; real_T
intermediate_der216 ; real_T intermediate_der218 ; real_T intermediate_der220
; real_T intermediate_der224 ; real_T intermediate_der225 ; real_T
intermediate_der226 ; real_T intermediate_der227 ; real_T intermediate_der228
; real_T intermediate_der229 ; real_T intermediate_der235 ; real_T
intermediate_der236 ; real_T intermediate_der238 ; real_T t24 ; real_T t27 ;
real_T t32 ; real_T t339 ; real_T t345 ; real_T t346 ; real_T t349 ; real_T
t350 ; real_T t352 ; real_T t353 ; real_T t354 ; real_T t356 ; real_T t357 ;
real_T t358 ; real_T t360 ; real_T t362 ; real_T t366 ; real_T t411 ; real_T
t419 ; real_T t442 ; real_T t443 ; real_T t6 ; real_T t7 ; real_T zc_int1 ;
real_T zc_int11 ; real_T zc_int13 ; size_t t154 [ 1 ] ; size_t t200 [ 1 ] ;
size_t t39 [ 1 ] ; size_t t41 [ 1 ] ; size_t t317 ; size_t t318 ; size_t t319
; nonscalar2 [ 0 ] = _cg_const_1 [ 0 ] ; nonscalar2 [ 1 ] = _cg_const_1 [ 1 ]
; nonscalar2 [ 2 ] = _cg_const_1 [ 2 ] ; nonscalar4 [ 0 ] = 14400.0 ;
nonscalar4 [ 1 ] = 14400.0 ; nonscalar4 [ 2 ] = 14400.0 ; t345 = ( ( t448 ->
mX . mX [ 24ULL ] * - 0.1 + t448 -> mX . mX [ 25ULL ] * 0.05 ) + t448 -> mX .
mX [ 26ULL ] * 0.05 ) + t448 -> mU . mX [ 6ULL ] ; t212 [ 0ULL ] = t448 -> mX
. mX [ 29ULL ] ; t212 [ 1ULL ] = 0.0 ; t212 [ 2ULL ] = 0.0 ; t212 [ 3ULL ] =
0.0 ; t212 [ 4ULL ] = 0.0 ; for ( t317 = 0ULL ; t317 < 5ULL ; t317 ++ ) {
t204 [ t317 ] = t212 [ t317 ] ; } t190 [ 0ULL ] = t448 -> mX . mX [ 28ULL ] ;
t200 [ 0 ] = 11ULL ; t39 [ 0 ] = 1ULL ; tlu2_linear_linear_prelookup ( & t4 .
mField0 [ 0ULL ] , & t4 . mField1 [ 0ULL ] , & t4 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t190 [ 0ULL ] , & t200 [ 0ULL ]
, & t39 [ 0ULL ] ) ; t190 [ 0ULL ] = t448 -> mX . mX [ 0ULL ] ; t41 [ 0 ] =
3ULL ; tlu2_linear_linear_prelookup ( & t3 . mField0 [ 0ULL ] , & t3 .
mField1 [ 0ULL ] , & t3 . mField2 [ 0ULL ] , & nonscalar2 [ 0ULL ] , & t190 [
0ULL ] , & t41 [ 0ULL ] , & t39 [ 0ULL ] ) ; tlu2_2d_linear_linear_value ( &
t142 [ 0ULL ] , & t4 . mField0 [ 0ULL ] , & t4 . mField2 [ 0ULL ] , & t3 .
mField0 [ 0ULL ] , & t3 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField2 , & t200 [ 0ULL ] , & t41 [ 0ULL ] , & t39 [ 0ULL ] ) ; zc_int11
= t142 [ 0ULL ] ; tlu2_1d_linear_linear_value ( & t142 [ 0ULL ] , & t3 .
mField0 [ 0ULL ] , & t3 . mField2 [ 0ULL ] , & nonscalar4 [ 0ULL ] , & t41 [
0ULL ] , & t39 [ 0ULL ] ) ; t346 = t142 [ 0ULL ] ; t349 = ( ( t448 -> mX . mX
[ 27ULL ] * - 0.1 + t448 -> mX . mX [ 31ULL ] * 0.05 ) + t448 -> mX . mX [
32ULL ] * 0.05 ) + t448 -> mU . mX [ 6ULL ] ; t212 [ 0ULL ] = t448 -> mX . mX
[ 35ULL ] ; t212 [ 1ULL ] = 0.0 ; t212 [ 2ULL ] = 0.0 ; t212 [ 3ULL ] = 0.0 ;
t212 [ 4ULL ] = 0.0 ; for ( t318 = 0ULL ; t318 < 5ULL ; t318 ++ ) {
Battery_Battery_Table_Based1_electricalModel_xGdynamic [ t318 ] = t212 [ t318
] ; } t190 [ 0ULL ] = t448 -> mX . mX [ 34ULL ] ;
tlu2_linear_linear_prelookup ( & t2 . mField0 [ 0ULL ] , & t2 . mField1 [
0ULL ] , & t2 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField1 , & t190 [ 0ULL ] , & t200 [ 0ULL ] , & t39 [ 0ULL ] ) ; t190 [ 0ULL
] = t448 -> mX . mX [ 8ULL ] ; tlu2_linear_linear_prelookup ( & t1 . mField0
[ 0ULL ] , & t1 . mField1 [ 0ULL ] , & t1 . mField2 [ 0ULL ] , & nonscalar2 [
0ULL ] , & t190 [ 0ULL ] , & t41 [ 0ULL ] , & t39 [ 0ULL ] ) ;
tlu2_2d_linear_linear_value ( & t142 [ 0ULL ] , & t2 . mField0 [ 0ULL ] , &
t2 . mField2 [ 0ULL ] , & t1 . mField0 [ 0ULL ] , & t1 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t200 [ 0ULL ] , & t41 [ 0ULL ]
, & t39 [ 0ULL ] ) ; zc_int13 = t142 [ 0ULL ] ; tlu2_1d_linear_linear_value (
& t142 [ 0ULL ] , & t1 . mField0 [ 0ULL ] , & t1 . mField2 [ 0ULL ] , &
nonscalar4 [ 0ULL ] , & t41 [ 0ULL ] , & t39 [ 0ULL ] ) ; t353 = ( ( t448 ->
mX . mX [ 33ULL ] * - 0.1 + t448 -> mX . mX [ 37ULL ] * 0.05 ) + t448 -> mX .
mX [ 38ULL ] * 0.05 ) + t448 -> mU . mX [ 6ULL ] ; t212 [ 0ULL ] = t448 -> mX
. mX [ 40ULL ] ; t212 [ 1ULL ] = 0.0 ; t212 [ 2ULL ] = 0.0 ; t212 [ 3ULL ] =
0.0 ; t212 [ 4ULL ] = 0.0 ; for ( t319 = 0ULL ; t319 < 5ULL ; t319 ++ ) {
Battery_Battery_Table_Based2_electricalModel_xGdynamic [ t319 ] = t212 [ t319
] ; } t190 [ 0ULL ] = t448 -> mX . mX [ 39ULL ] ;
tlu2_linear_linear_prelookup ( & t0 . mField0 [ 0ULL ] , & t0 . mField1 [
0ULL ] , & t0 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField1 , & t190 [ 0ULL ] , & t200 [ 0ULL ] , & t39 [ 0ULL ] ) ; t190 [ 0ULL
] = t448 -> mX . mX [ 16ULL ] ; tlu2_linear_linear_prelookup ( & t5 . mField0
[ 0ULL ] , & t5 . mField1 [ 0ULL ] , & t5 . mField2 [ 0ULL ] , & nonscalar2 [
0ULL ] , & t190 [ 0ULL ] , & t41 [ 0ULL ] , & t39 [ 0ULL ] ) ;
tlu2_2d_linear_linear_value ( & t190 [ 0ULL ] , & t0 . mField0 [ 0ULL ] , &
t0 . mField2 [ 0ULL ] , & t5 . mField0 [ 0ULL ] , & t5 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField6 , & t200 [ 0ULL ] , & t41 [ 0ULL ]
, & t39 [ 0ULL ] ) ; t352 = t190 [ 0ULL ] ; tlu2_1d_linear_linear_value ( &
t190 [ 0ULL ] , & t5 . mField0 [ 0ULL ] , & t5 . mField2 [ 0ULL ] , &
nonscalar4 [ 0ULL ] , & t41 [ 0ULL ] , & t39 [ 0ULL ] ) ; t354 = t190 [ 0ULL
] ; tlu2_2d_linear_linear_value ( & t190 [ 0ULL ] , & t0 . mField0 [ 0ULL ] ,
& t0 . mField2 [ 0ULL ] , & t5 . mField0 [ 0ULL ] , & t5 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 , & t200 [ 0ULL ] , & t41 [ 0ULL
] , & t39 [ 0ULL ] ) ; t356 = t190 [ 0ULL ] ; tlu2_2d_linear_linear_value ( &
t190 [ 0ULL ] , & t4 . mField0 [ 0ULL ] , & t4 . mField2 [ 0ULL ] , & t3 .
mField0 [ 0ULL ] , & t3 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField9 , & t200 [ 0ULL ] , & t41 [ 0ULL ] , & t39 [ 0ULL ] ) ; t357 =
t190 [ 0ULL ] ; tlu2_2d_linear_linear_value ( & t190 [ 0ULL ] , & t2 .
mField0 [ 0ULL ] , & t2 . mField2 [ 0ULL ] , & t1 . mField0 [ 0ULL ] , & t1 .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 , & t200 [
0ULL ] , & t41 [ 0ULL ] , & t39 [ 0ULL ] ) ; t358 = t190 [ 0ULL ] ; if ( t448
-> mM . mX [ 1ULL ] != 0 ) { zc_int1 = 0.14400000000000002 ; } else { zc_int1
= t346 ; } if ( t448 -> mM . mX [ 41ULL ] != 0 ) { t346 =
8.200000000000002E-8 ; } else { t346 = zc_int11 ; } if ( t448 -> mM . mX [
2ULL ] != 0 ) { zc_int11 = 8.200000000000002E-8 ; } else { zc_int11 =
zc_int13 ; } if ( t448 -> mM . mX [ 3ULL ] != 0 ) { zc_int13 =
8.200000000000002E-8 ; } else { zc_int13 = t352 ; } if ( t448 -> mM . mX [
12ULL ] != 0 ) { t154 [ 0ULL ] = 0ULL ; for ( t317 = 0ULL ; t317 < 33ULL ;
t317 ++ ) { t318 = t317 / 33ULL ; t319 = ( t317 - t317 % 33ULL ) + t154 [
t318 > 0ULL ? 0ULL : t318 ] ; if ( ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField9 [ t317 ] * 1.0E-5 < ( ( _NeDynamicSystem * ) ( LC ) ) -> mField9 [
t319 > 32ULL ? 32ULL : t319 ] * 1.0E-5 ) { t154 [ t318 > 0ULL ? 0ULL : t318 ]
= t317 % 33ULL ; } } t6 = ( ( _NeDynamicSystem * ) ( LC ) ) -> mField9 [ t154
[ 0ULL ] > 32ULL ? 32ULL : t154 [ 0ULL ] ] * 1.0E-5 ; } else { t6 = t357 ; }
t352 = 1.0 / ( t6 == 0.0 ? 1.0E-16 : t6 ) ; if ( t448 -> mM . mX [ 34ULL ] !=
0 ) { t6 = 0.14400000000000002 ; } else { t6 = t142 [ 0ULL ] ; } if ( t448 ->
mM . mX [ 37ULL ] != 0 ) { t154 [ 0ULL ] = 0ULL ; for ( t317 = 0ULL ; t317 <
33ULL ; t317 ++ ) { t318 = t317 / 33ULL ; t319 = ( t317 - t317 % 33ULL ) +
t154 [ t318 > 0ULL ? 0ULL : t318 ] ; if ( ( ( _NeDynamicSystem * ) ( LC ) )
-> mField11 [ t317 ] * 1.0E-5 < ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11
[ t319 > 32ULL ? 32ULL : t319 ] * 1.0E-5 ) { t154 [ t318 > 0ULL ? 0ULL : t318
] = t317 % 33ULL ; } } t7 = ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 [
t154 [ 0ULL ] > 32ULL ? 32ULL : t154 [ 0ULL ] ] * 1.0E-5 ; } else { t7 = t190
[ 0ULL ] ; } t350 = 1.0 / ( t7 == 0.0 ? 1.0E-16 : t7 ) ; if ( t448 -> mM . mX
[ 39ULL ] != 0 ) { t7 = 0.14400000000000002 ; } else { t7 = t354 ; } if (
t448 -> mM . mX [ 40ULL ] != 0 ) { t154 [ 0ULL ] = 0ULL ; for ( t317 = 0ULL ;
t317 < 33ULL ; t317 ++ ) { t318 = t317 / 33ULL ; t319 = ( t317 - t317 % 33ULL
) + t154 [ t318 > 0ULL ? 0ULL : t318 ] ; if ( ( ( _NeDynamicSystem * ) ( LC )
) -> mField8 [ t317 ] * 1.0E-5 < ( ( _NeDynamicSystem * ) ( LC ) ) -> mField8
[ t319 > 32ULL ? 32ULL : t319 ] * 1.0E-5 ) { t154 [ t318 > 0ULL ? 0ULL : t318
] = t317 % 33ULL ; } } t360 = ( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 [
t154 [ 0ULL ] > 32ULL ? 32ULL : t154 [ 0ULL ] ] * 1.0E-5 ; } else { t360 =
t356 ; } t354 = 1.0 / ( t360 == 0.0 ? 1.0E-16 : t360 ) ;
tlu2_2d_linear_linear_value ( & t190 [ 0ULL ] , & t4 . mField1 [ 0ULL ] , &
t4 . mField2 [ 0ULL ] , & t3 . mField0 [ 0ULL ] , & t3 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t200 [ 0ULL ] , & t41 [ 0ULL ]
, & t39 [ 0ULL ] ) ; t362 = t190 [ 0ULL ] ; tlu2_2d_linear_linear_value ( &
t190 [ 0ULL ] , & t4 . mField0 [ 0ULL ] , & t4 . mField2 [ 0ULL ] , & t3 .
mField1 [ 0ULL ] , & t3 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField0 , & t200 [ 0ULL ] , & t41 [ 0ULL ] , & t39 [ 0ULL ] ) ;
intermediate_der206 = t190 [ 0ULL ] ; tlu2_2d_linear_linear_value ( & t190 [
0ULL ] , & t4 . mField1 [ 0ULL ] , & t4 . mField2 [ 0ULL ] , & t3 . mField0 [
0ULL ] , & t3 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField2 , & t200 [ 0ULL ] , & t41 [ 0ULL ] , & t39 [ 0ULL ] ) ; t360 = t190 [
0ULL ] ; tlu2_2d_linear_linear_value ( & t190 [ 0ULL ] , & t4 . mField0 [
0ULL ] , & t4 . mField2 [ 0ULL ] , & t3 . mField1 [ 0ULL ] , & t3 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t200 [ 0ULL ] , &
t41 [ 0ULL ] , & t39 [ 0ULL ] ) ; t366 = t190 [ 0ULL ] ; t159 [ 0 ] =
_cg_const_6 [ 0 ] ; t159 [ 1 ] = _cg_const_6 [ 1 ] ; t159 [ 2 ] = _cg_const_6
[ 2 ] ; t159 [ 3 ] = _cg_const_6 [ 3 ] ; t159 [ 4 ] = _cg_const_6 [ 4 ] ;
t160 [ 0 ] = _cg_const_7 [ 0 ] ; t160 [ 1 ] = _cg_const_7 [ 1 ] ; t160 [ 2 ]
= _cg_const_7 [ 2 ] ; t160 [ 3 ] = _cg_const_7 [ 3 ] ; t160 [ 4 ] =
_cg_const_7 [ 4 ] ; t161 [ 0 ] = _cg_const_8 [ 0 ] ; t161 [ 1 ] = _cg_const_8
[ 1 ] ; t161 [ 2 ] = _cg_const_8 [ 2 ] ; t161 [ 3 ] = _cg_const_8 [ 3 ] ;
t161 [ 4 ] = _cg_const_8 [ 4 ] ; t162 [ 0 ] = _cg_const_9 [ 0 ] ; t162 [ 1 ]
= _cg_const_9 [ 1 ] ; t162 [ 2 ] = _cg_const_9 [ 2 ] ; t162 [ 3 ] =
_cg_const_9 [ 3 ] ; t162 [ 4 ] = _cg_const_9 [ 4 ] ; t163 [ 0 ] =
_cg_const_10 [ 0 ] ; t163 [ 1 ] = _cg_const_10 [ 1 ] ; t163 [ 2 ] =
_cg_const_10 [ 2 ] ; t163 [ 3 ] = _cg_const_10 [ 3 ] ; t163 [ 4 ] =
_cg_const_10 [ 4 ] ; for ( t317 = 0ULL ; t317 < 5ULL ; t317 ++ ) {
intermediate_der17 [ t317 ] = ( ( ( ( t204 [ 0ULL ] * t448 -> mX . mX [ 3ULL
] * t159 [ t317 ] + t204 [ 1ULL ] * t448 -> mX . mX [ 4ULL ] * t160 [ t317 ]
) + t204 [ 2ULL ] * t448 -> mX . mX [ 5ULL ] * t161 [ t317 ] ) + t204 [ 3ULL
] * t448 -> mX . mX [ 6ULL ] * t162 [ t317 ] ) + t204 [ 4ULL ] * t448 -> mX .
mX [ 7ULL ] * t163 [ t317 ] ) * 0.001 ; } tlu2_1d_linear_linear_value ( &
t190 [ 0ULL ] , & t3 . mField1 [ 0ULL ] , & t3 . mField2 [ 0ULL ] , &
nonscalar4 [ 0ULL ] , & t41 [ 0ULL ] , & t39 [ 0ULL ] ) ; t442 = t190 [ 0ULL
] ; tlu2_2d_linear_linear_value ( & t190 [ 0ULL ] , & t2 . mField1 [ 0ULL ] ,
& t2 . mField2 [ 0ULL ] , & t1 . mField0 [ 0ULL ] , & t1 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t200 [ 0ULL ] , & t41 [ 0ULL
] , & t39 [ 0ULL ] ) ; t443 = t190 [ 0ULL ] ; tlu2_2d_linear_linear_value ( &
t190 [ 0ULL ] , & t2 . mField0 [ 0ULL ] , & t2 . mField2 [ 0ULL ] , & t1 .
mField1 [ 0ULL ] , & t1 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField3 , & t200 [ 0ULL ] , & t41 [ 0ULL ] , & t39 [ 0ULL ] ) ;
intermediate_der218 = t190 [ 0ULL ] ; tlu2_2d_linear_linear_value ( & t190 [
0ULL ] , & t2 . mField1 [ 0ULL ] , & t2 . mField2 [ 0ULL ] , & t1 . mField0 [
0ULL ] , & t1 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t200 [ 0ULL ] , & t41 [ 0ULL ] , & t39 [ 0ULL ] ) ; t419 = t190 [
0ULL ] ; tlu2_2d_linear_linear_value ( & t190 [ 0ULL ] , & t2 . mField0 [
0ULL ] , & t2 . mField2 [ 0ULL ] , & t1 . mField1 [ 0ULL ] , & t1 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t200 [ 0ULL ] , &
t41 [ 0ULL ] , & t39 [ 0ULL ] ) ; intermediate_der216 = t190 [ 0ULL ] ; for (
t317 = 0ULL ; t317 < 5ULL ; t317 ++ ) { intermediate_der38 [ t317 ] = ( ( ( (
Battery_Battery_Table_Based1_electricalModel_xGdynamic [ 0ULL ] * t448 -> mX
. mX [ 11ULL ] * t159 [ t317 ] +
Battery_Battery_Table_Based1_electricalModel_xGdynamic [ 1ULL ] * t448 -> mX
. mX [ 12ULL ] * t160 [ t317 ] ) +
Battery_Battery_Table_Based1_electricalModel_xGdynamic [ 2ULL ] * t448 -> mX
. mX [ 13ULL ] * t161 [ t317 ] ) +
Battery_Battery_Table_Based1_electricalModel_xGdynamic [ 3ULL ] * t448 -> mX
. mX [ 14ULL ] * t162 [ t317 ] ) +
Battery_Battery_Table_Based1_electricalModel_xGdynamic [ 4ULL ] * t448 -> mX
. mX [ 15ULL ] * t163 [ t317 ] ) * 0.001 ; } tlu2_1d_linear_linear_value ( &
t190 [ 0ULL ] , & t1 . mField1 [ 0ULL ] , & t1 . mField2 [ 0ULL ] , &
nonscalar4 [ 0ULL ] , & t41 [ 0ULL ] , & t39 [ 0ULL ] ) ; intermediate_der236
= t190 [ 0ULL ] ; tlu2_2d_linear_linear_value ( & t190 [ 0ULL ] , & t0 .
mField1 [ 0ULL ] , & t0 . mField2 [ 0ULL ] , & t5 . mField0 [ 0ULL ] , & t5 .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , & t200 [
0ULL ] , & t41 [ 0ULL ] , & t39 [ 0ULL ] ) ; intermediate_der228 = t190 [
0ULL ] ; tlu2_2d_linear_linear_value ( & t190 [ 0ULL ] , & t0 . mField0 [
0ULL ] , & t0 . mField2 [ 0ULL ] , & t5 . mField1 [ 0ULL ] , & t5 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , & t200 [ 0ULL ] , &
t41 [ 0ULL ] , & t39 [ 0ULL ] ) ; intermediate_der227 = t190 [ 0ULL ] ;
tlu2_2d_linear_linear_value ( & t190 [ 0ULL ] , & t0 . mField1 [ 0ULL ] , &
t0 . mField2 [ 0ULL ] , & t5 . mField0 [ 0ULL ] , & t5 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField6 , & t200 [ 0ULL ] , & t41 [ 0ULL ]
, & t39 [ 0ULL ] ) ; intermediate_der226 = t190 [ 0ULL ] ;
tlu2_2d_linear_linear_value ( & t190 [ 0ULL ] , & t0 . mField0 [ 0ULL ] , &
t0 . mField2 [ 0ULL ] , & t5 . mField1 [ 0ULL ] , & t5 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField6 , & t200 [ 0ULL ] , & t41 [ 0ULL ]
, & t39 [ 0ULL ] ) ; intermediate_der225 = t190 [ 0ULL ] ; for ( t317 = 0ULL
; t317 < 5ULL ; t317 ++ ) { intermediate_der56 [ t317 ] = ( ( ( (
Battery_Battery_Table_Based2_electricalModel_xGdynamic [ 0ULL ] * t448 -> mX
. mX [ 19ULL ] * t159 [ t317 ] +
Battery_Battery_Table_Based2_electricalModel_xGdynamic [ 1ULL ] * t448 -> mX
. mX [ 20ULL ] * t160 [ t317 ] ) +
Battery_Battery_Table_Based2_electricalModel_xGdynamic [ 2ULL ] * t448 -> mX
. mX [ 21ULL ] * t161 [ t317 ] ) +
Battery_Battery_Table_Based2_electricalModel_xGdynamic [ 3ULL ] * t448 -> mX
. mX [ 22ULL ] * t162 [ t317 ] ) +
Battery_Battery_Table_Based2_electricalModel_xGdynamic [ 4ULL ] * t448 -> mX
. mX [ 23ULL ] * t163 [ t317 ] ) * 0.001 ; } tlu2_1d_linear_linear_value ( &
t190 [ 0ULL ] , & t5 . mField1 [ 0ULL ] , & t5 . mField2 [ 0ULL ] , &
nonscalar4 [ 0ULL ] , & t41 [ 0ULL ] , & t39 [ 0ULL ] ) ; t339 = t190 [ 0ULL
] ; tlu2_2d_linear_linear_value ( & t190 [ 0ULL ] , & t0 . mField1 [ 0ULL ] ,
& t0 . mField2 [ 0ULL ] , & t5 . mField0 [ 0ULL ] , & t5 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 , & t200 [ 0ULL ] , & t41 [ 0ULL
] , & t39 [ 0ULL ] ) ; t27 = t190 [ 0ULL ] ; tlu2_2d_linear_linear_value ( &
t190 [ 0ULL ] , & t0 . mField0 [ 0ULL ] , & t0 . mField2 [ 0ULL ] , & t5 .
mField1 [ 0ULL ] , & t5 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField8 , & t200 [ 0ULL ] , & t41 [ 0ULL ] , & t39 [ 0ULL ] ) ; t24 =
t190 [ 0ULL ] ; tlu2_2d_linear_linear_value ( & t190 [ 0ULL ] , & t4 .
mField1 [ 0ULL ] , & t4 . mField2 [ 0ULL ] , & t3 . mField0 [ 0ULL ] , & t3 .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField9 , & t200 [
0ULL ] , & t41 [ 0ULL ] , & t39 [ 0ULL ] ) ; intermediate_der235 = t190 [
0ULL ] ; tlu2_2d_linear_linear_value ( & t190 [ 0ULL ] , & t4 . mField0 [
0ULL ] , & t4 . mField2 [ 0ULL ] , & t3 . mField1 [ 0ULL ] , & t3 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField9 , & t200 [ 0ULL ] , &
t41 [ 0ULL ] , & t39 [ 0ULL ] ) ; t411 = t190 [ 0ULL ] ;
tlu2_2d_linear_linear_value ( & t190 [ 0ULL ] , & t2 . mField1 [ 0ULL ] , &
t2 . mField2 [ 0ULL ] , & t1 . mField0 [ 0ULL ] , & t1 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField11 , & t200 [ 0ULL ] , & t41 [ 0ULL
] , & t39 [ 0ULL ] ) ; intermediate_der238 = t190 [ 0ULL ] ;
tlu2_2d_linear_linear_value ( & t190 [ 0ULL ] , & t2 . mField0 [ 0ULL ] , &
t2 . mField2 [ 0ULL ] , & t1 . mField1 [ 0ULL ] , & t1 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField11 , & t200 [ 0ULL ] , & t41 [ 0ULL
] , & t39 [ 0ULL ] ) ; if ( t448 -> mM . mX [ 0ULL ] != 0 ) {
intermediate_der205 = 0.0 ; } else { intermediate_der205 =
intermediate_der206 ; } if ( t448 -> mM . mX [ 0ULL ] != 0 ) {
intermediate_der206 = 0.0 ; } else { intermediate_der206 = t362 ; } if ( t448
-> mM . mX [ 1ULL ] != 0 ) { t362 = 0.0 ; } else { t362 = t442 ; } if ( t448
-> mM . mX [ 41ULL ] != 0 ) { t442 = 0.0 ; } else { t442 = t366 ; } if ( t448
-> mM . mX [ 41ULL ] != 0 ) { t366 = 0.0 ; } else { t366 = t360 ; }
intermediate_der211 = t345 * 0.05 * t346 * 0.002 ; if ( t448 -> mM . mX [
2ULL ] != 0 ) { intermediate_der215 = 0.0 ; } else { intermediate_der215 =
intermediate_der216 ; } if ( t448 -> mM . mX [ 2ULL ] != 0 ) {
intermediate_der216 = 0.0 ; } else { intermediate_der216 = t419 ; } if ( t448
-> mM . mX [ 23ULL ] != 0 ) { t419 = 0.0 ; } else { t419 =
intermediate_der218 ; } if ( t448 -> mM . mX [ 23ULL ] != 0 ) {
intermediate_der218 = 0.0 ; } else { intermediate_der218 = t443 ; }
intermediate_der220 = t349 * 0.05 * zc_int11 * 0.002 ; if ( t448 -> mM . mX [
3ULL ] != 0 ) { intermediate_der224 = 0.0 ; } else { intermediate_der224 =
intermediate_der225 ; } if ( t448 -> mM . mX [ 3ULL ] != 0 ) {
intermediate_der225 = 0.0 ; } else { intermediate_der225 =
intermediate_der226 ; } if ( t448 -> mM . mX [ 38ULL ] != 0 ) {
intermediate_der226 = 0.0 ; } else { intermediate_der226 =
intermediate_der227 ; } if ( t448 -> mM . mX [ 38ULL ] != 0 ) {
intermediate_der227 = 0.0 ; } else { intermediate_der227 =
intermediate_der228 ; } intermediate_der229 = t353 * 0.05 * zc_int13 * 0.002
; if ( t448 -> mM . mX [ 12ULL ] != 0 ) { t200 [ 0ULL ] = 0ULL ; for ( t317 =
0ULL ; t317 < 33ULL ; t317 ++ ) { t318 = t317 / 33ULL ; t319 = ( t317 - t317
% 33ULL ) + t200 [ t318 > 0ULL ? 0ULL : t318 ] ; if ( ( ( _NeDynamicSystem *
) ( LC ) ) -> mField9 [ t317 ] * 1.0E-5 < ( ( _NeDynamicSystem * ) ( LC ) )
-> mField9 [ t319 > 32ULL ? 32ULL : t319 ] * 1.0E-5 ) { t200 [ t318 > 0ULL ?
0ULL : t318 ] = t317 % 33ULL ; } } t443 = ( ( _NeDynamicSystem * ) ( LC ) )
-> mField9 [ t200 [ 0ULL ] > 32ULL ? 32ULL : t200 [ 0ULL ] ] * 1.0E-5 ; }
else { t443 = t357 ; } if ( t448 -> mM . mX [ 12ULL ] != 0 ) { t200 [ 0ULL ]
= 0ULL ; for ( t317 = 0ULL ; t317 < 33ULL ; t317 ++ ) { t318 = t317 / 33ULL ;
t319 = ( t317 - t317 % 33ULL ) + t200 [ t318 > 0ULL ? 0ULL : t318 ] ; if ( (
( _NeDynamicSystem * ) ( LC ) ) -> mField9 [ t317 ] * 1.0E-5 < ( (
_NeDynamicSystem * ) ( LC ) ) -> mField9 [ t319 > 32ULL ? 32ULL : t319 ] *
1.0E-5 ) { t200 [ t318 > 0ULL ? 0ULL : t318 ] = t317 % 33ULL ; } }
intermediate_der228 = ( ( _NeDynamicSystem * ) ( LC ) ) -> mField9 [ t200 [
0ULL ] > 32ULL ? 32ULL : t200 [ 0ULL ] ] * 1.0E-5 ; } else {
intermediate_der228 = t357 ; } if ( t448 -> mM . mX [ 12ULL ] != 0 ) { t32 =
0.0 ; } else { t32 = t411 ; } t360 = t443 * intermediate_der228 ; t411 = -
1.0 / ( t360 == 0.0 ? 1.0E-16 : t360 ) * t32 ; if ( t448 -> mM . mX [ 12ULL ]
!= 0 ) { t200 [ 0ULL ] = 0ULL ; for ( t317 = 0ULL ; t317 < 33ULL ; t317 ++ )
{ t318 = t317 / 33ULL ; t319 = ( t317 - t317 % 33ULL ) + t200 [ t318 > 0ULL ?
0ULL : t318 ] ; if ( ( ( _NeDynamicSystem * ) ( LC ) ) -> mField9 [ t317 ] *
1.0E-5 < ( ( _NeDynamicSystem * ) ( LC ) ) -> mField9 [ t319 > 32ULL ? 32ULL
: t319 ] * 1.0E-5 ) { t200 [ t318 > 0ULL ? 0ULL : t318 ] = t317 % 33ULL ; } }
t443 = ( ( _NeDynamicSystem * ) ( LC ) ) -> mField9 [ t200 [ 0ULL ] > 32ULL ?
32ULL : t200 [ 0ULL ] ] * 1.0E-5 ; } else { t443 = t357 ; } if ( t448 -> mM .
mX [ 12ULL ] != 0 ) { t200 [ 0ULL ] = 0ULL ; for ( t317 = 0ULL ; t317 < 33ULL
; t317 ++ ) { t318 = t317 / 33ULL ; t319 = ( t317 - t317 % 33ULL ) + t200 [
t318 > 0ULL ? 0ULL : t318 ] ; if ( ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField9 [ t317 ] * 1.0E-5 < ( ( _NeDynamicSystem * ) ( LC ) ) -> mField9 [
t319 > 32ULL ? 32ULL : t319 ] * 1.0E-5 ) { t200 [ t318 > 0ULL ? 0ULL : t318 ]
= t317 % 33ULL ; } } intermediate_der228 = ( ( _NeDynamicSystem * ) ( LC ) )
-> mField9 [ t200 [ 0ULL ] > 32ULL ? 32ULL : t200 [ 0ULL ] ] * 1.0E-5 ; }
else { intermediate_der228 = t357 ; } if ( t448 -> mM . mX [ 12ULL ] != 0 ) {
t32 = 0.0 ; } else { t32 = intermediate_der235 ; } t360 = t443 *
intermediate_der228 ; t357 = - 1.0 / ( t360 == 0.0 ? 1.0E-16 : t360 ) * t32 ;
if ( t448 -> mM . mX [ 34ULL ] != 0 ) { intermediate_der235 = 0.0 ; } else {
intermediate_der235 = intermediate_der236 ; } if ( t448 -> mM . mX [ 37ULL ]
!= 0 ) { t200 [ 0ULL ] = 0ULL ; for ( t317 = 0ULL ; t317 < 33ULL ; t317 ++ )
{ t318 = t317 / 33ULL ; t319 = ( t317 - t317 % 33ULL ) + t200 [ t318 > 0ULL ?
0ULL : t318 ] ; if ( ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 [ t317 ] *
1.0E-5 < ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 [ t319 > 32ULL ? 32ULL
: t319 ] * 1.0E-5 ) { t200 [ t318 > 0ULL ? 0ULL : t318 ] = t317 % 33ULL ; } }
t443 = ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 [ t200 [ 0ULL ] > 32ULL
? 32ULL : t200 [ 0ULL ] ] * 1.0E-5 ; } else { t443 = t358 ; } if ( t448 -> mM
. mX [ 37ULL ] != 0 ) { t200 [ 0ULL ] = 0ULL ; for ( t317 = 0ULL ; t317 <
33ULL ; t317 ++ ) { t318 = t317 / 33ULL ; t319 = ( t317 - t317 % 33ULL ) +
t200 [ t318 > 0ULL ? 0ULL : t318 ] ; if ( ( ( _NeDynamicSystem * ) ( LC ) )
-> mField11 [ t317 ] * 1.0E-5 < ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11
[ t319 > 32ULL ? 32ULL : t319 ] * 1.0E-5 ) { t200 [ t318 > 0ULL ? 0ULL : t318
] = t317 % 33ULL ; } } intermediate_der228 = ( ( _NeDynamicSystem * ) ( LC )
) -> mField11 [ t200 [ 0ULL ] > 32ULL ? 32ULL : t200 [ 0ULL ] ] * 1.0E-5 ; }
else { intermediate_der228 = t358 ; } if ( t448 -> mM . mX [ 37ULL ] != 0 ) {
t32 = 0.0 ; } else { t32 = t190 [ 0ULL ] ; } t360 = t443 *
intermediate_der228 ; intermediate_der236 = - 1.0 / ( t360 == 0.0 ? 1.0E-16 :
t360 ) * t32 ; if ( t448 -> mM . mX [ 37ULL ] != 0 ) { t200 [ 0ULL ] = 0ULL ;
for ( t317 = 0ULL ; t317 < 33ULL ; t317 ++ ) { t318 = t317 / 33ULL ; t319 = (
t317 - t317 % 33ULL ) + t200 [ t318 > 0ULL ? 0ULL : t318 ] ; if ( ( (
_NeDynamicSystem * ) ( LC ) ) -> mField11 [ t317 ] * 1.0E-5 < ( (
_NeDynamicSystem * ) ( LC ) ) -> mField11 [ t319 > 32ULL ? 32ULL : t319 ] *
1.0E-5 ) { t200 [ t318 > 0ULL ? 0ULL : t318 ] = t317 % 33ULL ; } } t360 = ( (
_NeDynamicSystem * ) ( LC ) ) -> mField11 [ t200 [ 0ULL ] > 32ULL ? 32ULL :
t200 [ 0ULL ] ] * 1.0E-5 ; } else { t360 = t358 ; } if ( t448 -> mM . mX [
37ULL ] != 0 ) { t200 [ 0ULL ] = 0ULL ; for ( t317 = 0ULL ; t317 < 33ULL ;
t317 ++ ) { t318 = t317 / 33ULL ; t319 = ( t317 - t317 % 33ULL ) + t200 [
t318 > 0ULL ? 0ULL : t318 ] ; if ( ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField11 [ t317 ] * 1.0E-5 < ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 [
t319 > 32ULL ? 32ULL : t319 ] * 1.0E-5 ) { t200 [ t318 > 0ULL ? 0ULL : t318 ]
= t317 % 33ULL ; } } t443 = ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 [
t200 [ 0ULL ] > 32ULL ? 32ULL : t200 [ 0ULL ] ] * 1.0E-5 ; } else { t443 =
t358 ; } if ( t448 -> mM . mX [ 37ULL ] != 0 ) { intermediate_der228 = 0.0 ;
} else { intermediate_der228 = intermediate_der238 ; } t360 *= t443 ; t358 =
- 1.0 / ( t360 == 0.0 ? 1.0E-16 : t360 ) * intermediate_der228 ; if ( t448 ->
mM . mX [ 39ULL ] != 0 ) { intermediate_der238 = 0.0 ; } else {
intermediate_der238 = t339 ; } if ( t448 -> mM . mX [ 40ULL ] != 0 ) { t200 [
0ULL ] = 0ULL ; for ( t317 = 0ULL ; t317 < 33ULL ; t317 ++ ) { t318 = t317 /
33ULL ; t319 = ( t317 - t317 % 33ULL ) + t200 [ t318 > 0ULL ? 0ULL : t318 ] ;
if ( ( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 [ t317 ] * 1.0E-5 < ( (
_NeDynamicSystem * ) ( LC ) ) -> mField8 [ t319 > 32ULL ? 32ULL : t319 ] *
1.0E-5 ) { t200 [ t318 > 0ULL ? 0ULL : t318 ] = t317 % 33ULL ; } } t360 = ( (
_NeDynamicSystem * ) ( LC ) ) -> mField8 [ t200 [ 0ULL ] > 32ULL ? 32ULL :
t200 [ 0ULL ] ] * 1.0E-5 ; } else { t360 = t356 ; } if ( t448 -> mM . mX [
40ULL ] != 0 ) { t200 [ 0ULL ] = 0ULL ; for ( t317 = 0ULL ; t317 < 33ULL ;
t317 ++ ) { t318 = t317 / 33ULL ; t319 = ( t317 - t317 % 33ULL ) + t200 [
t318 > 0ULL ? 0ULL : t318 ] ; if ( ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField8 [ t317 ] * 1.0E-5 < ( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 [
t319 > 32ULL ? 32ULL : t319 ] * 1.0E-5 ) { t200 [ t318 > 0ULL ? 0ULL : t318 ]
= t317 % 33ULL ; } } t443 = ( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 [
t200 [ 0ULL ] > 32ULL ? 32ULL : t200 [ 0ULL ] ] * 1.0E-5 ; } else { t443 =
t356 ; } if ( t448 -> mM . mX [ 40ULL ] != 0 ) { intermediate_der228 = 0.0 ;
} else { intermediate_der228 = t24 ; } t360 *= t443 ; t339 = - 1.0 / ( t360
== 0.0 ? 1.0E-16 : t360 ) * intermediate_der228 ; if ( t448 -> mM . mX [
40ULL ] != 0 ) { t200 [ 0ULL ] = 0ULL ; for ( t317 = 0ULL ; t317 < 33ULL ;
t317 ++ ) { t318 = t317 / 33ULL ; t319 = ( t317 - t317 % 33ULL ) + t200 [
t318 > 0ULL ? 0ULL : t318 ] ; if ( ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField8 [ t317 ] * 1.0E-5 < ( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 [
t319 > 32ULL ? 32ULL : t319 ] * 1.0E-5 ) { t200 [ t318 > 0ULL ? 0ULL : t318 ]
= t317 % 33ULL ; } } t24 = ( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 [
t200 [ 0ULL ] > 32ULL ? 32ULL : t200 [ 0ULL ] ] * 1.0E-5 ; } else { t24 =
t356 ; } if ( t448 -> mM . mX [ 40ULL ] != 0 ) { t200 [ 0ULL ] = 0ULL ; for (
t317 = 0ULL ; t317 < 33ULL ; t317 ++ ) { t318 = t317 / 33ULL ; t319 = ( t317
- t317 % 33ULL ) + t200 [ t318 > 0ULL ? 0ULL : t318 ] ; if ( ( (
_NeDynamicSystem * ) ( LC ) ) -> mField8 [ t317 ] * 1.0E-5 < ( (
_NeDynamicSystem * ) ( LC ) ) -> mField8 [ t319 > 32ULL ? 32ULL : t319 ] *
1.0E-5 ) { t200 [ t318 > 0ULL ? 0ULL : t318 ] = t317 % 33ULL ; } } t360 = ( (
_NeDynamicSystem * ) ( LC ) ) -> mField8 [ t200 [ 0ULL ] > 32ULL ? 32ULL :
t200 [ 0ULL ] ] * 1.0E-5 ; } else { t360 = t356 ; } if ( t448 -> mM . mX [
40ULL ] != 0 ) { t443 = 0.0 ; } else { t443 = t27 ; } t360 *= t24 ; t356 = -
1.0 / ( t360 == 0.0 ? 1.0E-16 : t360 ) * t443 ; if ( t448 -> mM . mX [ 5ULL ]
!= 0 ) { t213 [ 5ULL ] = 1.0 ; } else { t213 [ 5ULL ] = 1.0E-6 ; } if ( t448
-> mM . mX [ 7ULL ] != 0 ) { t214 [ 5ULL ] = 1.0 ; } else { t214 [ 5ULL ] =
1.0E-6 ; } if ( t448 -> mM . mX [ 5ULL ] != 0 ) { t215 [ 4ULL ] = - 1.0 ; }
else { t215 [ 4ULL ] = - 1.0E-6 ; } if ( t448 -> mM . mX [ 7ULL ] != 0 ) {
t215 [ 6ULL ] = - 1.0 ; } else { t215 [ 6ULL ] = - 1.0E-6 ; } if ( t448 -> mM
. mX [ 14ULL ] != 0 ) { t217 [ 5ULL ] = 1.0 ; } else { t217 [ 5ULL ] = 1.0E-6
; } if ( t448 -> mM . mX [ 16ULL ] != 0 ) { t218 [ 5ULL ] = 1.0 ; } else {
t218 [ 5ULL ] = 1.0E-6 ; } if ( t448 -> mM . mX [ 14ULL ] != 0 ) { t219 [
6ULL ] = - 1.0 ; } else { t219 [ 6ULL ] = - 1.0E-6 ; } if ( t448 -> mM . mX [
16ULL ] != 0 ) { t219 [ 8ULL ] = - 1.0 ; } else { t219 [ 8ULL ] = - 1.0E-6 ;
} if ( t448 -> mM . mX [ 9ULL ] != 0 ) { t221 [ 5ULL ] = 1.0 ; } else { t221
[ 5ULL ] = 1.0E-6 ; } if ( t448 -> mM . mX [ 11ULL ] != 0 ) { t222 [ 5ULL ] =
1.0 ; } else { t222 [ 5ULL ] = 1.0E-6 ; } t203 [ 0ULL ] = - 0.0 ; t360 =
zc_int1 * zc_int1 ; t203 [ 1ULL ] = - ( - t345 * ( real_T ) ( t345 < 0.0 ) )
/ ( t360 == 0.0 ? 1.0E-16 : t360 ) * t362 ; t203 [ 2ULL ] = - ( t448 -> mX .
mX [ 3ULL ] * t411 / 1627.0628375266881 ) ; t203 [ 3ULL ] = - ( t345 * t442 +
intermediate_der205 ) ; t203 [ 4ULL ] = - ( - t448 -> mX . mX [ 1ULL ] / (
t360 == 0.0 ? 1.0E-16 : t360 ) * t362 ) ; t203 [ 5ULL ] = - ( t345 * t345 *
t442 * 0.001 ) ; t203 [ 6ULL ] = - t411 / 27.169961699684265 ; t204 [ 0 ] =
_cg_const_11 [ 0 ] ; t204 [ 1 ] = _cg_const_11 [ 1 ] ; t204 [ 2 ] =
_cg_const_11 [ 2 ] ; t204 [ 3 ] = _cg_const_11 [ 3 ] ; t204 [ 4 ] =
_cg_const_11 [ 4 ] ; for ( t317 = 0ULL ; t317 < 5ULL ; t317 ++ ) { t205 [
t317 * 2ULL ] = - ( t352 * t204 [ t317 ] / 1627.0628375266881 ) ; } for (
t317 = 0ULL ; t317 < 5ULL ; t317 ++ ) { t205 [ t317 * 2ULL + 1ULL ] = -
intermediate_der17 [ t317 ] ; } t206 [ 0ULL ] = - 0.0 ; t411 = t6 * t6 ; t206
[ 1ULL ] = - ( - t349 * ( real_T ) ( t349 < 0.0 ) ) / ( t411 == 0.0 ? 1.0E-16
: t411 ) * intermediate_der235 ; t206 [ 2ULL ] = - ( t448 -> mX . mX [ 11ULL
] * intermediate_der236 / 1564.8239842061851 ) ; t206 [ 3ULL ] = - ( t349 *
intermediate_der215 + t419 ) / 9.3387366666665912 ; t206 [ 4ULL ] = - ( -
t448 -> mX . mX [ 9ULL ] / ( t411 == 0.0 ? 1.0E-16 : t411 ) *
intermediate_der235 ) ; t206 [ 5ULL ] = - ( t349 * t349 * intermediate_der215
* 0.001 ) ; t206 [ 6ULL ] = - intermediate_der236 / 25.511987746051755 ; for
( t317 = 0ULL ; t317 < 5ULL ; t317 ++ ) { t208 [ t317 * 2ULL ] = - ( t350 *
t204 [ t317 ] / 1564.8239842061851 ) ; } for ( t317 = 0ULL ; t317 < 5ULL ;
t317 ++ ) { t208 [ t317 * 2ULL + 1ULL ] = - intermediate_der38 [ t317 ] ; }
t209 [ 0ULL ] = - 0.0 ; t419 = t7 * t7 ; t209 [ 1ULL ] = - ( - t353 * (
real_T ) ( t353 < 0.0 ) ) / ( t419 == 0.0 ? 1.0E-16 : t419 ) *
intermediate_der238 ; t209 [ 2ULL ] = - ( t448 -> mX . mX [ 19ULL ] * t339 /
1633.3472493891418 ) ; t209 [ 3ULL ] = - ( t353 * intermediate_der224 +
intermediate_der226 ) / 1.2854033333333064 ; t209 [ 4ULL ] = - ( - t448 -> mX
. mX [ 17ULL ] / ( t419 == 0.0 ? 1.0E-16 : t419 ) * intermediate_der238 ) ;
t209 [ 5ULL ] = - ( t353 * t353 * intermediate_der224 * 0.001 ) ; t209 [ 6ULL
] = - t339 / 26.229060937518479 ; for ( t317 = 0ULL ; t317 < 5ULL ; t317 ++ )
{ t211 [ t317 * 2ULL ] = - ( t354 * t204 [ t317 ] / 1633.3472493891418 ) ; }
for ( t317 = 0ULL ; t317 < 5ULL ; t317 ++ ) { t211 [ t317 * 2ULL + 1ULL ] = -
intermediate_der56 [ t317 ] ; } t212 [ 0ULL ] = 0.1 * ( real_T ) ( t345 < 0.0
) / ( zc_int1 == 0.0 ? 1.0E-16 : zc_int1 ) ; t212 [ 1ULL ] = - ( - 0.1 * t346
) ; t212 [ 2ULL ] = - ( t345 * - 0.1 * t346 * 0.002 ) ; t212 [ 3ULL ] = -
0.05 ; t212 [ 4ULL ] = - 0.05 ; t442 = - 0.05 * ( real_T ) ( t345 < 0.0 ) ;
t213 [ 0ULL ] = t442 / ( zc_int1 == 0.0 ? 1.0E-16 : zc_int1 ) ; t213 [ 1ULL ]
= - ( 0.05 * t346 ) ; t213 [ 2ULL ] = - intermediate_der211 ; t213 [ 3ULL ] =
- 1.0 ; t213 [ 4ULL ] = 0.05 ; t214 [ 0ULL ] = t442 / ( zc_int1 == 0.0 ?
1.0E-16 : zc_int1 ) ; t214 [ 1ULL ] = - ( 0.05 * t346 ) ; t214 [ 2ULL ] = -
intermediate_der211 ; t214 [ 3ULL ] = - 1.0 ; t214 [ 4ULL ] = 0.05 ; t215 [
0ULL ] = 0.1 * ( real_T ) ( t349 < 0.0 ) / ( t6 == 0.0 ? 1.0E-16 : t6 ) ;
t215 [ 1ULL ] = - ( - 0.1 * zc_int11 ) / 9.3387366666665912 ; t215 [ 2ULL ] =
- ( t349 * - 0.1 * zc_int11 * 0.002 ) ; t215 [ 3ULL ] = 1.0 ; t215 [ 5ULL ] =
1.0 ; t215 [ 7ULL ] = - 0.05 ; t215 [ 8ULL ] = - 0.05 ; t216 [ 0ULL ] = - 0.0
; t216 [ 1ULL ] = - ( t448 -> mX . mX [ 3ULL ] * t357 / 1627.0628375266881 )
; t216 [ 2ULL ] = - ( t345 * t366 + intermediate_der206 ) ; t216 [ 3ULL ] = -
( t345 * t345 * t366 * 0.001 ) ; t216 [ 4ULL ] = - t357 / 27.169961699684265
; t442 = - 0.05 * ( real_T ) ( t349 < 0.0 ) ; t217 [ 0ULL ] = t442 / ( t6 ==
0.0 ? 1.0E-16 : t6 ) ; t443 = - ( 0.05 * zc_int11 ) ; t217 [ 1ULL ] = t443 /
9.3387366666665912 ; t217 [ 2ULL ] = - intermediate_der220 ; t217 [ 3ULL ] =
- 1.0 ; t217 [ 4ULL ] = 0.05 ; t218 [ 0ULL ] = t442 / ( t6 == 0.0 ? 1.0E-16 :
t6 ) ; t218 [ 1ULL ] = t443 / 9.3387366666665912 ; t218 [ 2ULL ] = -
intermediate_der220 ; t218 [ 3ULL ] = - 1.0 ; t218 [ 4ULL ] = 0.05 ; t219 [
0ULL ] = 0.1 * ( real_T ) ( t353 < 0.0 ) / ( t7 == 0.0 ? 1.0E-16 : t7 ) ;
t219 [ 1ULL ] = - ( - 0.1 * zc_int13 ) / 1.2854033333333064 ; t219 [ 2ULL ] =
- ( t353 * - 0.1 * zc_int13 * 0.002 ) ; t219 [ 3ULL ] = - 0.05 ; t219 [ 4ULL
] = - 0.05 ; t219 [ 5ULL ] = 1.0 ; t219 [ 7ULL ] = 1.0 ; t220 [ 0ULL ] = -
0.0 ; t220 [ 1ULL ] = - ( t448 -> mX . mX [ 11ULL ] * t358 /
1564.8239842061851 ) ; t220 [ 2ULL ] = - ( t349 * intermediate_der216 +
intermediate_der218 ) / 9.3387366666665912 ; t220 [ 3ULL ] = - ( t349 * t349
* intermediate_der216 * 0.001 ) ; t220 [ 4ULL ] = - t358 / 25.511987746051755
; t442 = - 0.05 * ( real_T ) ( t353 < 0.0 ) ; t221 [ 0ULL ] = t442 / ( t7 ==
0.0 ? 1.0E-16 : t7 ) ; t443 = - ( 0.05 * zc_int13 ) ; t221 [ 1ULL ] = t443 /
1.2854033333333064 ; t221 [ 2ULL ] = - intermediate_der229 ; t221 [ 3ULL ] =
- 1.0 ; t221 [ 4ULL ] = 0.05 ; t222 [ 0ULL ] = t442 / ( t7 == 0.0 ? 1.0E-16 :
t7 ) ; t222 [ 1ULL ] = t443 / 1.2854033333333064 ; t222 [ 2ULL ] = -
intermediate_der229 ; t222 [ 3ULL ] = - 1.0 ; t222 [ 4ULL ] = 0.05 ; t223 [
0ULL ] = - 0.0 ; t223 [ 1ULL ] = - ( t448 -> mX . mX [ 19ULL ] * t356 /
1633.3472493891418 ) ; t223 [ 2ULL ] = - ( t353 * intermediate_der225 +
intermediate_der227 ) / 1.2854033333333064 ; t223 [ 3ULL ] = - ( t353 * t353
* intermediate_der225 * 0.001 ) ; t223 [ 4ULL ] = - t356 / 26.229060937518479
; for ( t317 = 0ULL ; t317 < 7ULL ; t317 ++ ) { out -> mDXF . mX [ t317 ] =
t203 [ t317 ] ; } out -> mDXF . mX [ 7ULL ] = - ( 1.0 / ( zc_int1 == 0.0 ?
1.0E-16 : zc_int1 ) ) ; for ( t317 = 0ULL ; t317 < 10ULL ; t317 ++ ) { out ->
mDXF . mX [ t317 + 8ULL ] = t205 [ t317 ] ; } for ( t317 = 0ULL ; t317 < 7ULL
; t317 ++ ) { out -> mDXF . mX [ t317 + 18ULL ] = t206 [ t317 ] ; } out ->
mDXF . mX [ 25ULL ] = - ( 1.0 / ( t6 == 0.0 ? 1.0E-16 : t6 ) ) ; for ( t317 =
0ULL ; t317 < 10ULL ; t317 ++ ) { out -> mDXF . mX [ t317 + 26ULL ] = t208 [
t317 ] ; } for ( t317 = 0ULL ; t317 < 7ULL ; t317 ++ ) { out -> mDXF . mX [
t317 + 36ULL ] = t209 [ t317 ] ; } out -> mDXF . mX [ 43ULL ] = - ( 1.0 / (
t7 == 0.0 ? 1.0E-16 : t7 ) ) ; for ( t317 = 0ULL ; t317 < 10ULL ; t317 ++ ) {
out -> mDXF . mX [ t317 + 44ULL ] = t211 [ t317 ] ; } for ( t317 = 0ULL ;
t317 < 5ULL ; t317 ++ ) { out -> mDXF . mX [ t317 + 54ULL ] = t212 [ t317 ] ;
} for ( t317 = 0ULL ; t317 < 6ULL ; t317 ++ ) { out -> mDXF . mX [ t317 +
59ULL ] = t213 [ t317 ] ; } for ( t317 = 0ULL ; t317 < 6ULL ; t317 ++ ) { out
-> mDXF . mX [ t317 + 65ULL ] = t214 [ t317 ] ; } for ( t317 = 0ULL ; t317 <
9ULL ; t317 ++ ) { out -> mDXF . mX [ t317 + 71ULL ] = t215 [ t317 ] ; } for
( t317 = 0ULL ; t317 < 5ULL ; t317 ++ ) { out -> mDXF . mX [ t317 + 80ULL ] =
t216 [ t317 ] ; } out -> mDXF . mX [ 85ULL ] = - ( ( ( ( ( t448 -> mX . mX [
3ULL ] * t448 -> mX . mX [ 3ULL ] + t448 -> mX . mX [ 4ULL ] * t448 -> mX .
mX [ 4ULL ] * 0.0 ) + t448 -> mX . mX [ 5ULL ] * t448 -> mX . mX [ 5ULL ] *
0.0 ) + t448 -> mX . mX [ 6ULL ] * t448 -> mX . mX [ 6ULL ] * 0.0 ) + t448 ->
mX . mX [ 7ULL ] * t448 -> mX . mX [ 7ULL ] * 0.0 ) * 0.001 ) ; for ( t317 =
0ULL ; t317 < 6ULL ; t317 ++ ) { out -> mDXF . mX [ t317 + 86ULL ] = t217 [
t317 ] ; } for ( t317 = 0ULL ; t317 < 6ULL ; t317 ++ ) { out -> mDXF . mX [
t317 + 92ULL ] = t218 [ t317 ] ; } for ( t317 = 0ULL ; t317 < 9ULL ; t317 ++
) { out -> mDXF . mX [ t317 + 98ULL ] = t219 [ t317 ] ; } for ( t317 = 0ULL ;
t317 < 5ULL ; t317 ++ ) { out -> mDXF . mX [ t317 + 107ULL ] = t220 [ t317 ]
; } out -> mDXF . mX [ 112ULL ] = - ( ( ( ( ( t448 -> mX . mX [ 11ULL ] *
t448 -> mX . mX [ 11ULL ] + t448 -> mX . mX [ 12ULL ] * t448 -> mX . mX [
12ULL ] * 0.0 ) + t448 -> mX . mX [ 13ULL ] * t448 -> mX . mX [ 13ULL ] * 0.0
) + t448 -> mX . mX [ 14ULL ] * t448 -> mX . mX [ 14ULL ] * 0.0 ) + t448 ->
mX . mX [ 15ULL ] * t448 -> mX . mX [ 15ULL ] * 0.0 ) * 0.001 ) ; for ( t317
= 0ULL ; t317 < 6ULL ; t317 ++ ) { out -> mDXF . mX [ t317 + 113ULL ] = t221
[ t317 ] ; } for ( t317 = 0ULL ; t317 < 6ULL ; t317 ++ ) { out -> mDXF . mX [
t317 + 119ULL ] = t222 [ t317 ] ; } for ( t317 = 0ULL ; t317 < 5ULL ; t317 ++
) { out -> mDXF . mX [ t317 + 125ULL ] = t223 [ t317 ] ; } out -> mDXF . mX [
130ULL ] = - ( ( ( ( ( t448 -> mX . mX [ 19ULL ] * t448 -> mX . mX [ 19ULL ]
+ t448 -> mX . mX [ 20ULL ] * t448 -> mX . mX [ 20ULL ] * 0.0 ) + t448 -> mX
. mX [ 21ULL ] * t448 -> mX . mX [ 21ULL ] * 0.0 ) + t448 -> mX . mX [ 22ULL
] * t448 -> mX . mX [ 22ULL ] * 0.0 ) + t448 -> mX . mX [ 23ULL ] * t448 ->
mX . mX [ 23ULL ] * 0.0 ) * 0.001 ) ; out -> mDXF . mX [ 131ULL ] = 1.0 ; out
-> mDXF . mX [ 132ULL ] = t448 -> mM . mX [ 5ULL ] != 0 ? - 0.01 : - 1.0 ;
out -> mDXF . mX [ 133ULL ] = t448 -> mM . mX [ 4ULL ] != 0 ? - 1.0 : - 0.001
; out -> mDXF . mX [ 134ULL ] = t448 -> mM . mX [ 4ULL ] != 0 ? - 1.0E-5 : -
1.0 ; out -> mDXF . mX [ 135ULL ] = 1.0 ; out -> mDXF . mX [ 136ULL ] = t448
-> mM . mX [ 7ULL ] != 0 ? - 0.01 : - 1.0 ; out -> mDXF . mX [ 137ULL ] =
t448 -> mM . mX [ 6ULL ] != 0 ? - 1.0 : - 0.001 ; out -> mDXF . mX [ 138ULL ]
= t448 -> mM . mX [ 6ULL ] != 0 ? - 1.0E-5 : - 1.0 ; out -> mDXF . mX [
139ULL ] = 1.0 ; out -> mDXF . mX [ 140ULL ] = t448 -> mM . mX [ 9ULL ] != 0
? - 0.01 : - 1.0 ; out -> mDXF . mX [ 141ULL ] = t448 -> mM . mX [ 8ULL ] !=
0 ? - 1.0 : - 0.001 ; out -> mDXF . mX [ 142ULL ] = t448 -> mM . mX [ 8ULL ]
!= 0 ? - 1.0E-5 : - 1.0 ; out -> mDXF . mX [ 143ULL ] = 1.0 ; out -> mDXF .
mX [ 144ULL ] = t448 -> mM . mX [ 11ULL ] != 0 ? - 0.01 : - 1.0 ; out -> mDXF
. mX [ 145ULL ] = t448 -> mM . mX [ 10ULL ] != 0 ? - 1.0 : - 0.001 ; out ->
mDXF . mX [ 146ULL ] = t448 -> mM . mX [ 10ULL ] != 0 ? - 1.0E-5 : - 1.0 ;
out -> mDXF . mX [ 147ULL ] = 1.0 ; out -> mDXF . mX [ 148ULL ] = t448 -> mM
. mX [ 14ULL ] != 0 ? - 0.01 : - 1.0 ; out -> mDXF . mX [ 149ULL ] = t448 ->
mM . mX [ 13ULL ] != 0 ? - 1.0 : - 0.001 ; out -> mDXF . mX [ 150ULL ] = t448
-> mM . mX [ 13ULL ] != 0 ? - 1.0E-5 : - 1.0 ; out -> mDXF . mX [ 151ULL ] =
1.0 ; out -> mDXF . mX [ 152ULL ] = t448 -> mM . mX [ 16ULL ] != 0 ? - 0.01 :
- 1.0 ; out -> mDXF . mX [ 153ULL ] = t448 -> mM . mX [ 15ULL ] != 0 ? - 1.0
: - 0.001 ; out -> mDXF . mX [ 154ULL ] = t448 -> mM . mX [ 15ULL ] != 0 ? -
1.0E-5 : - 1.0 ; ( void ) LC ; ( void ) out ; return 0 ; }
