#include "ne_ds.h"
#include "Enhanced_BMS_7ded21a_1_ds_sys_struct.h"
#include "Enhanced_BMS_7ded21a_1_ds_dxy.h"
#include "Enhanced_BMS_7ded21a_1_ds.h"
#include "Enhanced_BMS_7ded21a_1_ds_externals.h"
#include "Enhanced_BMS_7ded21a_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Enhanced_BMS_7ded21a_1_ds_dxy ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t36 , NeDsMethodOutput * out ) { real_T t1 [ 5 ] ;
real_T t4 [ 5 ] ; real_T t7 [ 4 ] ; size_t t16 ; ( void ) t36 ; ( void ) LC ;
out -> mDXY . mX [ 0ULL ] = 1.0 ; out -> mDXY . mX [ 1ULL ] = 1.0 ; out ->
mDXY . mX [ 2ULL ] = 1.0 ; t1 [ 0ULL ] = - 0.1 ; t1 [ 1ULL ] = 0.1 ; t1 [
2ULL ] = - 0.1 ; t1 [ 3ULL ] = 1.0 ; t1 [ 4ULL ] = 1.0 ; t4 [ 0ULL ] = 0.1 ;
t4 [ 1ULL ] = - 0.1 ; t4 [ 2ULL ] = - 0.1 ; t4 [ 3ULL ] = 1.0 ; t4 [ 4ULL ] =
- 1.0 ; t7 [ 0ULL ] = 0.1 ; t7 [ 1ULL ] = - 0.1 ; t7 [ 2ULL ] = - 1.0 ; t7 [
3ULL ] = 1.0 ; for ( t16 = 0ULL ; t16 < 5ULL ; t16 ++ ) { out -> mDXY . mX [
t16 + 3ULL ] = t1 [ t16 ] ; } out -> mDXY . mX [ 8ULL ] = 0.05 ; out -> mDXY
. mX [ 9ULL ] = - 0.05 ; out -> mDXY . mX [ 10ULL ] = 0.05 ; out -> mDXY . mX
[ 11ULL ] = 0.05 ; out -> mDXY . mX [ 12ULL ] = - 0.05 ; out -> mDXY . mX [
13ULL ] = 0.05 ; for ( t16 = 0ULL ; t16 < 5ULL ; t16 ++ ) { out -> mDXY . mX
[ t16 + 14ULL ] = t4 [ t16 ] ; } out -> mDXY . mX [ 19ULL ] = 1.0 ; out ->
mDXY . mX [ 20ULL ] = - 0.05 ; out -> mDXY . mX [ 21ULL ] = 0.05 ; out ->
mDXY . mX [ 22ULL ] = 0.05 ; out -> mDXY . mX [ 23ULL ] = - 0.05 ; out ->
mDXY . mX [ 24ULL ] = 0.05 ; out -> mDXY . mX [ 25ULL ] = 0.05 ; for ( t16 =
0ULL ; t16 < 4ULL ; t16 ++ ) { out -> mDXY . mX [ t16 + 26ULL ] = t7 [ t16 ]
; } out -> mDXY . mX [ 30ULL ] = 1.0 ; out -> mDXY . mX [ 31ULL ] = - 0.05 ;
out -> mDXY . mX [ 32ULL ] = 0.05 ; out -> mDXY . mX [ 33ULL ] = - 0.05 ; out
-> mDXY . mX [ 34ULL ] = 0.05 ; out -> mDXY . mX [ 35ULL ] = 1.0 ; ( void )
LC ; ( void ) out ; return 0 ; }
