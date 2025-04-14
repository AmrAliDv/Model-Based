#include "ne_ds.h"
#include "Enhanced_BMS_7ded21a_1_ds_sys_struct.h"
#include "Enhanced_BMS_7ded21a_1_ds_vmm.h"
#include "Enhanced_BMS_7ded21a_1_ds.h"
#include "Enhanced_BMS_7ded21a_1_ds_externals.h"
#include "Enhanced_BMS_7ded21a_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Enhanced_BMS_7ded21a_1_ds_vmm ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { static boolean_T
_cg_const_1 [ 84 ] = { false , false , false , true , false , false , false ,
false , true , false , false , false , false , true , false , false , false ,
false , true , false , false , false , false , true , false , false , false ,
false , false , false , false , true , false , false , false , false , true ,
false , false , false , false , true , false , false , false , false , true ,
false , false , false , false , true , false , false , false , false , false
, false , false , true , false , false , false , false , true , false , false
, false , false , true , false , false , false , false , true , false , false
, false , false , true , false , false , false , false } ; ( void ) t1 ; (
void ) LC ; out -> mVMM . mX [ 0 ] = _cg_const_1 [ 0 ] ; out -> mVMM . mX [ 1
] = _cg_const_1 [ 1 ] ; out -> mVMM . mX [ 2 ] = _cg_const_1 [ 2 ] ; out ->
mVMM . mX [ 3 ] = _cg_const_1 [ 3 ] ; out -> mVMM . mX [ 4 ] = _cg_const_1 [
4 ] ; out -> mVMM . mX [ 5 ] = _cg_const_1 [ 5 ] ; out -> mVMM . mX [ 6 ] =
_cg_const_1 [ 6 ] ; out -> mVMM . mX [ 7 ] = _cg_const_1 [ 7 ] ; out -> mVMM
. mX [ 8 ] = _cg_const_1 [ 8 ] ; out -> mVMM . mX [ 9 ] = _cg_const_1 [ 9 ] ;
out -> mVMM . mX [ 10 ] = _cg_const_1 [ 10 ] ; out -> mVMM . mX [ 11 ] =
_cg_const_1 [ 11 ] ; out -> mVMM . mX [ 12 ] = _cg_const_1 [ 12 ] ; out ->
mVMM . mX [ 13 ] = _cg_const_1 [ 13 ] ; out -> mVMM . mX [ 14 ] = _cg_const_1
[ 14 ] ; out -> mVMM . mX [ 15 ] = _cg_const_1 [ 15 ] ; out -> mVMM . mX [ 16
] = _cg_const_1 [ 16 ] ; out -> mVMM . mX [ 17 ] = _cg_const_1 [ 17 ] ; out
-> mVMM . mX [ 18 ] = _cg_const_1 [ 18 ] ; out -> mVMM . mX [ 19 ] =
_cg_const_1 [ 19 ] ; out -> mVMM . mX [ 20 ] = _cg_const_1 [ 20 ] ; out ->
mVMM . mX [ 21 ] = _cg_const_1 [ 21 ] ; out -> mVMM . mX [ 22 ] = _cg_const_1
[ 22 ] ; out -> mVMM . mX [ 23 ] = _cg_const_1 [ 23 ] ; out -> mVMM . mX [ 24
] = _cg_const_1 [ 24 ] ; out -> mVMM . mX [ 25 ] = _cg_const_1 [ 25 ] ; out
-> mVMM . mX [ 26 ] = _cg_const_1 [ 26 ] ; out -> mVMM . mX [ 27 ] =
_cg_const_1 [ 27 ] ; out -> mVMM . mX [ 28 ] = _cg_const_1 [ 28 ] ; out ->
mVMM . mX [ 29 ] = _cg_const_1 [ 29 ] ; out -> mVMM . mX [ 30 ] = _cg_const_1
[ 30 ] ; out -> mVMM . mX [ 31 ] = _cg_const_1 [ 31 ] ; out -> mVMM . mX [ 32
] = _cg_const_1 [ 32 ] ; out -> mVMM . mX [ 33 ] = _cg_const_1 [ 33 ] ; out
-> mVMM . mX [ 34 ] = _cg_const_1 [ 34 ] ; out -> mVMM . mX [ 35 ] =
_cg_const_1 [ 35 ] ; out -> mVMM . mX [ 36 ] = _cg_const_1 [ 36 ] ; out ->
mVMM . mX [ 37 ] = _cg_const_1 [ 37 ] ; out -> mVMM . mX [ 38 ] = _cg_const_1
[ 38 ] ; out -> mVMM . mX [ 39 ] = _cg_const_1 [ 39 ] ; out -> mVMM . mX [ 40
] = _cg_const_1 [ 40 ] ; out -> mVMM . mX [ 41 ] = _cg_const_1 [ 41 ] ; out
-> mVMM . mX [ 42 ] = _cg_const_1 [ 42 ] ; out -> mVMM . mX [ 43 ] =
_cg_const_1 [ 43 ] ; out -> mVMM . mX [ 44 ] = _cg_const_1 [ 44 ] ; out ->
mVMM . mX [ 45 ] = _cg_const_1 [ 45 ] ; out -> mVMM . mX [ 46 ] = _cg_const_1
[ 46 ] ; out -> mVMM . mX [ 47 ] = _cg_const_1 [ 47 ] ; out -> mVMM . mX [ 48
] = _cg_const_1 [ 48 ] ; out -> mVMM . mX [ 49 ] = _cg_const_1 [ 49 ] ; out
-> mVMM . mX [ 50 ] = _cg_const_1 [ 50 ] ; out -> mVMM . mX [ 51 ] =
_cg_const_1 [ 51 ] ; out -> mVMM . mX [ 52 ] = _cg_const_1 [ 52 ] ; out ->
mVMM . mX [ 53 ] = _cg_const_1 [ 53 ] ; out -> mVMM . mX [ 54 ] = _cg_const_1
[ 54 ] ; out -> mVMM . mX [ 55 ] = _cg_const_1 [ 55 ] ; out -> mVMM . mX [ 56
] = _cg_const_1 [ 56 ] ; out -> mVMM . mX [ 57 ] = _cg_const_1 [ 57 ] ; out
-> mVMM . mX [ 58 ] = _cg_const_1 [ 58 ] ; out -> mVMM . mX [ 59 ] =
_cg_const_1 [ 59 ] ; out -> mVMM . mX [ 60 ] = _cg_const_1 [ 60 ] ; out ->
mVMM . mX [ 61 ] = _cg_const_1 [ 61 ] ; out -> mVMM . mX [ 62 ] = _cg_const_1
[ 62 ] ; out -> mVMM . mX [ 63 ] = _cg_const_1 [ 63 ] ; out -> mVMM . mX [ 64
] = _cg_const_1 [ 64 ] ; out -> mVMM . mX [ 65 ] = _cg_const_1 [ 65 ] ; out
-> mVMM . mX [ 66 ] = _cg_const_1 [ 66 ] ; out -> mVMM . mX [ 67 ] =
_cg_const_1 [ 67 ] ; out -> mVMM . mX [ 68 ] = _cg_const_1 [ 68 ] ; out ->
mVMM . mX [ 69 ] = _cg_const_1 [ 69 ] ; out -> mVMM . mX [ 70 ] = _cg_const_1
[ 70 ] ; out -> mVMM . mX [ 71 ] = _cg_const_1 [ 71 ] ; out -> mVMM . mX [ 72
] = _cg_const_1 [ 72 ] ; out -> mVMM . mX [ 73 ] = _cg_const_1 [ 73 ] ; out
-> mVMM . mX [ 74 ] = _cg_const_1 [ 74 ] ; out -> mVMM . mX [ 75 ] =
_cg_const_1 [ 75 ] ; out -> mVMM . mX [ 76 ] = _cg_const_1 [ 76 ] ; out ->
mVMM . mX [ 77 ] = _cg_const_1 [ 77 ] ; out -> mVMM . mX [ 78 ] = _cg_const_1
[ 78 ] ; out -> mVMM . mX [ 79 ] = _cg_const_1 [ 79 ] ; out -> mVMM . mX [ 80
] = _cg_const_1 [ 80 ] ; out -> mVMM . mX [ 81 ] = _cg_const_1 [ 81 ] ; out
-> mVMM . mX [ 82 ] = _cg_const_1 [ 82 ] ; out -> mVMM . mX [ 83 ] =
_cg_const_1 [ 83 ] ; ( void ) LC ; ( void ) out ; return 0 ; }
