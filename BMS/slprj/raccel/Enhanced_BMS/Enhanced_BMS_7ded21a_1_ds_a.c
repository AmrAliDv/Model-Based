#include "ne_ds.h"
#include "Enhanced_BMS_7ded21a_1_ds_sys_struct.h"
#include "Enhanced_BMS_7ded21a_1_ds_a.h"
#include "Enhanced_BMS_7ded21a_1_ds.h"
#include "Enhanced_BMS_7ded21a_1_ds_externals.h"
#include "Enhanced_BMS_7ded21a_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Enhanced_BMS_7ded21a_1_ds_a ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t72 , NeDsMethodOutput * out ) { real_T t2 [ 5 ] ;
real_T t4 [ 5 ] ; real_T t6 [ 5 ] ; real_T t10 [ 4 ] ; real_T t14 [ 4 ] ;
size_t t32 ; ( void ) t72 ; ( void ) LC ; t2 [ 0 ] = - 1.0 ; t2 [ 1 ] = - 1.0
; t2 [ 2 ] = - 1.0 ; t2 [ 3 ] = - 1.0 ; t2 [ 4 ] = - 1.0 ; t4 [ 0 ] = -
0.10708086497067321 ; t4 [ 1 ] = - 0.10708086497067321 ; t4 [ 2 ] = -
0.10708086497067321 ; t4 [ 3 ] = - 0.10708086497067321 ; t4 [ 4 ] = -
0.10708086497067321 ; t6 [ 0 ] = - 0.77796593027870964 ; t6 [ 1 ] = -
0.77796593027870964 ; t6 [ 2 ] = - 0.77796593027870964 ; t6 [ 3 ] = -
0.77796593027870964 ; t6 [ 4 ] = - 0.77796593027870964 ; t10 [ 0ULL ] = - 0.1
; t10 [ 1ULL ] = - 6.3904950978067171E-5 ; t10 [ 2ULL ] = - 1.0 ; t10 [ 3ULL
] = 0.10708086497067321 ; t14 [ 0ULL ] = - 0.1 ; t14 [ 1ULL ] = -
6.122396816561767E-5 ; t14 [ 2ULL ] = - 0.10708086497067321 ; t14 [ 3ULL ] =
0.77796593027870964 ; out -> mA . mX [ 0ULL ] = - 0.0010190000000000002 ; out
-> mA . mX [ 1ULL ] = 0.00050950000000000008 ; for ( t32 = 0ULL ; t32 < 5ULL
; t32 ++ ) { out -> mA . mX [ t32 + 2ULL ] = t2 [ t32 ] ; } out -> mA . mX [
7ULL ] = 0.00050950000000000008 ; out -> mA . mX [ 8ULL ] = -
0.0010190000000000002 ; out -> mA . mX [ 9ULL ] = 0.00050950000000000008 ;
for ( t32 = 0ULL ; t32 < 5ULL ; t32 ++ ) { out -> mA . mX [ t32 + 10ULL ] =
t4 [ t32 ] ; } out -> mA . mX [ 15ULL ] = 0.00050950000000000008 ; out -> mA
. mX [ 16ULL ] = - 0.00050950000000000008 ; for ( t32 = 0ULL ; t32 < 5ULL ;
t32 ++ ) { out -> mA . mX [ t32 + 17ULL ] = t6 [ t32 ] ; } out -> mA . mX [
22ULL ] = - 0.1 ; out -> mA . mX [ 23ULL ] = - 6.1460441289416234E-5 ; out ->
mA . mX [ 24ULL ] = 1.0 ; out -> mA . mX [ 25ULL ] = 0.05 ; out -> mA . mX [
26ULL ] = 3.0730220644708117E-5 ; out -> mA . mX [ 27ULL ] = 0.05 ; out -> mA
. mX [ 28ULL ] = 3.0730220644708117E-5 ; for ( t32 = 0ULL ; t32 < 4ULL ; t32
++ ) { out -> mA . mX [ t32 + 29ULL ] = t10 [ t32 ] ; } out -> mA . mX [
33ULL ] = 1.0 ; out -> mA . mX [ 34ULL ] = 0.036805351846028581 ; out -> mA .
mX [ 35ULL ] = 1.0 ; out -> mA . mX [ 36ULL ] = 1.0 ; out -> mA . mX [ 37ULL
] = 0.05 ; out -> mA . mX [ 38ULL ] = 3.1952475489033585E-5 ; out -> mA . mX
[ 39ULL ] = 0.05 ; out -> mA . mX [ 40ULL ] = 3.1952475489033585E-5 ; for (
t32 = 0ULL ; t32 < 4ULL ; t32 ++ ) { out -> mA . mX [ t32 + 41ULL ] = t14 [
t32 ] ; } out -> mA . mX [ 45ULL ] = 1.0 ; out -> mA . mX [ 46ULL ] =
0.0391972593415329 ; out -> mA . mX [ 47ULL ] = 1.0 ; out -> mA . mX [ 48ULL
] = 1.0 ; out -> mA . mX [ 49ULL ] = 0.05 ; out -> mA . mX [ 50ULL ] =
3.0611984082808835E-5 ; out -> mA . mX [ 51ULL ] = 0.05 ; out -> mA . mX [
52ULL ] = 3.0611984082808835E-5 ; out -> mA . mX [ 53ULL ] = 1.0 ; out -> mA
. mX [ 54ULL ] = 0.038125650109325247 ; out -> mA . mX [ 55ULL ] = 1.0 ; out
-> mA . mX [ 56ULL ] = 1.0 ; ( void ) LC ; ( void ) out ; return 0 ; }
