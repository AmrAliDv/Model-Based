#include "ne_ds.h"
#include "Enhanced_BMS_7ded21a_1_ds_sys_struct.h"
#include "Enhanced_BMS_7ded21a_1_ds_dxm_p.h"
#include "Enhanced_BMS_7ded21a_1_ds.h"
#include "Enhanced_BMS_7ded21a_1_ds_externals.h"
#include "Enhanced_BMS_7ded21a_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Enhanced_BMS_7ded21a_1_ds_dxm_p ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { static int32_T
_cg_const_2 [ 150 ] = { 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 ,
15 , 16 , 17 , 18 , 19 , 20 , 21 , 22 , 23 , 24 , 25 , 26 , 27 , 31 , 32 , 33
, 34 , 35 , 36 , 37 , 38 , 39 , 40 , 41 , 42 , 43 , 44 , 45 , 46 , 47 , 48 ,
49 , 50 , 51 , 52 , 53 , 54 , 55 , 59 , 60 , 61 , 62 , 63 , 64 , 65 , 66 , 67
, 68 , 69 , 70 , 71 , 72 , 73 , 74 , 75 , 76 , 77 , 78 , 79 , 80 , 81 , 82 ,
83 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 17 , 18 ,
19 , 20 , 21 , 22 , 23 , 24 , 25 , 26 , 27 , 31 , 32 , 33 , 34 , 35 , 36 , 37
, 38 , 39 , 40 , 41 , 42 , 43 , 44 , 45 , 46 , 47 , 48 , 49 , 50 , 51 , 52 ,
53 , 54 , 55 , 59 , 60 , 61 , 62 , 63 , 64 , 65 , 66 , 67 , 68 , 69 , 70 , 71
, 72 , 73 , 74 , 75 , 76 , 77 , 78 , 79 , 80 , 81 , 82 , 83 } ; static
int32_T _cg_const_1 [ 55 ] = { 0 , 25 , 25 , 25 , 25 , 25 , 25 , 25 , 25 , 50
, 50 , 50 , 50 , 50 , 50 , 50 , 50 , 75 , 75 , 75 , 75 , 75 , 75 , 75 , 75 ,
75 , 75 , 75 , 75 , 100 , 100 , 100 , 100 , 100 , 100 , 125 , 125 , 125 , 125
, 125 , 150 , 150 , 150 , 150 , 150 , 150 , 150 , 150 , 150 , 150 , 150 , 150
, 150 , 150 , 150 } ; int32_T i1 ; ( void ) t1 ; ( void ) LC ; out -> mDXM_P
. mNumCol = 54ULL ; out -> mDXM_P . mNumRow = 84ULL ; out -> mDXM_P . mJc [ 0
] = _cg_const_1 [ 0 ] ; out -> mDXM_P . mJc [ 1 ] = _cg_const_1 [ 1 ] ; out
-> mDXM_P . mJc [ 2 ] = _cg_const_1 [ 2 ] ; out -> mDXM_P . mJc [ 3 ] =
_cg_const_1 [ 3 ] ; out -> mDXM_P . mJc [ 4 ] = _cg_const_1 [ 4 ] ; out ->
mDXM_P . mJc [ 5 ] = _cg_const_1 [ 5 ] ; out -> mDXM_P . mJc [ 6 ] =
_cg_const_1 [ 6 ] ; out -> mDXM_P . mJc [ 7 ] = _cg_const_1 [ 7 ] ; out ->
mDXM_P . mJc [ 8 ] = _cg_const_1 [ 8 ] ; out -> mDXM_P . mJc [ 9 ] =
_cg_const_1 [ 9 ] ; out -> mDXM_P . mJc [ 10 ] = _cg_const_1 [ 10 ] ; out ->
mDXM_P . mJc [ 11 ] = _cg_const_1 [ 11 ] ; out -> mDXM_P . mJc [ 12 ] =
_cg_const_1 [ 12 ] ; out -> mDXM_P . mJc [ 13 ] = _cg_const_1 [ 13 ] ; out ->
mDXM_P . mJc [ 14 ] = _cg_const_1 [ 14 ] ; out -> mDXM_P . mJc [ 15 ] =
_cg_const_1 [ 15 ] ; out -> mDXM_P . mJc [ 16 ] = _cg_const_1 [ 16 ] ; out ->
mDXM_P . mJc [ 17 ] = _cg_const_1 [ 17 ] ; out -> mDXM_P . mJc [ 18 ] =
_cg_const_1 [ 18 ] ; out -> mDXM_P . mJc [ 19 ] = _cg_const_1 [ 19 ] ; out ->
mDXM_P . mJc [ 20 ] = _cg_const_1 [ 20 ] ; out -> mDXM_P . mJc [ 21 ] =
_cg_const_1 [ 21 ] ; out -> mDXM_P . mJc [ 22 ] = _cg_const_1 [ 22 ] ; out ->
mDXM_P . mJc [ 23 ] = _cg_const_1 [ 23 ] ; out -> mDXM_P . mJc [ 24 ] =
_cg_const_1 [ 24 ] ; out -> mDXM_P . mJc [ 25 ] = _cg_const_1 [ 25 ] ; out ->
mDXM_P . mJc [ 26 ] = _cg_const_1 [ 26 ] ; out -> mDXM_P . mJc [ 27 ] =
_cg_const_1 [ 27 ] ; out -> mDXM_P . mJc [ 28 ] = _cg_const_1 [ 28 ] ; out ->
mDXM_P . mJc [ 29 ] = _cg_const_1 [ 29 ] ; out -> mDXM_P . mJc [ 30 ] =
_cg_const_1 [ 30 ] ; out -> mDXM_P . mJc [ 31 ] = _cg_const_1 [ 31 ] ; out ->
mDXM_P . mJc [ 32 ] = _cg_const_1 [ 32 ] ; out -> mDXM_P . mJc [ 33 ] =
_cg_const_1 [ 33 ] ; out -> mDXM_P . mJc [ 34 ] = _cg_const_1 [ 34 ] ; out ->
mDXM_P . mJc [ 35 ] = _cg_const_1 [ 35 ] ; out -> mDXM_P . mJc [ 36 ] =
_cg_const_1 [ 36 ] ; out -> mDXM_P . mJc [ 37 ] = _cg_const_1 [ 37 ] ; out ->
mDXM_P . mJc [ 38 ] = _cg_const_1 [ 38 ] ; out -> mDXM_P . mJc [ 39 ] =
_cg_const_1 [ 39 ] ; out -> mDXM_P . mJc [ 40 ] = _cg_const_1 [ 40 ] ; out ->
mDXM_P . mJc [ 41 ] = _cg_const_1 [ 41 ] ; out -> mDXM_P . mJc [ 42 ] =
_cg_const_1 [ 42 ] ; out -> mDXM_P . mJc [ 43 ] = _cg_const_1 [ 43 ] ; out ->
mDXM_P . mJc [ 44 ] = _cg_const_1 [ 44 ] ; out -> mDXM_P . mJc [ 45 ] =
_cg_const_1 [ 45 ] ; out -> mDXM_P . mJc [ 46 ] = _cg_const_1 [ 46 ] ; out ->
mDXM_P . mJc [ 47 ] = _cg_const_1 [ 47 ] ; out -> mDXM_P . mJc [ 48 ] =
_cg_const_1 [ 48 ] ; out -> mDXM_P . mJc [ 49 ] = _cg_const_1 [ 49 ] ; out ->
mDXM_P . mJc [ 50 ] = _cg_const_1 [ 50 ] ; out -> mDXM_P . mJc [ 51 ] =
_cg_const_1 [ 51 ] ; out -> mDXM_P . mJc [ 52 ] = _cg_const_1 [ 52 ] ; out ->
mDXM_P . mJc [ 53 ] = _cg_const_1 [ 53 ] ; out -> mDXM_P . mJc [ 54 ] =
_cg_const_1 [ 54 ] ; for ( i1 = 0 ; i1 < 150 ; i1 ++ ) { out -> mDXM_P . mIr
[ i1 ] = _cg_const_2 [ i1 ] ; } ( void ) LC ; ( void ) out ; return 0 ; }
