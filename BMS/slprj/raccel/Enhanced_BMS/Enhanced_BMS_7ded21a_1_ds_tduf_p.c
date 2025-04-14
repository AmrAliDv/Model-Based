#include "ne_ds.h"
#include "Enhanced_BMS_7ded21a_1_ds_sys_struct.h"
#include "Enhanced_BMS_7ded21a_1_ds_tduf_p.h"
#include "Enhanced_BMS_7ded21a_1_ds.h"
#include "Enhanced_BMS_7ded21a_1_ds_externals.h"
#include "Enhanced_BMS_7ded21a_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Enhanced_BMS_7ded21a_1_ds_tduf_p ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { static int32_T
_cg_const_2 [ 21 ] = { 41 , 50 , 53 , 44 , 47 , 38 , 0 , 1 , 2 , 8 , 9 , 10 ,
16 , 17 , 18 , 24 , 26 , 28 , 30 , 32 , 34 } ; static int32_T _cg_const_1 [ 8
] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 21 } ; ( void ) t1 ; ( void ) LC ; out ->
mTDUF_P . mNumCol = 7ULL ; out -> mTDUF_P . mNumRow = 54ULL ; out -> mTDUF_P
. mJc [ 0 ] = _cg_const_1 [ 0 ] ; out -> mTDUF_P . mJc [ 1 ] = _cg_const_1 [
1 ] ; out -> mTDUF_P . mJc [ 2 ] = _cg_const_1 [ 2 ] ; out -> mTDUF_P . mJc [
3 ] = _cg_const_1 [ 3 ] ; out -> mTDUF_P . mJc [ 4 ] = _cg_const_1 [ 4 ] ;
out -> mTDUF_P . mJc [ 5 ] = _cg_const_1 [ 5 ] ; out -> mTDUF_P . mJc [ 6 ] =
_cg_const_1 [ 6 ] ; out -> mTDUF_P . mJc [ 7 ] = _cg_const_1 [ 7 ] ; out ->
mTDUF_P . mIr [ 0 ] = _cg_const_2 [ 0 ] ; out -> mTDUF_P . mIr [ 1 ] =
_cg_const_2 [ 1 ] ; out -> mTDUF_P . mIr [ 2 ] = _cg_const_2 [ 2 ] ; out ->
mTDUF_P . mIr [ 3 ] = _cg_const_2 [ 3 ] ; out -> mTDUF_P . mIr [ 4 ] =
_cg_const_2 [ 4 ] ; out -> mTDUF_P . mIr [ 5 ] = _cg_const_2 [ 5 ] ; out ->
mTDUF_P . mIr [ 6 ] = _cg_const_2 [ 6 ] ; out -> mTDUF_P . mIr [ 7 ] =
_cg_const_2 [ 7 ] ; out -> mTDUF_P . mIr [ 8 ] = _cg_const_2 [ 8 ] ; out ->
mTDUF_P . mIr [ 9 ] = _cg_const_2 [ 9 ] ; out -> mTDUF_P . mIr [ 10 ] =
_cg_const_2 [ 10 ] ; out -> mTDUF_P . mIr [ 11 ] = _cg_const_2 [ 11 ] ; out
-> mTDUF_P . mIr [ 12 ] = _cg_const_2 [ 12 ] ; out -> mTDUF_P . mIr [ 13 ] =
_cg_const_2 [ 13 ] ; out -> mTDUF_P . mIr [ 14 ] = _cg_const_2 [ 14 ] ; out
-> mTDUF_P . mIr [ 15 ] = _cg_const_2 [ 15 ] ; out -> mTDUF_P . mIr [ 16 ] =
_cg_const_2 [ 16 ] ; out -> mTDUF_P . mIr [ 17 ] = _cg_const_2 [ 17 ] ; out
-> mTDUF_P . mIr [ 18 ] = _cg_const_2 [ 18 ] ; out -> mTDUF_P . mIr [ 19 ] =
_cg_const_2 [ 19 ] ; out -> mTDUF_P . mIr [ 20 ] = _cg_const_2 [ 20 ] ; (
void ) LC ; ( void ) out ; return 0 ; }
