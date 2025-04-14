#include "ne_ds.h"
#include "Enhanced_BMS_7ded21a_1_ds_sys_struct.h"
#include "Enhanced_BMS_7ded21a_1_ds_tdxf_p.h"
#include "Enhanced_BMS_7ded21a_1_ds.h"
#include "Enhanced_BMS_7ded21a_1_ds_externals.h"
#include "Enhanced_BMS_7ded21a_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Enhanced_BMS_7ded21a_1_ds_tdxf_p ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { static int32_T
_cg_const_2 [ 209 ] = { 0 , 1 , 2 , 7 , 15 , 24 , 25 , 26 , 27 , 25 , 2 , 24
, 26 , 2 , 24 , 26 , 2 , 24 , 26 , 2 , 24 , 26 , 2 , 24 , 26 , 7 , 8 , 9 , 10
, 15 , 23 , 28 , 29 , 30 , 31 , 29 , 10 , 28 , 30 , 10 , 28 , 30 , 10 , 28 ,
30 , 10 , 28 , 30 , 10 , 28 , 30 , 15 , 16 , 17 , 18 , 23 , 32 , 33 , 34 , 35
, 33 , 18 , 32 , 34 , 18 , 32 , 34 , 18 , 32 , 34 , 18 , 32 , 34 , 18 , 32 ,
34 , 0 , 1 , 2 , 24 , 26 , 37 , 40 , 0 , 1 , 2 , 24 , 26 , 36 , 37 , 38 , 0 ,
1 , 2 , 24 , 26 , 39 , 40 , 41 , 8 , 9 , 10 , 24 , 28 , 30 , 36 , 38 , 39 ,
41 , 49 , 52 , 0 , 2 , 24 , 25 , 26 , 27 , 26 , 27 , 7 , 26 , 8 , 9 , 10 , 28
, 30 , 48 , 49 , 50 , 8 , 9 , 10 , 28 , 30 , 51 , 52 , 53 , 16 , 17 , 18 , 28
, 32 , 34 , 43 , 46 , 48 , 50 , 51 , 53 , 8 , 10 , 28 , 29 , 30 , 31 , 30 ,
31 , 15 , 30 , 16 , 17 , 18 , 32 , 34 , 42 , 43 , 44 , 16 , 17 , 18 , 32 , 34
, 45 , 46 , 47 , 16 , 18 , 32 , 33 , 34 , 35 , 34 , 35 , 23 , 34 , 37 , 38 ,
36 , 37 , 40 , 41 , 39 , 40 , 43 , 44 , 42 , 43 , 46 , 47 , 45 , 46 , 49 , 50
, 48 , 49 , 52 , 53 , 51 , 52 } ; static int32_T _cg_const_1 [ 55 ] = { 0 , 9
, 10 , 10 , 13 , 16 , 19 , 22 , 25 , 35 , 36 , 36 , 39 , 42 , 45 , 48 , 51 ,
60 , 61 , 61 , 64 , 67 , 70 , 73 , 76 , 83 , 91 , 99 , 111 , 117 , 119 , 121
, 129 , 137 , 149 , 155 , 157 , 159 , 167 , 175 , 181 , 183 , 185 , 187 , 189
, 191 , 193 , 195 , 197 , 199 , 201 , 203 , 205 , 207 , 209 } ; int32_T i1 ;
( void ) t1 ; ( void ) LC ; out -> mTDXF_P . mNumCol = 54ULL ; out -> mTDXF_P
. mNumRow = 54ULL ; out -> mTDXF_P . mJc [ 0 ] = _cg_const_1 [ 0 ] ; out ->
mTDXF_P . mJc [ 1 ] = _cg_const_1 [ 1 ] ; out -> mTDXF_P . mJc [ 2 ] =
_cg_const_1 [ 2 ] ; out -> mTDXF_P . mJc [ 3 ] = _cg_const_1 [ 3 ] ; out ->
mTDXF_P . mJc [ 4 ] = _cg_const_1 [ 4 ] ; out -> mTDXF_P . mJc [ 5 ] =
_cg_const_1 [ 5 ] ; out -> mTDXF_P . mJc [ 6 ] = _cg_const_1 [ 6 ] ; out ->
mTDXF_P . mJc [ 7 ] = _cg_const_1 [ 7 ] ; out -> mTDXF_P . mJc [ 8 ] =
_cg_const_1 [ 8 ] ; out -> mTDXF_P . mJc [ 9 ] = _cg_const_1 [ 9 ] ; out ->
mTDXF_P . mJc [ 10 ] = _cg_const_1 [ 10 ] ; out -> mTDXF_P . mJc [ 11 ] =
_cg_const_1 [ 11 ] ; out -> mTDXF_P . mJc [ 12 ] = _cg_const_1 [ 12 ] ; out
-> mTDXF_P . mJc [ 13 ] = _cg_const_1 [ 13 ] ; out -> mTDXF_P . mJc [ 14 ] =
_cg_const_1 [ 14 ] ; out -> mTDXF_P . mJc [ 15 ] = _cg_const_1 [ 15 ] ; out
-> mTDXF_P . mJc [ 16 ] = _cg_const_1 [ 16 ] ; out -> mTDXF_P . mJc [ 17 ] =
_cg_const_1 [ 17 ] ; out -> mTDXF_P . mJc [ 18 ] = _cg_const_1 [ 18 ] ; out
-> mTDXF_P . mJc [ 19 ] = _cg_const_1 [ 19 ] ; out -> mTDXF_P . mJc [ 20 ] =
_cg_const_1 [ 20 ] ; out -> mTDXF_P . mJc [ 21 ] = _cg_const_1 [ 21 ] ; out
-> mTDXF_P . mJc [ 22 ] = _cg_const_1 [ 22 ] ; out -> mTDXF_P . mJc [ 23 ] =
_cg_const_1 [ 23 ] ; out -> mTDXF_P . mJc [ 24 ] = _cg_const_1 [ 24 ] ; out
-> mTDXF_P . mJc [ 25 ] = _cg_const_1 [ 25 ] ; out -> mTDXF_P . mJc [ 26 ] =
_cg_const_1 [ 26 ] ; out -> mTDXF_P . mJc [ 27 ] = _cg_const_1 [ 27 ] ; out
-> mTDXF_P . mJc [ 28 ] = _cg_const_1 [ 28 ] ; out -> mTDXF_P . mJc [ 29 ] =
_cg_const_1 [ 29 ] ; out -> mTDXF_P . mJc [ 30 ] = _cg_const_1 [ 30 ] ; out
-> mTDXF_P . mJc [ 31 ] = _cg_const_1 [ 31 ] ; out -> mTDXF_P . mJc [ 32 ] =
_cg_const_1 [ 32 ] ; out -> mTDXF_P . mJc [ 33 ] = _cg_const_1 [ 33 ] ; out
-> mTDXF_P . mJc [ 34 ] = _cg_const_1 [ 34 ] ; out -> mTDXF_P . mJc [ 35 ] =
_cg_const_1 [ 35 ] ; out -> mTDXF_P . mJc [ 36 ] = _cg_const_1 [ 36 ] ; out
-> mTDXF_P . mJc [ 37 ] = _cg_const_1 [ 37 ] ; out -> mTDXF_P . mJc [ 38 ] =
_cg_const_1 [ 38 ] ; out -> mTDXF_P . mJc [ 39 ] = _cg_const_1 [ 39 ] ; out
-> mTDXF_P . mJc [ 40 ] = _cg_const_1 [ 40 ] ; out -> mTDXF_P . mJc [ 41 ] =
_cg_const_1 [ 41 ] ; out -> mTDXF_P . mJc [ 42 ] = _cg_const_1 [ 42 ] ; out
-> mTDXF_P . mJc [ 43 ] = _cg_const_1 [ 43 ] ; out -> mTDXF_P . mJc [ 44 ] =
_cg_const_1 [ 44 ] ; out -> mTDXF_P . mJc [ 45 ] = _cg_const_1 [ 45 ] ; out
-> mTDXF_P . mJc [ 46 ] = _cg_const_1 [ 46 ] ; out -> mTDXF_P . mJc [ 47 ] =
_cg_const_1 [ 47 ] ; out -> mTDXF_P . mJc [ 48 ] = _cg_const_1 [ 48 ] ; out
-> mTDXF_P . mJc [ 49 ] = _cg_const_1 [ 49 ] ; out -> mTDXF_P . mJc [ 50 ] =
_cg_const_1 [ 50 ] ; out -> mTDXF_P . mJc [ 51 ] = _cg_const_1 [ 51 ] ; out
-> mTDXF_P . mJc [ 52 ] = _cg_const_1 [ 52 ] ; out -> mTDXF_P . mJc [ 53 ] =
_cg_const_1 [ 53 ] ; out -> mTDXF_P . mJc [ 54 ] = _cg_const_1 [ 54 ] ; for (
i1 = 0 ; i1 < 209 ; i1 ++ ) { out -> mTDXF_P . mIr [ i1 ] = _cg_const_2 [ i1
] ; } ( void ) LC ; ( void ) out ; return 0 ; }
