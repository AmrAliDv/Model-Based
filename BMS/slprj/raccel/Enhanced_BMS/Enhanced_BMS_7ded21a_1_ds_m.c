#include "ne_ds.h"
#include "Enhanced_BMS_7ded21a_1_ds_sys_struct.h"
#include "Enhanced_BMS_7ded21a_1_ds_m.h"
#include "Enhanced_BMS_7ded21a_1_ds.h"
#include "Enhanced_BMS_7ded21a_1_ds_externals.h"
#include "Enhanced_BMS_7ded21a_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Enhanced_BMS_7ded21a_1_ds_m ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t112 , NeDsMethodOutput * out ) { static real_T
_cg_const_5 [ 5 ] = { 1.0 , 0.0 , 0.0 , 0.0 , 0.0 } ; static real_T
_cg_const_6 [ 5 ] = { 0.0 , 0.0 , 0.0 , 0.0 , 1.0 } ; static real_T
_cg_const_7 [ 5 ] = { 0.0 , 0.0 , 0.0 , 1.0 , 0.0 } ; static real_T
_cg_const_8 [ 5 ] = { 0.0 , 0.0 , 1.0 , 0.0 , 0.0 } ; static real_T
_cg_const_9 [ 5 ] = { 0.0 , 1.0 , 0.0 , 0.0 , 0.0 } ; static real_T
_cg_const_1 [ 3 ] = { 278.15 , 293.15 , 313.15 } ; ETTSf3049b48 t4 ;
ETTSf3049b48 t5 ; real_T t60 [ 25 ] ; real_T t66 [ 25 ] ; real_T t72 [ 25 ] ;
real_T t55 [ 5 ] ; real_T t56 [ 5 ] ; real_T t57 [ 5 ] ; real_T t58 [ 5 ] ;
real_T t59 [ 5 ] ; real_T nonscalar2 [ 3 ] ; real_T t48 [ 1 ] ; real_T t51 [
1 ] ; real_T intrm_sf_mf_10 ; real_T intrm_sf_mf_6 ; real_T t109 ; real_T
t111 ; real_T t8 ; size_t t11 [ 1 ] ; size_t t13 [ 1 ] ; size_t t54 [ 1 ] ;
size_t t80 ; size_t t81 ; size_t t97 ; nonscalar2 [ 0 ] = _cg_const_1 [ 0 ] ;
nonscalar2 [ 1 ] = _cg_const_1 [ 1 ] ; nonscalar2 [ 2 ] = _cg_const_1 [ 2 ] ;
t51 [ 0ULL ] = t112 -> mX . mX [ 39ULL ] ; t54 [ 0 ] = 11ULL ; t11 [ 0 ] =
1ULL ; tlu2_linear_linear_prelookup ( & t5 . mField0 [ 0ULL ] , & t5 .
mField1 [ 0ULL ] , & t5 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField1 , & t51 [ 0ULL ] , & t54 [ 0ULL ] , & t11 [ 0ULL ] ) ; t51 [
0ULL ] = t112 -> mX . mX [ 16ULL ] ; t13 [ 0 ] = 3ULL ;
tlu2_linear_linear_prelookup ( & t4 . mField0 [ 0ULL ] , & t4 . mField1 [
0ULL ] , & t4 . mField2 [ 0ULL ] , & nonscalar2 [ 0ULL ] , & t51 [ 0ULL ] , &
t13 [ 0ULL ] , & t11 [ 0ULL ] ) ; tlu2_2d_linear_linear_value ( & t48 [ 0ULL
] , & t5 . mField0 [ 0ULL ] , & t5 . mField2 [ 0ULL ] , & t4 . mField0 [ 0ULL
] , & t4 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 ,
& t54 [ 0ULL ] , & t13 [ 0ULL ] , & t11 [ 0ULL ] ) ; intrm_sf_mf_10 = t48 [
0ULL ] ; tlu2_2d_linear_linear_value ( & t48 [ 0ULL ] , & t5 . mField0 [ 0ULL
] , & t5 . mField2 [ 0ULL ] , & t4 . mField0 [ 0ULL ] , & t4 . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 , & t54 [ 0ULL ] , & t13 [
0ULL ] , & t11 [ 0ULL ] ) ; t109 = t48 [ 0ULL ] ; t51 [ 0ULL ] = t112 -> mX .
mX [ 28ULL ] ; tlu2_linear_linear_prelookup ( & t5 . mField0 [ 0ULL ] , & t5
. mField1 [ 0ULL ] , & t5 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField1 , & t51 [ 0ULL ] , & t54 [ 0ULL ] , & t11 [ 0ULL ] ) ; t51 [
0ULL ] = t112 -> mX . mX [ 0ULL ] ; tlu2_linear_linear_prelookup ( & t4 .
mField0 [ 0ULL ] , & t4 . mField1 [ 0ULL ] , & t4 . mField2 [ 0ULL ] , &
nonscalar2 [ 0ULL ] , & t51 [ 0ULL ] , & t13 [ 0ULL ] , & t11 [ 0ULL ] ) ;
tlu2_2d_linear_linear_value ( & t48 [ 0ULL ] , & t5 . mField0 [ 0ULL ] , & t5
. mField2 [ 0ULL ] , & t4 . mField0 [ 0ULL ] , & t4 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField9 , & t54 [ 0ULL ] , & t13 [ 0ULL ] ,
& t11 [ 0ULL ] ) ; t111 = t48 [ 0ULL ] ; tlu2_2d_linear_linear_value ( & t48
[ 0ULL ] , & t5 . mField0 [ 0ULL ] , & t5 . mField2 [ 0ULL ] , & t4 . mField0
[ 0ULL ] , & t4 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField10 , & t54 [ 0ULL ] , & t13 [ 0ULL ] , & t11 [ 0ULL ] ) ; t51 [ 0ULL ]
= t112 -> mX . mX [ 34ULL ] ; tlu2_linear_linear_prelookup ( & t5 . mField0 [
0ULL ] , & t5 . mField1 [ 0ULL ] , & t5 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t51 [ 0ULL ] , & t54 [ 0ULL ] ,
& t11 [ 0ULL ] ) ; t51 [ 0ULL ] = t112 -> mX . mX [ 8ULL ] ;
tlu2_linear_linear_prelookup ( & t4 . mField0 [ 0ULL ] , & t4 . mField1 [
0ULL ] , & t4 . mField2 [ 0ULL ] , & nonscalar2 [ 0ULL ] , & t51 [ 0ULL ] , &
t13 [ 0ULL ] , & t11 [ 0ULL ] ) ; tlu2_2d_linear_linear_value ( & t51 [ 0ULL
] , & t5 . mField0 [ 0ULL ] , & t5 . mField2 [ 0ULL ] , & t4 . mField0 [ 0ULL
] , & t4 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField11 ,
& t54 [ 0ULL ] , & t13 [ 0ULL ] , & t11 [ 0ULL ] ) ; intrm_sf_mf_6 = t51 [
0ULL ] ; tlu2_2d_linear_linear_value ( & t51 [ 0ULL ] , & t5 . mField0 [ 0ULL
] , & t5 . mField2 [ 0ULL ] , & t4 . mField0 [ 0ULL ] , & t4 . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 , & t54 [ 0ULL ] , & t13 [
0ULL ] , & t11 [ 0ULL ] ) ; if ( t112 -> mM . mX [ 12ULL ] != 0 ) { t54 [
0ULL ] = 0ULL ; for ( t97 = 0ULL ; t97 < 33ULL ; t97 ++ ) { t80 = t97 / 33ULL
; t81 = ( t97 - t97 % 33ULL ) + t54 [ t80 > 0ULL ? 0ULL : t80 ] ; if ( ( (
_NeDynamicSystem * ) ( LC ) ) -> mField9 [ t97 ] * 1.0E-5 < ( (
_NeDynamicSystem * ) ( LC ) ) -> mField9 [ t81 > 32ULL ? 32ULL : t81 ] *
1.0E-5 ) { t54 [ t80 > 0ULL ? 0ULL : t80 ] = t97 % 33ULL ; } } t8 = ( (
_NeDynamicSystem * ) ( LC ) ) -> mField9 [ t54 [ 0ULL ] > 32ULL ? 32ULL : t54
[ 0ULL ] ] * 1.0E-5 ; } else { t8 = t111 ; } t111 = 1.0 / ( t8 == 0.0 ?
1.0E-16 : t8 ) ; if ( t112 -> mM . mX [ 37ULL ] != 0 ) { t54 [ 0ULL ] = 0ULL
; for ( t97 = 0ULL ; t97 < 33ULL ; t97 ++ ) { t80 = t97 / 33ULL ; t81 = ( t97
- t97 % 33ULL ) + t54 [ t80 > 0ULL ? 0ULL : t80 ] ; if ( ( ( _NeDynamicSystem
* ) ( LC ) ) -> mField11 [ t97 ] * 1.0E-5 < ( ( _NeDynamicSystem * ) ( LC ) )
-> mField11 [ t81 > 32ULL ? 32ULL : t81 ] * 1.0E-5 ) { t54 [ t80 > 0ULL ?
0ULL : t80 ] = t97 % 33ULL ; } } t8 = ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField11 [ t54 [ 0ULL ] > 32ULL ? 32ULL : t54 [ 0ULL ] ] * 1.0E-5 ; } else {
t8 = intrm_sf_mf_6 ; } intrm_sf_mf_6 = 1.0 / ( t8 == 0.0 ? 1.0E-16 : t8 ) ;
if ( t112 -> mM . mX [ 40ULL ] != 0 ) { t54 [ 0ULL ] = 0ULL ; for ( t97 =
0ULL ; t97 < 33ULL ; t97 ++ ) { t80 = t97 / 33ULL ; t81 = ( t97 - t97 % 33ULL
) + t54 [ t80 > 0ULL ? 0ULL : t80 ] ; if ( ( ( _NeDynamicSystem * ) ( LC ) )
-> mField8 [ t97 ] * 1.0E-5 < ( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 [
t81 > 32ULL ? 32ULL : t81 ] * 1.0E-5 ) { t54 [ t80 > 0ULL ? 0ULL : t80 ] =
t97 % 33ULL ; } } t8 = ( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 [ t54 [
0ULL ] > 32ULL ? 32ULL : t54 [ 0ULL ] ] * 1.0E-5 ; } else { t8 = t109 ; }
t109 = 1.0 / ( t8 == 0.0 ? 1.0E-16 : t8 ) ; t55 [ 0 ] = _cg_const_5 [ 0 ] ;
t55 [ 1 ] = _cg_const_5 [ 1 ] ; t55 [ 2 ] = _cg_const_5 [ 2 ] ; t55 [ 3 ] =
_cg_const_5 [ 3 ] ; t55 [ 4 ] = _cg_const_5 [ 4 ] ; t56 [ 0 ] = _cg_const_6 [
0 ] ; t56 [ 1 ] = _cg_const_6 [ 1 ] ; t56 [ 2 ] = _cg_const_6 [ 2 ] ; t56 [ 3
] = _cg_const_6 [ 3 ] ; t56 [ 4 ] = _cg_const_6 [ 4 ] ; t57 [ 0 ] =
_cg_const_7 [ 0 ] ; t57 [ 1 ] = _cg_const_7 [ 1 ] ; t57 [ 2 ] = _cg_const_7 [
2 ] ; t57 [ 3 ] = _cg_const_7 [ 3 ] ; t57 [ 4 ] = _cg_const_7 [ 4 ] ; t58 [ 0
] = _cg_const_8 [ 0 ] ; t58 [ 1 ] = _cg_const_8 [ 1 ] ; t58 [ 2 ] =
_cg_const_8 [ 2 ] ; t58 [ 3 ] = _cg_const_8 [ 3 ] ; t58 [ 4 ] = _cg_const_8 [
4 ] ; t59 [ 0 ] = _cg_const_9 [ 0 ] ; t59 [ 1 ] = _cg_const_9 [ 1 ] ; t59 [ 2
] = _cg_const_9 [ 2 ] ; t59 [ 3 ] = _cg_const_9 [ 3 ] ; t59 [ 4 ] =
_cg_const_9 [ 4 ] ; for ( t97 = 0ULL ; t97 < 5ULL ; t97 ++ ) { t60 [ t97 *
5ULL ] = t48 [ 0ULL ] * t111 * t55 [ t97 ] / 1627.0628375266881 ; } for ( t97
= 0ULL ; t97 < 5ULL ; t97 ++ ) { t60 [ t97 * 5ULL + 1ULL ] = t56 [ t97 ] ; }
for ( t97 = 0ULL ; t97 < 5ULL ; t97 ++ ) { t60 [ t97 * 5ULL + 2ULL ] = t57 [
t97 ] ; } for ( t97 = 0ULL ; t97 < 5ULL ; t97 ++ ) { t60 [ t97 * 5ULL + 3ULL
] = t58 [ t97 ] ; } for ( t97 = 0ULL ; t97 < 5ULL ; t97 ++ ) { t60 [ t97 *
5ULL + 4ULL ] = t59 [ t97 ] ; } for ( t97 = 0ULL ; t97 < 5ULL ; t97 ++ ) {
t66 [ t97 * 5ULL ] = t51 [ 0ULL ] * intrm_sf_mf_6 * t55 [ t97 ] /
1564.8239842061851 ; } for ( t97 = 0ULL ; t97 < 5ULL ; t97 ++ ) { t66 [ t97 *
5ULL + 1ULL ] = t56 [ t97 ] ; } for ( t97 = 0ULL ; t97 < 5ULL ; t97 ++ ) {
t66 [ t97 * 5ULL + 2ULL ] = t57 [ t97 ] ; } for ( t97 = 0ULL ; t97 < 5ULL ;
t97 ++ ) { t66 [ t97 * 5ULL + 3ULL ] = t58 [ t97 ] ; } for ( t97 = 0ULL ; t97
< 5ULL ; t97 ++ ) { t66 [ t97 * 5ULL + 4ULL ] = t59 [ t97 ] ; } for ( t97 =
0ULL ; t97 < 5ULL ; t97 ++ ) { t72 [ t97 * 5ULL ] = intrm_sf_mf_10 * t109 *
t55 [ t97 ] / 1633.3472493891418 ; } for ( t97 = 0ULL ; t97 < 5ULL ; t97 ++ )
{ t72 [ t97 * 5ULL + 1ULL ] = t56 [ t97 ] ; } for ( t97 = 0ULL ; t97 < 5ULL ;
t97 ++ ) { t72 [ t97 * 5ULL + 2ULL ] = t57 [ t97 ] ; } for ( t97 = 0ULL ; t97
< 5ULL ; t97 ++ ) { t72 [ t97 * 5ULL + 3ULL ] = t58 [ t97 ] ; } for ( t97 =
0ULL ; t97 < 5ULL ; t97 ++ ) { t72 [ t97 * 5ULL + 4ULL ] = t59 [ t97 ] ; }
out -> mM . mX [ 0ULL ] = 0.81053279999999994 ; out -> mM . mX [ 1ULL ] = 1.0
; out -> mM . mX [ 2ULL ] = 1.0 ; for ( t97 = 0ULL ; t97 < 25ULL ; t97 ++ ) {
out -> mM . mX [ t97 + 3ULL ] = t60 [ t97 ] ; } out -> mM . mX [ 28ULL ] =
0.042962400000000005 ; out -> mM . mX [ 29ULL ] = 1.0 ; out -> mM . mX [
30ULL ] = 1.0 ; for ( t97 = 0ULL ; t97 < 25ULL ; t97 ++ ) { out -> mM . mX [
t97 + 31ULL ] = t66 [ t97 ] ; } out -> mM . mX [ 56ULL ] =
0.042962400000000005 ; out -> mM . mX [ 57ULL ] = 1.0 ; out -> mM . mX [
58ULL ] = 1.0 ; for ( t97 = 0ULL ; t97 < 25ULL ; t97 ++ ) { out -> mM . mX [
t97 + 59ULL ] = t72 [ t97 ] ; } ( void ) LC ; ( void ) out ; return 0 ; }
