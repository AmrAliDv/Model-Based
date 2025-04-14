#include "ne_ds.h"
#include "Enhanced_BMS_7ded21a_1_ds_sys_struct.h"
#include "Enhanced_BMS_7ded21a_1_ds_ic.h"
#include "Enhanced_BMS_7ded21a_1_ds.h"
#include "Enhanced_BMS_7ded21a_1_ds_externals.h"
#include "Enhanced_BMS_7ded21a_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Enhanced_BMS_7ded21a_1_ds_ic ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t3 , NeDsMethodOutput * out ) { size_t t2 ; ( void )
LC ; out -> mIC . mX [ 0ULL ] = 298.15 ; out -> mIC . mX [ 1ULL ] = 0.0 ; out
-> mIC . mX [ 2ULL ] = 0.0 ; for ( t2 = 3ULL ; t2 - 3ULL < 5ULL ; t2 ++ ) {
out -> mIC . mX [ t2 + 0ULL ] = 0.0 ; } out -> mIC . mX [ 8ULL ] = 298.15 ;
out -> mIC . mX [ 9ULL ] = 0.0 ; out -> mIC . mX [ 10ULL ] = 0.0 ; for ( t2 =
11ULL ; t2 - 11ULL < 5ULL ; t2 ++ ) { out -> mIC . mX [ t2 + 0ULL ] = 0.0 ; }
out -> mIC . mX [ 16ULL ] = 298.15 ; out -> mIC . mX [ 17ULL ] = 0.0 ; out ->
mIC . mX [ 18ULL ] = 0.0 ; for ( t2 = 19ULL ; t2 - 19ULL < 5ULL ; t2 ++ ) {
out -> mIC . mX [ t2 + 0ULL ] = 0.0 ; } out -> mIC . mX [ 24ULL ] = 0.0 ; out
-> mIC . mX [ 25ULL ] = 0.0 ; out -> mIC . mX [ 26ULL ] = 0.0 ; out -> mIC .
mX [ 27ULL ] = 0.0 ; out -> mIC . mX [ 28ULL ] = t3 -> mP_R . mX [ 0ULL ] ;
out -> mIC . mX [ 29ULL ] = 1000.0 ; out -> mIC . mX [ 30ULL ] = 0.0 ; out ->
mIC . mX [ 31ULL ] = 0.0 ; out -> mIC . mX [ 32ULL ] = 0.0 ; out -> mIC . mX
[ 33ULL ] = 0.0 ; out -> mIC . mX [ 34ULL ] = t3 -> mP_R . mX [ 1ULL ] ; out
-> mIC . mX [ 35ULL ] = 1000.0 ; out -> mIC . mX [ 36ULL ] = 0.0 ; out -> mIC
. mX [ 37ULL ] = 0.0 ; out -> mIC . mX [ 38ULL ] = 0.0 ; out -> mIC . mX [
39ULL ] = t3 -> mP_R . mX [ 2ULL ] ; out -> mIC . mX [ 40ULL ] = 1000.0 ; out
-> mIC . mX [ 41ULL ] = 0.0 ; out -> mIC . mX [ 42ULL ] = 0.0 ; out -> mIC .
mX [ 43ULL ] = 0.0 ; out -> mIC . mX [ 44ULL ] = 0.0 ; out -> mIC . mX [
45ULL ] = 0.0 ; out -> mIC . mX [ 46ULL ] = 0.0 ; out -> mIC . mX [ 47ULL ] =
0.0 ; out -> mIC . mX [ 48ULL ] = 0.0 ; out -> mIC . mX [ 49ULL ] = 0.0 ; out
-> mIC . mX [ 50ULL ] = 0.0 ; out -> mIC . mX [ 51ULL ] = 0.0 ; out -> mIC .
mX [ 52ULL ] = 0.0 ; out -> mIC . mX [ 53ULL ] = 0.0 ; ( void ) LC ; ( void )
out ; return 0 ; }
