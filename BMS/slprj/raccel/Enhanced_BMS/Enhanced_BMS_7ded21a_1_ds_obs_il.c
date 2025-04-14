#include "ne_ds.h"
#include "Enhanced_BMS_7ded21a_1_ds_sys_struct.h"
#include "Enhanced_BMS_7ded21a_1_ds_obs_il.h"
#include "Enhanced_BMS_7ded21a_1_ds.h"
#include "Enhanced_BMS_7ded21a_1_ds_externals.h"
#include "Enhanced_BMS_7ded21a_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Enhanced_BMS_7ded21a_1_ds_obs_il ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { static boolean_T
_cg_const_1 [ 510 ] = { true , true , true , true , true , true , false ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , false , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , false , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , false , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , false , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , false , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , false , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , false , true , true ,
true , true , false , true , true , true , false , true , false , true , true
, true , false , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , false , true , true , true , true , false , true ,
true , true , false , true , false , true , true , true , false , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , false
, true , true , true , true , false , true , true , true , false , true ,
false , true , true , true , false , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , false , true , true , true , true
, false , true , true , true , false , true , false , true , true , true ,
false , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , false , true , true , true , true , false , true , true , true
, false , true , false , true , true , true , false , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , false , true ,
true , true , true , false , true , true , true , false , true , false , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , true , true , false , true , true , false ,
false , true , true , false , true , true , false , false , true , true ,
false , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , false , false , true , true , true , false
, true , true , true , true } ; int32_T i ; ( void ) t1 ; ( void ) LC ; for (
i = 0 ; i < 510 ; i ++ ) { out -> mOBS_IL . mX [ i ] = _cg_const_1 [ i ] ; }
( void ) LC ; ( void ) out ; return 0 ; }
