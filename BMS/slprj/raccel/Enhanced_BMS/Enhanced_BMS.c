#include "Enhanced_BMS.h"
#include "rtwtypes.h"
#include "mwmathutil.h"
#include "Enhanced_BMS_private.h"
#include <string.h>
#include <stddef.h>
#include "rt_logging_mmi.h"
#include "Enhanced_BMS_capi.h"
#include "Enhanced_BMS_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; extern ssExecutionInfo gblExecutionInfo ; RTWExtModeInfo *
gblRTWExtModeInfo = NULL ; void raccelForceExtModeShutdown ( boolean_T
extModeStartPktReceived ) { if ( ! extModeStartPktReceived ) { boolean_T
stopRequested = false ; rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 2 , &
stopRequested ) ; } rtExtModeShutdown ( 2 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
#include "slsa_engine_exec.h"
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 3 ; const char_T
* gbl_raccel_Version = "24.1 (R2024a) 19-Nov-2023" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; int_T enableFcnCallFlag [ ] = { 1 , 1 , 1 } ; const
char * raccelLoadInputsAndAperiodicHitTimes ( SimStruct * S , const char *
inportFileName , int * matFileFormat ) { return rt_RAccelReadInportsMatFile (
S , inportFileName , matFileFormat ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_engine_exec.h"
#include "simtarget/slSimTgtSLExecSimBridge.h"
#define a45td1sxhg (1U)
#define ao52q1jmvf (1U)
#define bvleqw5ozo (2U)
#define j2mojzutvw ((uint8_T)0U)
#define lsz0f01mlb (3U)
#define m43fidgtip (2U)
#define mkrdd01422 (3U)
#define mwoqsxi53i (-1)
#define nf1bk3lmep (4U)
#define bbvscjmqhg (1U)
#define kia3u5csnp (3U)
#define nq1uwram4z (2U)
B rtB ; DW rtDW ; static SimStruct model_S ; SimStruct * const rtS = &
model_S ; static real_T jgoxaelh54 ( const real_T x [ 3 ] ) ; static real_T
o0rxtgbzrx ( const real_T x [ 3 ] ) ; static void ij3rdi5qy3 ( real_T x [ 3 ]
, int32_T idx [ 3 ] ) ; static void iorywy0wsd ( real_T A , real_T B_p ,
real_T C , real_T P_p [ 3 ] ) ; real_T look2_binlxpw ( real_T u0 , real_T u1
, const real_T bp0 [ ] , const real_T bp1 [ ] , const real_T table [ ] ,
const uint32_T maxIndex [ ] , uint32_T stride ) { real_T fractions [ 2 ] ;
real_T frac ; real_T yL_0d0 ; real_T yL_0d1 ; uint32_T bpIndices [ 2 ] ;
uint32_T bpIdx ; uint32_T iLeft ; uint32_T iRght ; if ( u0 <= bp0 [ 0U ] ) {
iLeft = 0U ; frac = ( u0 - bp0 [ 0U ] ) / ( bp0 [ 1U ] - bp0 [ 0U ] ) ; }
else if ( u0 < bp0 [ maxIndex [ 0U ] ] ) { bpIdx = maxIndex [ 0U ] >> 1U ;
iLeft = 0U ; iRght = maxIndex [ 0U ] ; while ( iRght - iLeft > 1U ) { if ( u0
< bp0 [ bpIdx ] ) { iRght = bpIdx ; } else { iLeft = bpIdx ; } bpIdx = (
iRght + iLeft ) >> 1U ; } frac = ( u0 - bp0 [ iLeft ] ) / ( bp0 [ iLeft + 1U
] - bp0 [ iLeft ] ) ; } else { iLeft = maxIndex [ 0U ] - 1U ; frac = ( u0 -
bp0 [ maxIndex [ 0U ] - 1U ] ) / ( bp0 [ maxIndex [ 0U ] ] - bp0 [ maxIndex [
0U ] - 1U ] ) ; } fractions [ 0U ] = frac ; bpIndices [ 0U ] = iLeft ; if (
u1 <= bp1 [ 0U ] ) { iLeft = 0U ; frac = ( u1 - bp1 [ 0U ] ) / ( bp1 [ 1U ] -
bp1 [ 0U ] ) ; } else if ( u1 < bp1 [ maxIndex [ 1U ] ] ) { bpIdx = maxIndex
[ 1U ] >> 1U ; iLeft = 0U ; iRght = maxIndex [ 1U ] ; while ( iRght - iLeft >
1U ) { if ( u1 < bp1 [ bpIdx ] ) { iRght = bpIdx ; } else { iLeft = bpIdx ; }
bpIdx = ( iRght + iLeft ) >> 1U ; } frac = ( u1 - bp1 [ iLeft ] ) / ( bp1 [
iLeft + 1U ] - bp1 [ iLeft ] ) ; } else { iLeft = maxIndex [ 1U ] - 1U ; frac
= ( u1 - bp1 [ maxIndex [ 1U ] - 1U ] ) / ( bp1 [ maxIndex [ 1U ] ] - bp1 [
maxIndex [ 1U ] - 1U ] ) ; } bpIdx = iLeft * stride + bpIndices [ 0U ] ;
yL_0d0 = table [ bpIdx ] ; yL_0d0 += ( table [ bpIdx + 1U ] - yL_0d0 ) *
fractions [ 0U ] ; bpIdx += stride ; yL_0d1 = table [ bpIdx ] ; return ( ( (
table [ bpIdx + 1U ] - yL_0d1 ) * fractions [ 0U ] + yL_0d1 ) - yL_0d0 ) *
frac + yL_0d0 ; } real_T rt_urand_Upu32_Yd_f_pw_snf ( uint32_T * u ) {
uint32_T hi ; uint32_T lo ; lo = * u % 127773U * 16807U ; hi = * u / 127773U
* 2836U ; if ( lo < hi ) { * u = 2147483647U - ( hi - lo ) ; } else { * u =
lo - hi ; } return ( real_T ) * u * 4.6566128752457969E-10 ; } real_T
rt_nrand_Upu32_Yd_f_pw_snf ( uint32_T * u ) { real_T si ; real_T sr ; real_T
y ; do { sr = 2.0 * rt_urand_Upu32_Yd_f_pw_snf ( u ) - 1.0 ; si = 2.0 *
rt_urand_Upu32_Yd_f_pw_snf ( u ) - 1.0 ; si = sr * sr + si * si ; } while (
si > 1.0 ) ; y = muDoubleScalarSqrt ( - 2.0 * muDoubleScalarLog ( si ) / si )
* sr ; return y ; } static real_T jgoxaelh54 ( const real_T x [ 3 ] ) {
real_T ex ; real_T x_p ; int32_T idx ; int32_T k ; boolean_T exitg1 ; if ( !
muDoubleScalarIsNaN ( x [ 0 ] ) ) { idx = 1 ; } else { idx = 0 ; k = 2 ;
exitg1 = false ; while ( ( ! exitg1 ) && ( k < 4 ) ) { if ( !
muDoubleScalarIsNaN ( x [ k - 1 ] ) ) { idx = k ; exitg1 = true ; } else { k
++ ; } } } if ( idx == 0 ) { ex = x [ 0 ] ; } else { ex = x [ idx - 1 ] ; for
( k = idx + 1 ; k < 4 ; k ++ ) { x_p = x [ k - 1 ] ; if ( ex < x_p ) { ex =
x_p ; } } } return ex ; } static real_T o0rxtgbzrx ( const real_T x [ 3 ] ) {
real_T ex ; real_T x_p ; int32_T idx ; int32_T k ; boolean_T exitg1 ; if ( !
muDoubleScalarIsNaN ( x [ 0 ] ) ) { idx = 1 ; } else { idx = 0 ; k = 2 ;
exitg1 = false ; while ( ( ! exitg1 ) && ( k < 4 ) ) { if ( !
muDoubleScalarIsNaN ( x [ k - 1 ] ) ) { idx = k ; exitg1 = true ; } else { k
++ ; } } } if ( idx == 0 ) { ex = x [ 0 ] ; } else { ex = x [ idx - 1 ] ; for
( k = idx + 1 ; k < 4 ; k ++ ) { x_p = x [ k - 1 ] ; if ( ex > x_p ) { ex =
x_p ; } } } return ex ; } static void ij3rdi5qy3 ( real_T x [ 3 ] , int32_T
idx [ 3 ] ) { real_T b_x_idx_0 ; real_T b_x_idx_1 ; real_T b_x_idx_2 ;
b_x_idx_0 = x [ 0 ] ; b_x_idx_1 = x [ 1 ] ; b_x_idx_2 = x [ 2 ] ; if ( ( x [
0 ] <= x [ 1 ] ) || muDoubleScalarIsNaN ( x [ 1 ] ) ) { if ( ( x [ 1 ] <= x [
2 ] ) || muDoubleScalarIsNaN ( x [ 2 ] ) ) { idx [ 0 ] = 1 ; idx [ 1 ] = 2 ;
idx [ 2 ] = 3 ; } else if ( ( x [ 0 ] <= x [ 2 ] ) || muDoubleScalarIsNaN ( x
[ 2 ] ) ) { idx [ 0 ] = 1 ; idx [ 1 ] = 3 ; idx [ 2 ] = 2 ; b_x_idx_1 = x [ 2
] ; b_x_idx_2 = x [ 1 ] ; } else { idx [ 0 ] = 3 ; idx [ 1 ] = 1 ; idx [ 2 ]
= 2 ; b_x_idx_2 = x [ 1 ] ; b_x_idx_1 = x [ 0 ] ; b_x_idx_0 = x [ 2 ] ; } }
else if ( ( x [ 0 ] <= x [ 2 ] ) || muDoubleScalarIsNaN ( x [ 2 ] ) ) { idx [
0 ] = 2 ; idx [ 1 ] = 1 ; idx [ 2 ] = 3 ; b_x_idx_0 = x [ 1 ] ; b_x_idx_1 = x
[ 0 ] ; } else if ( ( x [ 1 ] <= x [ 2 ] ) || muDoubleScalarIsNaN ( x [ 2 ] )
) { idx [ 0 ] = 2 ; idx [ 1 ] = 3 ; idx [ 2 ] = 1 ; b_x_idx_0 = x [ 1 ] ;
b_x_idx_1 = x [ 2 ] ; b_x_idx_2 = x [ 0 ] ; } else { idx [ 0 ] = 3 ; idx [ 1
] = 2 ; idx [ 2 ] = 1 ; b_x_idx_0 = x [ 2 ] ; b_x_idx_2 = x [ 0 ] ; } x [ 0 ]
= b_x_idx_0 ; x [ 1 ] = b_x_idx_1 ; x [ 2 ] = b_x_idx_2 ; } static void
iorywy0wsd ( real_T A , real_T B_p , real_T C , real_T P_p [ 3 ] ) { real_T
a__1 [ 3 ] ; int32_T iidx [ 3 ] ; a__1 [ 0 ] = A ; a__1 [ 1 ] = B_p ; a__1 [
2 ] = C ; ij3rdi5qy3 ( a__1 , iidx ) ; P_p [ 0 ] = iidx [ 0 ] ; P_p [ 1 ] =
iidx [ 1 ] ; P_p [ 2 ] = iidx [ 2 ] ; } void MdlInitialize ( void ) { real_T
tmp ; int32_T r ; int32_T t ; uint32_T tseed ; rtDW . o4hron4umr = rtP .
UnitDelay_InitialCondition ; rtDW . jxt12q4h4a = rtP .
UnitDelay1_InitialCondition ; rtDW . hzivxtj4v0 = rtP .
UnitDelay2_InitialCondition ; rtDW . bvugbmrj4h = rtP .
UnitDelay_InitialCondition_dsqmqwsouv ; rtDW . eqmj2sg4qm = rtP .
UnitDelay1_InitialCondition_b4qmpi3m02 ; rtDW . psyjrz43fg = rtP .
UnitDelay2_InitialCondition_lzqzzzqyck ; rtDW . dis0i10foe = rtP .
DiscretePIDController_InitialConditionForIntegrator ; rtDW . n3m1icn3qb = rtP
. Memory1_InitialCondition ; rtDW . g3fidn3w2t = rtP .
Memory1_InitialCondition_mtmvynyd4g ; rtDW . drktkoupe5 = rtP .
Memory1_InitialCondition_fbpxruqfum ; rtDW . mmdrnhie50 [ 0 ] = rtP .
Memory_InitialCondition [ 0 ] ; rtDW . mmdrnhie50 [ 1 ] = rtP .
Memory_InitialCondition [ 1 ] ; rtDW . mmdrnhie50 [ 2 ] = rtP .
Memory_InitialCondition [ 2 ] ; rtDW . mmdrnhie50 [ 3 ] = rtP .
Memory_InitialCondition [ 3 ] ; rtDW . c0jez5cx3s = rtP .
UnitDelay1_InitialCondition_leo0ri5tvd ; rtDW . p4nbtb34ur = rtP .
Memory2_InitialCondition ; rtDW . hmipvslkr1 = rtP .
UnitDelay3_InitialCondition ; rtDW . emkghimbji = rtP .
UnitDelay_InitialCondition_lg5f2ow0lx ; rtDW . ixyulwyx33 = rtP .
UnitDelay2_InitialCondition_giqowpzzvx ; tmp = muDoubleScalarFloor ( rtP .
MeasurementNoise_seed ) ; if ( muDoubleScalarIsNaN ( tmp ) ||
muDoubleScalarIsInf ( tmp ) ) { tmp = 0.0 ; } else { tmp = muDoubleScalarRem
( tmp , 4.294967296E+9 ) ; } if ( tmp < 0.0 ) { tseed = ( uint32_T ) - (
int32_T ) ( uint32_T ) - tmp ; } else { tseed = ( uint32_T ) tmp ; } r = (
int32_T ) ( tseed >> 16U ) ; t = ( int32_T ) ( tseed & 32768U ) ; tseed = ( (
( ( tseed - ( ( uint32_T ) r << 16U ) ) + ( uint32_T ) t ) << 16U ) + (
uint32_T ) t ) + ( uint32_T ) r ; if ( tseed < 1U ) { tseed = 1144108930U ; }
else if ( tseed > 2147483646U ) { tseed = 2147483646U ; } rtDW . hlwgqfrk4r =
tseed ; rtDW . pvji3kkf3u = rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . hlwgqfrk4r
) * rtP . WhiteNoise_StdDev + rtP . WhiteNoise_Mean ; rtDW . anelm3x4iv [ 0 ]
= rtP . Memory_InitialCondition_pgjcoz42wr [ 0 ] ; rtDW . anelm3x4iv [ 1 ] =
rtP . Memory_InitialCondition_pgjcoz42wr [ 1 ] ; rtDW . anelm3x4iv [ 2 ] =
rtP . Memory_InitialCondition_pgjcoz42wr [ 2 ] ; rtDW . anelm3x4iv [ 3 ] =
rtP . Memory_InitialCondition_pgjcoz42wr [ 3 ] ; rtDW . dzqlam0y5k = rtP .
UnitDelay1_InitialCondition_ij2qzjxqjn ; rtDW . ea21lklf25 = rtP .
Memory2_InitialCondition_cdoo2qwebt ; rtDW . av2ad1yfyh = rtP .
UnitDelay3_InitialCondition_hj4lds0xht ; rtDW . ctezuw3uwy = rtP .
UnitDelay_InitialCondition_fjgvwcbzyu ; rtDW . paljmtthlt = rtP .
UnitDelay2_InitialCondition_jfipg1neps ; tmp = muDoubleScalarFloor ( rtP .
MeasurementNoise_seed_bzjvksvjcu ) ; if ( muDoubleScalarIsNaN ( tmp ) ||
muDoubleScalarIsInf ( tmp ) ) { tmp = 0.0 ; } else { tmp = muDoubleScalarRem
( tmp , 4.294967296E+9 ) ; } if ( tmp < 0.0 ) { tseed = ( uint32_T ) - (
int32_T ) ( uint32_T ) - tmp ; } else { tseed = ( uint32_T ) tmp ; } r = (
int32_T ) ( tseed >> 16U ) ; t = ( int32_T ) ( tseed & 32768U ) ; tseed = ( (
( ( tseed - ( ( uint32_T ) r << 16U ) ) + ( uint32_T ) t ) << 16U ) + (
uint32_T ) t ) + ( uint32_T ) r ; if ( tseed < 1U ) { tseed = 1144108930U ; }
else if ( tseed > 2147483646U ) { tseed = 2147483646U ; } rtDW . oybrantlp0 =
tseed ; rtDW . h3kr20z2el = rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . oybrantlp0
) * rtP . WhiteNoise_StdDev_p5fslwkmty + rtP . WhiteNoise_Mean_ermg12yrvu ;
rtDW . ntrl1fa42b [ 0 ] = rtP . Memory_InitialCondition_b3vjnsfglc [ 0 ] ;
rtDW . ntrl1fa42b [ 1 ] = rtP . Memory_InitialCondition_b3vjnsfglc [ 1 ] ;
rtDW . ntrl1fa42b [ 2 ] = rtP . Memory_InitialCondition_b3vjnsfglc [ 2 ] ;
rtDW . ntrl1fa42b [ 3 ] = rtP . Memory_InitialCondition_b3vjnsfglc [ 3 ] ;
rtDW . if1kq5x22c = rtP . UnitDelay1_InitialCondition_hsxkj1u2bf ; rtDW .
g5uh3k3gck = rtP . Memory2_InitialCondition_llf3ajnusn ; rtDW . gex5mkzr5u =
rtP . UnitDelay3_InitialCondition_kjq4iuaqru ; rtDW . cgrc25ymx5 = rtP .
UnitDelay_InitialCondition_klojgml5si ; rtDW . czx0bj5ltr = rtP .
UnitDelay2_InitialCondition_dvcfpmrgc0 ; tmp = muDoubleScalarFloor ( rtP .
MeasurementNoise_seed_paj2igjfps ) ; if ( muDoubleScalarIsNaN ( tmp ) ||
muDoubleScalarIsInf ( tmp ) ) { tmp = 0.0 ; } else { tmp = muDoubleScalarRem
( tmp , 4.294967296E+9 ) ; } if ( tmp < 0.0 ) { tseed = ( uint32_T ) - (
int32_T ) ( uint32_T ) - tmp ; } else { tseed = ( uint32_T ) tmp ; } r = (
int32_T ) ( tseed >> 16U ) ; t = ( int32_T ) ( tseed & 32768U ) ; tseed = ( (
( ( tseed - ( ( uint32_T ) r << 16U ) ) + ( uint32_T ) t ) << 16U ) + (
uint32_T ) t ) + ( uint32_T ) r ; if ( tseed < 1U ) { tseed = 1144108930U ; }
else if ( tseed > 2147483646U ) { tseed = 2147483646U ; } rtDW . cynedq33ig =
tseed ; rtDW . cufwhfilog = rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . cynedq33ig
) * rtP . WhiteNoise_StdDev_mtoahzi3uk + rtP . WhiteNoise_Mean_btucgz1jww ;
rtDW . mwjgfe4d1f = mwoqsxi53i ; rtB . ooycaplx1k = 0.0 ; rtB . cu4w31sksr =
0.0 ; rtB . f2njjfiimh = 0.0 ; rtDW . csjulonnym = 0.05 ; rtDW . bs44prev55 [
0 ] = 0.0 ; rtDW . bs44prev55 [ 1 ] = 0.0 ; rtDW . bs44prev55 [ 2 ] = 0.0 ;
rtB . beqgjbeb4n = 0.0 ; rtB . fpjwalqauw = 0.0 ; rtB . bzbuyck32c = 0.0 ;
rtDW . bzxxyscndm = 0U ; rtDW . krfhocoehg = j2mojzutvw ; rtDW . mbshdldyye =
j2mojzutvw ; rtDW . jk35ychlbp = 0U ; rtDW . c54tg2rdm5 = mwoqsxi53i ; rtB .
o1lapiknns = 0.0 ; rtDW . cqxvkxfbpc = 0U ; rtDW . h2swncc3e3 = j2mojzutvw ;
rtDW . eilndcq32p = false ; rtDW . myycljfyci = mwoqsxi53i ; rtDW .
byhjcffsht = false ; rtDW . exf42eu50q = mwoqsxi53i ; rtDW . jov1gos3aq =
false ; rtDW . ka0wher03d = mwoqsxi53i ; rtDW . b3vtehlze5 = false ; rtDW .
if1j1sqa5y = mwoqsxi53i ; rtDW . cqvwemi3wr = false ; rtDW . pyo1jzv333 =
mwoqsxi53i ; rtDW . elmn21ejed = false ; rtDW . al53uz2xdy = mwoqsxi53i ; }
void MdlStart ( void ) { NeModelParameters modelParameters ;
NeModelParameters modelParameters_e ; NeModelParameters modelParameters_p ;
NeslRtpManager * manager ; NeslRtpManager * manager_p ; NeslSimulationData *
tmp_e ; NeslSimulator * tmp_p ; NeuDiagnosticManager * diagnosticManager ;
NeuDiagnosticTree * diagnosticTree ; NeuDiagnosticTree * diagnosticTree_e ;
NeuDiagnosticTree * diagnosticTree_p ; char * msg ; char * msg_e ; char *
msg_p ; real_T tmp_i ; int32_T tmp_m ; boolean_T tmp ; boolean_T val ; { bool
externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} manager_p = nesl_lease_rtp_manager ( "Enhanced_BMS/Solver Configuration_1"
, 0 ) ; manager = manager_p ; tmp = pointer_is_null ( manager_p ) ; if ( tmp
) { Enhanced_BMS_7ded21a_1_gateway ( ) ; manager = nesl_lease_rtp_manager (
"Enhanced_BMS/Solver Configuration_1" , 0 ) ; } rtDW . d4vkr2glbb = ( void *
) manager ; rtDW . h02ooleufk = true ; tmp_p = nesl_lease_simulator (
"Enhanced_BMS/Solver Configuration_1" , 0 , 0 ) ; rtDW . cg3qopfbl1 = ( void
* ) tmp_p ; tmp = pointer_is_null ( rtDW . cg3qopfbl1 ) ; if ( tmp ) {
Enhanced_BMS_7ded21a_1_gateway ( ) ; tmp_p = nesl_lease_simulator (
"Enhanced_BMS/Solver Configuration_1" , 0 , 0 ) ; rtDW . cg3qopfbl1 = ( void
* ) tmp_p ; } slsaSaveRawMemoryForSimTargetOP ( rtS ,
"Enhanced_BMS/Solver Configuration_100" , ( void * * ) ( & rtDW . cg3qopfbl1
) , 0U * sizeof ( real_T ) , nesl_save_simdata , nesl_restore_simdata ) ;
tmp_e = nesl_create_simulation_data ( ) ; rtDW . kxtcxp30gh = ( void * )
tmp_e ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW . lbsdrhids0 =
( void * ) diagnosticManager ; modelParameters . mSolverType =
NE_SOLVER_TYPE_DAE ; modelParameters . mSolverAbsTol = 0.001 ;
modelParameters . mSolverRelTol = 0.001 ; modelParameters .
mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_NO ; modelParameters . mStartTime =
0.0 ; modelParameters . mLoadInitialState = false ; modelParameters .
mUseSimState = false ; modelParameters . mLinTrimCompile = false ;
modelParameters . mLoggingMode = SSC_LOGGING_OFF ; modelParameters .
mRTWModifiedTimeStamp = 6.55764141E+8 ; modelParameters . mZcDisabled = true
; modelParameters . mUseModelRefSolver = false ; modelParameters .
mTargetFPGAHIL = false ; tmp_i = 0.001 ; modelParameters . mSolverTolerance =
tmp_i ; tmp_i = 0.1 ; modelParameters . mFixedStepSize = tmp_i ; tmp = false
; modelParameters . mVariableStepSolver = tmp ; tmp = false ; modelParameters
. mIsUsingODEN = tmp ; tmp = slIsRapidAcceleratorSimulating ( ) ; val =
ssGetGlobalInitialStatesAvailable ( rtS ) ; if ( tmp ) { val = ( val &&
ssIsFirstInitCond ( rtS ) ) ; } modelParameters . mLoadInitialState = val ;
modelParameters . mZcDisabled = true ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . lbsdrhids0 ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_m =
nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . cg3qopfbl1 , &
modelParameters , diagnosticManager ) ; if ( tmp_m != 0 ) { tmp =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
tmp_p = nesl_lease_simulator ( "Enhanced_BMS/Solver Configuration_1" , 1 , 0
) ; rtDW . d5jesyet42 = ( void * ) tmp_p ; tmp = pointer_is_null ( rtDW .
d5jesyet42 ) ; if ( tmp ) { Enhanced_BMS_7ded21a_1_gateway ( ) ; tmp_p =
nesl_lease_simulator ( "Enhanced_BMS/Solver Configuration_1" , 1 , 0 ) ; rtDW
. d5jesyet42 = ( void * ) tmp_p ; } slsaSaveRawMemoryForSimTargetOP ( rtS ,
"Enhanced_BMS/Solver Configuration_110" , ( void * * ) ( & rtDW . d5jesyet42
) , 0U * sizeof ( real_T ) , nesl_save_simdata , nesl_restore_simdata ) ;
tmp_e = nesl_create_simulation_data ( ) ; rtDW . ikyqkmvn3c = ( void * )
tmp_e ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW . lqqrot5334 =
( void * ) diagnosticManager ; modelParameters_p . mSolverType =
NE_SOLVER_TYPE_DAE ; modelParameters_p . mSolverAbsTol = 0.001 ;
modelParameters_p . mSolverRelTol = 0.001 ; modelParameters_p .
mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_NO ; modelParameters_p . mStartTime =
0.0 ; modelParameters_p . mLoadInitialState = false ; modelParameters_p .
mUseSimState = false ; modelParameters_p . mLinTrimCompile = false ;
modelParameters_p . mLoggingMode = SSC_LOGGING_OFF ; modelParameters_p .
mRTWModifiedTimeStamp = 6.55764141E+8 ; modelParameters_p . mZcDisabled =
true ; modelParameters_p . mUseModelRefSolver = false ; modelParameters_p .
mTargetFPGAHIL = false ; tmp_i = 0.001 ; modelParameters_p . mSolverTolerance
= tmp_i ; tmp_i = 0.1 ; modelParameters_p . mFixedStepSize = tmp_i ; tmp =
false ; modelParameters_p . mVariableStepSolver = tmp ; tmp = false ;
modelParameters_p . mIsUsingODEN = tmp ; tmp = slIsRapidAcceleratorSimulating
( ) ; val = ssGetGlobalInitialStatesAvailable ( rtS ) ; if ( tmp ) { val = (
val && ssIsFirstInitCond ( rtS ) ) ; } modelParameters_p . mLoadInitialState
= val ; modelParameters_p . mZcDisabled = true ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . lqqrot5334 ; diagnosticTree_p =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_m =
nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . d5jesyet42 , &
modelParameters_p , diagnosticManager ) ; if ( tmp_m != 0 ) { tmp =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg_p =
rtw_diagnostics_msg ( diagnosticTree_p ) ; ssSetErrorStatus ( rtS , msg_p ) ;
} } tmp_p = nesl_lease_simulator ( "Enhanced_BMS/Solver Configuration_1" , 1
, 1 ) ; rtDW . f015bmui2j = ( void * ) tmp_p ; tmp = pointer_is_null ( rtDW .
f015bmui2j ) ; if ( tmp ) { Enhanced_BMS_7ded21a_1_gateway ( ) ; tmp_p =
nesl_lease_simulator ( "Enhanced_BMS/Solver Configuration_1" , 1 , 1 ) ; rtDW
. f015bmui2j = ( void * ) tmp_p ; } slsaSaveRawMemoryForSimTargetOP ( rtS ,
"Enhanced_BMS/Solver Configuration_111" , ( void * * ) ( & rtDW . f015bmui2j
) , 0U * sizeof ( real_T ) , nesl_save_simdata , nesl_restore_simdata ) ;
tmp_e = nesl_create_simulation_data ( ) ; rtDW . hw5hoy3g0v = ( void * )
tmp_e ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW . gdnrurmlfy =
( void * ) diagnosticManager ; modelParameters_e . mSolverType =
NE_SOLVER_TYPE_DAE ; modelParameters_e . mSolverAbsTol = 0.001 ;
modelParameters_e . mSolverRelTol = 0.001 ; modelParameters_e .
mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_NO ; modelParameters_e . mStartTime =
0.0 ; modelParameters_e . mLoadInitialState = false ; modelParameters_e .
mUseSimState = false ; modelParameters_e . mLinTrimCompile = false ;
modelParameters_e . mLoggingMode = SSC_LOGGING_OFF ; modelParameters_e .
mRTWModifiedTimeStamp = 6.55764141E+8 ; modelParameters_e . mZcDisabled =
true ; modelParameters_e . mUseModelRefSolver = false ; modelParameters_e .
mTargetFPGAHIL = false ; tmp_i = 0.001 ; modelParameters_e . mSolverTolerance
= tmp_i ; tmp_i = 0.1 ; modelParameters_e . mFixedStepSize = tmp_i ; tmp =
false ; modelParameters_e . mVariableStepSolver = tmp ; tmp = false ;
modelParameters_e . mIsUsingODEN = tmp ; tmp = slIsRapidAcceleratorSimulating
( ) ; val = ssGetGlobalInitialStatesAvailable ( rtS ) ; if ( tmp ) { val = (
val && ssIsFirstInitCond ( rtS ) ) ; } modelParameters_e . mLoadInitialState
= val ; modelParameters_e . mZcDisabled = true ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . gdnrurmlfy ; diagnosticTree_e =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_m =
nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . f015bmui2j , &
modelParameters_e , diagnosticManager ) ; if ( tmp_m != 0 ) { tmp =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg_e =
rtw_diagnostics_msg ( diagnosticTree_e ) ; ssSetErrorStatus ( rtS , msg_e ) ;
} } MdlInitialize ( ) ; } void MdlOutputs ( int_T tid ) { NeParameterBundle
expl_temp ; NeslSimulationData * simulationData ; NeuDiagnosticManager * diag
; NeuDiagnosticTree * diagTree ; NeuDiagnosticTree * diagnosticTree ;
NeuDiagnosticTree * diagnosticTree_e ; NeuDiagnosticTree * diagnosticTree_p ;
char * msg ; char * msg_e ; char * msg_i ; char * msg_p ; real_T tmp_g [ 124
] ; real_T tmp_i [ 124 ] ; real_T tmp_p [ 28 ] ; real_T tmp [ 6 ] ; real_T
A_1 [ 4 ] ; real_T P_Pre_1 [ 4 ] ; real_T iyl12wlled [ 4 ] ; real_T x_tmp [ 3
] ; real_T C1_idx_0 ; real_T CM1_1 ; real_T CM1_2 ; real_T CM1_3 ; real_T
K_1_idx_0 ; real_T K_1_idx_1 ; real_T T1_1 ; real_T b05mayt2it ; real_T
bhiaofo00k ; real_T cifoqbtak5_idx_1 ; real_T cifoqbtak5_idx_2 ; real_T
cifoqbtak5_idx_3 ; real_T gjjvazwgdy ; real_T oc0yan0vo5 ; real_T time ;
real_T time_e ; real_T time_g ; real_T time_i ; real_T time_m ; real_T time_p
; int32_T A_1_p ; int32_T isHit ; int32_T isHit_e ; int32_T isHit_p ; int_T
tmp_j [ 9 ] ; int_T tmp_m [ 9 ] ; int_T tmp_e [ 8 ] ; int_T j ; boolean_T ok
; rtB . drskglgsan = rtDW . o4hron4umr ; rtB . npmfe0f0qo = rtDW . jxt12q4h4a
; rtB . e2wraft2ng = rtDW . hzivxtj4v0 ; rtDW . mwjgfe4d1f = mwoqsxi53i ; if
( rtDW . bzxxyscndm == 0U ) { rtDW . bzxxyscndm = 1U ; rtDW . krfhocoehg =
mkrdd01422 ; rtB . ooycaplx1k = 0.0 ; rtB . cu4w31sksr = 0.0 ; rtB .
f2njjfiimh = 0.0 ; } else { switch ( rtDW . krfhocoehg ) { case a45td1sxhg :
x_tmp [ 0 ] = rtB . drskglgsan ; x_tmp [ 1 ] = rtB . npmfe0f0qo ; x_tmp [ 2 ]
= rtB . e2wraft2ng ; if ( muDoubleScalarAbs ( jgoxaelh54 ( x_tmp ) -
o0rxtgbzrx ( x_tmp ) ) < rtDW . csjulonnym ) { switch ( rtDW . mbshdldyye ) {
case ao52q1jmvf : rtB . beqgjbeb4n = 0.0 ; rtB . fpjwalqauw = 0.0 ; rtB .
bzbuyck32c = 0.0 ; iorywy0wsd ( rtB . drskglgsan , rtB . npmfe0f0qo , rtB .
e2wraft2ng , rtDW . bs44prev55 ) ; rtDW . mbshdldyye = j2mojzutvw ; break ;
case m43fidgtip : rtB . beqgjbeb4n = 0.0 ; rtB . fpjwalqauw = 0.0 ; rtB .
bzbuyck32c = 0.0 ; iorywy0wsd ( rtB . drskglgsan , rtB . npmfe0f0qo , rtB .
e2wraft2ng , rtDW . bs44prev55 ) ; rtDW . mbshdldyye = j2mojzutvw ; break ;
case lsz0f01mlb : rtB . beqgjbeb4n = 0.0 ; rtB . fpjwalqauw = 0.0 ; rtB .
bzbuyck32c = 0.0 ; iorywy0wsd ( rtB . drskglgsan , rtB . npmfe0f0qo , rtB .
e2wraft2ng , rtDW . bs44prev55 ) ; rtDW . mbshdldyye = j2mojzutvw ; break ;
default : rtDW . mbshdldyye = j2mojzutvw ; break ; } rtDW . krfhocoehg =
bvleqw5ozo ; rtB . ooycaplx1k = 0.0 ; rtB . cu4w31sksr = 0.0 ; rtB .
f2njjfiimh = 0.0 ; } else { iorywy0wsd ( rtB . drskglgsan , rtB . npmfe0f0qo
, rtB . e2wraft2ng , rtDW . bs44prev55 ) ; switch ( rtDW . mbshdldyye ) {
case ao52q1jmvf : if ( rtDW . bs44prev55 [ 0 ] == 2.0 ) { iorywy0wsd ( rtB .
drskglgsan , rtB . npmfe0f0qo , rtB . e2wraft2ng , rtDW . bs44prev55 ) ; rtDW
. mbshdldyye = m43fidgtip ; rtB . ooycaplx1k = 1.0 ; rtB . fpjwalqauw = 1.0 ;
rtB . f2njjfiimh = 0.0 ; rtB . beqgjbeb4n = 0.0 ; rtB . cu4w31sksr = 0.0 ;
rtB . bzbuyck32c = 0.0 ; } else if ( rtDW . bs44prev55 [ 0 ] == 3.0 ) {
iorywy0wsd ( rtB . drskglgsan , rtB . npmfe0f0qo , rtB . e2wraft2ng , rtDW .
bs44prev55 ) ; rtDW . mbshdldyye = lsz0f01mlb ; rtB . ooycaplx1k = 1.0 ; rtB
. f2njjfiimh = 1.0 ; rtB . fpjwalqauw = 0.0 ; rtB . bzbuyck32c = 0.0 ; rtB .
cu4w31sksr = 0.0 ; rtB . beqgjbeb4n = 0.0 ; } else if ( rtB . npmfe0f0qo -
rtB . e2wraft2ng > 0.05 ) { rtB . beqgjbeb4n = 1.0 ; } else if ( rtB .
e2wraft2ng - rtB . npmfe0f0qo > 0.05 ) { rtB . bzbuyck32c = 1.0 ; } break ;
case m43fidgtip : if ( rtDW . bs44prev55 [ 0 ] == 3.0 ) { iorywy0wsd ( rtB .
drskglgsan , rtB . npmfe0f0qo , rtB . e2wraft2ng , rtDW . bs44prev55 ) ; rtDW
. mbshdldyye = lsz0f01mlb ; rtB . ooycaplx1k = 1.0 ; rtB . f2njjfiimh = 1.0 ;
rtB . fpjwalqauw = 0.0 ; rtB . bzbuyck32c = 0.0 ; rtB . cu4w31sksr = 0.0 ;
rtB . beqgjbeb4n = 0.0 ; } else if ( rtDW . bs44prev55 [ 0 ] == 1.0 ) {
iorywy0wsd ( rtB . drskglgsan , rtB . npmfe0f0qo , rtB . e2wraft2ng , rtDW .
bs44prev55 ) ; rtDW . mbshdldyye = ao52q1jmvf ; rtB . f2njjfiimh = 1.0 ; rtB
. fpjwalqauw = 1.0 ; rtB . ooycaplx1k = 0.0 ; rtB . cu4w31sksr = 0.0 ; rtB .
beqgjbeb4n = 0.0 ; rtB . bzbuyck32c = 0.0 ; } else if ( rtB . drskglgsan -
rtB . e2wraft2ng > 0.05 ) { rtB . cu4w31sksr = 1.0 ; } else if ( rtB .
e2wraft2ng - rtB . drskglgsan > 0.05 ) { rtB . beqgjbeb4n = 6.0 ; } break ;
case lsz0f01mlb : if ( rtDW . bs44prev55 [ 0 ] == 2.0 ) { iorywy0wsd ( rtB .
drskglgsan , rtB . npmfe0f0qo , rtB . e2wraft2ng , rtDW . bs44prev55 ) ; rtDW
. mbshdldyye = m43fidgtip ; rtB . ooycaplx1k = 1.0 ; rtB . fpjwalqauw = 1.0 ;
rtB . f2njjfiimh = 0.0 ; rtB . beqgjbeb4n = 0.0 ; rtB . cu4w31sksr = 0.0 ;
rtB . bzbuyck32c = 0.0 ; } else if ( rtDW . bs44prev55 [ 0 ] == 1.0 ) {
iorywy0wsd ( rtB . drskglgsan , rtB . npmfe0f0qo , rtB . e2wraft2ng , rtDW .
bs44prev55 ) ; rtDW . mbshdldyye = ao52q1jmvf ; rtB . f2njjfiimh = 1.0 ; rtB
. fpjwalqauw = 1.0 ; rtB . ooycaplx1k = 0.0 ; rtB . cu4w31sksr = 0.0 ; rtB .
beqgjbeb4n = 0.0 ; rtB . bzbuyck32c = 0.0 ; } else if ( rtB . drskglgsan -
rtB . npmfe0f0qo > 0.05 ) { rtB . cu4w31sksr = 1.0 ; } else if ( rtB .
npmfe0f0qo - rtB . drskglgsan > 0.05 ) { rtB . beqgjbeb4n = 1.0 ; } break ;
default : if ( rtDW . bs44prev55 [ 0 ] == 3.0 ) { rtDW . mbshdldyye =
lsz0f01mlb ; rtB . ooycaplx1k = 1.0 ; rtB . f2njjfiimh = 1.0 ; rtB .
fpjwalqauw = 0.0 ; rtB . bzbuyck32c = 0.0 ; rtB . cu4w31sksr = 0.0 ; rtB .
beqgjbeb4n = 0.0 ; } else if ( rtDW . bs44prev55 [ 0 ] == 2.0 ) { rtDW .
mbshdldyye = m43fidgtip ; rtB . ooycaplx1k = 1.0 ; rtB . fpjwalqauw = 1.0 ;
rtB . f2njjfiimh = 0.0 ; rtB . beqgjbeb4n = 0.0 ; rtB . cu4w31sksr = 0.0 ;
rtB . bzbuyck32c = 0.0 ; } else if ( rtDW . bs44prev55 [ 0 ] == 3.0 ) { rtDW
. mbshdldyye = ao52q1jmvf ; rtB . f2njjfiimh = 1.0 ; rtB . fpjwalqauw = 1.0 ;
rtB . ooycaplx1k = 0.0 ; rtB . cu4w31sksr = 0.0 ; rtB . beqgjbeb4n = 0.0 ;
rtB . bzbuyck32c = 0.0 ; } break ; } } break ; case bvleqw5ozo : x_tmp [ 0 ]
= rtB . drskglgsan ; x_tmp [ 1 ] = rtB . npmfe0f0qo ; x_tmp [ 2 ] = rtB .
e2wraft2ng ; if ( muDoubleScalarAbs ( jgoxaelh54 ( x_tmp ) - o0rxtgbzrx (
x_tmp ) ) > rtDW . csjulonnym ) { rtDW . krfhocoehg = a45td1sxhg ; rtDW .
mbshdldyye = nf1bk3lmep ; } break ; default : x_tmp [ 0 ] = rtB . drskglgsan
; x_tmp [ 1 ] = rtB . npmfe0f0qo ; x_tmp [ 2 ] = rtB . e2wraft2ng ; if (
muDoubleScalarAbs ( jgoxaelh54 ( x_tmp ) - o0rxtgbzrx ( x_tmp ) ) > rtDW .
csjulonnym ) { rtDW . krfhocoehg = a45td1sxhg ; rtDW . mbshdldyye =
nf1bk3lmep ; } break ; } } rtB . ianuzwuuzi [ 0 ] = rtB . cu4w31sksr ; rtB .
ianuzwuuzi [ 1 ] = 0.0 ; rtB . ianuzwuuzi [ 2 ] = 0.0 ; rtDW . dzce5s4u5n [ 0
] = ! ( rtB . ianuzwuuzi [ 0 ] == rtDW . dzce5s4u5n [ 1 ] ) ; rtDW .
dzce5s4u5n [ 1 ] = rtB . ianuzwuuzi [ 0 ] ; rtB . ianuzwuuzi [ 0 ] = rtDW .
dzce5s4u5n [ 1 ] ; rtB . ianuzwuuzi [ 3 ] = rtDW . dzce5s4u5n [ 0 ] ; rtB .
nejmax202r [ 0 ] = rtB . f2njjfiimh ; rtB . nejmax202r [ 1 ] = 0.0 ; rtB .
nejmax202r [ 2 ] = 0.0 ; rtDW . pq5xyicbd0 [ 0 ] = ! ( rtB . nejmax202r [ 0 ]
== rtDW . pq5xyicbd0 [ 1 ] ) ; rtDW . pq5xyicbd0 [ 1 ] = rtB . nejmax202r [ 0
] ; rtB . nejmax202r [ 0 ] = rtDW . pq5xyicbd0 [ 1 ] ; rtB . nejmax202r [ 3 ]
= rtDW . pq5xyicbd0 [ 0 ] ; rtB . kqdsxgdce3 [ 0 ] = rtB . beqgjbeb4n ; rtB .
kqdsxgdce3 [ 1 ] = 0.0 ; rtB . kqdsxgdce3 [ 2 ] = 0.0 ; rtDW . fzlu0vneeb [ 0
] = ! ( rtB . kqdsxgdce3 [ 0 ] == rtDW . fzlu0vneeb [ 1 ] ) ; rtDW .
fzlu0vneeb [ 1 ] = rtB . kqdsxgdce3 [ 0 ] ; rtB . kqdsxgdce3 [ 0 ] = rtDW .
fzlu0vneeb [ 1 ] ; rtB . kqdsxgdce3 [ 3 ] = rtDW . fzlu0vneeb [ 0 ] ; rtB .
fvwqlwkcjj [ 0 ] = rtB . fpjwalqauw ; rtB . fvwqlwkcjj [ 1 ] = 0.0 ; rtB .
fvwqlwkcjj [ 2 ] = 0.0 ; rtDW . afo130a2ai [ 0 ] = ! ( rtB . fvwqlwkcjj [ 0 ]
== rtDW . afo130a2ai [ 1 ] ) ; rtDW . afo130a2ai [ 1 ] = rtB . fvwqlwkcjj [ 0
] ; rtB . fvwqlwkcjj [ 0 ] = rtDW . afo130a2ai [ 1 ] ; rtB . fvwqlwkcjj [ 3 ]
= rtDW . afo130a2ai [ 0 ] ; rtB . pmvqkgardu [ 0 ] = rtB . bzbuyck32c ; rtB .
pmvqkgardu [ 1 ] = 0.0 ; rtB . pmvqkgardu [ 2 ] = 0.0 ; rtDW . pn3wcnuo5t [ 0
] = ! ( rtB . pmvqkgardu [ 0 ] == rtDW . pn3wcnuo5t [ 1 ] ) ; rtDW .
pn3wcnuo5t [ 1 ] = rtB . pmvqkgardu [ 0 ] ; rtB . pmvqkgardu [ 0 ] = rtDW .
pn3wcnuo5t [ 1 ] ; rtB . pmvqkgardu [ 3 ] = rtDW . pn3wcnuo5t [ 0 ] ; rtB .
astrqosyep [ 0 ] = rtB . ooycaplx1k ; rtB . astrqosyep [ 1 ] = 0.0 ; rtB .
astrqosyep [ 2 ] = 0.0 ; rtDW . k0mu5wnpfu [ 0 ] = ! ( rtB . astrqosyep [ 0 ]
== rtDW . k0mu5wnpfu [ 1 ] ) ; rtDW . k0mu5wnpfu [ 1 ] = rtB . astrqosyep [ 0
] ; rtB . astrqosyep [ 0 ] = rtDW . k0mu5wnpfu [ 1 ] ; rtB . astrqosyep [ 3 ]
= rtDW . k0mu5wnpfu [ 0 ] ; rtB . jmjhdalsff = rtDW . bvugbmrj4h ; rtB .
kpzbmh0lai = rtDW . eqmj2sg4qm ; if ( rtDW . jk35ychlbp < 131071U ) { rtDW .
jk35ychlbp ++ ; } rtDW . c54tg2rdm5 = mwoqsxi53i ; if ( rtDW . cqxvkxfbpc ==
0U ) { rtDW . cqxvkxfbpc = 1U ; rtDW . h2swncc3e3 = kia3u5csnp ; } else {
switch ( rtDW . h2swncc3e3 ) { case bbvscjmqhg : rtB . o1lapiknns = 2.0 ; if
( ( rtB . jmjhdalsff > 0.918 ) || ( rtDW . jk35ychlbp >= 70000U ) ) { rtDW .
h2swncc3e3 = nq1uwram4z ; rtB . o1lapiknns = 1.0 ; } break ; case nq1uwram4z
: rtB . o1lapiknns = 1.0 ; if ( rtB . kpzbmh0lai < 0.3 ) { rtDW . jk35ychlbp
= 0U ; rtDW . h2swncc3e3 = bbvscjmqhg ; rtB . o1lapiknns = 2.0 ; } break ;
default : if ( rtB . jmjhdalsff > 0.5 ) { rtDW . h2swncc3e3 = nq1uwram4z ;
rtB . o1lapiknns = 1.0 ; } else if ( rtB . jmjhdalsff < 0.5 ) { rtDW .
jk35ychlbp = 0U ; rtDW . h2swncc3e3 = bbvscjmqhg ; rtB . o1lapiknns = 2.0 ; }
break ; } } rtB . coxqunjq31 = ( rtDW . psyjrz43fg < rtP . Cell_Max_Voltage )
; rtB . gayzlcwngn = rtP . Cell_Max_Voltage - rtDW . psyjrz43fg ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { bhiaofo00k = rtP . DiscretePIDController_P
* rtB . gayzlcwngn + rtDW . dis0i10foe ; if ( bhiaofo00k > rtP .
DiscretePIDController_UpperSaturationLimit ) { rtB . ogpcqmf3h5 = rtP .
DiscretePIDController_UpperSaturationLimit ; } else if ( bhiaofo00k < rtP .
DiscretePIDController_LowerSaturationLimit ) { rtB . ogpcqmf3h5 = rtP .
DiscretePIDController_LowerSaturationLimit ; } else { rtB . ogpcqmf3h5 =
bhiaofo00k ; } } if ( rtB . coxqunjq31 ) { rtB . cc5d4yqgrh = rtP . CC ; }
else { rtB . cc5d4yqgrh = rtB . ogpcqmf3h5 ; } if ( ( int32_T ) rtB .
o1lapiknns == 1 ) { rtB . hvd3jbccmz = rtP . I_disch ; } else { rtB .
hvd3jbccmz = rtB . cc5d4yqgrh ; } rtB . c5ugal2ihq [ 0 ] = rtB . hvd3jbccmz ;
rtB . c5ugal2ihq [ 1 ] = 0.0 ; rtB . c5ugal2ihq [ 2 ] = 0.0 ; rtDW .
l0z0oxic4r [ 0 ] = ! ( rtB . c5ugal2ihq [ 0 ] == rtDW . l0z0oxic4r [ 1 ] ) ;
rtDW . l0z0oxic4r [ 1 ] = rtB . c5ugal2ihq [ 0 ] ; rtB . c5ugal2ihq [ 0 ] =
rtDW . l0z0oxic4r [ 1 ] ; rtB . c5ugal2ihq [ 3 ] = rtDW . l0z0oxic4r [ 0 ] ;
if ( rtDW . h02ooleufk ) { tmp [ 0 ] = rtP . RTP_78EAB9F6_stateOfCharge_Value
; tmp [ 1 ] = rtP . RTP_00F46B65_stateOfCharge_Value ; tmp [ 2 ] = rtP .
RTP_77F35BF3_stateOfCharge_Value ; tmp [ 3 ] = rtP .
RTP_00F46B65_cell_temperature_Value ; tmp [ 4 ] = rtP .
RTP_77F35BF3_cell_temperature_Value ; tmp [ 5 ] = rtP .
RTP_78EAB9F6_cell_temperature_Value ; diag = rtw_create_diagnostics ( ) ;
diagTree = neu_diagnostic_manager_get_initial_tree ( diag ) ; expl_temp .
mRealParameters . mN = 6 ; expl_temp . mRealParameters . mX = & tmp [ 0 ] ;
expl_temp . mLogicalParameters . mN = 0 ; expl_temp . mLogicalParameters . mX
= NULL ; expl_temp . mIntegerParameters . mN = 0 ; expl_temp .
mIntegerParameters . mX = NULL ; expl_temp . mIndexParameters . mN = 0 ;
expl_temp . mIndexParameters . mX = NULL ; ok = nesl_rtp_manager_set_rtps ( (
NeslRtpManager * ) rtDW . d4vkr2glbb , ssGetT ( rtS ) , expl_temp , diag ) ;
if ( ! ok ) { ok = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
ok ) { msg = rtw_diagnostics_msg ( diagTree ) ; ssSetErrorStatus ( rtS , msg
) ; } } } rtDW . h02ooleufk = false ; simulationData = ( NeslSimulationData *
) rtDW . kxtcxp30gh ; time = ssGetT ( rtS ) ; simulationData -> mData ->
mTime . mN = 1 ; simulationData -> mData -> mTime . mX = & time ;
simulationData -> mData -> mContStates . mN = 0 ; simulationData -> mData ->
mContStates . mX = NULL ; simulationData -> mData -> mDiscStates . mN = 54 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . cip2zdf2me [ 0 ] ;
simulationData -> mData -> mModeVector . mN = 42 ; simulationData -> mData ->
mModeVector . mX = & rtDW . b01i0unp5j [ 0 ] ; ok = false ; simulationData ->
mData -> mFoundZcEvents = ok ; simulationData -> mData -> mHadEvents = false
; simulationData -> mData -> mIsMajorTimeStep = true ; ok = ( ssGetMdlInfoPtr
( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = ok ; simulationData -> mData -> mIsSolverCheckingCIC =
false ; simulationData -> mData -> mIsComputingJacobian = false ;
simulationData -> mData -> mIsEvaluatingF0 = false ; simulationData -> mData
-> mIsSolverRequestingReset = false ; simulationData -> mData ->
mIsModeUpdateTimeStep = true ; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = rtB .
ianuzwuuzi [ 0 ] ; tmp_p [ 1 ] = rtB . ianuzwuuzi [ 1 ] ; tmp_p [ 2 ] = rtB .
ianuzwuuzi [ 2 ] ; tmp_p [ 3 ] = rtB . ianuzwuuzi [ 3 ] ; tmp_e [ 1 ] = 4 ;
tmp_p [ 4 ] = rtB . nejmax202r [ 0 ] ; tmp_p [ 5 ] = rtB . nejmax202r [ 1 ] ;
tmp_p [ 6 ] = rtB . nejmax202r [ 2 ] ; tmp_p [ 7 ] = rtB . nejmax202r [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . kqdsxgdce3 [ 0 ] ; tmp_p [ 9 ] = rtB .
kqdsxgdce3 [ 1 ] ; tmp_p [ 10 ] = rtB . kqdsxgdce3 [ 2 ] ; tmp_p [ 11 ] = rtB
. kqdsxgdce3 [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] = rtB . fvwqlwkcjj [ 0 ]
; tmp_p [ 13 ] = rtB . fvwqlwkcjj [ 1 ] ; tmp_p [ 14 ] = rtB . fvwqlwkcjj [ 2
] ; tmp_p [ 15 ] = rtB . fvwqlwkcjj [ 3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] =
rtB . pmvqkgardu [ 0 ] ; tmp_p [ 17 ] = rtB . pmvqkgardu [ 1 ] ; tmp_p [ 18 ]
= rtB . pmvqkgardu [ 2 ] ; tmp_p [ 19 ] = rtB . pmvqkgardu [ 3 ] ; tmp_e [ 5
] = 20 ; tmp_p [ 20 ] = rtB . astrqosyep [ 0 ] ; tmp_p [ 21 ] = rtB .
astrqosyep [ 1 ] ; tmp_p [ 22 ] = rtB . astrqosyep [ 2 ] ; tmp_p [ 23 ] = rtB
. astrqosyep [ 3 ] ; tmp_e [ 6 ] = 24 ; tmp_p [ 24 ] = rtB . c5ugal2ihq [ 0 ]
; tmp_p [ 25 ] = rtB . c5ugal2ihq [ 1 ] ; tmp_p [ 26 ] = rtB . c5ugal2ihq [ 2
] ; tmp_p [ 27 ] = rtB . c5ugal2ihq [ 3 ] ; tmp_e [ 7 ] = 28 ; simulationData
-> mData -> mInputValues . mN = 28 ; simulationData -> mData -> mInputValues
. mX = & tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 8 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mOutputs . mN = 96 ; simulationData -> mData ->
mOutputs . mX = & rtB . cmp2isfx12 [ 0 ] ; simulationData -> mData ->
mTolerances . mN = 0 ; simulationData -> mData -> mTolerances . mX = NULL ;
simulationData -> mData -> mCstateHasChanged = false ; simulationData ->
mData -> mDstateHasChanged = false ; time_p = ssGetTaskTime ( rtS , 0 ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_p ; isHit = 0 ; simulationData -> mData -> mSampleHits . mN = 1
; simulationData -> mData -> mSampleHits . mX = & isHit ; simulationData ->
mData -> mIsFundamentalSampleHit = true ; simulationData -> mData ->
mHadEvents = false ; diag = ( NeuDiagnosticManager * ) rtDW . lbsdrhids0 ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diag ) ; j =
ne_simulator_method ( ( NeslSimulator * ) rtDW . cg3qopfbl1 ,
NESL_SIM_OUTPUTS , simulationData , diag ) ; if ( j != 0 ) { ok =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( ok ) { msg_p =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg_p ) ; }
} ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; simulationData = (
NeslSimulationData * ) rtDW . ikyqkmvn3c ; time_e = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_e ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . pa10wnnpub ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . po3zfdjx02 ; ok =
false ; simulationData -> mData -> mFoundZcEvents = ok ; simulationData ->
mData -> mHadEvents = false ; simulationData -> mData -> mIsMajorTimeStep =
true ; ok = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U )
; simulationData -> mData -> mIsSolverAssertCheck = ok ; simulationData ->
mData -> mIsSolverCheckingCIC = false ; simulationData -> mData ->
mIsComputingJacobian = false ; simulationData -> mData -> mIsEvaluatingF0 =
false ; simulationData -> mData -> mIsSolverRequestingReset = false ;
simulationData -> mData -> mIsModeUpdateTimeStep = true ; tmp_m [ 0 ] = 0 ;
tmp_i [ 0 ] = rtB . ianuzwuuzi [ 0 ] ; tmp_i [ 1 ] = rtB . ianuzwuuzi [ 1 ] ;
tmp_i [ 2 ] = rtB . ianuzwuuzi [ 2 ] ; tmp_i [ 3 ] = rtB . ianuzwuuzi [ 3 ] ;
tmp_m [ 1 ] = 4 ; tmp_i [ 4 ] = rtB . nejmax202r [ 0 ] ; tmp_i [ 5 ] = rtB .
nejmax202r [ 1 ] ; tmp_i [ 6 ] = rtB . nejmax202r [ 2 ] ; tmp_i [ 7 ] = rtB .
nejmax202r [ 3 ] ; tmp_m [ 2 ] = 8 ; tmp_i [ 8 ] = rtB . kqdsxgdce3 [ 0 ] ;
tmp_i [ 9 ] = rtB . kqdsxgdce3 [ 1 ] ; tmp_i [ 10 ] = rtB . kqdsxgdce3 [ 2 ]
; tmp_i [ 11 ] = rtB . kqdsxgdce3 [ 3 ] ; tmp_m [ 3 ] = 12 ; tmp_i [ 12 ] =
rtB . fvwqlwkcjj [ 0 ] ; tmp_i [ 13 ] = rtB . fvwqlwkcjj [ 1 ] ; tmp_i [ 14 ]
= rtB . fvwqlwkcjj [ 2 ] ; tmp_i [ 15 ] = rtB . fvwqlwkcjj [ 3 ] ; tmp_m [ 4
] = 16 ; tmp_i [ 16 ] = rtB . pmvqkgardu [ 0 ] ; tmp_i [ 17 ] = rtB .
pmvqkgardu [ 1 ] ; tmp_i [ 18 ] = rtB . pmvqkgardu [ 2 ] ; tmp_i [ 19 ] = rtB
. pmvqkgardu [ 3 ] ; tmp_m [ 5 ] = 20 ; tmp_i [ 20 ] = rtB . astrqosyep [ 0 ]
; tmp_i [ 21 ] = rtB . astrqosyep [ 1 ] ; tmp_i [ 22 ] = rtB . astrqosyep [ 2
] ; tmp_i [ 23 ] = rtB . astrqosyep [ 3 ] ; tmp_m [ 6 ] = 24 ; tmp_i [ 24 ] =
rtB . c5ugal2ihq [ 0 ] ; tmp_i [ 25 ] = rtB . c5ugal2ihq [ 1 ] ; tmp_i [ 26 ]
= rtB . c5ugal2ihq [ 2 ] ; tmp_i [ 27 ] = rtB . c5ugal2ihq [ 3 ] ; tmp_m [ 7
] = 28 ; memcpy ( & tmp_i [ 28 ] , & rtB . cmp2isfx12 [ 0 ] , 96U * sizeof (
real_T ) ) ; tmp_m [ 8 ] = 124 ; simulationData -> mData -> mInputValues . mN
= 124 ; simulationData -> mData -> mInputValues . mX = & tmp_i [ 0 ] ;
simulationData -> mData -> mInputOffsets . mN = 9 ; simulationData -> mData
-> mInputOffsets . mX = & tmp_m [ 0 ] ; simulationData -> mData -> mOutputs .
mN = 13 ; simulationData -> mData -> mOutputs . mX = & rtB . njirpk2h0g [ 0 ]
; simulationData -> mData -> mTolerances . mN = 0 ; simulationData -> mData
-> mTolerances . mX = NULL ; simulationData -> mData -> mCstateHasChanged =
false ; simulationData -> mData -> mDstateHasChanged = false ; time_i =
ssGetTaskTime ( rtS , 0 ) ; simulationData -> mData -> mTime . mN = 1 ;
simulationData -> mData -> mTime . mX = & time_i ; isHit_p = 0 ;
simulationData -> mData -> mSampleHits . mN = 1 ; simulationData -> mData ->
mSampleHits . mX = & isHit_p ; simulationData -> mData ->
mIsFundamentalSampleHit = true ; simulationData -> mData -> mHadEvents =
false ; diag = ( NeuDiagnosticManager * ) rtDW . lqqrot5334 ;
diagnosticTree_p = neu_diagnostic_manager_get_initial_tree ( diag ) ; j =
ne_simulator_method ( ( NeslSimulator * ) rtDW . d5jesyet42 ,
NESL_SIM_OUTPUTS , simulationData , diag ) ; if ( j != 0 ) { ok =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( ok ) { msg_e =
rtw_diagnostics_msg ( diagnosticTree_p ) ; ssSetErrorStatus ( rtS , msg_e ) ;
} } ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; if ( ssIsSampleHit (
rtS , 1 , 0 ) ) { rtB . ii5sqkoni1 = ( rtB . cc5d4yqgrh - rtB . ogpcqmf3h5 )
* rtP . DiscretePIDController_Kt + rtP . DiscretePIDController_I * rtB .
gayzlcwngn ; } bhiaofo00k = muDoubleScalarMax ( rtB . njirpk2h0g [ 11 ] , rtB
. njirpk2h0g [ 9 ] ) ; rtB . aurf0yuixe = muDoubleScalarMax ( bhiaofo00k ,
rtB . njirpk2h0g [ 10 ] ) ; rtB . bd21p4dssk = rtDW . n3m1icn3qb ; rtB .
cbid5mayod = rtDW . g3fidn3w2t ; rtB . ejirnozlpr = rtDW . drktkoupe5 ; rtB .
he1tpnoytf = muDoubleScalarMax ( muDoubleScalarMax ( rtB . bd21p4dssk , rtB .
cbid5mayod ) , rtB . ejirnozlpr ) ; rtB . o4w5dvpcom = muDoubleScalarMin (
muDoubleScalarMin ( rtB . bd21p4dssk , rtB . cbid5mayod ) , rtB . ejirnozlpr
) ; iyl12wlled [ 0 ] = rtDW . mmdrnhie50 [ 0 ] ; iyl12wlled [ 1 ] = rtDW .
mmdrnhie50 [ 1 ] ; iyl12wlled [ 2 ] = rtDW . mmdrnhie50 [ 2 ] ; iyl12wlled [
3 ] = rtDW . mmdrnhie50 [ 3 ] ; simulationData = ( NeslSimulationData * )
rtDW . hw5hoy3g0v ; time_m = ssGetT ( rtS ) ; simulationData -> mData ->
mTime . mN = 1 ; simulationData -> mData -> mTime . mX = & time_m ;
simulationData -> mData -> mContStates . mN = 0 ; simulationData -> mData ->
mContStates . mX = NULL ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . pp5p4tbowj ;
simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData ->
mModeVector . mX = & rtDW . hro2jwrxcl ; ok = false ; simulationData -> mData
-> mFoundZcEvents = ok ; simulationData -> mData -> mHadEvents = false ;
simulationData -> mData -> mIsMajorTimeStep = true ; ok = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = ok ; simulationData -> mData -> mIsSolverCheckingCIC =
false ; simulationData -> mData -> mIsComputingJacobian = false ;
simulationData -> mData -> mIsEvaluatingF0 = false ; simulationData -> mData
-> mIsSolverRequestingReset = false ; simulationData -> mData ->
mIsModeUpdateTimeStep = true ; tmp_j [ 0 ] = 0 ; tmp_g [ 0 ] = rtB .
ianuzwuuzi [ 0 ] ; tmp_g [ 1 ] = rtB . ianuzwuuzi [ 1 ] ; tmp_g [ 2 ] = rtB .
ianuzwuuzi [ 2 ] ; tmp_g [ 3 ] = rtB . ianuzwuuzi [ 3 ] ; tmp_j [ 1 ] = 4 ;
tmp_g [ 4 ] = rtB . nejmax202r [ 0 ] ; tmp_g [ 5 ] = rtB . nejmax202r [ 1 ] ;
tmp_g [ 6 ] = rtB . nejmax202r [ 2 ] ; tmp_g [ 7 ] = rtB . nejmax202r [ 3 ] ;
tmp_j [ 2 ] = 8 ; tmp_g [ 8 ] = rtB . kqdsxgdce3 [ 0 ] ; tmp_g [ 9 ] = rtB .
kqdsxgdce3 [ 1 ] ; tmp_g [ 10 ] = rtB . kqdsxgdce3 [ 2 ] ; tmp_g [ 11 ] = rtB
. kqdsxgdce3 [ 3 ] ; tmp_j [ 3 ] = 12 ; tmp_g [ 12 ] = rtB . fvwqlwkcjj [ 0 ]
; tmp_g [ 13 ] = rtB . fvwqlwkcjj [ 1 ] ; tmp_g [ 14 ] = rtB . fvwqlwkcjj [ 2
] ; tmp_g [ 15 ] = rtB . fvwqlwkcjj [ 3 ] ; tmp_j [ 4 ] = 16 ; tmp_g [ 16 ] =
rtB . pmvqkgardu [ 0 ] ; tmp_g [ 17 ] = rtB . pmvqkgardu [ 1 ] ; tmp_g [ 18 ]
= rtB . pmvqkgardu [ 2 ] ; tmp_g [ 19 ] = rtB . pmvqkgardu [ 3 ] ; tmp_j [ 5
] = 20 ; tmp_g [ 20 ] = rtB . astrqosyep [ 0 ] ; tmp_g [ 21 ] = rtB .
astrqosyep [ 1 ] ; tmp_g [ 22 ] = rtB . astrqosyep [ 2 ] ; tmp_g [ 23 ] = rtB
. astrqosyep [ 3 ] ; tmp_j [ 6 ] = 24 ; tmp_g [ 24 ] = rtB . c5ugal2ihq [ 0 ]
; tmp_g [ 25 ] = rtB . c5ugal2ihq [ 1 ] ; tmp_g [ 26 ] = rtB . c5ugal2ihq [ 2
] ; tmp_g [ 27 ] = rtB . c5ugal2ihq [ 3 ] ; tmp_j [ 7 ] = 28 ; memcpy ( &
tmp_g [ 28 ] , & rtB . cmp2isfx12 [ 0 ] , 96U * sizeof ( real_T ) ) ; tmp_j [
8 ] = 124 ; simulationData -> mData -> mInputValues . mN = 124 ;
simulationData -> mData -> mInputValues . mX = & tmp_g [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 9 ; simulationData -> mData -> mInputOffsets
. mX = & tmp_j [ 0 ] ; simulationData -> mData -> mOutputs . mN = 3 ;
simulationData -> mData -> mOutputs . mX = & rtB . jgxxaq3f3y [ 0 ] ;
simulationData -> mData -> mTolerances . mN = 0 ; simulationData -> mData ->
mTolerances . mX = NULL ; simulationData -> mData -> mCstateHasChanged =
false ; simulationData -> mData -> mDstateHasChanged = false ; time_g =
ssGetTaskTime ( rtS , 0 ) ; simulationData -> mData -> mTime . mN = 1 ;
simulationData -> mData -> mTime . mX = & time_g ; isHit_e = 0 ;
simulationData -> mData -> mSampleHits . mN = 1 ; simulationData -> mData ->
mSampleHits . mX = & isHit_e ; simulationData -> mData ->
mIsFundamentalSampleHit = true ; simulationData -> mData -> mHadEvents =
false ; diag = ( NeuDiagnosticManager * ) rtDW . gdnrurmlfy ;
diagnosticTree_e = neu_diagnostic_manager_get_initial_tree ( diag ) ; j =
ne_simulator_method ( ( NeslSimulator * ) rtDW . f015bmui2j ,
NESL_SIM_OUTPUTS , simulationData , diag ) ; if ( j != 0 ) { ok =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( ok ) { msg_i =
rtw_diagnostics_msg ( diagnosticTree_e ) ; ssSetErrorStatus ( rtS , msg_i ) ;
} } ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; bhiaofo00k = rtP .
Gain1_Gain * rtB . jgxxaq3f3y [ 0 ] ; bhiaofo00k = bhiaofo00k / rtB .
g2p05i01qe + rtB . bd21p4dssk ; rtDW . myycljfyci = mwoqsxi53i ; T1_1 = rtDW
. c0jez5cx3s * rtDW . ixyulwyx33 ; b05mayt2it = ( 1.0 - muDoubleScalarExp ( -
0.1 / T1_1 ) ) * ( rtDW . c0jez5cx3s * rtB . jgxxaq3f3y [ 0 ] ) +
muDoubleScalarExp ( - 0.1 / T1_1 ) * rtDW . p4nbtb34ur ; oc0yan0vo5 = ( rtDW
. hmipvslkr1 + b05mayt2it ) + rtB . jgxxaq3f3y [ 0 ] * rtDW . emkghimbji ;
gjjvazwgdy = rtP . Output_Gain * rtDW . pvji3kkf3u + rtB . njirpk2h0g [ 11 ]
; rtDW . exf42eu50q = mwoqsxi53i ; K_1_idx_0 = muDoubleScalarExp ( - 0.1 /
T1_1 ) ; A_1 [ 0 ] = 1.0 ; A_1 [ 2 ] = 0.0 ; A_1 [ 1 ] = 0.0 ; A_1 [ 3 ] =
muDoubleScalarExp ( - 0.1 / T1_1 ) ; K_1_idx_1 = iyl12wlled [ 0 ] ;
cifoqbtak5_idx_2 = iyl12wlled [ 1 ] ; cifoqbtak5_idx_1 = iyl12wlled [ 2 ] ;
cifoqbtak5_idx_3 = iyl12wlled [ 3 ] ; for ( j = 0 ; j < 2 ; j ++ ) { T1_1 =
A_1 [ j + 2 ] ; A_1_p = ( int32_T ) A_1 [ j ] ; C1_idx_0 = T1_1 *
cifoqbtak5_idx_1 + ( real_T ) A_1_p * K_1_idx_1 ; T1_1 = T1_1 *
cifoqbtak5_idx_3 + ( real_T ) A_1_p * cifoqbtak5_idx_2 ; iyl12wlled [ j ] =
T1_1 * 0.0 + C1_idx_0 ; iyl12wlled [ j + 2 ] = T1_1 * K_1_idx_0 + C1_idx_0 *
0.0 ; } P_Pre_1 [ 0 ] = iyl12wlled [ 0 ] + rtP . Noise1_Value [ 0 ] ; P_Pre_1
[ 1 ] = iyl12wlled [ 1 ] ; P_Pre_1 [ 2 ] = iyl12wlled [ 2 ] ; P_Pre_1 [ 3 ] =
rtP . Noise1_Value [ 0 ] + iyl12wlled [ 3 ] ; if ( ( rtB . njirpk2h0g [ 6 ]
>= 278.15 ) && ( rtB . njirpk2h0g [ 6 ] < 293.15 ) ) { CM1_1 = ( ( ( ( 1.106
- 17.6862 * bhiaofo00k ) + bhiaofo00k * bhiaofo00k * 123.44219999999999 ) + -
345.6064 * muDoubleScalarPower ( bhiaofo00k , 3.0 ) ) + 415.27 *
muDoubleScalarPower ( bhiaofo00k , 4.0 ) ) - 176.20080000000002 *
muDoubleScalarPower ( bhiaofo00k , 5.0 ) ; } else if ( ( rtB . njirpk2h0g [ 6
] >= 293.15 ) && ( rtB . njirpk2h0g [ 6 ] < 313.15 ) ) { CM1_1 = ( ( ( (
0.9211 - 10.8908 * bhiaofo00k ) + bhiaofo00k * bhiaofo00k *
69.168900000000008 ) + - 185.6436 * muDoubleScalarPower ( bhiaofo00k , 3.0 )
) + 220.99599999999998 * muDoubleScalarPower ( bhiaofo00k , 4.0 ) ) - 93.7992
* muDoubleScalarPower ( bhiaofo00k , 5.0 ) ; } else if ( rtB . njirpk2h0g [ 6
] >= 313.15 ) { CM1_1 = ( ( ( ( 0.6001 - 3.0612 * bhiaofo00k ) + bhiaofo00k *
bhiaofo00k * 14.7693 ) + - 31.1136 * muDoubleScalarPower ( bhiaofo00k , 3.0 )
) + 33.68 * muDoubleScalarPower ( bhiaofo00k , 4.0 ) ) - 13.622399999999999 *
muDoubleScalarPower ( bhiaofo00k , 5.0 ) ; } C1_idx_0 = CM1_1 ; K_1_idx_0 =
P_Pre_1 [ 0 ] * CM1_1 - iyl12wlled [ 2 ] ; T1_1 = iyl12wlled [ 1 ] * CM1_1 -
P_Pre_1 [ 3 ] ; CM1_1 = 1.0 / ( ( ( CM1_1 * P_Pre_1 [ 0 ] - iyl12wlled [ 1 ]
) * CM1_1 - ( CM1_1 * iyl12wlled [ 2 ] - P_Pre_1 [ 3 ] ) ) + rtP .
Noise1_Value [ 1 ] ) ; K_1_idx_0 *= CM1_1 ; K_1_idx_1 = T1_1 * CM1_1 ; CM1_1
= gjjvazwgdy - oc0yan0vo5 ; oc0yan0vo5 = 1.0 - K_1_idx_0 * C1_idx_0 ;
gjjvazwgdy = 0.0 - K_1_idx_1 * C1_idx_0 ; for ( j = 0 ; j < 2 ; j ++ ) { T1_1
= P_Pre_1 [ ( j << 1 ) + 1 ] ; C1_idx_0 = P_Pre_1 [ j << 1 ] ; A_1 [ j << 1 ]
= ( 0.0 - ( - K_1_idx_0 ) ) * T1_1 + C1_idx_0 * oc0yan0vo5 ; A_1 [ ( j << 1 )
+ 1 ] = ( 1.0 - ( - K_1_idx_1 ) ) * T1_1 + C1_idx_0 * gjjvazwgdy ; } rtB .
fcejgnms2p = muDoubleScalarMax ( 0.0 , muDoubleScalarMin ( 1.0 , K_1_idx_0 *
CM1_1 + bhiaofo00k ) ) ; rtB . k50sc0nhbf = K_1_idx_1 * CM1_1 + b05mayt2it ;
rtB . jeirpnbx5x [ 0 ] = A_1 [ 0 ] ; rtB . jeirpnbx5x [ 1 ] = A_1 [ 2 ] ; rtB
. jeirpnbx5x [ 2 ] = A_1 [ 1 ] ; rtB . jeirpnbx5x [ 3 ] = A_1 [ 3 ] ; CM1_1 =
rtP . Gain1_Gain_gt5xi45qct * rtB . jgxxaq3f3y [ 1 ] ; bhiaofo00k = CM1_1 /
rtB . jmu41cjmsi + rtB . cbid5mayod ; rtDW . ka0wher03d = mwoqsxi53i ; CM1_1
= rtDW . dzqlam0y5k * rtDW . paljmtthlt ; b05mayt2it = ( 1.0 -
muDoubleScalarExp ( - 0.1 / CM1_1 ) ) * ( rtDW . dzqlam0y5k * rtB .
jgxxaq3f3y [ 1 ] ) + muDoubleScalarExp ( - 0.1 / CM1_1 ) * rtDW . ea21lklf25
; oc0yan0vo5 = ( rtDW . av2ad1yfyh + b05mayt2it ) + rtB . jgxxaq3f3y [ 1 ] *
rtDW . ctezuw3uwy ; gjjvazwgdy = rtP . Output_Gain_preff52dwy * rtDW .
h3kr20z2el + rtB . njirpk2h0g [ 9 ] ; rtDW . if1j1sqa5y = mwoqsxi53i ;
K_1_idx_0 = muDoubleScalarExp ( - 0.1 / CM1_1 ) ; iyl12wlled [ 0 ] = 1.0 ;
iyl12wlled [ 2 ] = 0.0 ; iyl12wlled [ 1 ] = 0.0 ; iyl12wlled [ 3 ] =
muDoubleScalarExp ( - 0.1 / CM1_1 ) ; CM1_1 = rtDW . anelm3x4iv [ 0 ] ; T1_1
= rtDW . anelm3x4iv [ 1 ] ; C1_idx_0 = rtDW . anelm3x4iv [ 2 ] ; K_1_idx_1 =
rtDW . anelm3x4iv [ 3 ] ; for ( j = 0 ; j < 2 ; j ++ ) { cifoqbtak5_idx_2 =
iyl12wlled [ j + 2 ] ; A_1_p = ( int32_T ) iyl12wlled [ j ] ;
cifoqbtak5_idx_1 = cifoqbtak5_idx_2 * C1_idx_0 + ( real_T ) A_1_p * CM1_1 ;
cifoqbtak5_idx_2 = cifoqbtak5_idx_2 * K_1_idx_1 + ( real_T ) A_1_p * T1_1 ;
P_Pre_1 [ j ] = cifoqbtak5_idx_2 * 0.0 + cifoqbtak5_idx_1 ; P_Pre_1 [ j + 2 ]
= cifoqbtak5_idx_2 * K_1_idx_0 + cifoqbtak5_idx_1 * 0.0 ; } A_1 [ 0 ] =
P_Pre_1 [ 0 ] + rtP . Noise1_Value_dxnz00mjf5 [ 0 ] ; A_1 [ 1 ] = P_Pre_1 [ 1
] ; A_1 [ 2 ] = P_Pre_1 [ 2 ] ; A_1 [ 3 ] = rtP . Noise1_Value_dxnz00mjf5 [ 0
] + P_Pre_1 [ 3 ] ; if ( ( rtB . njirpk2h0g [ 7 ] >= 278.15 ) && ( rtB .
njirpk2h0g [ 7 ] < 293.15 ) ) { CM1_2 = ( ( ( ( 1.0012 - 11.7566 * bhiaofo00k
) + bhiaofo00k * bhiaofo00k * 90.7668 ) + - 274.2792 * muDoubleScalarPower (
bhiaofo00k , 3.0 ) ) + 346.902 * muDoubleScalarPower ( bhiaofo00k , 4.0 ) ) -
152.47560000000001 * muDoubleScalarPower ( bhiaofo00k , 5.0 ) ; } else if ( (
rtB . njirpk2h0g [ 7 ] >= 293.15 ) && ( rtB . njirpk2h0g [ 7 ] < 313.15 ) ) {
CM1_2 = ( ( ( ( 3.3982 * bhiaofo00k + 0.0617 ) + bhiaofo00k * bhiaofo00k *
0.6378 ) + - 37.6812 * muDoubleScalarPower ( bhiaofo00k , 3.0 ) ) + 72.2555 *
muDoubleScalarPower ( bhiaofo00k , 4.0 ) ) - 37.662 * muDoubleScalarPower (
bhiaofo00k , 5.0 ) ; } else if ( rtB . njirpk2h0g [ 7 ] >= 313.15 ) { CM1_2 =
( ( ( ( 0.6614 - 7.4632 * bhiaofo00k ) + bhiaofo00k * bhiaofo00k * 48.9255 )
+ - 125.1556 * muDoubleScalarPower ( bhiaofo00k , 3.0 ) ) + 143.573 *
muDoubleScalarPower ( bhiaofo00k , 4.0 ) ) - 59.813999999999993 *
muDoubleScalarPower ( bhiaofo00k , 5.0 ) ; } CM1_1 = 1.0 / ( ( ( CM1_2 * A_1
[ 0 ] - P_Pre_1 [ 1 ] ) * CM1_2 - ( CM1_2 * P_Pre_1 [ 2 ] - A_1 [ 3 ] ) ) +
rtP . Noise1_Value_dxnz00mjf5 [ 1 ] ) ; K_1_idx_0 = ( A_1 [ 0 ] * CM1_2 -
P_Pre_1 [ 2 ] ) * CM1_1 ; K_1_idx_1 = ( P_Pre_1 [ 1 ] * CM1_2 - A_1 [ 3 ] ) *
CM1_1 ; CM1_1 = gjjvazwgdy - oc0yan0vo5 ; oc0yan0vo5 = 1.0 - K_1_idx_0 *
CM1_2 ; gjjvazwgdy = 0.0 - K_1_idx_1 * CM1_2 ; for ( j = 0 ; j < 2 ; j ++ ) {
T1_1 = A_1 [ ( j << 1 ) + 1 ] ; C1_idx_0 = A_1 [ j << 1 ] ; iyl12wlled [ j <<
1 ] = ( 0.0 - ( - K_1_idx_0 ) ) * T1_1 + C1_idx_0 * oc0yan0vo5 ; iyl12wlled [
( j << 1 ) + 1 ] = ( 1.0 - ( - K_1_idx_1 ) ) * T1_1 + C1_idx_0 * gjjvazwgdy ;
} rtB . iogf30vzmj = muDoubleScalarMax ( 0.0 , muDoubleScalarMin ( 1.0 ,
K_1_idx_0 * CM1_1 + bhiaofo00k ) ) ; rtB . en40yfhmae = K_1_idx_1 * CM1_1 +
b05mayt2it ; rtB . nk0pyr02g1 [ 0 ] = iyl12wlled [ 0 ] ; rtB . nk0pyr02g1 [ 1
] = iyl12wlled [ 2 ] ; rtB . nk0pyr02g1 [ 2 ] = iyl12wlled [ 1 ] ; rtB .
nk0pyr02g1 [ 3 ] = iyl12wlled [ 3 ] ; CM1_2 = rtP . Gain1_Gain_poh3ue1azl *
rtB . jgxxaq3f3y [ 2 ] ; CM1_2 = CM1_2 / rtB . iyyq1v520t + rtB . ejirnozlpr
; rtDW . pyo1jzv333 = mwoqsxi53i ; CM1_1 = rtDW . if1kq5x22c * rtDW .
czx0bj5ltr ; bhiaofo00k = ( 1.0 - muDoubleScalarExp ( - 0.1 / CM1_1 ) ) * (
rtDW . if1kq5x22c * rtB . jgxxaq3f3y [ 2 ] ) + muDoubleScalarExp ( - 0.1 /
CM1_1 ) * rtDW . g5uh3k3gck ; b05mayt2it = ( rtDW . gex5mkzr5u + bhiaofo00k )
+ rtB . jgxxaq3f3y [ 2 ] * rtDW . cgrc25ymx5 ; oc0yan0vo5 = rtP .
Output_Gain_o2cuudz1gi * rtDW . cufwhfilog + rtB . njirpk2h0g [ 10 ] ; rtDW .
al53uz2xdy = mwoqsxi53i ; K_1_idx_0 = muDoubleScalarExp ( - 0.1 / CM1_1 ) ;
iyl12wlled [ 0 ] = 1.0 ; iyl12wlled [ 2 ] = 0.0 ; iyl12wlled [ 1 ] = 0.0 ;
iyl12wlled [ 3 ] = muDoubleScalarExp ( - 0.1 / CM1_1 ) ; CM1_1 = rtDW .
ntrl1fa42b [ 0 ] ; T1_1 = rtDW . ntrl1fa42b [ 1 ] ; C1_idx_0 = rtDW .
ntrl1fa42b [ 2 ] ; K_1_idx_1 = rtDW . ntrl1fa42b [ 3 ] ; for ( j = 0 ; j < 2
; j ++ ) { cifoqbtak5_idx_2 = iyl12wlled [ j + 2 ] ; A_1_p = ( int32_T )
iyl12wlled [ j ] ; cifoqbtak5_idx_1 = cifoqbtak5_idx_2 * C1_idx_0 + ( real_T
) A_1_p * CM1_1 ; cifoqbtak5_idx_2 = cifoqbtak5_idx_2 * K_1_idx_1 + ( real_T
) A_1_p * T1_1 ; P_Pre_1 [ j ] = cifoqbtak5_idx_2 * 0.0 + cifoqbtak5_idx_1 ;
P_Pre_1 [ j + 2 ] = cifoqbtak5_idx_2 * K_1_idx_0 + cifoqbtak5_idx_1 * 0.0 ; }
A_1 [ 0 ] = P_Pre_1 [ 0 ] + rtP . Noise1_Value_dcsmwymza4 [ 0 ] ; A_1 [ 1 ] =
P_Pre_1 [ 1 ] ; A_1 [ 2 ] = P_Pre_1 [ 2 ] ; A_1 [ 3 ] = rtP .
Noise1_Value_dcsmwymza4 [ 0 ] + P_Pre_1 [ 3 ] ; if ( ( rtB . njirpk2h0g [ 8 ]
>= 278.15 ) && ( rtB . njirpk2h0g [ 8 ] < 293.15 ) ) { CM1_3 = ( ( ( ( 0.0742
- 3.3262 * CM1_2 ) + CM1_2 * CM1_2 * 64.2252 ) + - 242.7368 *
muDoubleScalarPower ( CM1_2 , 3.0 ) ) + 338.29 * muDoubleScalarPower ( CM1_2
, 4.0 ) ) - 156.9312 * muDoubleScalarPower ( CM1_2 , 5.0 ) ; } else if ( (
rtB . njirpk2h0g [ 8 ] >= 293.15 ) && ( rtB . njirpk2h0g [ 8 ] < 313.15 ) ) {
CM1_3 = ( ( ( ( 0.1792 - 4.7256 * CM1_2 ) + CM1_2 * CM1_2 * 65.9232 ) + -
225.5748 * muDoubleScalarPower ( CM1_2 , 3.0 ) ) + 296.447 *
muDoubleScalarPower ( CM1_2 , 4.0 ) ) - 132.0978 * muDoubleScalarPower (
CM1_2 , 5.0 ) ; } else if ( rtB . njirpk2h0g [ 8 ] >= 313.15 ) { CM1_3 = ( (
( ( - 0.3693 - 6.232 * CM1_2 ) - CM1_2 * CM1_2 * 2.7801 ) + - 47.7612 *
muDoubleScalarPower ( CM1_2 , 3.0 ) ) + 96.775 * muDoubleScalarPower ( CM1_2
, 4.0 ) ) - 51.4218 * muDoubleScalarPower ( CM1_2 , 5.0 ) ; } CM1_1 = 1.0 / (
( ( CM1_3 * A_1 [ 0 ] - P_Pre_1 [ 1 ] ) * CM1_3 - ( CM1_3 * P_Pre_1 [ 2 ] -
A_1 [ 3 ] ) ) + rtP . Noise1_Value_dcsmwymza4 [ 1 ] ) ; K_1_idx_0 = ( A_1 [ 0
] * CM1_3 - P_Pre_1 [ 2 ] ) * CM1_1 ; K_1_idx_1 = ( P_Pre_1 [ 1 ] * CM1_3 -
A_1 [ 3 ] ) * CM1_1 ; CM1_1 = oc0yan0vo5 - b05mayt2it ; oc0yan0vo5 = 1.0 -
K_1_idx_0 * CM1_3 ; gjjvazwgdy = 0.0 - K_1_idx_1 * CM1_3 ; for ( j = 0 ; j <
2 ; j ++ ) { T1_1 = A_1 [ ( j << 1 ) + 1 ] ; C1_idx_0 = A_1 [ j << 1 ] ;
iyl12wlled [ j << 1 ] = ( 0.0 - ( - K_1_idx_0 ) ) * T1_1 + C1_idx_0 *
oc0yan0vo5 ; iyl12wlled [ ( j << 1 ) + 1 ] = ( 1.0 - ( - K_1_idx_1 ) ) * T1_1
+ C1_idx_0 * gjjvazwgdy ; } rtB . kglz5kc2at = muDoubleScalarMax ( 0.0 ,
muDoubleScalarMin ( 1.0 , K_1_idx_0 * CM1_1 + CM1_2 ) ) ; rtB . jsegs02ydk =
K_1_idx_1 * CM1_1 + bhiaofo00k ; rtB . ppz4jciujz [ 0 ] = iyl12wlled [ 0 ] ;
rtB . ppz4jciujz [ 1 ] = iyl12wlled [ 2 ] ; rtB . ppz4jciujz [ 2 ] =
iyl12wlled [ 1 ] ; rtB . ppz4jciujz [ 3 ] = iyl12wlled [ 3 ] ; rtB .
fsut2120nl = look2_binlxpw ( rtB . bd21p4dssk , rtB . njirpk2h0g [ 6 ] , rtP
. uDLookupTable_bp01Data , rtP . uDLookupTable_bp02Data , rtP .
uDLookupTable_tableData , rtP . uDLookupTable_maxIndex , 11U ) ; rtB .
iewfeqykba = look2_binlxpw ( rtB . bd21p4dssk , rtB . njirpk2h0g [ 6 ] , rtP
. uDLookupTable1_bp01Data , rtP . uDLookupTable1_bp02Data , rtP .
uDLookupTable1_tableData , rtP . uDLookupTable1_maxIndex , 11U ) ; rtB .
i3oa0kjo3n = look2_binlxpw ( rtB . bd21p4dssk , rtB . njirpk2h0g [ 6 ] , rtP
. uDLookupTable2_bp01Data , rtP . uDLookupTable2_bp02Data , rtP .
uDLookupTable2_tableData , rtP . uDLookupTable2_maxIndex , 11U ) ; rtB .
ojyf5vvsjz = look2_binlxpw ( rtB . bd21p4dssk , rtB . njirpk2h0g [ 6 ] , rtP
. uDLookupTable3_bp01Data , rtP . uDLookupTable3_bp02Data , rtP .
uDLookupTable3_tableData , rtP . uDLookupTable3_maxIndex , 11U ) ; rtB .
ehadpfh5m0 = look2_binlxpw ( rtB . cbid5mayod , rtB . njirpk2h0g [ 7 ] , rtP
. uDLookupTable_bp01Data_d4l0c2eu3n , rtP . uDLookupTable_bp02Data_igfn1ibqrq
, rtP . uDLookupTable_tableData_hlscvvnmks , rtP .
uDLookupTable_maxIndex_nlac5mwhde , 11U ) ; rtB . aex4ukke0v = look2_binlxpw
( rtB . cbid5mayod , rtB . njirpk2h0g [ 7 ] , rtP .
uDLookupTable1_bp01Data_bfg1eu1pvh , rtP . uDLookupTable1_bp02Data_ivgbqofzba
, rtP . uDLookupTable1_tableData_dqqhph5tbo , rtP .
uDLookupTable1_maxIndex_loobiu0ryk , 11U ) ; rtB . lf544j4evk = look2_binlxpw
( rtB . cbid5mayod , rtB . njirpk2h0g [ 7 ] , rtP .
uDLookupTable2_bp01Data_mgwpsuhbfn , rtP . uDLookupTable2_bp02Data_f1mokd5wam
, rtP . uDLookupTable2_tableData_goz3bffxdu , rtP .
uDLookupTable2_maxIndex_nbhkjutjjk , 11U ) ; rtB . clm2z3u0kf = look2_binlxpw
( rtB . cbid5mayod , rtB . njirpk2h0g [ 7 ] , rtP .
uDLookupTable3_bp01Data_kthx3xwrzw , rtP . uDLookupTable3_bp02Data_jcwedtfnyc
, rtP . uDLookupTable3_tableData_n3uw0evcp1 , rtP .
uDLookupTable3_maxIndex_jzphk4ofch , 11U ) ; rtB . hyds5cqb3c = look2_binlxpw
( rtB . ejirnozlpr , rtB . njirpk2h0g [ 8 ] , rtP .
uDLookupTable_bp01Data_pk0rkkovdp , rtP . uDLookupTable_bp02Data_pyb5ql5bu5 ,
rtP . uDLookupTable_tableData_muyju3ve0k , rtP .
uDLookupTable_maxIndex_ipa35g4pl0 , 11U ) ; rtB . p5id2fvixd = look2_binlxpw
( rtB . ejirnozlpr , rtB . njirpk2h0g [ 8 ] , rtP .
uDLookupTable1_bp01Data_hrrvxrmyu2 , rtP . uDLookupTable1_bp02Data_bwkd20jcnc
, rtP . uDLookupTable1_tableData_ketzs12npr , rtP .
uDLookupTable1_maxIndex_jkfrxrkyya , 11U ) ; rtB . dx143zacdx = look2_binlxpw
( rtB . ejirnozlpr , rtB . njirpk2h0g [ 8 ] , rtP .
uDLookupTable2_bp01Data_ftwoipy4qs , rtP . uDLookupTable2_bp02Data_ozjcf22dfp
, rtP . uDLookupTable2_tableData_mqugaautgc , rtP .
uDLookupTable2_maxIndex_a51myydzdo , 11U ) ; rtB . mzw3hm10ix = look2_binlxpw
( rtB . ejirnozlpr , rtB . njirpk2h0g [ 8 ] , rtP .
uDLookupTable3_bp01Data_lx5pbcakwh , rtP . uDLookupTable3_bp02Data_f1mxjjevep
, rtP . uDLookupTable3_tableData_c1gnbm2fbb , rtP .
uDLookupTable3_maxIndex_ovcsjvmwm5 , 11U ) ; UNUSED_PARAMETER ( tid ) ; }
void MdlOutputsTID2 ( int_T tid ) { rtB . g2p05i01qe = rtP . Gain_Gain * rtP
. Constant_Value ; rtB . jmu41cjmsi = rtP . Gain_Gain_bfommv4lak * rtP .
Constant_Value_ay5zwh5vun ; rtB . iyyq1v520t = rtP . Gain_Gain_ofumgodytf *
rtP . Constant_Value_jz2p0lxylj ; UNUSED_PARAMETER ( tid ) ; } void MdlUpdate
( int_T tid ) { NeslSimulationData * simulationData ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; char * msg ; real_T
tmp_p [ 28 ] ; real_T time ; int32_T tmp_i ; int_T tmp_e [ 8 ] ; boolean_T
tmp ; rtDW . o4hron4umr = rtB . njirpk2h0g [ 11 ] ; rtDW . jxt12q4h4a = rtB .
njirpk2h0g [ 9 ] ; rtDW . hzivxtj4v0 = rtB . njirpk2h0g [ 10 ] ; rtDW .
bvugbmrj4h = rtB . he1tpnoytf ; rtDW . eqmj2sg4qm = rtB . o4w5dvpcom ; rtDW .
psyjrz43fg = rtB . aurf0yuixe ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtDW .
dis0i10foe += rtP . Integrator_gainval * rtB . ii5sqkoni1 ; } simulationData
= ( NeslSimulationData * ) rtDW . kxtcxp30gh ; time = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 54 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . cip2zdf2me [ 0 ] ; simulationData -> mData -> mModeVector . mN = 42 ;
simulationData -> mData -> mModeVector . mX = & rtDW . b01i0unp5j [ 0 ] ; tmp
= false ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData ->
mData -> mHadEvents = false ; simulationData -> mData -> mIsMajorTimeStep =
true ; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U
) ; simulationData -> mData -> mIsSolverAssertCheck = tmp ; simulationData ->
mData -> mIsSolverCheckingCIC = false ; simulationData -> mData ->
mIsComputingJacobian = false ; simulationData -> mData -> mIsEvaluatingF0 =
false ; simulationData -> mData -> mIsSolverRequestingReset = false ;
simulationData -> mData -> mIsModeUpdateTimeStep = true ; tmp_e [ 0 ] = 0 ;
tmp_p [ 0 ] = rtB . ianuzwuuzi [ 0 ] ; tmp_p [ 1 ] = rtB . ianuzwuuzi [ 1 ] ;
tmp_p [ 2 ] = rtB . ianuzwuuzi [ 2 ] ; tmp_p [ 3 ] = rtB . ianuzwuuzi [ 3 ] ;
tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . nejmax202r [ 0 ] ; tmp_p [ 5 ] = rtB .
nejmax202r [ 1 ] ; tmp_p [ 6 ] = rtB . nejmax202r [ 2 ] ; tmp_p [ 7 ] = rtB .
nejmax202r [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . kqdsxgdce3 [ 0 ] ;
tmp_p [ 9 ] = rtB . kqdsxgdce3 [ 1 ] ; tmp_p [ 10 ] = rtB . kqdsxgdce3 [ 2 ]
; tmp_p [ 11 ] = rtB . kqdsxgdce3 [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] =
rtB . fvwqlwkcjj [ 0 ] ; tmp_p [ 13 ] = rtB . fvwqlwkcjj [ 1 ] ; tmp_p [ 14 ]
= rtB . fvwqlwkcjj [ 2 ] ; tmp_p [ 15 ] = rtB . fvwqlwkcjj [ 3 ] ; tmp_e [ 4
] = 16 ; tmp_p [ 16 ] = rtB . pmvqkgardu [ 0 ] ; tmp_p [ 17 ] = rtB .
pmvqkgardu [ 1 ] ; tmp_p [ 18 ] = rtB . pmvqkgardu [ 2 ] ; tmp_p [ 19 ] = rtB
. pmvqkgardu [ 3 ] ; tmp_e [ 5 ] = 20 ; tmp_p [ 20 ] = rtB . astrqosyep [ 0 ]
; tmp_p [ 21 ] = rtB . astrqosyep [ 1 ] ; tmp_p [ 22 ] = rtB . astrqosyep [ 2
] ; tmp_p [ 23 ] = rtB . astrqosyep [ 3 ] ; tmp_e [ 6 ] = 24 ; tmp_p [ 24 ] =
rtB . c5ugal2ihq [ 0 ] ; tmp_p [ 25 ] = rtB . c5ugal2ihq [ 1 ] ; tmp_p [ 26 ]
= rtB . c5ugal2ihq [ 2 ] ; tmp_p [ 27 ] = rtB . c5ugal2ihq [ 3 ] ; tmp_e [ 7
] = 28 ; simulationData -> mData -> mInputValues . mN = 28 ; simulationData
-> mData -> mInputValues . mX = & tmp_p [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 8 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_e [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
lbsdrhids0 ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW
. cg3qopfbl1 , NESL_SIM_UPDATE , simulationData , diagnosticManager ) ; if (
tmp_i != 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if
( tmp ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus (
rtS , msg ) ; } } rtDW . n3m1icn3qb = rtB . fcejgnms2p ; rtDW . g3fidn3w2t =
rtB . iogf30vzmj ; rtDW . drktkoupe5 = rtB . kglz5kc2at ; rtDW . c0jez5cx3s =
rtB . iewfeqykba ; rtDW . p4nbtb34ur = rtB . k50sc0nhbf ; rtDW . hmipvslkr1 =
rtB . ojyf5vvsjz ; rtDW . emkghimbji = rtB . fsut2120nl ; rtDW . ixyulwyx33 =
rtB . i3oa0kjo3n ; rtDW . pvji3kkf3u = rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW .
hlwgqfrk4r ) * rtP . WhiteNoise_StdDev + rtP . WhiteNoise_Mean ; rtDW .
dzqlam0y5k = rtB . aex4ukke0v ; rtDW . ea21lklf25 = rtB . en40yfhmae ; rtDW .
av2ad1yfyh = rtB . clm2z3u0kf ; rtDW . ctezuw3uwy = rtB . ehadpfh5m0 ; rtDW .
paljmtthlt = rtB . lf544j4evk ; rtDW . h3kr20z2el =
rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . oybrantlp0 ) * rtP .
WhiteNoise_StdDev_p5fslwkmty + rtP . WhiteNoise_Mean_ermg12yrvu ; rtDW .
mmdrnhie50 [ 0 ] = rtB . jeirpnbx5x [ 0 ] ; rtDW . anelm3x4iv [ 0 ] = rtB .
nk0pyr02g1 [ 0 ] ; rtDW . ntrl1fa42b [ 0 ] = rtB . ppz4jciujz [ 0 ] ; rtDW .
mmdrnhie50 [ 1 ] = rtB . jeirpnbx5x [ 1 ] ; rtDW . anelm3x4iv [ 1 ] = rtB .
nk0pyr02g1 [ 1 ] ; rtDW . ntrl1fa42b [ 1 ] = rtB . ppz4jciujz [ 1 ] ; rtDW .
mmdrnhie50 [ 2 ] = rtB . jeirpnbx5x [ 2 ] ; rtDW . anelm3x4iv [ 2 ] = rtB .
nk0pyr02g1 [ 2 ] ; rtDW . ntrl1fa42b [ 2 ] = rtB . ppz4jciujz [ 2 ] ; rtDW .
mmdrnhie50 [ 3 ] = rtB . jeirpnbx5x [ 3 ] ; rtDW . anelm3x4iv [ 3 ] = rtB .
nk0pyr02g1 [ 3 ] ; rtDW . ntrl1fa42b [ 3 ] = rtB . ppz4jciujz [ 3 ] ; rtDW .
if1kq5x22c = rtB . p5id2fvixd ; rtDW . g5uh3k3gck = rtB . jsegs02ydk ; rtDW .
gex5mkzr5u = rtB . mzw3hm10ix ; rtDW . cgrc25ymx5 = rtB . hyds5cqb3c ; rtDW .
czx0bj5ltr = rtB . dx143zacdx ; rtDW . cufwhfilog =
rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . cynedq33ig ) * rtP .
WhiteNoise_StdDev_mtoahzi3uk + rtP . WhiteNoise_Mean_btucgz1jww ;
UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID2 ( int_T tid ) {
UNUSED_PARAMETER ( tid ) ; } void MdlTerminate ( void ) {
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW . lbsdrhids0
) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW . kxtcxp30gh
) ; nesl_erase_simulator ( "Enhanced_BMS/Solver Configuration_1" ) ;
nesl_destroy_registry ( ) ; neu_destroy_diagnostic_manager ( (
NeuDiagnosticManager * ) rtDW . lqqrot5334 ) ; nesl_destroy_simulation_data (
( NeslSimulationData * ) rtDW . ikyqkmvn3c ) ; nesl_erase_simulator (
"Enhanced_BMS/Solver Configuration_1" ) ; nesl_destroy_registry ( ) ;
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW . gdnrurmlfy
) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW . hw5hoy3g0v
) ; nesl_erase_simulator ( "Enhanced_BMS/Solver Configuration_1" ) ;
nesl_destroy_registry ( ) ; } static void mr_Enhanced_BMS_cacheDataAsMxArray
( mxArray * destArray , mwIndex i , int j , const void * srcData , size_t
numBytes ) ; static void mr_Enhanced_BMS_cacheDataAsMxArray ( mxArray *
destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) {
mxArray * newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes ,
mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , (
const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i ,
j , newArray ) ; } static void mr_Enhanced_BMS_restoreDataFromMxArray ( void
* destData , const mxArray * srcArray , mwIndex i , int j , size_t numBytes )
; static void mr_Enhanced_BMS_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_Enhanced_BMS_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i ,
int j , uint_T bitVal ) ; static void mr_Enhanced_BMS_cacheBitFieldToMxArray
( mxArray * destArray , mwIndex i , int j , uint_T bitVal ) {
mxSetFieldByNumber ( destArray , i , j , mxCreateDoubleScalar ( ( real_T )
bitVal ) ) ; } static uint_T mr_Enhanced_BMS_extractBitFieldFromMxArray (
const mxArray * srcArray , mwIndex i , int j , uint_T numBits ) ; static
uint_T mr_Enhanced_BMS_extractBitFieldFromMxArray ( const mxArray * srcArray
, mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_Enhanced_BMS_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex
i , int j , mwIndex offset , const void * srcData , size_t numBytes ) ;
static void mr_Enhanced_BMS_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_Enhanced_BMS_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) ; static void mr_Enhanced_BMS_restoreDataFromMxArrayWithOffset (
void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex
offset , size_t numBytes ) { const uint8_T * varData = ( const uint8_T * )
mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T *
) destData , ( const uint8_T * ) & varData [ offset * numBytes ] , numBytes )
; } static void mr_Enhanced_BMS_cacheBitFieldToCellArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static
void mr_Enhanced_BMS_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray
, mwIndex i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell (
mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( (
real_T ) fieldVal ) ) ; } static uint_T
mr_Enhanced_BMS_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_Enhanced_BMS_extractBitFieldFromCellArrayWithOffset ( const mxArray
* srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const
uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber (
srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u
) ; } mxArray * mr_Enhanced_BMS_GetDWork ( ) { static const char_T *
ssDWFieldNames [ 3 ] = { "rtB" , "rtDW" , "NULL_PrevZCX" , } ; mxArray * ssDW
= mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) & ( rtB
) , sizeof ( rtB ) ) ; { static const char_T * rtdwDataFieldNames [ 81 ] = {
"rtDW.o4hron4umr" , "rtDW.jxt12q4h4a" , "rtDW.hzivxtj4v0" , "rtDW.dzce5s4u5n"
, "rtDW.pq5xyicbd0" , "rtDW.fzlu0vneeb" , "rtDW.afo130a2ai" ,
"rtDW.pn3wcnuo5t" , "rtDW.k0mu5wnpfu" , "rtDW.bvugbmrj4h" , "rtDW.eqmj2sg4qm"
, "rtDW.psyjrz43fg" , "rtDW.dis0i10foe" , "rtDW.l0z0oxic4r" ,
"rtDW.cip2zdf2me" , "rtDW.c0jez5cx3s" , "rtDW.hmipvslkr1" , "rtDW.emkghimbji"
, "rtDW.ixyulwyx33" , "rtDW.dzqlam0y5k" , "rtDW.av2ad1yfyh" ,
"rtDW.ctezuw3uwy" , "rtDW.paljmtthlt" , "rtDW.if1kq5x22c" , "rtDW.gex5mkzr5u"
, "rtDW.cgrc25ymx5" , "rtDW.czx0bj5ltr" , "rtDW.o1kzdph1xm" ,
"rtDW.pa10wnnpub" , "rtDW.bzuasx0iwa" , "rtDW.n3m1icn3qb" , "rtDW.g3fidn3w2t"
, "rtDW.drktkoupe5" , "rtDW.mmdrnhie50" , "rtDW.pp5p4tbowj" ,
"rtDW.cecadqcuem" , "rtDW.p4nbtb34ur" , "rtDW.pvji3kkf3u" , "rtDW.anelm3x4iv"
, "rtDW.ea21lklf25" , "rtDW.h3kr20z2el" , "rtDW.ntrl1fa42b" ,
"rtDW.g5uh3k3gck" , "rtDW.cufwhfilog" , "rtDW.csjulonnym" , "rtDW.bs44prev55"
, "rtDW.c54tg2rdm5" , "rtDW.pyo1jzv333" , "rtDW.ka0wher03d" ,
"rtDW.myycljfyci" , "rtDW.al53uz2xdy" , "rtDW.if1j1sqa5y" , "rtDW.exf42eu50q"
, "rtDW.mwjgfe4d1f" , "rtDW.hlwgqfrk4r" , "rtDW.oybrantlp0" ,
"rtDW.cynedq33ig" , "rtDW.h2swncc3e3" , "rtDW.jk35ychlbp" , "rtDW.krfhocoehg"
, "rtDW.mbshdldyye" , "rtDW.b01i0unp5j" , "rtDW.po3zfdjx02" ,
"rtDW.hro2jwrxcl" , "rtDW.ntgo2euvfr" , "rtDW.hbme0a2scy" , "rtDW.l125ggroev"
, "rtDW.asokzvawwl" , "rtDW.ojtakyu10f" , "rtDW.ccnl1lobyb" ,
"rtDW.cqxvkxfbpc" , "rtDW.bzxxyscndm" , "rtDW.krx5f4tcui" , "rtDW.cw4lzbggmq"
, "rtDW.psph4ct4qs" , "rtDW.cqvwemi3wr" , "rtDW.jov1gos3aq" ,
"rtDW.eilndcq32p" , "rtDW.elmn21ejed" , "rtDW.b3vtehlze5" , "rtDW.byhjcffsht"
, } ; mxArray * rtdwData = mxCreateStructMatrix ( 1 , 1 , 81 ,
rtdwDataFieldNames ) ; mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 0
, ( const void * ) & ( rtDW . o4hron4umr ) , sizeof ( rtDW . o4hron4umr ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const void * ) & (
rtDW . jxt12q4h4a ) , sizeof ( rtDW . jxt12q4h4a ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const void * ) & (
rtDW . hzivxtj4v0 ) , sizeof ( rtDW . hzivxtj4v0 ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const void * ) & (
rtDW . dzce5s4u5n ) , sizeof ( rtDW . dzce5s4u5n ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const void * ) & (
rtDW . pq5xyicbd0 ) , sizeof ( rtDW . pq5xyicbd0 ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const void * ) & (
rtDW . fzlu0vneeb ) , sizeof ( rtDW . fzlu0vneeb ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void * ) & (
rtDW . afo130a2ai ) , sizeof ( rtDW . afo130a2ai ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const void * ) & (
rtDW . pn3wcnuo5t ) , sizeof ( rtDW . pn3wcnuo5t ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const void * ) & (
rtDW . k0mu5wnpfu ) , sizeof ( rtDW . k0mu5wnpfu ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const void * ) & (
rtDW . bvugbmrj4h ) , sizeof ( rtDW . bvugbmrj4h ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 10 , ( const void * ) & (
rtDW . eqmj2sg4qm ) , sizeof ( rtDW . eqmj2sg4qm ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 11 , ( const void * ) & (
rtDW . psyjrz43fg ) , sizeof ( rtDW . psyjrz43fg ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 12 , ( const void * ) & (
rtDW . dis0i10foe ) , sizeof ( rtDW . dis0i10foe ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 13 , ( const void * ) & (
rtDW . l0z0oxic4r ) , sizeof ( rtDW . l0z0oxic4r ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 14 , ( const void * ) & (
rtDW . cip2zdf2me ) , sizeof ( rtDW . cip2zdf2me ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 15 , ( const void * ) & (
rtDW . c0jez5cx3s ) , sizeof ( rtDW . c0jez5cx3s ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 16 , ( const void * ) & (
rtDW . hmipvslkr1 ) , sizeof ( rtDW . hmipvslkr1 ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 17 , ( const void * ) & (
rtDW . emkghimbji ) , sizeof ( rtDW . emkghimbji ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 18 , ( const void * ) & (
rtDW . ixyulwyx33 ) , sizeof ( rtDW . ixyulwyx33 ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 19 , ( const void * ) & (
rtDW . dzqlam0y5k ) , sizeof ( rtDW . dzqlam0y5k ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 20 , ( const void * ) & (
rtDW . av2ad1yfyh ) , sizeof ( rtDW . av2ad1yfyh ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 21 , ( const void * ) & (
rtDW . ctezuw3uwy ) , sizeof ( rtDW . ctezuw3uwy ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 22 , ( const void * ) & (
rtDW . paljmtthlt ) , sizeof ( rtDW . paljmtthlt ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 23 , ( const void * ) & (
rtDW . if1kq5x22c ) , sizeof ( rtDW . if1kq5x22c ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 24 , ( const void * ) & (
rtDW . gex5mkzr5u ) , sizeof ( rtDW . gex5mkzr5u ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 25 , ( const void * ) & (
rtDW . cgrc25ymx5 ) , sizeof ( rtDW . cgrc25ymx5 ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 26 , ( const void * ) & (
rtDW . czx0bj5ltr ) , sizeof ( rtDW . czx0bj5ltr ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 27 , ( const void * ) & (
rtDW . o1kzdph1xm ) , sizeof ( rtDW . o1kzdph1xm ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 28 , ( const void * ) & (
rtDW . pa10wnnpub ) , sizeof ( rtDW . pa10wnnpub ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 29 , ( const void * ) & (
rtDW . bzuasx0iwa ) , sizeof ( rtDW . bzuasx0iwa ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 30 , ( const void * ) & (
rtDW . n3m1icn3qb ) , sizeof ( rtDW . n3m1icn3qb ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 31 , ( const void * ) & (
rtDW . g3fidn3w2t ) , sizeof ( rtDW . g3fidn3w2t ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 32 , ( const void * ) & (
rtDW . drktkoupe5 ) , sizeof ( rtDW . drktkoupe5 ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 33 , ( const void * ) & (
rtDW . mmdrnhie50 ) , sizeof ( rtDW . mmdrnhie50 ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 34 , ( const void * ) & (
rtDW . pp5p4tbowj ) , sizeof ( rtDW . pp5p4tbowj ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 35 , ( const void * ) & (
rtDW . cecadqcuem ) , sizeof ( rtDW . cecadqcuem ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 36 , ( const void * ) & (
rtDW . p4nbtb34ur ) , sizeof ( rtDW . p4nbtb34ur ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 37 , ( const void * ) & (
rtDW . pvji3kkf3u ) , sizeof ( rtDW . pvji3kkf3u ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 38 , ( const void * ) & (
rtDW . anelm3x4iv ) , sizeof ( rtDW . anelm3x4iv ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 39 , ( const void * ) & (
rtDW . ea21lklf25 ) , sizeof ( rtDW . ea21lklf25 ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 40 , ( const void * ) & (
rtDW . h3kr20z2el ) , sizeof ( rtDW . h3kr20z2el ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 41 , ( const void * ) & (
rtDW . ntrl1fa42b ) , sizeof ( rtDW . ntrl1fa42b ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 42 , ( const void * ) & (
rtDW . g5uh3k3gck ) , sizeof ( rtDW . g5uh3k3gck ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 43 , ( const void * ) & (
rtDW . cufwhfilog ) , sizeof ( rtDW . cufwhfilog ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 44 , ( const void * ) & (
rtDW . csjulonnym ) , sizeof ( rtDW . csjulonnym ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 45 , ( const void * ) & (
rtDW . bs44prev55 ) , sizeof ( rtDW . bs44prev55 ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 46 , ( const void * ) & (
rtDW . c54tg2rdm5 ) , sizeof ( rtDW . c54tg2rdm5 ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 47 , ( const void * ) & (
rtDW . pyo1jzv333 ) , sizeof ( rtDW . pyo1jzv333 ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 48 , ( const void * ) & (
rtDW . ka0wher03d ) , sizeof ( rtDW . ka0wher03d ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 49 , ( const void * ) & (
rtDW . myycljfyci ) , sizeof ( rtDW . myycljfyci ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 50 , ( const void * ) & (
rtDW . al53uz2xdy ) , sizeof ( rtDW . al53uz2xdy ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 51 , ( const void * ) & (
rtDW . if1j1sqa5y ) , sizeof ( rtDW . if1j1sqa5y ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 52 , ( const void * ) & (
rtDW . exf42eu50q ) , sizeof ( rtDW . exf42eu50q ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 53 , ( const void * ) & (
rtDW . mwjgfe4d1f ) , sizeof ( rtDW . mwjgfe4d1f ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 54 , ( const void * ) & (
rtDW . hlwgqfrk4r ) , sizeof ( rtDW . hlwgqfrk4r ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 55 , ( const void * ) & (
rtDW . oybrantlp0 ) , sizeof ( rtDW . oybrantlp0 ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 56 , ( const void * ) & (
rtDW . cynedq33ig ) , sizeof ( rtDW . cynedq33ig ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 57 , ( const void * ) & (
rtDW . h2swncc3e3 ) , sizeof ( rtDW . h2swncc3e3 ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 58 , ( const void * ) & (
rtDW . jk35ychlbp ) , sizeof ( rtDW . jk35ychlbp ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 59 , ( const void * ) & (
rtDW . krfhocoehg ) , sizeof ( rtDW . krfhocoehg ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 60 , ( const void * ) & (
rtDW . mbshdldyye ) , sizeof ( rtDW . mbshdldyye ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 61 , ( const void * ) & (
rtDW . b01i0unp5j ) , sizeof ( rtDW . b01i0unp5j ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 62 , ( const void * ) & (
rtDW . po3zfdjx02 ) , sizeof ( rtDW . po3zfdjx02 ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 63 , ( const void * ) & (
rtDW . hro2jwrxcl ) , sizeof ( rtDW . hro2jwrxcl ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 64 , ( const void * ) & (
rtDW . ntgo2euvfr ) , sizeof ( rtDW . ntgo2euvfr ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 65 , ( const void * ) & (
rtDW . hbme0a2scy ) , sizeof ( rtDW . hbme0a2scy ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 66 , ( const void * ) & (
rtDW . l125ggroev ) , sizeof ( rtDW . l125ggroev ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 67 , ( const void * ) & (
rtDW . asokzvawwl ) , sizeof ( rtDW . asokzvawwl ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 68 , ( const void * ) & (
rtDW . ojtakyu10f ) , sizeof ( rtDW . ojtakyu10f ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 69 , ( const void * ) & (
rtDW . ccnl1lobyb ) , sizeof ( rtDW . ccnl1lobyb ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 70 , ( const void * ) & (
rtDW . cqxvkxfbpc ) , sizeof ( rtDW . cqxvkxfbpc ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 71 , ( const void * ) & (
rtDW . bzxxyscndm ) , sizeof ( rtDW . bzxxyscndm ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 72 , ( const void * ) & (
rtDW . krx5f4tcui ) , sizeof ( rtDW . krx5f4tcui ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 73 , ( const void * ) & (
rtDW . cw4lzbggmq ) , sizeof ( rtDW . cw4lzbggmq ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 74 , ( const void * ) & (
rtDW . psph4ct4qs ) , sizeof ( rtDW . psph4ct4qs ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 75 , ( const void * ) & (
rtDW . cqvwemi3wr ) , sizeof ( rtDW . cqvwemi3wr ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 76 , ( const void * ) & (
rtDW . jov1gos3aq ) , sizeof ( rtDW . jov1gos3aq ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 77 , ( const void * ) & (
rtDW . eilndcq32p ) , sizeof ( rtDW . eilndcq32p ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 78 , ( const void * ) & (
rtDW . elmn21ejed ) , sizeof ( rtDW . elmn21ejed ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 79 , ( const void * ) & (
rtDW . b3vtehlze5 ) , sizeof ( rtDW . b3vtehlze5 ) ) ;
mr_Enhanced_BMS_cacheDataAsMxArray ( rtdwData , 0 , 80 , ( const void * ) & (
rtDW . byhjcffsht ) , sizeof ( rtDW . byhjcffsht ) ) ; mxSetFieldByNumber (
ssDW , 0 , 1 , rtdwData ) ; } return ssDW ; } void mr_Enhanced_BMS_SetDWork (
const mxArray * ssDW ) { ( void ) ssDW ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtB ) , ssDW , 0 , 0
, sizeof ( rtB ) ) ; { const mxArray * rtdwData = mxGetFieldByNumber ( ssDW ,
0 , 1 ) ; mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW .
o4hron4umr ) , rtdwData , 0 , 0 , sizeof ( rtDW . o4hron4umr ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . jxt12q4h4a ) ,
rtdwData , 0 , 1 , sizeof ( rtDW . jxt12q4h4a ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . hzivxtj4v0 ) ,
rtdwData , 0 , 2 , sizeof ( rtDW . hzivxtj4v0 ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . dzce5s4u5n ) ,
rtdwData , 0 , 3 , sizeof ( rtDW . dzce5s4u5n ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . pq5xyicbd0 ) ,
rtdwData , 0 , 4 , sizeof ( rtDW . pq5xyicbd0 ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . fzlu0vneeb ) ,
rtdwData , 0 , 5 , sizeof ( rtDW . fzlu0vneeb ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . afo130a2ai ) ,
rtdwData , 0 , 6 , sizeof ( rtDW . afo130a2ai ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . pn3wcnuo5t ) ,
rtdwData , 0 , 7 , sizeof ( rtDW . pn3wcnuo5t ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . k0mu5wnpfu ) ,
rtdwData , 0 , 8 , sizeof ( rtDW . k0mu5wnpfu ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . bvugbmrj4h ) ,
rtdwData , 0 , 9 , sizeof ( rtDW . bvugbmrj4h ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . eqmj2sg4qm ) ,
rtdwData , 0 , 10 , sizeof ( rtDW . eqmj2sg4qm ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . psyjrz43fg ) ,
rtdwData , 0 , 11 , sizeof ( rtDW . psyjrz43fg ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . dis0i10foe ) ,
rtdwData , 0 , 12 , sizeof ( rtDW . dis0i10foe ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . l0z0oxic4r ) ,
rtdwData , 0 , 13 , sizeof ( rtDW . l0z0oxic4r ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . cip2zdf2me ) ,
rtdwData , 0 , 14 , sizeof ( rtDW . cip2zdf2me ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . c0jez5cx3s ) ,
rtdwData , 0 , 15 , sizeof ( rtDW . c0jez5cx3s ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . hmipvslkr1 ) ,
rtdwData , 0 , 16 , sizeof ( rtDW . hmipvslkr1 ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . emkghimbji ) ,
rtdwData , 0 , 17 , sizeof ( rtDW . emkghimbji ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . ixyulwyx33 ) ,
rtdwData , 0 , 18 , sizeof ( rtDW . ixyulwyx33 ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . dzqlam0y5k ) ,
rtdwData , 0 , 19 , sizeof ( rtDW . dzqlam0y5k ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . av2ad1yfyh ) ,
rtdwData , 0 , 20 , sizeof ( rtDW . av2ad1yfyh ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . ctezuw3uwy ) ,
rtdwData , 0 , 21 , sizeof ( rtDW . ctezuw3uwy ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . paljmtthlt ) ,
rtdwData , 0 , 22 , sizeof ( rtDW . paljmtthlt ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . if1kq5x22c ) ,
rtdwData , 0 , 23 , sizeof ( rtDW . if1kq5x22c ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . gex5mkzr5u ) ,
rtdwData , 0 , 24 , sizeof ( rtDW . gex5mkzr5u ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . cgrc25ymx5 ) ,
rtdwData , 0 , 25 , sizeof ( rtDW . cgrc25ymx5 ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . czx0bj5ltr ) ,
rtdwData , 0 , 26 , sizeof ( rtDW . czx0bj5ltr ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . o1kzdph1xm ) ,
rtdwData , 0 , 27 , sizeof ( rtDW . o1kzdph1xm ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . pa10wnnpub ) ,
rtdwData , 0 , 28 , sizeof ( rtDW . pa10wnnpub ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . bzuasx0iwa ) ,
rtdwData , 0 , 29 , sizeof ( rtDW . bzuasx0iwa ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . n3m1icn3qb ) ,
rtdwData , 0 , 30 , sizeof ( rtDW . n3m1icn3qb ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . g3fidn3w2t ) ,
rtdwData , 0 , 31 , sizeof ( rtDW . g3fidn3w2t ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . drktkoupe5 ) ,
rtdwData , 0 , 32 , sizeof ( rtDW . drktkoupe5 ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . mmdrnhie50 ) ,
rtdwData , 0 , 33 , sizeof ( rtDW . mmdrnhie50 ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . pp5p4tbowj ) ,
rtdwData , 0 , 34 , sizeof ( rtDW . pp5p4tbowj ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . cecadqcuem ) ,
rtdwData , 0 , 35 , sizeof ( rtDW . cecadqcuem ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . p4nbtb34ur ) ,
rtdwData , 0 , 36 , sizeof ( rtDW . p4nbtb34ur ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . pvji3kkf3u ) ,
rtdwData , 0 , 37 , sizeof ( rtDW . pvji3kkf3u ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . anelm3x4iv ) ,
rtdwData , 0 , 38 , sizeof ( rtDW . anelm3x4iv ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . ea21lklf25 ) ,
rtdwData , 0 , 39 , sizeof ( rtDW . ea21lklf25 ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . h3kr20z2el ) ,
rtdwData , 0 , 40 , sizeof ( rtDW . h3kr20z2el ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . ntrl1fa42b ) ,
rtdwData , 0 , 41 , sizeof ( rtDW . ntrl1fa42b ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . g5uh3k3gck ) ,
rtdwData , 0 , 42 , sizeof ( rtDW . g5uh3k3gck ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . cufwhfilog ) ,
rtdwData , 0 , 43 , sizeof ( rtDW . cufwhfilog ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . csjulonnym ) ,
rtdwData , 0 , 44 , sizeof ( rtDW . csjulonnym ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . bs44prev55 ) ,
rtdwData , 0 , 45 , sizeof ( rtDW . bs44prev55 ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . c54tg2rdm5 ) ,
rtdwData , 0 , 46 , sizeof ( rtDW . c54tg2rdm5 ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . pyo1jzv333 ) ,
rtdwData , 0 , 47 , sizeof ( rtDW . pyo1jzv333 ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . ka0wher03d ) ,
rtdwData , 0 , 48 , sizeof ( rtDW . ka0wher03d ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . myycljfyci ) ,
rtdwData , 0 , 49 , sizeof ( rtDW . myycljfyci ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . al53uz2xdy ) ,
rtdwData , 0 , 50 , sizeof ( rtDW . al53uz2xdy ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . if1j1sqa5y ) ,
rtdwData , 0 , 51 , sizeof ( rtDW . if1j1sqa5y ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . exf42eu50q ) ,
rtdwData , 0 , 52 , sizeof ( rtDW . exf42eu50q ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . mwjgfe4d1f ) ,
rtdwData , 0 , 53 , sizeof ( rtDW . mwjgfe4d1f ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . hlwgqfrk4r ) ,
rtdwData , 0 , 54 , sizeof ( rtDW . hlwgqfrk4r ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . oybrantlp0 ) ,
rtdwData , 0 , 55 , sizeof ( rtDW . oybrantlp0 ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . cynedq33ig ) ,
rtdwData , 0 , 56 , sizeof ( rtDW . cynedq33ig ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . h2swncc3e3 ) ,
rtdwData , 0 , 57 , sizeof ( rtDW . h2swncc3e3 ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . jk35ychlbp ) ,
rtdwData , 0 , 58 , sizeof ( rtDW . jk35ychlbp ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . krfhocoehg ) ,
rtdwData , 0 , 59 , sizeof ( rtDW . krfhocoehg ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . mbshdldyye ) ,
rtdwData , 0 , 60 , sizeof ( rtDW . mbshdldyye ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . b01i0unp5j ) ,
rtdwData , 0 , 61 , sizeof ( rtDW . b01i0unp5j ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . po3zfdjx02 ) ,
rtdwData , 0 , 62 , sizeof ( rtDW . po3zfdjx02 ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . hro2jwrxcl ) ,
rtdwData , 0 , 63 , sizeof ( rtDW . hro2jwrxcl ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . ntgo2euvfr ) ,
rtdwData , 0 , 64 , sizeof ( rtDW . ntgo2euvfr ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . hbme0a2scy ) ,
rtdwData , 0 , 65 , sizeof ( rtDW . hbme0a2scy ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . l125ggroev ) ,
rtdwData , 0 , 66 , sizeof ( rtDW . l125ggroev ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . asokzvawwl ) ,
rtdwData , 0 , 67 , sizeof ( rtDW . asokzvawwl ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . ojtakyu10f ) ,
rtdwData , 0 , 68 , sizeof ( rtDW . ojtakyu10f ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . ccnl1lobyb ) ,
rtdwData , 0 , 69 , sizeof ( rtDW . ccnl1lobyb ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . cqxvkxfbpc ) ,
rtdwData , 0 , 70 , sizeof ( rtDW . cqxvkxfbpc ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . bzxxyscndm ) ,
rtdwData , 0 , 71 , sizeof ( rtDW . bzxxyscndm ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . krx5f4tcui ) ,
rtdwData , 0 , 72 , sizeof ( rtDW . krx5f4tcui ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . cw4lzbggmq ) ,
rtdwData , 0 , 73 , sizeof ( rtDW . cw4lzbggmq ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . psph4ct4qs ) ,
rtdwData , 0 , 74 , sizeof ( rtDW . psph4ct4qs ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . cqvwemi3wr ) ,
rtdwData , 0 , 75 , sizeof ( rtDW . cqvwemi3wr ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . jov1gos3aq ) ,
rtdwData , 0 , 76 , sizeof ( rtDW . jov1gos3aq ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . eilndcq32p ) ,
rtdwData , 0 , 77 , sizeof ( rtDW . eilndcq32p ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . elmn21ejed ) ,
rtdwData , 0 , 78 , sizeof ( rtDW . elmn21ejed ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . b3vtehlze5 ) ,
rtdwData , 0 , 79 , sizeof ( rtDW . b3vtehlze5 ) ) ;
mr_Enhanced_BMS_restoreDataFromMxArray ( ( void * ) & ( rtDW . byhjcffsht ) ,
rtdwData , 0 , 80 , sizeof ( rtDW . byhjcffsht ) ) ; } } mxArray *
mr_Enhanced_BMS_GetSimStateDisallowedBlocks ( ) { mxArray * data =
mxCreateCellMatrix ( 10 , 3 ) ; mwIndex subs [ 2 ] , offset ; { static const
char_T * blockType [ 10 ] = { "SimscapeRtp" , "SimscapeExecutionBlock" ,
"SimscapeExecutionBlock" , "Scope" , "Scope" , "Scope" , "Scope" , "Scope" ,
"Scope" , "SimscapeExecutionBlock" , } ; static const char_T * blockPath [ 10
] = { "Enhanced_BMS/Solver Configuration/RTP_1" ,
"Enhanced_BMS/Solver Configuration/EVAL_KEY/STATE_1" ,
"Enhanced_BMS/Solver Configuration/EVAL_KEY/OUTPUT_1_0" ,
"Enhanced_BMS/Scope" , "Enhanced_BMS/Subsystem/Scope" ,
"Enhanced_BMS/Subsystem/Scope1" , "Enhanced_BMS/Battery/SOC Estimator/Scope"
, "Enhanced_BMS/Battery/SOC Estimator/Scope1" ,
"Enhanced_BMS/Battery/SOC Estimator/Scope2" ,
"Enhanced_BMS/Solver Configuration/EVAL_KEY/OUTPUT_1_1" , } ; static const
int reason [ 10 ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , } ; for ( subs
[ 0 ] = 0 ; subs [ 0 ] < 10 ; ++ ( subs [ 0 ] ) ) { subs [ 1 ] = 0 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateString ( blockType [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 1 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateString ( blockPath [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 2 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateDoubleScalar ( ( real_T ) reason [ subs [ 0 ] ] ) ) ; } } return data
; } void MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 0 ) ;
ssSetNumY ( rtS , 0 ) ; ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough ( rtS
, 0 ) ; ssSetNumSampleTimes ( rtS , 2 ) ; ssSetNumBlocks ( rtS , 205 ) ;
ssSetNumBlockIO ( rtS , 68 ) ; ssSetNumBlockParams ( rtS , 667 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.1 ) ;
ssSetSampleTime ( rtS , 1 , 1.0 ) ; ssSetOffsetTime ( rtS , 0 , 0.0 ) ;
ssSetOffsetTime ( rtS , 1 , 0.0 ) ; } void raccel_set_checksum ( ) {
ssSetChecksumVal ( rtS , 0 , 3454706739U ) ; ssSetChecksumVal ( rtS , 1 ,
4059958679U ) ; ssSetChecksumVal ( rtS , 2 , 454448695U ) ; ssSetChecksumVal
( rtS , 3 , 2222288127U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) {
static struct _ssMdlInfo mdlInfo ; static struct _ssBlkInfo2 blkInfo2 ;
static struct _ssBlkInfoSLSize blkInfoSLSize ; rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; executionInfo -> gblObjects_ . numToFiles = 0 ;
executionInfo -> gblObjects_ . numFrFiles = 0 ; executionInfo -> gblObjects_
. numFrWksBlocks = 0 ; executionInfo -> gblObjects_ . numModelInputs = 0 ;
executionInfo -> gblObjects_ . numRootInportBlks = 0 ; executionInfo ->
gblObjects_ . inportDataTypeIdx = NULL ; executionInfo -> gblObjects_ .
inportDims = NULL ; executionInfo -> gblObjects_ . inportComplex = NULL ;
executionInfo -> gblObjects_ . inportInterpoFlag = NULL ; executionInfo ->
gblObjects_ . inportContinuous = NULL ; ( void ) memset ( ( char_T * ) rtS ,
0 , sizeof ( SimStruct ) ) ; ( void ) memset ( ( char_T * ) & mdlInfo , 0 ,
sizeof ( struct _ssMdlInfo ) ) ; ( void ) memset ( ( char_T * ) & blkInfo2 ,
0 , sizeof ( struct _ssBlkInfo2 ) ) ; ( void ) memset ( ( char_T * ) &
blkInfoSLSize , 0 , sizeof ( struct _ssBlkInfoSLSize ) ) ; ssSetBlkInfo2Ptr (
rtS , & blkInfo2 ) ; ssSetBlkInfoSLSizePtr ( rtS , & blkInfoSLSize ) ;
ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; ssSetExecutionInfo ( rtS ,
executionInfo ) ; slsaAllocOPModelData ( rtS ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof
( B ) ) ; } { void * dwork = ( void * ) & rtDW ; ssSetRootDWork ( rtS , dwork
) ; ( void ) memset ( dwork , 0 , sizeof ( DW ) ) ; } { static
DataTypeTransInfo dtInfo ; ( void ) memset ( ( char_T * ) & dtInfo , 0 ,
sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS , & dtInfo ) ; dtInfo .
numDataTypes = 23 ; dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ] ; dtInfo
. dataTypeNames = & rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = &
rtBTransTable ; dtInfo . PTransTable = & rtPTransTable ; dtInfo .
dataTypeInfoTable = rtDataTypeInfoTable ; }
Enhanced_BMS_InitializeDataMapInfo ( ) ; ssSetIsRapidAcceleratorActive ( rtS
, true ) ; ssSetRootSS ( rtS , rtS ) ; ssSetVersion ( rtS ,
SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS , "Enhanced_BMS" ) ;
ssSetPath ( rtS , "Enhanced_BMS" ) ; ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal
( rtS , 36000.0 ) ; ssSetStepSize ( rtS , 0.1 ) ; ssSetFixedStepSize ( rtS ,
0.1 ) ; { static RTWLogInfo rt_DataLoggingInfo ; rt_DataLoggingInfo .
loggingInterval = ( NULL ) ; ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ;
} { { static int_T rt_LoggedStateWidths [ ] = { 1 , 1 , 1 , 2 , 2 , 2 , 2 , 2
, 2 , 1 , 1 , 1 , 1 , 2 , 54 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
} ; static int_T rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 } ; static int_T rt_LoggedStateDimensions [ ] = { 1 , 1 , 1 , 2 , 2 , 2 ,
2 , 2 , 2 , 1 , 1 , 1 , 1 , 2 , 54 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 } ; static boolean_T rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 } ; static BuiltInDTypeId rt_LoggedStateDataTypeIds [ ] = {
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE } ; static int_T
rt_LoggedStateComplexSignals [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static
RTWPreprocessingFcnPtr rt_LoggingStatePreprocessingFcnPtrs [ ] = { ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) } ; static const char_T
* rt_LoggedStateLabels [ ] = { "DSTATE" , "DSTATE" , "DSTATE" , "Discrete" ,
"Discrete" , "Discrete" , "Discrete" , "Discrete" , "Discrete" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "Discrete" , "Discrete" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" } ; static const char_T *
rt_LoggedStateBlockNames [ ] = { "Enhanced_BMS/Battery/Unit Delay" ,
"Enhanced_BMS/Battery/Unit Delay1" , "Enhanced_BMS/Battery/Unit Delay2" ,
"Enhanced_BMS/Solver\nConfiguration/EVAL_KEY/INPUT_2_1_1" ,
"Enhanced_BMS/Solver\nConfiguration/EVAL_KEY/INPUT_3_1_1" ,
"Enhanced_BMS/Solver\nConfiguration/EVAL_KEY/INPUT_4_1_1" ,
"Enhanced_BMS/Solver\nConfiguration/EVAL_KEY/INPUT_5_1_1" ,
"Enhanced_BMS/Solver\nConfiguration/EVAL_KEY/INPUT_6_1_1" ,
"Enhanced_BMS/Solver\nConfiguration/EVAL_KEY/INPUT_1_1_1" ,
"Enhanced_BMS/Unit Delay" , "Enhanced_BMS/Unit Delay1" ,
"Enhanced_BMS/Subsystem/Unit Delay2" ,
"Enhanced_BMS/Subsystem/Discrete PID Controller/Integrator/Discrete/Integrator"
, "Enhanced_BMS/Solver\nConfiguration/EVAL_KEY/INPUT_7_1_1" ,
"Enhanced_BMS/Solver\nConfiguration/EVAL_KEY/STATE_1" ,
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell1/Unit Delay1" ,
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell1/Unit Delay3" ,
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell1/Unit Delay" ,
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell1/Unit Delay2" ,
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell2/Unit Delay1" ,
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell2/Unit Delay3" ,
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell2/Unit Delay" ,
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell2/Unit Delay2" ,
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell3/Unit Delay1" ,
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell3/Unit Delay3" ,
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell3/Unit Delay" ,
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell3/Unit Delay2" } ; static const
char_T * rt_LoggedStateNames [ ] = { "DSTATE" , "DSTATE" , "DSTATE" ,
"Discrete" , "Discrete" , "Discrete" , "Discrete" , "Discrete" , "Discrete" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "Discrete" , "Discrete" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" } ; static boolean_T
rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static
RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ] = { { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } } ; static int_T rt_LoggedStateIdxList [ ] = { 0 , 1 ,
2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 17 , 18 ,
19 , 20 , 21 , 22 , 23 , 24 , 25 , 26 } ; static RTWLogSignalInfo
rt_LoggedStateSignalInfo = { 27 , rt_LoggedStateWidths ,
rt_LoggedStateNumDimensions , rt_LoggedStateDimensions ,
rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , rt_LoggingStatePreprocessingFcnPtrs
, { rt_LoggedStateLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert , rt_LoggedStateIdxList
} ; static void * rt_LoggedStateSignalPtrs [ 27 ] ; rtliSetLogXSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtDW . o4hron4umr ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtDW . jxt12q4h4a ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtDW . hzivxtj4v0 ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) rtDW . dzce5s4u5n ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) rtDW . pq5xyicbd0 ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) rtDW . fzlu0vneeb ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) rtDW . afo130a2ai ;
rt_LoggedStateSignalPtrs [ 7 ] = ( void * ) rtDW . pn3wcnuo5t ;
rt_LoggedStateSignalPtrs [ 8 ] = ( void * ) rtDW . k0mu5wnpfu ;
rt_LoggedStateSignalPtrs [ 9 ] = ( void * ) & rtDW . bvugbmrj4h ;
rt_LoggedStateSignalPtrs [ 10 ] = ( void * ) & rtDW . eqmj2sg4qm ;
rt_LoggedStateSignalPtrs [ 11 ] = ( void * ) & rtDW . psyjrz43fg ;
rt_LoggedStateSignalPtrs [ 12 ] = ( void * ) & rtDW . dis0i10foe ;
rt_LoggedStateSignalPtrs [ 13 ] = ( void * ) rtDW . l0z0oxic4r ;
rt_LoggedStateSignalPtrs [ 14 ] = ( void * ) rtDW . cip2zdf2me ;
rt_LoggedStateSignalPtrs [ 15 ] = ( void * ) & rtDW . c0jez5cx3s ;
rt_LoggedStateSignalPtrs [ 16 ] = ( void * ) & rtDW . hmipvslkr1 ;
rt_LoggedStateSignalPtrs [ 17 ] = ( void * ) & rtDW . emkghimbji ;
rt_LoggedStateSignalPtrs [ 18 ] = ( void * ) & rtDW . ixyulwyx33 ;
rt_LoggedStateSignalPtrs [ 19 ] = ( void * ) & rtDW . dzqlam0y5k ;
rt_LoggedStateSignalPtrs [ 20 ] = ( void * ) & rtDW . av2ad1yfyh ;
rt_LoggedStateSignalPtrs [ 21 ] = ( void * ) & rtDW . ctezuw3uwy ;
rt_LoggedStateSignalPtrs [ 22 ] = ( void * ) & rtDW . paljmtthlt ;
rt_LoggedStateSignalPtrs [ 23 ] = ( void * ) & rtDW . if1kq5x22c ;
rt_LoggedStateSignalPtrs [ 24 ] = ( void * ) & rtDW . gex5mkzr5u ;
rt_LoggedStateSignalPtrs [ 25 ] = ( void * ) & rtDW . cgrc25ymx5 ;
rt_LoggedStateSignalPtrs [ 26 ] = ( void * ) & rtDW . czx0bj5ltr ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) ,
"xFinal" ) ; rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static
ssSolverInfo slvrInfo ; ssSetNumNonContDerivSigInfos ( rtS , 0 ) ;
ssSetNonContDerivSigInfos ( rtS , ( NULL ) ) ; ssSetSolverInfo ( rtS , &
slvrInfo ) ; ssSetSolverName ( rtS , "FixedStepDiscrete" ) ;
ssSetVariableStepSolver ( rtS , 0 ) ; ssSetSolverConsistencyChecking ( rtS ,
0 ) ; ssSetSolverAdaptiveZcDetection ( rtS , 0 ) ;
ssSetSolverRobustResetMethod ( rtS , 0 ) ; ssSetSolverStateProjection ( rtS ,
0 ) ; ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetTNextTid ( rtS , INT_MIN ) ;
ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 0 ) ; } ssSetChecksumVal ( rtS , 0 ,
3454706739U ) ; ssSetChecksumVal ( rtS , 1 , 4059958679U ) ; ssSetChecksumVal
( rtS , 2 , 454448695U ) ; ssSetChecksumVal ( rtS , 3 , 2222288127U ) ; {
static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE ; static
RTWExtModeInfo rt_ExtModeInfo ; static const sysRanDType * systemRan [ 9 ] ;
gblRTWExtModeInfo = & rt_ExtModeInfo ; ssSetRTWExtModeInfo ( rtS , &
rt_ExtModeInfo ) ; rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo ,
systemRan ) ; systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = &
rtAlwaysEnabled ; systemRan [ 2 ] = & rtAlwaysEnabled ; systemRan [ 3 ] = &
rtAlwaysEnabled ; systemRan [ 4 ] = & rtAlwaysEnabled ; systemRan [ 5 ] = &
rtAlwaysEnabled ; systemRan [ 6 ] = & rtAlwaysEnabled ; systemRan [ 7 ] = &
rtAlwaysEnabled ; systemRan [ 8 ] = & rtAlwaysEnabled ;
rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) , &
ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo (
rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS )
, ssGetTPtr ( rtS ) ) ; } slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_Enhanced_BMS_GetSimStateDisallowedBlocks ) ; slsaGetWorkFcnForSimTargetOP
( rtS , mr_Enhanced_BMS_GetDWork ) ; slsaSetWorkFcnForSimTargetOP ( rtS ,
mr_Enhanced_BMS_SetDWork ) ; rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if
( ssGetErrorStatus ( rtS ) ) { return rtS ; } executionInfo ->
simulationOptions_ . stateSaveName_ = rtliGetLogX ( ssGetRTWLogInfo ( rtS ) )
; executionInfo -> simulationOptions_ . finalStateName_ = rtliGetLogXFinal (
ssGetRTWLogInfo ( rtS ) ) ; executionInfo -> simulationOptions_ .
outputSaveName_ = rtliGetLogY ( ssGetRTWLogInfo ( rtS ) ) ; return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
void MdlOutputsParameterSampleTime ( int_T tid ) { MdlOutputsTID2 ( tid ) ; }
