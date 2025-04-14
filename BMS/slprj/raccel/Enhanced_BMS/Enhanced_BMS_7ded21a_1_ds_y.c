#include "ne_ds.h"
#include "Enhanced_BMS_7ded21a_1_ds_sys_struct.h"
#include "Enhanced_BMS_7ded21a_1_ds_y.h"
#include "Enhanced_BMS_7ded21a_1_ds.h"
#include "Enhanced_BMS_7ded21a_1_ds_externals.h"
#include "Enhanced_BMS_7ded21a_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Enhanced_BMS_7ded21a_1_ds_y ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t8 , NeDsMethodOutput * out ) { ( void ) LC ; out ->
mY . mX [ 6ULL ] = ( ( t8 -> mX . mX [ 24ULL ] * - 0.1 + t8 -> mX . mX [
25ULL ] * 0.05 ) + t8 -> mX . mX [ 26ULL ] * 0.05 ) + t8 -> mU . mX [ 6ULL ]
; out -> mY . mX [ 7ULL ] = ( ( t8 -> mX . mX [ 27ULL ] * - 0.1 + t8 -> mX .
mX [ 31ULL ] * 0.05 ) + t8 -> mX . mX [ 32ULL ] * 0.05 ) + t8 -> mU . mX [
6ULL ] ; out -> mY . mX [ 8ULL ] = ( ( t8 -> mX . mX [ 33ULL ] * - 0.1 + t8
-> mX . mX [ 37ULL ] * 0.05 ) + t8 -> mX . mX [ 38ULL ] * 0.05 ) + t8 -> mU .
mX [ 6ULL ] ; out -> mY . mX [ 5ULL ] = ( ( ( ( t8 -> mX . mX [ 27ULL ] * -
0.1 + t8 -> mX . mX [ 33ULL ] * 0.1 ) + t8 -> mX . mX [ 37ULL ] * - 0.05 ) +
t8 -> mX . mX [ 38ULL ] * - 0.05 ) + t8 -> mX . mX [ 31ULL ] * 0.05 ) + t8 ->
mX . mX [ 32ULL ] * 0.05 ; out -> mY . mX [ 3ULL ] = ( ( ( ( t8 -> mX . mX [
27ULL ] * 0.1 + t8 -> mX . mX [ 24ULL ] * - 0.1 ) + t8 -> mX . mX [ 25ULL ] *
0.05 ) + t8 -> mX . mX [ 26ULL ] * 0.05 ) + t8 -> mX . mX [ 31ULL ] * - 0.05
) + t8 -> mX . mX [ 32ULL ] * - 0.05 ; out -> mY . mX [ 4ULL ] = ( t8 -> mX .
mX [ 24ULL ] * 0.1 + t8 -> mX . mX [ 25ULL ] * - 0.05 ) + t8 -> mX . mX [
26ULL ] * - 0.05 ; out -> mY . mX [ 9ULL ] = t8 -> mX . mX [ 0ULL ] ; out ->
mY . mX [ 10ULL ] = t8 -> mX . mX [ 8ULL ] ; out -> mY . mX [ 11ULL ] = t8 ->
mX . mX [ 16ULL ] ; out -> mY . mX [ 14ULL ] = t8 -> mX . mX [ 24ULL ] - t8
-> mX . mX [ 27ULL ] ; out -> mY . mX [ 12ULL ] = t8 -> mX . mX [ 27ULL ] -
t8 -> mX . mX [ 33ULL ] ; out -> mY . mX [ 13ULL ] = t8 -> mX . mX [ 33ULL ]
; out -> mY . mX [ 15ULL ] = t8 -> mX . mX [ 24ULL ] ; out -> mY . mX [ 0ULL
] = t8 -> mX . mX [ 34ULL ] ; out -> mY . mX [ 1ULL ] = t8 -> mX . mX [ 39ULL
] ; out -> mY . mX [ 2ULL ] = t8 -> mX . mX [ 28ULL ] ; ( void ) LC ; ( void
) out ; return 0 ; }
