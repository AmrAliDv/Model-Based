#include "ne_ds.h"
#include "Enhanced_BMS_7ded21a_1_ds_sys_struct.h"
#include "Enhanced_BMS_7ded21a_1_ds_duf.h"
#include "Enhanced_BMS_7ded21a_1_ds.h"
#include "Enhanced_BMS_7ded21a_1_ds_externals.h"
#include "Enhanced_BMS_7ded21a_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Enhanced_BMS_7ded21a_1_ds_duf ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t49 , NeDsMethodOutput * out ) { static real_T
_cg_const_1 [ 3 ] = { 278.15 , 293.15 , 313.15 } ; ETTSf3049b48 t3 ;
ETTSf3049b48 t4 ; real_T nonscalar2 [ 3 ] ; real_T nonscalar4 [ 3 ] ; real_T
t43 [ 1 ] ; real_T t45 [ 1 ] ; real_T
Battery_Battery_Table_Based1_electricalModel_i ; real_T
Battery_Battery_Table_Based2_electricalModel_i ; real_T t48 ; real_T zc_int1
; real_T zc_int11 ; real_T zc_int13 ; real_T zc_int4 ; real_T zc_int7 ;
real_T zc_int9 ; size_t t10 [ 1 ] ; size_t t7 [ 1 ] ; size_t t8 [ 1 ] ;
nonscalar2 [ 0 ] = _cg_const_1 [ 0 ] ; nonscalar2 [ 1 ] = _cg_const_1 [ 1 ] ;
nonscalar2 [ 2 ] = _cg_const_1 [ 2 ] ; nonscalar4 [ 0 ] = 14400.0 ;
nonscalar4 [ 1 ] = 14400.0 ; nonscalar4 [ 2 ] = 14400.0 ; t48 = ( ( t49 -> mX
. mX [ 24ULL ] * - 0.1 + t49 -> mX . mX [ 25ULL ] * 0.05 ) + t49 -> mX . mX [
26ULL ] * 0.05 ) + t49 -> mU . mX [ 6ULL ] ; t45 [ 0ULL ] = t49 -> mX . mX [
28ULL ] ; t7 [ 0 ] = 11ULL ; t8 [ 0 ] = 1ULL ; tlu2_linear_linear_prelookup (
& t4 . mField0 [ 0ULL ] , & t4 . mField1 [ 0ULL ] , & t4 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t45 [ 0ULL ] , & t7 [ 0ULL ]
, & t8 [ 0ULL ] ) ; t45 [ 0ULL ] = t49 -> mX . mX [ 0ULL ] ; t10 [ 0 ] = 3ULL
; tlu2_linear_linear_prelookup ( & t3 . mField0 [ 0ULL ] , & t3 . mField1 [
0ULL ] , & t3 . mField2 [ 0ULL ] , & nonscalar2 [ 0ULL ] , & t45 [ 0ULL ] , &
t10 [ 0ULL ] , & t8 [ 0ULL ] ) ; tlu2_2d_linear_linear_value ( & t43 [ 0ULL ]
, & t4 . mField0 [ 0ULL ] , & t4 . mField2 [ 0ULL ] , & t3 . mField0 [ 0ULL ]
, & t3 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , &
t7 [ 0ULL ] , & t10 [ 0ULL ] , & t8 [ 0ULL ] ) ; zc_int11 = t43 [ 0ULL ] ;
tlu2_1d_linear_linear_value ( & t43 [ 0ULL ] , & t3 . mField0 [ 0ULL ] , & t3
. mField2 [ 0ULL ] , & nonscalar4 [ 0ULL ] , & t10 [ 0ULL ] , & t8 [ 0ULL ] )
; zc_int9 = t43 [ 0ULL ] ; Battery_Battery_Table_Based1_electricalModel_i = (
( t49 -> mX . mX [ 27ULL ] * - 0.1 + t49 -> mX . mX [ 31ULL ] * 0.05 ) + t49
-> mX . mX [ 32ULL ] * 0.05 ) + t49 -> mU . mX [ 6ULL ] ; t45 [ 0ULL ] = t49
-> mX . mX [ 34ULL ] ; tlu2_linear_linear_prelookup ( & t4 . mField0 [ 0ULL ]
, & t4 . mField1 [ 0ULL ] , & t4 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField1 , & t45 [ 0ULL ] , & t7 [ 0ULL ] , & t8 [ 0ULL ] ) ;
t45 [ 0ULL ] = t49 -> mX . mX [ 8ULL ] ; tlu2_linear_linear_prelookup ( & t3
. mField0 [ 0ULL ] , & t3 . mField1 [ 0ULL ] , & t3 . mField2 [ 0ULL ] , &
nonscalar2 [ 0ULL ] , & t45 [ 0ULL ] , & t10 [ 0ULL ] , & t8 [ 0ULL ] ) ;
tlu2_2d_linear_linear_value ( & t43 [ 0ULL ] , & t4 . mField0 [ 0ULL ] , & t4
. mField2 [ 0ULL ] , & t3 . mField0 [ 0ULL ] , & t3 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField4 , & t7 [ 0ULL ] , & t10 [ 0ULL ] , &
t8 [ 0ULL ] ) ; zc_int13 = t43 [ 0ULL ] ; tlu2_1d_linear_linear_value ( & t43
[ 0ULL ] , & t3 . mField0 [ 0ULL ] , & t3 . mField2 [ 0ULL ] , & nonscalar4 [
0ULL ] , & t10 [ 0ULL ] , & t8 [ 0ULL ] ) ;
Battery_Battery_Table_Based2_electricalModel_i = ( ( t49 -> mX . mX [ 33ULL ]
* - 0.1 + t49 -> mX . mX [ 37ULL ] * 0.05 ) + t49 -> mX . mX [ 38ULL ] * 0.05
) + t49 -> mU . mX [ 6ULL ] ; t45 [ 0ULL ] = t49 -> mX . mX [ 39ULL ] ;
tlu2_linear_linear_prelookup ( & t4 . mField0 [ 0ULL ] , & t4 . mField1 [
0ULL ] , & t4 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField1 , & t45 [ 0ULL ] , & t7 [ 0ULL ] , & t8 [ 0ULL ] ) ; t45 [ 0ULL ] =
t49 -> mX . mX [ 16ULL ] ; tlu2_linear_linear_prelookup ( & t3 . mField0 [
0ULL ] , & t3 . mField1 [ 0ULL ] , & t3 . mField2 [ 0ULL ] , & nonscalar2 [
0ULL ] , & t45 [ 0ULL ] , & t10 [ 0ULL ] , & t8 [ 0ULL ] ) ;
tlu2_2d_linear_linear_value ( & t45 [ 0ULL ] , & t4 . mField0 [ 0ULL ] , & t4
. mField2 [ 0ULL ] , & t3 . mField0 [ 0ULL ] , & t3 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField6 , & t7 [ 0ULL ] , & t10 [ 0ULL ] , &
t8 [ 0ULL ] ) ; zc_int4 = t45 [ 0ULL ] ; tlu2_1d_linear_linear_value ( & t45
[ 0ULL ] , & t3 . mField0 [ 0ULL ] , & t3 . mField2 [ 0ULL ] , & nonscalar4 [
0ULL ] , & t10 [ 0ULL ] , & t8 [ 0ULL ] ) ; if ( t49 -> mM . mX [ 1ULL ] != 0
) { zc_int1 = 0.14400000000000002 ; } else { zc_int1 = zc_int9 ; } if ( t49
-> mM . mX [ 41ULL ] != 0 ) { zc_int9 = 8.200000000000002E-8 ; } else {
zc_int9 = zc_int11 ; } if ( t49 -> mM . mX [ 2ULL ] != 0 ) { zc_int11 =
8.200000000000002E-8 ; } else { zc_int11 = zc_int13 ; } if ( t49 -> mM . mX [
3ULL ] != 0 ) { zc_int13 = 8.200000000000002E-8 ; } else { zc_int13 = zc_int4
; } if ( t49 -> mM . mX [ 34ULL ] != 0 ) { zc_int4 = 0.14400000000000002 ; }
else { zc_int4 = t43 [ 0ULL ] ; } if ( t49 -> mM . mX [ 39ULL ] != 0 ) {
zc_int7 = 0.14400000000000002 ; } else { zc_int7 = t45 [ 0ULL ] ; } out ->
mDUF . mX [ 0ULL ] = - ( real_T ) ( t48 < 0.0 ) / ( zc_int1 == 0.0 ? 1.0E-16
: zc_int1 ) ; out -> mDUF . mX [ 1ULL ] = - ( real_T ) (
Battery_Battery_Table_Based1_electricalModel_i < 0.0 ) / ( zc_int4 == 0.0 ?
1.0E-16 : zc_int4 ) ; out -> mDUF . mX [ 2ULL ] = - ( real_T ) (
Battery_Battery_Table_Based2_electricalModel_i < 0.0 ) / ( zc_int7 == 0.0 ?
1.0E-16 : zc_int7 ) ; out -> mDUF . mX [ 3ULL ] = - zc_int9 ; out -> mDUF .
mX [ 4ULL ] = - ( t48 * zc_int9 * 0.002 ) ; out -> mDUF . mX [ 5ULL ] = -
zc_int11 / 9.3387366666665912 ; out -> mDUF . mX [ 6ULL ] = - (
Battery_Battery_Table_Based1_electricalModel_i * zc_int11 * 0.002 ) ; out ->
mDUF . mX [ 7ULL ] = - zc_int13 / 1.2854033333333064 ; out -> mDUF . mX [
8ULL ] = - ( Battery_Battery_Table_Based2_electricalModel_i * zc_int13 *
0.002 ) ; ( void ) LC ; ( void ) out ; return 0 ; }
