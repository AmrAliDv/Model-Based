#include "ne_ds.h"
#include "Enhanced_BMS_7ded21a_1_ds_sys_struct.h"
#include "Enhanced_BMS_7ded21a_1_ds_m_p.h"
#include "Enhanced_BMS_7ded21a_1_ds.h"
#include "Enhanced_BMS_7ded21a_1_ds_externals.h"
#include "Enhanced_BMS_7ded21a_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Enhanced_BMS_7ded21a_1_ds_m_p ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { static int32_T
_cg_const_2 [ 84 ] = { 7 , 0 , 1 , 2 , 3 , 4 , 5 , 6 , 2 , 3 , 4 , 5 , 6 , 2
, 3 , 4 , 5 , 6 , 2 , 3 , 4 , 5 , 6 , 2 , 3 , 4 , 5 , 6 , 15 , 8 , 9 , 10 ,
11 , 12 , 13 , 14 , 10 , 11 , 12 , 13 , 14 , 10 , 11 , 12 , 13 , 14 , 10 , 11
, 12 , 13 , 14 , 10 , 11 , 12 , 13 , 14 , 23 , 16 , 17 , 18 , 19 , 20 , 21 ,
22 , 18 , 19 , 20 , 21 , 22 , 18 , 19 , 20 , 21 , 22 , 18 , 19 , 20 , 21 , 22
, 18 , 19 , 20 , 21 , 22 } ; static int32_T _cg_const_1 [ 55 ] = { 0 , 1 , 2
, 3 , 8 , 13 , 18 , 23 , 28 , 29 , 30 , 31 , 36 , 41 , 46 , 51 , 56 , 57 , 58
, 59 , 64 , 69 , 74 , 79 , 84 , 84 , 84 , 84 , 84 , 84 , 84 , 84 , 84 , 84 ,
84 , 84 , 84 , 84 , 84 , 84 , 84 , 84 , 84 , 84 , 84 , 84 , 84 , 84 , 84 , 84
, 84 , 84 , 84 , 84 , 84 } ; ( void ) t1 ; ( void ) LC ; out -> mM_P .
mNumCol = 54ULL ; out -> mM_P . mNumRow = 54ULL ; out -> mM_P . mJc [ 0 ] =
_cg_const_1 [ 0 ] ; out -> mM_P . mJc [ 1 ] = _cg_const_1 [ 1 ] ; out -> mM_P
. mJc [ 2 ] = _cg_const_1 [ 2 ] ; out -> mM_P . mJc [ 3 ] = _cg_const_1 [ 3 ]
; out -> mM_P . mJc [ 4 ] = _cg_const_1 [ 4 ] ; out -> mM_P . mJc [ 5 ] =
_cg_const_1 [ 5 ] ; out -> mM_P . mJc [ 6 ] = _cg_const_1 [ 6 ] ; out -> mM_P
. mJc [ 7 ] = _cg_const_1 [ 7 ] ; out -> mM_P . mJc [ 8 ] = _cg_const_1 [ 8 ]
; out -> mM_P . mJc [ 9 ] = _cg_const_1 [ 9 ] ; out -> mM_P . mJc [ 10 ] =
_cg_const_1 [ 10 ] ; out -> mM_P . mJc [ 11 ] = _cg_const_1 [ 11 ] ; out ->
mM_P . mJc [ 12 ] = _cg_const_1 [ 12 ] ; out -> mM_P . mJc [ 13 ] =
_cg_const_1 [ 13 ] ; out -> mM_P . mJc [ 14 ] = _cg_const_1 [ 14 ] ; out ->
mM_P . mJc [ 15 ] = _cg_const_1 [ 15 ] ; out -> mM_P . mJc [ 16 ] =
_cg_const_1 [ 16 ] ; out -> mM_P . mJc [ 17 ] = _cg_const_1 [ 17 ] ; out ->
mM_P . mJc [ 18 ] = _cg_const_1 [ 18 ] ; out -> mM_P . mJc [ 19 ] =
_cg_const_1 [ 19 ] ; out -> mM_P . mJc [ 20 ] = _cg_const_1 [ 20 ] ; out ->
mM_P . mJc [ 21 ] = _cg_const_1 [ 21 ] ; out -> mM_P . mJc [ 22 ] =
_cg_const_1 [ 22 ] ; out -> mM_P . mJc [ 23 ] = _cg_const_1 [ 23 ] ; out ->
mM_P . mJc [ 24 ] = _cg_const_1 [ 24 ] ; out -> mM_P . mJc [ 25 ] =
_cg_const_1 [ 25 ] ; out -> mM_P . mJc [ 26 ] = _cg_const_1 [ 26 ] ; out ->
mM_P . mJc [ 27 ] = _cg_const_1 [ 27 ] ; out -> mM_P . mJc [ 28 ] =
_cg_const_1 [ 28 ] ; out -> mM_P . mJc [ 29 ] = _cg_const_1 [ 29 ] ; out ->
mM_P . mJc [ 30 ] = _cg_const_1 [ 30 ] ; out -> mM_P . mJc [ 31 ] =
_cg_const_1 [ 31 ] ; out -> mM_P . mJc [ 32 ] = _cg_const_1 [ 32 ] ; out ->
mM_P . mJc [ 33 ] = _cg_const_1 [ 33 ] ; out -> mM_P . mJc [ 34 ] =
_cg_const_1 [ 34 ] ; out -> mM_P . mJc [ 35 ] = _cg_const_1 [ 35 ] ; out ->
mM_P . mJc [ 36 ] = _cg_const_1 [ 36 ] ; out -> mM_P . mJc [ 37 ] =
_cg_const_1 [ 37 ] ; out -> mM_P . mJc [ 38 ] = _cg_const_1 [ 38 ] ; out ->
mM_P . mJc [ 39 ] = _cg_const_1 [ 39 ] ; out -> mM_P . mJc [ 40 ] =
_cg_const_1 [ 40 ] ; out -> mM_P . mJc [ 41 ] = _cg_const_1 [ 41 ] ; out ->
mM_P . mJc [ 42 ] = _cg_const_1 [ 42 ] ; out -> mM_P . mJc [ 43 ] =
_cg_const_1 [ 43 ] ; out -> mM_P . mJc [ 44 ] = _cg_const_1 [ 44 ] ; out ->
mM_P . mJc [ 45 ] = _cg_const_1 [ 45 ] ; out -> mM_P . mJc [ 46 ] =
_cg_const_1 [ 46 ] ; out -> mM_P . mJc [ 47 ] = _cg_const_1 [ 47 ] ; out ->
mM_P . mJc [ 48 ] = _cg_const_1 [ 48 ] ; out -> mM_P . mJc [ 49 ] =
_cg_const_1 [ 49 ] ; out -> mM_P . mJc [ 50 ] = _cg_const_1 [ 50 ] ; out ->
mM_P . mJc [ 51 ] = _cg_const_1 [ 51 ] ; out -> mM_P . mJc [ 52 ] =
_cg_const_1 [ 52 ] ; out -> mM_P . mJc [ 53 ] = _cg_const_1 [ 53 ] ; out ->
mM_P . mJc [ 54 ] = _cg_const_1 [ 54 ] ; out -> mM_P . mIr [ 0 ] =
_cg_const_2 [ 0 ] ; out -> mM_P . mIr [ 1 ] = _cg_const_2 [ 1 ] ; out -> mM_P
. mIr [ 2 ] = _cg_const_2 [ 2 ] ; out -> mM_P . mIr [ 3 ] = _cg_const_2 [ 3 ]
; out -> mM_P . mIr [ 4 ] = _cg_const_2 [ 4 ] ; out -> mM_P . mIr [ 5 ] =
_cg_const_2 [ 5 ] ; out -> mM_P . mIr [ 6 ] = _cg_const_2 [ 6 ] ; out -> mM_P
. mIr [ 7 ] = _cg_const_2 [ 7 ] ; out -> mM_P . mIr [ 8 ] = _cg_const_2 [ 8 ]
; out -> mM_P . mIr [ 9 ] = _cg_const_2 [ 9 ] ; out -> mM_P . mIr [ 10 ] =
_cg_const_2 [ 10 ] ; out -> mM_P . mIr [ 11 ] = _cg_const_2 [ 11 ] ; out ->
mM_P . mIr [ 12 ] = _cg_const_2 [ 12 ] ; out -> mM_P . mIr [ 13 ] =
_cg_const_2 [ 13 ] ; out -> mM_P . mIr [ 14 ] = _cg_const_2 [ 14 ] ; out ->
mM_P . mIr [ 15 ] = _cg_const_2 [ 15 ] ; out -> mM_P . mIr [ 16 ] =
_cg_const_2 [ 16 ] ; out -> mM_P . mIr [ 17 ] = _cg_const_2 [ 17 ] ; out ->
mM_P . mIr [ 18 ] = _cg_const_2 [ 18 ] ; out -> mM_P . mIr [ 19 ] =
_cg_const_2 [ 19 ] ; out -> mM_P . mIr [ 20 ] = _cg_const_2 [ 20 ] ; out ->
mM_P . mIr [ 21 ] = _cg_const_2 [ 21 ] ; out -> mM_P . mIr [ 22 ] =
_cg_const_2 [ 22 ] ; out -> mM_P . mIr [ 23 ] = _cg_const_2 [ 23 ] ; out ->
mM_P . mIr [ 24 ] = _cg_const_2 [ 24 ] ; out -> mM_P . mIr [ 25 ] =
_cg_const_2 [ 25 ] ; out -> mM_P . mIr [ 26 ] = _cg_const_2 [ 26 ] ; out ->
mM_P . mIr [ 27 ] = _cg_const_2 [ 27 ] ; out -> mM_P . mIr [ 28 ] =
_cg_const_2 [ 28 ] ; out -> mM_P . mIr [ 29 ] = _cg_const_2 [ 29 ] ; out ->
mM_P . mIr [ 30 ] = _cg_const_2 [ 30 ] ; out -> mM_P . mIr [ 31 ] =
_cg_const_2 [ 31 ] ; out -> mM_P . mIr [ 32 ] = _cg_const_2 [ 32 ] ; out ->
mM_P . mIr [ 33 ] = _cg_const_2 [ 33 ] ; out -> mM_P . mIr [ 34 ] =
_cg_const_2 [ 34 ] ; out -> mM_P . mIr [ 35 ] = _cg_const_2 [ 35 ] ; out ->
mM_P . mIr [ 36 ] = _cg_const_2 [ 36 ] ; out -> mM_P . mIr [ 37 ] =
_cg_const_2 [ 37 ] ; out -> mM_P . mIr [ 38 ] = _cg_const_2 [ 38 ] ; out ->
mM_P . mIr [ 39 ] = _cg_const_2 [ 39 ] ; out -> mM_P . mIr [ 40 ] =
_cg_const_2 [ 40 ] ; out -> mM_P . mIr [ 41 ] = _cg_const_2 [ 41 ] ; out ->
mM_P . mIr [ 42 ] = _cg_const_2 [ 42 ] ; out -> mM_P . mIr [ 43 ] =
_cg_const_2 [ 43 ] ; out -> mM_P . mIr [ 44 ] = _cg_const_2 [ 44 ] ; out ->
mM_P . mIr [ 45 ] = _cg_const_2 [ 45 ] ; out -> mM_P . mIr [ 46 ] =
_cg_const_2 [ 46 ] ; out -> mM_P . mIr [ 47 ] = _cg_const_2 [ 47 ] ; out ->
mM_P . mIr [ 48 ] = _cg_const_2 [ 48 ] ; out -> mM_P . mIr [ 49 ] =
_cg_const_2 [ 49 ] ; out -> mM_P . mIr [ 50 ] = _cg_const_2 [ 50 ] ; out ->
mM_P . mIr [ 51 ] = _cg_const_2 [ 51 ] ; out -> mM_P . mIr [ 52 ] =
_cg_const_2 [ 52 ] ; out -> mM_P . mIr [ 53 ] = _cg_const_2 [ 53 ] ; out ->
mM_P . mIr [ 54 ] = _cg_const_2 [ 54 ] ; out -> mM_P . mIr [ 55 ] =
_cg_const_2 [ 55 ] ; out -> mM_P . mIr [ 56 ] = _cg_const_2 [ 56 ] ; out ->
mM_P . mIr [ 57 ] = _cg_const_2 [ 57 ] ; out -> mM_P . mIr [ 58 ] =
_cg_const_2 [ 58 ] ; out -> mM_P . mIr [ 59 ] = _cg_const_2 [ 59 ] ; out ->
mM_P . mIr [ 60 ] = _cg_const_2 [ 60 ] ; out -> mM_P . mIr [ 61 ] =
_cg_const_2 [ 61 ] ; out -> mM_P . mIr [ 62 ] = _cg_const_2 [ 62 ] ; out ->
mM_P . mIr [ 63 ] = _cg_const_2 [ 63 ] ; out -> mM_P . mIr [ 64 ] =
_cg_const_2 [ 64 ] ; out -> mM_P . mIr [ 65 ] = _cg_const_2 [ 65 ] ; out ->
mM_P . mIr [ 66 ] = _cg_const_2 [ 66 ] ; out -> mM_P . mIr [ 67 ] =
_cg_const_2 [ 67 ] ; out -> mM_P . mIr [ 68 ] = _cg_const_2 [ 68 ] ; out ->
mM_P . mIr [ 69 ] = _cg_const_2 [ 69 ] ; out -> mM_P . mIr [ 70 ] =
_cg_const_2 [ 70 ] ; out -> mM_P . mIr [ 71 ] = _cg_const_2 [ 71 ] ; out ->
mM_P . mIr [ 72 ] = _cg_const_2 [ 72 ] ; out -> mM_P . mIr [ 73 ] =
_cg_const_2 [ 73 ] ; out -> mM_P . mIr [ 74 ] = _cg_const_2 [ 74 ] ; out ->
mM_P . mIr [ 75 ] = _cg_const_2 [ 75 ] ; out -> mM_P . mIr [ 76 ] =
_cg_const_2 [ 76 ] ; out -> mM_P . mIr [ 77 ] = _cg_const_2 [ 77 ] ; out ->
mM_P . mIr [ 78 ] = _cg_const_2 [ 78 ] ; out -> mM_P . mIr [ 79 ] =
_cg_const_2 [ 79 ] ; out -> mM_P . mIr [ 80 ] = _cg_const_2 [ 80 ] ; out ->
mM_P . mIr [ 81 ] = _cg_const_2 [ 81 ] ; out -> mM_P . mIr [ 82 ] =
_cg_const_2 [ 82 ] ; out -> mM_P . mIr [ 83 ] = _cg_const_2 [ 83 ] ; ( void )
LC ; ( void ) out ; return 0 ; }
