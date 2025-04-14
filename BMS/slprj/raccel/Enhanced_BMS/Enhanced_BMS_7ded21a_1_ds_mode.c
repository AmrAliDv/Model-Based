#include "ne_ds.h"
#include "Enhanced_BMS_7ded21a_1_ds_sys_struct.h"
#include "Enhanced_BMS_7ded21a_1_ds_mode.h"
#include "Enhanced_BMS_7ded21a_1_ds.h"
#include "Enhanced_BMS_7ded21a_1_ds_externals.h"
#include "Enhanced_BMS_7ded21a_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Enhanced_BMS_7ded21a_1_ds_mode ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t136 , NeDsMethodOutput * out ) { static real_T
_cg_const_1 [ 3 ] = { 278.15 , 293.15 , 313.15 } ; ETTSf3049b48 t0 ;
ETTSf3049b48 t1 ; ETTSf3049b48 t2 ; ETTSf3049b48 t3 ; ETTSf3049b48 t4 ;
ETTSf3049b48 t5 ; real_T nonscalar2 [ 3 ] ; real_T nonscalar4 [ 3 ] ; real_T
t82 [ 1 ] ; real_T t86 [ 1 ] ; real_T t87 [ 1 ] ; real_T t88 [ 1 ] ; real_T
t89 [ 1 ] ; real_T t90 [ 1 ] ; real_T
Battery_Battery_Table_Based1_electricalModel_xVint ; real_T
Battery_Battery_Table_Based1_electricalModel_xqnom ; real_T
Battery_Battery_Table_Based2_electricalModel_xVint ; real_T
Battery_Battery_Table_Based2_electricalModel_xqnom ; real_T
Battery_Battery_Table_Based_electricalModel_xVint ; real_T
Battery_Battery_Table_Based_electricalModel_xqnom ; real_T intrm_sf_mf_0 ;
real_T intrm_sf_mf_1 ; real_T intrm_sf_mf_10 ; real_T intrm_sf_mf_2 ; real_T
intrm_sf_mf_9 ; real_T t109 ; real_T t110 ; real_T t111 ; real_T t112 ;
real_T t114 ; real_T t131 ; real_T t133 ; real_T t134 ; real_T t135 ; size_t
t10 [ 1 ] ; size_t t7 [ 1 ] ; size_t t8 [ 1 ] ; size_t t107 ; size_t t108 ;
nonscalar2 [ 0 ] = _cg_const_1 [ 0 ] ; nonscalar2 [ 1 ] = _cg_const_1 [ 1 ] ;
nonscalar2 [ 2 ] = _cg_const_1 [ 2 ] ; nonscalar4 [ 0 ] = 14400.0 ;
nonscalar4 [ 1 ] = 14400.0 ; nonscalar4 [ 2 ] = 14400.0 ; t82 [ 0ULL ] = t136
-> mX . mX [ 28ULL ] ; t7 [ 0 ] = 11ULL ; t8 [ 0 ] = 1ULL ;
tlu2_linear_linear_prelookup ( & t4 . mField0 [ 0ULL ] , & t4 . mField1 [
0ULL ] , & t4 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField1 , & t82 [ 0ULL ] , & t7 [ 0ULL ] , & t8 [ 0ULL ] ) ; t82 [ 0ULL ] =
t136 -> mX . mX [ 0ULL ] ; t10 [ 0 ] = 3ULL ; tlu2_linear_linear_prelookup (
& t3 . mField0 [ 0ULL ] , & t3 . mField1 [ 0ULL ] , & t3 . mField2 [ 0ULL ] ,
& nonscalar2 [ 0ULL ] , & t82 [ 0ULL ] , & t10 [ 0ULL ] , & t8 [ 0ULL ] ) ;
tlu2_2d_linear_linear_value ( & t86 [ 0ULL ] , & t4 . mField0 [ 0ULL ] , & t4
. mField2 [ 0ULL ] , & t3 . mField0 [ 0ULL ] , & t3 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField0 , & t7 [ 0ULL ] , & t10 [ 0ULL ] , &
t8 [ 0ULL ] ) ; Battery_Battery_Table_Based_electricalModel_xVint = t86 [
0ULL ] ; tlu2_2d_linear_linear_value ( & t86 [ 0ULL ] , & t4 . mField0 [ 0ULL
] , & t4 . mField2 [ 0ULL ] , & t3 . mField0 [ 0ULL ] , & t3 . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t7 [ 0ULL ] , & t10 [
0ULL ] , & t8 [ 0ULL ] ) ; intrm_sf_mf_0 = t86 [ 0ULL ] ;
tlu2_1d_linear_linear_value ( & t86 [ 0ULL ] , & t3 . mField0 [ 0ULL ] , & t3
. mField2 [ 0ULL ] , & nonscalar4 [ 0ULL ] , & t10 [ 0ULL ] , & t8 [ 0ULL ] )
; Battery_Battery_Table_Based_electricalModel_xqnom = t86 [ 0ULL ] ; t82 [
0ULL ] = t136 -> mX . mX [ 34ULL ] ; tlu2_linear_linear_prelookup ( & t5 .
mField0 [ 0ULL ] , & t5 . mField1 [ 0ULL ] , & t5 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t82 [ 0ULL ] , & t7 [ 0ULL ] , &
t8 [ 0ULL ] ) ; t82 [ 0ULL ] = t136 -> mX . mX [ 8ULL ] ;
tlu2_linear_linear_prelookup ( & t1 . mField0 [ 0ULL ] , & t1 . mField1 [
0ULL ] , & t1 . mField2 [ 0ULL ] , & nonscalar2 [ 0ULL ] , & t82 [ 0ULL ] , &
t10 [ 0ULL ] , & t8 [ 0ULL ] ) ; tlu2_2d_linear_linear_value ( & t86 [ 0ULL ]
, & t5 . mField0 [ 0ULL ] , & t5 . mField2 [ 0ULL ] , & t1 . mField0 [ 0ULL ]
, & t1 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , &
t7 [ 0ULL ] , & t10 [ 0ULL ] , & t8 [ 0ULL ] ) ;
Battery_Battery_Table_Based1_electricalModel_xVint = t86 [ 0ULL ] ;
tlu2_2d_linear_linear_value ( & t86 [ 0ULL ] , & t5 . mField0 [ 0ULL ] , & t5
. mField2 [ 0ULL ] , & t1 . mField0 [ 0ULL ] , & t1 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField4 , & t7 [ 0ULL ] , & t10 [ 0ULL ] , &
t8 [ 0ULL ] ) ; intrm_sf_mf_1 = t86 [ 0ULL ] ; tlu2_1d_linear_linear_value (
& t86 [ 0ULL ] , & t1 . mField0 [ 0ULL ] , & t1 . mField2 [ 0ULL ] , &
nonscalar4 [ 0ULL ] , & t10 [ 0ULL ] , & t8 [ 0ULL ] ) ;
Battery_Battery_Table_Based1_electricalModel_xqnom = t86 [ 0ULL ] ; t82 [
0ULL ] = t136 -> mX . mX [ 39ULL ] ; tlu2_linear_linear_prelookup ( & t0 .
mField0 [ 0ULL ] , & t0 . mField1 [ 0ULL ] , & t0 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t82 [ 0ULL ] , & t7 [ 0ULL ] , &
t8 [ 0ULL ] ) ; t82 [ 0ULL ] = t136 -> mX . mX [ 16ULL ] ;
tlu2_linear_linear_prelookup ( & t2 . mField0 [ 0ULL ] , & t2 . mField1 [
0ULL ] , & t2 . mField2 [ 0ULL ] , & nonscalar2 [ 0ULL ] , & t82 [ 0ULL ] , &
t10 [ 0ULL ] , & t8 [ 0ULL ] ) ; tlu2_2d_linear_linear_value ( & t82 [ 0ULL ]
, & t0 . mField0 [ 0ULL ] , & t0 . mField2 [ 0ULL ] , & t2 . mField0 [ 0ULL ]
, & t2 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , &
t7 [ 0ULL ] , & t10 [ 0ULL ] , & t8 [ 0ULL ] ) ;
Battery_Battery_Table_Based2_electricalModel_xVint = t82 [ 0ULL ] ;
tlu2_2d_linear_linear_value ( & t82 [ 0ULL ] , & t0 . mField0 [ 0ULL ] , & t0
. mField2 [ 0ULL ] , & t2 . mField0 [ 0ULL ] , & t2 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField6 , & t7 [ 0ULL ] , & t10 [ 0ULL ] , &
t8 [ 0ULL ] ) ; intrm_sf_mf_2 = t82 [ 0ULL ] ; tlu2_1d_linear_linear_value (
& t82 [ 0ULL ] , & t2 . mField0 [ 0ULL ] , & t2 . mField2 [ 0ULL ] , &
nonscalar4 [ 0ULL ] , & t10 [ 0ULL ] , & t8 [ 0ULL ] ) ;
Battery_Battery_Table_Based2_electricalModel_xqnom = t82 [ 0ULL ] ;
tlu2_2d_linear_linear_value ( & t82 [ 0ULL ] , & t0 . mField0 [ 0ULL ] , & t0
. mField2 [ 0ULL ] , & t2 . mField0 [ 0ULL ] , & t2 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField7 , & t7 [ 0ULL ] , & t10 [ 0ULL ] , &
t8 [ 0ULL ] ) ; intrm_sf_mf_10 = t82 [ 0ULL ] ; tlu2_2d_linear_linear_value (
& t82 [ 0ULL ] , & t0 . mField0 [ 0ULL ] , & t0 . mField2 [ 0ULL ] , & t2 .
mField0 [ 0ULL ] , & t2 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField8 , & t7 [ 0ULL ] , & t10 [ 0ULL ] , & t8 [ 0ULL ] ) ;
intrm_sf_mf_9 = t82 [ 0ULL ] ; t82 [ 0ULL ] = pmf_get_inf ( ) ; for ( t107 =
0ULL ; t107 < 33ULL ; t107 ++ ) { t108 = t107 / 33ULL ; t109 = t82 [ t108 >
0ULL ? 0ULL : t108 ] ; t110 = ( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 [
t107 ] * 1.0E-5 ; t82 [ t108 > 0ULL ? 0ULL : t108 ] = t109 > t110 ? t110 :
t109 ; } t133 = intrm_sf_mf_9 > t82 [ 0ULL ] ? intrm_sf_mf_9 : t82 [ 0ULL ] ;
t109 = 1.0 / ( t133 == 0.0 ? 1.0E-16 : t133 ) ; tlu2_2d_linear_linear_value (
& t82 [ 0ULL ] , & t4 . mField0 [ 0ULL ] , & t4 . mField2 [ 0ULL ] , & t3 .
mField0 [ 0ULL ] , & t3 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField9 , & t7 [ 0ULL ] , & t10 [ 0ULL ] , & t8 [ 0ULL ] ) ; t110 = t82
[ 0ULL ] ; tlu2_2d_linear_linear_value ( & t82 [ 0ULL ] , & t4 . mField0 [
0ULL ] , & t4 . mField2 [ 0ULL ] , & t3 . mField0 [ 0ULL ] , & t3 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField10 , & t7 [ 0ULL ] , &
t10 [ 0ULL ] , & t8 [ 0ULL ] ) ; t111 = t82 [ 0ULL ] ; t82 [ 0ULL ] =
pmf_get_inf ( ) ; for ( t107 = 0ULL ; t107 < 33ULL ; t107 ++ ) { t108 = t107
/ 33ULL ; t133 = t82 [ t108 > 0ULL ? 0ULL : t108 ] ; t114 = ( (
_NeDynamicSystem * ) ( LC ) ) -> mField9 [ t107 ] * 1.0E-5 ; t82 [ t108 >
0ULL ? 0ULL : t108 ] = t133 > t114 ? t114 : t133 ; } t134 = t110 > t82 [ 0ULL
] ? t110 : t82 [ 0ULL ] ; t112 = 1.0 / ( t134 == 0.0 ? 1.0E-16 : t134 ) ;
tlu2_2d_linear_linear_value ( & t82 [ 0ULL ] , & t5 . mField0 [ 0ULL ] , & t5
. mField2 [ 0ULL ] , & t1 . mField0 [ 0ULL ] , & t1 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField11 , & t7 [ 0ULL ] , & t10 [ 0ULL ] ,
& t8 [ 0ULL ] ) ; t133 = t82 [ 0ULL ] ; tlu2_2d_linear_linear_value ( & t82 [
0ULL ] , & t5 . mField0 [ 0ULL ] , & t5 . mField2 [ 0ULL ] , & t1 . mField0 [
0ULL ] , & t1 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField12 , & t7 [ 0ULL ] , & t10 [ 0ULL ] , & t8 [ 0ULL ] ) ; t114 = t82 [
0ULL ] ; t82 [ 0ULL ] = pmf_get_inf ( ) ; for ( t107 = 0ULL ; t107 < 33ULL ;
t107 ++ ) { t108 = t107 / 33ULL ; t131 = t82 [ t108 > 0ULL ? 0ULL : t108 ] ;
t134 = ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 [ t107 ] * 1.0E-5 ; t82
[ t108 > 0ULL ? 0ULL : t108 ] = t131 > t134 ? t134 : t131 ; } t135 = t133 >
t82 [ 0ULL ] ? t133 : t82 [ 0ULL ] ; t82 [ 0ULL ] = pmf_get_inf ( ) ; for (
t107 = 0ULL ; t107 < 33ULL ; t107 ++ ) { t108 = t107 / 33ULL ; t131 = t82 [
t108 > 0ULL ? 0ULL : t108 ] ; t134 = ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField0 [ t107 ] * 1.0E-5 ; t82 [ t108 > 0ULL ? 0ULL : t108 ] = t131 > t134 ?
t134 : t131 ; } t86 [ 0ULL ] = pmf_get_inf ( ) ; for ( t107 = 0ULL ; t107 <
33ULL ; t107 ++ ) { t108 = t107 / 33ULL ; t131 = t86 [ t108 > 0ULL ? 0ULL :
t108 ] ; t134 = ( ( _NeDynamicSystem * ) ( LC ) ) -> mField9 [ t107 ] *
1.0E-5 ; t86 [ t108 > 0ULL ? 0ULL : t108 ] = t131 > t134 ? t134 : t131 ; }
t87 [ 0ULL ] = pmf_get_inf ( ) ; for ( t107 = 0ULL ; t107 < 33ULL ; t107 ++ )
{ t108 = t107 / 33ULL ; t131 = t87 [ t108 > 0ULL ? 0ULL : t108 ] ; t134 = ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 [ t107 ] * 1.0E-5 ; t87 [ t108 >
0ULL ? 0ULL : t108 ] = t131 > t134 ? t134 : t131 ; } t88 [ 0ULL ] =
pmf_get_inf ( ) ; for ( t107 = 0ULL ; t107 < 33ULL ; t107 ++ ) { t108 = t107
/ 33ULL ; t131 = t88 [ t108 > 0ULL ? 0ULL : t108 ] ; t134 = ( (
_NeDynamicSystem * ) ( LC ) ) -> mField11 [ t107 ] * 1.0E-5 ; t88 [ t108 >
0ULL ? 0ULL : t108 ] = t131 > t134 ? t134 : t131 ; } t89 [ 0ULL ] =
pmf_get_inf ( ) ; for ( t107 = 0ULL ; t107 < 33ULL ; t107 ++ ) { t108 = t107
/ 33ULL ; t131 = t89 [ t108 > 0ULL ? 0ULL : t108 ] ; t134 = ( (
_NeDynamicSystem * ) ( LC ) ) -> mField5 [ t107 ] * 1.0E-5 ; t89 [ t108 >
0ULL ? 0ULL : t108 ] = t131 > t134 ? t134 : t131 ; } t90 [ 0ULL ] =
pmf_get_inf ( ) ; for ( t107 = 0ULL ; t107 < 33ULL ; t107 ++ ) { t108 = t107
/ 33ULL ; t131 = t90 [ t108 > 0ULL ? 0ULL : t108 ] ; t134 = ( (
_NeDynamicSystem * ) ( LC ) ) -> mField8 [ t107 ] * 1.0E-5 ; t90 [ t108 >
0ULL ? 0ULL : t108 ] = t131 > t134 ? t134 : t131 ; } out -> mMODE . mX [ 0ULL
] = ( int32_T ) ( t82 [ 0ULL ] >=
Battery_Battery_Table_Based_electricalModel_xVint ) ; out -> mMODE . mX [
1ULL ] = ( int32_T ) ( Battery_Battery_Table_Based_electricalModel_xqnom <=
0.14400000000000002 ) ; out -> mMODE . mX [ 2ULL ] = ( int32_T ) (
intrm_sf_mf_1 <= 8.200000000000002E-8 ) ; out -> mMODE . mX [ 3ULL ] = (
int32_T ) ( intrm_sf_mf_2 <= 8.200000000000002E-8 ) ; out -> mMODE . mX [
4ULL ] = ( int32_T ) ( t136 -> mX . mX [ 43ULL ] < 0.0 ) ; out -> mMODE . mX
[ 5ULL ] = ( int32_T ) ( t136 -> mU . mX [ 5ULL ] > 0.8 ) ; out -> mMODE . mX
[ 6ULL ] = ( int32_T ) ( t136 -> mX . mX [ 45ULL ] < 0.0 ) ; out -> mMODE .
mX [ 7ULL ] = ( int32_T ) ( t136 -> mU . mX [ 0ULL ] > 0.8 ) ; out -> mMODE .
mX [ 8ULL ] = ( int32_T ) ( t136 -> mX . mX [ 47ULL ] < 0.0 ) ; out -> mMODE
. mX [ 9ULL ] = ( int32_T ) ( t136 -> mU . mX [ 3ULL ] > 0.8 ) ; out -> mMODE
. mX [ 10ULL ] = ( int32_T ) ( t136 -> mX . mX [ 49ULL ] < 0.0 ) ; out ->
mMODE . mX [ 11ULL ] = ( int32_T ) ( t136 -> mU . mX [ 4ULL ] > 0.8 ) ; out
-> mMODE . mX [ 12ULL ] = ( int32_T ) ( t86 [ 0ULL ] >= t110 ) ; out -> mMODE
. mX [ 13ULL ] = ( int32_T ) ( t136 -> mX . mX [ 51ULL ] < 0.0 ) ; out ->
mMODE . mX [ 14ULL ] = ( int32_T ) ( t136 -> mU . mX [ 1ULL ] > 0.8 ) ; out
-> mMODE . mX [ 15ULL ] = ( int32_T ) ( t136 -> mX . mX [ 53ULL ] < 0.0 ) ;
out -> mMODE . mX [ 16ULL ] = ( int32_T ) ( t136 -> mU . mX [ 2ULL ] > 0.8 )
; out -> mMODE . mX [ 17ULL ] = ( int32_T ) (
Battery_Battery_Table_Based_electricalModel_xVint >= 0.0 ) ; out -> mMODE .
mX [ 18ULL ] = ( int32_T ) (
Battery_Battery_Table_Based_electricalModel_xqnom > 0.0 ) ; out -> mMODE . mX
[ 19ULL ] = ( int32_T ) ( intrm_sf_mf_0 > 0.0 ) ; out -> mMODE . mX [ 20ULL ]
= ( int32_T ) ( t110 > 0.0 ) ; out -> mMODE . mX [ 21ULL ] = ( int32_T ) (
t111 > 0.0 ) ; out -> mMODE . mX [ 22ULL ] = ( int32_T ) ( t112 > 0.0 ) ; out
-> mMODE . mX [ 23ULL ] = ( int32_T ) ( t87 [ 0ULL ] >=
Battery_Battery_Table_Based1_electricalModel_xVint ) ; out -> mMODE . mX [
24ULL ] = ( int32_T ) ( Battery_Battery_Table_Based1_electricalModel_xVint >=
0.0 ) ; out -> mMODE . mX [ 25ULL ] = ( int32_T ) (
Battery_Battery_Table_Based1_electricalModel_xqnom > 0.0 ) ; out -> mMODE .
mX [ 26ULL ] = ( int32_T ) ( intrm_sf_mf_1 > 0.0 ) ; out -> mMODE . mX [
27ULL ] = ( int32_T ) ( t133 > 0.0 ) ; out -> mMODE . mX [ 28ULL ] = (
int32_T ) ( t114 > 0.0 ) ; out -> mMODE . mX [ 29ULL ] = ( int32_T ) ( 1.0 /
( t135 == 0.0 ? 1.0E-16 : t135 ) > 0.0 ) ; out -> mMODE . mX [ 30ULL ] = (
int32_T ) ( Battery_Battery_Table_Based2_electricalModel_xVint >= 0.0 ) ; out
-> mMODE . mX [ 31ULL ] = ( int32_T ) (
Battery_Battery_Table_Based2_electricalModel_xqnom > 0.0 ) ; out -> mMODE .
mX [ 32ULL ] = ( int32_T ) ( intrm_sf_mf_2 > 0.0 ) ; out -> mMODE . mX [
33ULL ] = ( int32_T ) ( intrm_sf_mf_9 > 0.0 ) ; out -> mMODE . mX [ 34ULL ] =
( int32_T ) ( Battery_Battery_Table_Based1_electricalModel_xqnom <=
0.14400000000000002 ) ; out -> mMODE . mX [ 35ULL ] = ( int32_T ) (
intrm_sf_mf_10 > 0.0 ) ; out -> mMODE . mX [ 36ULL ] = ( int32_T ) ( t109 >
0.0 ) ; out -> mMODE . mX [ 37ULL ] = ( int32_T ) ( t88 [ 0ULL ] >= t133 ) ;
out -> mMODE . mX [ 38ULL ] = ( int32_T ) ( t89 [ 0ULL ] >=
Battery_Battery_Table_Based2_electricalModel_xVint ) ; out -> mMODE . mX [
39ULL ] = ( int32_T ) ( Battery_Battery_Table_Based2_electricalModel_xqnom <=
0.14400000000000002 ) ; out -> mMODE . mX [ 40ULL ] = ( int32_T ) ( t90 [
0ULL ] >= intrm_sf_mf_9 ) ; out -> mMODE . mX [ 41ULL ] = ( int32_T ) (
intrm_sf_mf_0 <= 8.200000000000002E-8 ) ; ( void ) LC ; ( void ) out ; return
0 ; }
