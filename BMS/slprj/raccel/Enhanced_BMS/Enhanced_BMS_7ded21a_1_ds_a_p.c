#include "ne_ds.h"
#include "Enhanced_BMS_7ded21a_1_ds_sys_struct.h"
#include "Enhanced_BMS_7ded21a_1_ds_a_p.h"
#include "Enhanced_BMS_7ded21a_1_ds.h"
#include "Enhanced_BMS_7ded21a_1_ds_externals.h"
#include "Enhanced_BMS_7ded21a_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Enhanced_BMS_7ded21a_1_ds_a_p ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { static int32_T
_cg_const_2 [ 57 ] = { 7 , 15 , 24 , 24 , 24 , 24 , 24 , 7 , 15 , 23 , 28 ,
28 , 28 , 28 , 28 , 15 , 23 , 32 , 32 , 32 , 32 , 32 , 0 , 2 , 24 , 0 , 2 , 0
, 2 , 8 , 10 , 24 , 28 , 25 , 27 , 7 , 26 , 8 , 10 , 8 , 10 , 16 , 18 , 28 ,
32 , 29 , 31 , 15 , 30 , 16 , 18 , 16 , 18 , 33 , 35 , 23 , 34 } ; static
int32_T _cg_const_1 [ 55 ] = { 0 , 2 , 2 , 2 , 3 , 4 , 5 , 6 , 7 , 10 , 10 ,
10 , 11 , 12 , 13 , 14 , 15 , 17 , 17 , 17 , 18 , 19 , 20 , 21 , 22 , 25 , 27
, 29 , 33 , 34 , 35 , 37 , 39 , 41 , 45 , 46 , 47 , 49 , 51 , 53 , 54 , 55 ,
57 , 57 , 57 , 57 , 57 , 57 , 57 , 57 , 57 , 57 , 57 , 57 , 57 } ; ( void )
t1 ; ( void ) LC ; out -> mA_P . mNumCol = 54ULL ; out -> mA_P . mNumRow =
54ULL ; out -> mA_P . mJc [ 0 ] = _cg_const_1 [ 0 ] ; out -> mA_P . mJc [ 1 ]
= _cg_const_1 [ 1 ] ; out -> mA_P . mJc [ 2 ] = _cg_const_1 [ 2 ] ; out ->
mA_P . mJc [ 3 ] = _cg_const_1 [ 3 ] ; out -> mA_P . mJc [ 4 ] = _cg_const_1
[ 4 ] ; out -> mA_P . mJc [ 5 ] = _cg_const_1 [ 5 ] ; out -> mA_P . mJc [ 6 ]
= _cg_const_1 [ 6 ] ; out -> mA_P . mJc [ 7 ] = _cg_const_1 [ 7 ] ; out ->
mA_P . mJc [ 8 ] = _cg_const_1 [ 8 ] ; out -> mA_P . mJc [ 9 ] = _cg_const_1
[ 9 ] ; out -> mA_P . mJc [ 10 ] = _cg_const_1 [ 10 ] ; out -> mA_P . mJc [
11 ] = _cg_const_1 [ 11 ] ; out -> mA_P . mJc [ 12 ] = _cg_const_1 [ 12 ] ;
out -> mA_P . mJc [ 13 ] = _cg_const_1 [ 13 ] ; out -> mA_P . mJc [ 14 ] =
_cg_const_1 [ 14 ] ; out -> mA_P . mJc [ 15 ] = _cg_const_1 [ 15 ] ; out ->
mA_P . mJc [ 16 ] = _cg_const_1 [ 16 ] ; out -> mA_P . mJc [ 17 ] =
_cg_const_1 [ 17 ] ; out -> mA_P . mJc [ 18 ] = _cg_const_1 [ 18 ] ; out ->
mA_P . mJc [ 19 ] = _cg_const_1 [ 19 ] ; out -> mA_P . mJc [ 20 ] =
_cg_const_1 [ 20 ] ; out -> mA_P . mJc [ 21 ] = _cg_const_1 [ 21 ] ; out ->
mA_P . mJc [ 22 ] = _cg_const_1 [ 22 ] ; out -> mA_P . mJc [ 23 ] =
_cg_const_1 [ 23 ] ; out -> mA_P . mJc [ 24 ] = _cg_const_1 [ 24 ] ; out ->
mA_P . mJc [ 25 ] = _cg_const_1 [ 25 ] ; out -> mA_P . mJc [ 26 ] =
_cg_const_1 [ 26 ] ; out -> mA_P . mJc [ 27 ] = _cg_const_1 [ 27 ] ; out ->
mA_P . mJc [ 28 ] = _cg_const_1 [ 28 ] ; out -> mA_P . mJc [ 29 ] =
_cg_const_1 [ 29 ] ; out -> mA_P . mJc [ 30 ] = _cg_const_1 [ 30 ] ; out ->
mA_P . mJc [ 31 ] = _cg_const_1 [ 31 ] ; out -> mA_P . mJc [ 32 ] =
_cg_const_1 [ 32 ] ; out -> mA_P . mJc [ 33 ] = _cg_const_1 [ 33 ] ; out ->
mA_P . mJc [ 34 ] = _cg_const_1 [ 34 ] ; out -> mA_P . mJc [ 35 ] =
_cg_const_1 [ 35 ] ; out -> mA_P . mJc [ 36 ] = _cg_const_1 [ 36 ] ; out ->
mA_P . mJc [ 37 ] = _cg_const_1 [ 37 ] ; out -> mA_P . mJc [ 38 ] =
_cg_const_1 [ 38 ] ; out -> mA_P . mJc [ 39 ] = _cg_const_1 [ 39 ] ; out ->
mA_P . mJc [ 40 ] = _cg_const_1 [ 40 ] ; out -> mA_P . mJc [ 41 ] =
_cg_const_1 [ 41 ] ; out -> mA_P . mJc [ 42 ] = _cg_const_1 [ 42 ] ; out ->
mA_P . mJc [ 43 ] = _cg_const_1 [ 43 ] ; out -> mA_P . mJc [ 44 ] =
_cg_const_1 [ 44 ] ; out -> mA_P . mJc [ 45 ] = _cg_const_1 [ 45 ] ; out ->
mA_P . mJc [ 46 ] = _cg_const_1 [ 46 ] ; out -> mA_P . mJc [ 47 ] =
_cg_const_1 [ 47 ] ; out -> mA_P . mJc [ 48 ] = _cg_const_1 [ 48 ] ; out ->
mA_P . mJc [ 49 ] = _cg_const_1 [ 49 ] ; out -> mA_P . mJc [ 50 ] =
_cg_const_1 [ 50 ] ; out -> mA_P . mJc [ 51 ] = _cg_const_1 [ 51 ] ; out ->
mA_P . mJc [ 52 ] = _cg_const_1 [ 52 ] ; out -> mA_P . mJc [ 53 ] =
_cg_const_1 [ 53 ] ; out -> mA_P . mJc [ 54 ] = _cg_const_1 [ 54 ] ; out ->
mA_P . mIr [ 0 ] = _cg_const_2 [ 0 ] ; out -> mA_P . mIr [ 1 ] = _cg_const_2
[ 1 ] ; out -> mA_P . mIr [ 2 ] = _cg_const_2 [ 2 ] ; out -> mA_P . mIr [ 3 ]
= _cg_const_2 [ 3 ] ; out -> mA_P . mIr [ 4 ] = _cg_const_2 [ 4 ] ; out ->
mA_P . mIr [ 5 ] = _cg_const_2 [ 5 ] ; out -> mA_P . mIr [ 6 ] = _cg_const_2
[ 6 ] ; out -> mA_P . mIr [ 7 ] = _cg_const_2 [ 7 ] ; out -> mA_P . mIr [ 8 ]
= _cg_const_2 [ 8 ] ; out -> mA_P . mIr [ 9 ] = _cg_const_2 [ 9 ] ; out ->
mA_P . mIr [ 10 ] = _cg_const_2 [ 10 ] ; out -> mA_P . mIr [ 11 ] =
_cg_const_2 [ 11 ] ; out -> mA_P . mIr [ 12 ] = _cg_const_2 [ 12 ] ; out ->
mA_P . mIr [ 13 ] = _cg_const_2 [ 13 ] ; out -> mA_P . mIr [ 14 ] =
_cg_const_2 [ 14 ] ; out -> mA_P . mIr [ 15 ] = _cg_const_2 [ 15 ] ; out ->
mA_P . mIr [ 16 ] = _cg_const_2 [ 16 ] ; out -> mA_P . mIr [ 17 ] =
_cg_const_2 [ 17 ] ; out -> mA_P . mIr [ 18 ] = _cg_const_2 [ 18 ] ; out ->
mA_P . mIr [ 19 ] = _cg_const_2 [ 19 ] ; out -> mA_P . mIr [ 20 ] =
_cg_const_2 [ 20 ] ; out -> mA_P . mIr [ 21 ] = _cg_const_2 [ 21 ] ; out ->
mA_P . mIr [ 22 ] = _cg_const_2 [ 22 ] ; out -> mA_P . mIr [ 23 ] =
_cg_const_2 [ 23 ] ; out -> mA_P . mIr [ 24 ] = _cg_const_2 [ 24 ] ; out ->
mA_P . mIr [ 25 ] = _cg_const_2 [ 25 ] ; out -> mA_P . mIr [ 26 ] =
_cg_const_2 [ 26 ] ; out -> mA_P . mIr [ 27 ] = _cg_const_2 [ 27 ] ; out ->
mA_P . mIr [ 28 ] = _cg_const_2 [ 28 ] ; out -> mA_P . mIr [ 29 ] =
_cg_const_2 [ 29 ] ; out -> mA_P . mIr [ 30 ] = _cg_const_2 [ 30 ] ; out ->
mA_P . mIr [ 31 ] = _cg_const_2 [ 31 ] ; out -> mA_P . mIr [ 32 ] =
_cg_const_2 [ 32 ] ; out -> mA_P . mIr [ 33 ] = _cg_const_2 [ 33 ] ; out ->
mA_P . mIr [ 34 ] = _cg_const_2 [ 34 ] ; out -> mA_P . mIr [ 35 ] =
_cg_const_2 [ 35 ] ; out -> mA_P . mIr [ 36 ] = _cg_const_2 [ 36 ] ; out ->
mA_P . mIr [ 37 ] = _cg_const_2 [ 37 ] ; out -> mA_P . mIr [ 38 ] =
_cg_const_2 [ 38 ] ; out -> mA_P . mIr [ 39 ] = _cg_const_2 [ 39 ] ; out ->
mA_P . mIr [ 40 ] = _cg_const_2 [ 40 ] ; out -> mA_P . mIr [ 41 ] =
_cg_const_2 [ 41 ] ; out -> mA_P . mIr [ 42 ] = _cg_const_2 [ 42 ] ; out ->
mA_P . mIr [ 43 ] = _cg_const_2 [ 43 ] ; out -> mA_P . mIr [ 44 ] =
_cg_const_2 [ 44 ] ; out -> mA_P . mIr [ 45 ] = _cg_const_2 [ 45 ] ; out ->
mA_P . mIr [ 46 ] = _cg_const_2 [ 46 ] ; out -> mA_P . mIr [ 47 ] =
_cg_const_2 [ 47 ] ; out -> mA_P . mIr [ 48 ] = _cg_const_2 [ 48 ] ; out ->
mA_P . mIr [ 49 ] = _cg_const_2 [ 49 ] ; out -> mA_P . mIr [ 50 ] =
_cg_const_2 [ 50 ] ; out -> mA_P . mIr [ 51 ] = _cg_const_2 [ 51 ] ; out ->
mA_P . mIr [ 52 ] = _cg_const_2 [ 52 ] ; out -> mA_P . mIr [ 53 ] =
_cg_const_2 [ 53 ] ; out -> mA_P . mIr [ 54 ] = _cg_const_2 [ 54 ] ; out ->
mA_P . mIr [ 55 ] = _cg_const_2 [ 55 ] ; out -> mA_P . mIr [ 56 ] =
_cg_const_2 [ 56 ] ; ( void ) LC ; ( void ) out ; return 0 ; }
