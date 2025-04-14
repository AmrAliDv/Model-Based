#include "ne_ds.h"
#include "Enhanced_BMS_7ded21a_1_ds_sys_struct.h"
#include "Enhanced_BMS_7ded21a_1_ds_assert.h"
#include "Enhanced_BMS_7ded21a_1_ds.h"
#include "Enhanced_BMS_7ded21a_1_ds_externals.h"
#include "Enhanced_BMS_7ded21a_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Enhanced_BMS_7ded21a_1_ds_assert ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t70 , NeDsMethodOutput * out ) { static real_T
_cg_const_1 [ 3 ] = { 278.15 , 293.15 , 313.15 } ; ETTSf3049b48 t1 ;
ETTSf3049b48 t3 ; ETTSf3049b48 t4 ; ETTSf3049b48 t5 ; real_T nonscalar2 [ 3 ]
; real_T nonscalar4 [ 3 ] ; real_T t44 [ 1 ] ; real_T t45 [ 1 ] ; real_T t48
[ 1 ] ; real_T Battery_Battery_Table_Based1_electricalModel_xxqnom ; real_T
Battery_Battery_Table_Based2_electricalModel_xxqnom ; real_T
Battery_Battery_Table_Based_electricalModel_xxqnom ; real_T intrm_sf_mf_3 ;
real_T intrm_sf_mf_6 ; real_T t57 ; real_T t62 ; real_T t63 ; real_T t65 ;
real_T t68 ; size_t t22 [ 1 ] ; size_t t7 [ 1 ] ; size_t t8 [ 1 ] ; size_t
t53 ; size_t t54 ; nonscalar2 [ 0 ] = _cg_const_1 [ 0 ] ; nonscalar2 [ 1 ] =
_cg_const_1 [ 1 ] ; nonscalar2 [ 2 ] = _cg_const_1 [ 2 ] ; nonscalar4 [ 0 ] =
14400.0 ; nonscalar4 [ 1 ] = 14400.0 ; nonscalar4 [ 2 ] = 14400.0 ; t45 [
0ULL ] = t70 -> mX . mX [ 0ULL ] ; t68 = - t70 -> mX . mX [ 27ULL ] + t70 ->
mX . mX [ 24ULL ] ; t7 [ 0 ] = 3ULL ; t8 [ 0 ] = 1ULL ;
tlu2_linear_linear_prelookup ( & t5 . mField0 [ 0ULL ] , & t5 . mField1 [
0ULL ] , & t5 . mField2 [ 0ULL ] , & nonscalar2 [ 0ULL ] , & t45 [ 0ULL ] , &
t7 [ 0ULL ] , & t8 [ 0ULL ] ) ; tlu2_1d_linear_linear_value ( & t44 [ 0ULL ]
, & t5 . mField0 [ 0ULL ] , & t5 . mField2 [ 0ULL ] , & nonscalar4 [ 0ULL ] ,
& t7 [ 0ULL ] , & t8 [ 0ULL ] ) ;
Battery_Battery_Table_Based_electricalModel_xxqnom = t44 [ 0ULL ] >
0.14400000000000002 ? t44 [ 0ULL ] : 0.14400000000000002 ; t45 [ 0ULL ] = t70
-> mX . mX [ 8ULL ] ; t65 = - t70 -> mX . mX [ 33ULL ] + t70 -> mX . mX [
27ULL ] ; tlu2_linear_linear_prelookup ( & t3 . mField0 [ 0ULL ] , & t3 .
mField1 [ 0ULL ] , & t3 . mField2 [ 0ULL ] , & nonscalar2 [ 0ULL ] , & t45 [
0ULL ] , & t7 [ 0ULL ] , & t8 [ 0ULL ] ) ; tlu2_1d_linear_linear_value ( &
t44 [ 0ULL ] , & t3 . mField0 [ 0ULL ] , & t3 . mField2 [ 0ULL ] , &
nonscalar4 [ 0ULL ] , & t7 [ 0ULL ] , & t8 [ 0ULL ] ) ;
Battery_Battery_Table_Based1_electricalModel_xxqnom = t44 [ 0ULL ] >
0.14400000000000002 ? t44 [ 0ULL ] : 0.14400000000000002 ; t45 [ 0ULL ] = t70
-> mX . mX [ 16ULL ] ; tlu2_linear_linear_prelookup ( & t4 . mField0 [ 0ULL ]
, & t4 . mField1 [ 0ULL ] , & t4 . mField2 [ 0ULL ] , & nonscalar2 [ 0ULL ] ,
& t45 [ 0ULL ] , & t7 [ 0ULL ] , & t8 [ 0ULL ] ) ;
tlu2_1d_linear_linear_value ( & t44 [ 0ULL ] , & t4 . mField0 [ 0ULL ] , & t4
. mField2 [ 0ULL ] , & nonscalar4 [ 0ULL ] , & t7 [ 0ULL ] , & t8 [ 0ULL ] )
; Battery_Battery_Table_Based2_electricalModel_xxqnom = t44 [ 0ULL ] >
0.14400000000000002 ? t44 [ 0ULL ] : 0.14400000000000002 ; t45 [ 0ULL ] = t70
-> mX . mX [ 39ULL ] ; t22 [ 0 ] = 11ULL ; tlu2_linear_linear_prelookup ( &
t1 . mField0 [ 0ULL ] , & t1 . mField1 [ 0ULL ] , & t1 . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t45 [ 0ULL ] , & t22 [ 0ULL ]
, & t8 [ 0ULL ] ) ; tlu2_2d_linear_linear_value ( & t44 [ 0ULL ] , & t1 .
mField0 [ 0ULL ] , & t1 . mField2 [ 0ULL ] , & t4 . mField0 [ 0ULL ] , & t4 .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 , & t22 [
0ULL ] , & t7 [ 0ULL ] , & t8 [ 0ULL ] ) ; t57 = t44 [ 0ULL ] ; t45 [ 0ULL ]
= t70 -> mX . mX [ 28ULL ] ; tlu2_linear_linear_prelookup ( & t1 . mField0 [
0ULL ] , & t1 . mField1 [ 0ULL ] , & t1 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t45 [ 0ULL ] , & t22 [ 0ULL ] ,
& t8 [ 0ULL ] ) ; tlu2_2d_linear_linear_value ( & t44 [ 0ULL ] , & t1 .
mField0 [ 0ULL ] , & t1 . mField2 [ 0ULL ] , & t5 . mField0 [ 0ULL ] , & t5 .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField9 , & t22 [
0ULL ] , & t7 [ 0ULL ] , & t8 [ 0ULL ] ) ; intrm_sf_mf_3 = t44 [ 0ULL ] ; t45
[ 0ULL ] = t70 -> mX . mX [ 34ULL ] ; tlu2_linear_linear_prelookup ( & t1 .
mField0 [ 0ULL ] , & t1 . mField1 [ 0ULL ] , & t1 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t45 [ 0ULL ] , & t22 [ 0ULL ] ,
& t8 [ 0ULL ] ) ; tlu2_2d_linear_linear_value ( & t45 [ 0ULL ] , & t1 .
mField0 [ 0ULL ] , & t1 . mField2 [ 0ULL ] , & t3 . mField0 [ 0ULL ] , & t3 .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 , & t22 [
0ULL ] , & t7 [ 0ULL ] , & t8 [ 0ULL ] ) ; intrm_sf_mf_6 = t45 [ 0ULL ] ; t45
[ 0ULL ] = pmf_get_inf ( ) ; for ( t53 = 0ULL ; t53 < 33ULL ; t53 ++ ) { t54
= t53 / 33ULL ; t62 = t45 [ t54 > 0ULL ? 0ULL : t54 ] ; t63 = ( (
_NeDynamicSystem * ) ( LC ) ) -> mField8 [ t53 ] * 1.0E-5 ; t45 [ t54 > 0ULL
? 0ULL : t54 ] = t62 > t63 ? t63 : t62 ; } t44 [ 0ULL ] = pmf_get_inf ( ) ;
for ( t53 = 0ULL ; t53 < 33ULL ; t53 ++ ) { t54 = t53 / 33ULL ; t62 = t44 [
t54 > 0ULL ? 0ULL : t54 ] ; t63 = ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField9 [ t53 ] * 1.0E-5 ; t44 [ t54 > 0ULL ? 0ULL : t54 ] = t62 > t63 ? t63
: t62 ; } t48 [ 0ULL ] = pmf_get_inf ( ) ; for ( t53 = 0ULL ; t53 < 33ULL ;
t53 ++ ) { t54 = t53 / 33ULL ; t62 = t48 [ t54 > 0ULL ? 0ULL : t54 ] ; t63 =
( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 [ t53 ] * 1.0E-5 ; t48 [ t54 >
0ULL ? 0ULL : t54 ] = t62 > t63 ? t63 : t62 ; } out -> mASSERT . mX [ 0ULL ]
= ( int32_T ) ( t70 -> mM . mX [ 17ULL ] != 0 ) ; out -> mASSERT . mX [ 1ULL
] = ( int32_T ) ( t70 -> mM . mX [ 18ULL ] != 0 ) ; out -> mASSERT . mX [
2ULL ] = ( int32_T ) ( t70 -> mM . mX [ 19ULL ] != 0 ) ; out -> mASSERT . mX
[ 3ULL ] = ( int32_T ) ( t70 -> mX . mX [ 28ULL ] >= 0.0 ) ; out -> mASSERT .
mX [ 4ULL ] = ( int32_T ) ( t70 -> mX . mX [ 28ULL ] <= 1.0 ) ; out ->
mASSERT . mX [ 5ULL ] = ( int32_T ) ( t68 >= 0.0 ) ; out -> mASSERT . mX [
6ULL ] = ( int32_T ) ( t68 <= pmf_get_inf ( ) ) ; out -> mASSERT . mX [ 7ULL
] = ( int32_T ) ( t70 -> mM . mX [ 20ULL ] != 0 ) ; out -> mASSERT . mX [
8ULL ] = ( int32_T ) ( t70 -> mM . mX [ 21ULL ] != 0 ) ; out -> mASSERT . mX
[ 9ULL ] = ( int32_T ) ( t70 -> mM . mX [ 22ULL ] != 0 ) ; out -> mASSERT .
mX [ 10ULL ] = ( int32_T ) ( t70 -> mM . mX [ 24ULL ] != 0 ) ; out -> mASSERT
. mX [ 11ULL ] = ( int32_T ) ( t70 -> mM . mX [ 25ULL ] != 0 ) ; out ->
mASSERT . mX [ 12ULL ] = ( int32_T ) ( t70 -> mM . mX [ 26ULL ] != 0 ) ; out
-> mASSERT . mX [ 13ULL ] = ( int32_T ) ( t70 -> mX . mX [ 34ULL ] >= 0.0 ) ;
out -> mASSERT . mX [ 14ULL ] = ( int32_T ) ( t70 -> mX . mX [ 34ULL ] <= 1.0
) ; out -> mASSERT . mX [ 15ULL ] = ( int32_T ) ( t65 >= 0.0 ) ; out ->
mASSERT . mX [ 16ULL ] = ( int32_T ) ( t65 <= pmf_get_inf ( ) ) ; out ->
mASSERT . mX [ 17ULL ] = ( int32_T ) ( t70 -> mM . mX [ 27ULL ] != 0 ) ; out
-> mASSERT . mX [ 18ULL ] = ( int32_T ) ( t70 -> mM . mX [ 28ULL ] != 0 ) ;
out -> mASSERT . mX [ 19ULL ] = ( int32_T ) ( t70 -> mM . mX [ 29ULL ] != 0 )
; out -> mASSERT . mX [ 20ULL ] = ( int32_T ) ( t70 -> mM . mX [ 30ULL ] != 0
) ; out -> mASSERT . mX [ 21ULL ] = ( int32_T ) ( t70 -> mM . mX [ 31ULL ] !=
0 ) ; out -> mASSERT . mX [ 22ULL ] = ( int32_T ) ( t70 -> mM . mX [ 32ULL ]
!= 0 ) ; out -> mASSERT . mX [ 23ULL ] = ( int32_T ) ( t70 -> mX . mX [ 39ULL
] >= 0.0 ) ; out -> mASSERT . mX [ 24ULL ] = ( int32_T ) ( t70 -> mX . mX [
39ULL ] <= 1.0 ) ; out -> mASSERT . mX [ 25ULL ] = ( int32_T ) ( t70 -> mX .
mX [ 33ULL ] >= 0.0 ) ; out -> mASSERT . mX [ 26ULL ] = ( int32_T ) ( t70 ->
mX . mX [ 33ULL ] <= pmf_get_inf ( ) ) ; out -> mASSERT . mX [ 27ULL ] = (
int32_T ) ( t70 -> mM . mX [ 33ULL ] != 0 ) ; out -> mASSERT . mX [ 28ULL ] =
( int32_T ) ( t70 -> mM . mX [ 35ULL ] != 0 ) ; out -> mASSERT . mX [ 29ULL ]
= ( int32_T ) ( t70 -> mM . mX [ 36ULL ] != 0 ) ; out -> mASSERT . mX [ 30ULL
] = 1 ; out -> mASSERT . mX [ 31ULL ] = 1 ; out -> mASSERT . mX [ 32ULL ] = 1
; out -> mASSERT . mX [ 33ULL ] = 1 ; out -> mASSERT . mX [ 34ULL ] = 1 ; out
-> mASSERT . mX [ 35ULL ] = 1 ; out -> mASSERT . mX [ 36ULL ] = 1 ; out ->
mASSERT . mX [ 37ULL ] = 1 ; out -> mASSERT . mX [ 38ULL ] = 1 ; out ->
mASSERT . mX [ 39ULL ] = 1 ; out -> mASSERT . mX [ 40ULL ] = 1 ; out ->
mASSERT . mX [ 41ULL ] = 1 ; out -> mASSERT . mX [ 42ULL ] = 1 ; out ->
mASSERT . mX [ 43ULL ] = 1 ; out -> mASSERT . mX [ 44ULL ] = 1 ; out ->
mASSERT . mX [ 45ULL ] = 1 ; out -> mASSERT . mX [ 46ULL ] = 1 ; out ->
mASSERT . mX [ 47ULL ] = 1 ; out -> mASSERT . mX [ 48ULL ] = 1 ; out ->
mASSERT . mX [ 49ULL ] = 1 ; out -> mASSERT . mX [ 50ULL ] = 1 ; out ->
mASSERT . mX [ 51ULL ] = 1 ; out -> mASSERT . mX [ 52ULL ] = 1 ; out ->
mASSERT . mX [ 53ULL ] = 1 ; out -> mASSERT . mX [ 54ULL ] = 1 ; out ->
mASSERT . mX [ 55ULL ] = 1 ; out -> mASSERT . mX [ 56ULL ] = 1 ; out ->
mASSERT . mX [ 57ULL ] = 1 ; out -> mASSERT . mX [ 58ULL ] = 1 ; out ->
mASSERT . mX [ 59ULL ] = 1 ; out -> mASSERT . mX [ 60ULL ] = 1 ; out ->
mASSERT . mX [ 61ULL ] = 1 ; out -> mASSERT . mX [ 62ULL ] = 1 ; out ->
mASSERT . mX [ 63ULL ] = 1 ; out -> mASSERT . mX [ 64ULL ] = 1 ; out ->
mASSERT . mX [ 65ULL ] = 1 ; out -> mASSERT . mX [ 66ULL ] = 1 ; out ->
mASSERT . mX [ 67ULL ] = 1 ; out -> mASSERT . mX [ 68ULL ] = 1 ; out ->
mASSERT . mX [ 69ULL ] = 1 ; out -> mASSERT . mX [ 70ULL ] = 1 ; out ->
mASSERT . mX [ 71ULL ] = 1 ; out -> mASSERT . mX [ 72ULL ] = 1 ; out ->
mASSERT . mX [ 73ULL ] = 1 ; out -> mASSERT . mX [ 74ULL ] = 1 ; out ->
mASSERT . mX [ 75ULL ] = 1 ; out -> mASSERT . mX [ 76ULL ] = 1 ; out ->
mASSERT . mX [ 77ULL ] = 1 ; out -> mASSERT . mX [ 78ULL ] = 1 ; out ->
mASSERT . mX [ 79ULL ] = 1 ; out -> mASSERT . mX [ 80ULL ] = 1 ; out ->
mASSERT . mX [ 81ULL ] = 1 ; out -> mASSERT . mX [ 82ULL ] = 1 ; out ->
mASSERT . mX [ 83ULL ] = 1 ; out -> mASSERT . mX [ 84ULL ] = ( int32_T ) ( (
t57 > t45 [ 0ULL ] ? t57 : t45 [ 0ULL ] ) != 0.0 ) ; out -> mASSERT . mX [
85ULL ] = ( int32_T ) ( ( intrm_sf_mf_3 > t44 [ 0ULL ] ? intrm_sf_mf_3 : t44
[ 0ULL ] ) != 0.0 ) ; out -> mASSERT . mX [ 86ULL ] = ( int32_T ) ( (
intrm_sf_mf_6 > t48 [ 0ULL ] ? intrm_sf_mf_6 : t48 [ 0ULL ] ) != 0.0 ) ; out
-> mASSERT . mX [ 87ULL ] = ( int32_T ) (
Battery_Battery_Table_Based_electricalModel_xxqnom != 0.0 ) ; out -> mASSERT
. mX [ 88ULL ] = ( int32_T ) (
Battery_Battery_Table_Based1_electricalModel_xxqnom != 0.0 ) ; out -> mASSERT
. mX [ 89ULL ] = ( int32_T ) (
Battery_Battery_Table_Based2_electricalModel_xxqnom != 0.0 ) ; out -> mASSERT
. mX [ 90ULL ] = ( int32_T ) (
Battery_Battery_Table_Based_electricalModel_xxqnom != 0.0 ) ; out -> mASSERT
. mX [ 91ULL ] = ( int32_T ) (
Battery_Battery_Table_Based1_electricalModel_xxqnom != 0.0 ) ; out -> mASSERT
. mX [ 92ULL ] = ( int32_T ) (
Battery_Battery_Table_Based2_electricalModel_xxqnom != 0.0 ) ; out -> mASSERT
. mX [ 93ULL ] = 1 ; out -> mASSERT . mX [ 94ULL ] = 1 ; out -> mASSERT . mX
[ 95ULL ] = 1 ; out -> mASSERT . mX [ 96ULL ] = 1 ; out -> mASSERT . mX [
97ULL ] = 1 ; out -> mASSERT . mX [ 98ULL ] = 1 ; out -> mASSERT . mX [ 99ULL
] = 1 ; out -> mASSERT . mX [ 100ULL ] = 1 ; out -> mASSERT . mX [ 101ULL ] =
1 ; out -> mASSERT . mX [ 102ULL ] = 1 ; out -> mASSERT . mX [ 103ULL ] = 1 ;
out -> mASSERT . mX [ 104ULL ] = 1 ; out -> mASSERT . mX [ 105ULL ] = 1 ; out
-> mASSERT . mX [ 106ULL ] = 1 ; out -> mASSERT . mX [ 107ULL ] = 1 ; out ->
mASSERT . mX [ 108ULL ] = 1 ; out -> mASSERT . mX [ 109ULL ] = 1 ; out ->
mASSERT . mX [ 110ULL ] = 1 ; out -> mASSERT . mX [ 111ULL ] = 1 ; out ->
mASSERT . mX [ 112ULL ] = 1 ; out -> mASSERT . mX [ 113ULL ] = 1 ; out ->
mASSERT . mX [ 114ULL ] = 1 ; out -> mASSERT . mX [ 115ULL ] = 1 ; out ->
mASSERT . mX [ 116ULL ] = 1 ; ( void ) LC ; ( void ) out ; return 0 ; }
