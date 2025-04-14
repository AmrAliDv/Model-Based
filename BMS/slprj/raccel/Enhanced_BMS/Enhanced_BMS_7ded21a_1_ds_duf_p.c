#include "ne_ds.h"
#include "Enhanced_BMS_7ded21a_1_ds_sys_struct.h"
#include "Enhanced_BMS_7ded21a_1_ds_duf_p.h"
#include "Enhanced_BMS_7ded21a_1_ds.h"
#include "Enhanced_BMS_7ded21a_1_ds_externals.h"
#include "Enhanced_BMS_7ded21a_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Enhanced_BMS_7ded21a_1_ds_duf_p ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { static int32_T
_cg_const_2 [ 9 ] = { 1 , 9 , 17 , 24 , 26 , 28 , 30 , 32 , 34 } ; static
int32_T _cg_const_1 [ 8 ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 9 } ; ( void ) t1 ;
( void ) LC ; out -> mDUF_P . mNumCol = 7ULL ; out -> mDUF_P . mNumRow =
54ULL ; out -> mDUF_P . mJc [ 0 ] = _cg_const_1 [ 0 ] ; out -> mDUF_P . mJc [
1 ] = _cg_const_1 [ 1 ] ; out -> mDUF_P . mJc [ 2 ] = _cg_const_1 [ 2 ] ; out
-> mDUF_P . mJc [ 3 ] = _cg_const_1 [ 3 ] ; out -> mDUF_P . mJc [ 4 ] =
_cg_const_1 [ 4 ] ; out -> mDUF_P . mJc [ 5 ] = _cg_const_1 [ 5 ] ; out ->
mDUF_P . mJc [ 6 ] = _cg_const_1 [ 6 ] ; out -> mDUF_P . mJc [ 7 ] =
_cg_const_1 [ 7 ] ; out -> mDUF_P . mIr [ 0 ] = _cg_const_2 [ 0 ] ; out ->
mDUF_P . mIr [ 1 ] = _cg_const_2 [ 1 ] ; out -> mDUF_P . mIr [ 2 ] =
_cg_const_2 [ 2 ] ; out -> mDUF_P . mIr [ 3 ] = _cg_const_2 [ 3 ] ; out ->
mDUF_P . mIr [ 4 ] = _cg_const_2 [ 4 ] ; out -> mDUF_P . mIr [ 5 ] =
_cg_const_2 [ 5 ] ; out -> mDUF_P . mIr [ 6 ] = _cg_const_2 [ 6 ] ; out ->
mDUF_P . mIr [ 7 ] = _cg_const_2 [ 7 ] ; out -> mDUF_P . mIr [ 8 ] =
_cg_const_2 [ 8 ] ; ( void ) LC ; ( void ) out ; return 0 ; }
