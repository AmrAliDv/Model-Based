#ifndef Enhanced_BMS_h_
#define Enhanced_BMS_h_
#ifndef Enhanced_BMS_COMMON_INCLUDES_
#define Enhanced_BMS_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "rt_nonfinite.h"
#include "math.h"
#include "dt_info.h"
#include "ext_work.h"
#include "nesl_rtw_rtp.h"
#include "Enhanced_BMS_7ded21a_1_gateway.h"
#include "nesl_rtw.h"
#endif
#include "Enhanced_BMS_types.h"
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include <string.h>
#define MODEL_NAME Enhanced_BMS
#define NSAMPLE_TIMES (3) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (68) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (0)   
#elif NCSTATES != 0
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T drskglgsan ; real_T npmfe0f0qo ; real_T e2wraft2ng ;
real_T ianuzwuuzi [ 4 ] ; real_T nejmax202r [ 4 ] ; real_T kqdsxgdce3 [ 4 ] ;
real_T fvwqlwkcjj [ 4 ] ; real_T pmvqkgardu [ 4 ] ; real_T astrqosyep [ 4 ] ;
real_T jmjhdalsff ; real_T kpzbmh0lai ; real_T gayzlcwngn ; real_T ogpcqmf3h5
; real_T cc5d4yqgrh ; real_T hvd3jbccmz ; real_T c5ugal2ihq [ 4 ] ; real_T
fkbuizmwag ; real_T cmp2isfx12 [ 96 ] ; real_T njirpk2h0g [ 13 ] ; real_T
ii5sqkoni1 ; real_T aurf0yuixe ; real_T bd21p4dssk ; real_T cbid5mayod ;
real_T ejirnozlpr ; real_T he1tpnoytf ; real_T o4w5dvpcom ; real_T jgxxaq3f3y
[ 3 ] ; real_T fsut2120nl ; real_T iewfeqykba ; real_T i3oa0kjo3n ; real_T
ojyf5vvsjz ; real_T ehadpfh5m0 ; real_T aex4ukke0v ; real_T lf544j4evk ;
real_T clm2z3u0kf ; real_T hyds5cqb3c ; real_T p5id2fvixd ; real_T dx143zacdx
; real_T mzw3hm10ix ; real_T g2p05i01qe ; real_T jmu41cjmsi ; real_T
iyyq1v520t ; real_T o1lapiknns ; real_T ppz4jciujz [ 4 ] ; real_T kglz5kc2at
; real_T jsegs02ydk ; real_T nk0pyr02g1 [ 4 ] ; real_T iogf30vzmj ; real_T
en40yfhmae ; real_T jeirpnbx5x [ 4 ] ; real_T fcejgnms2p ; real_T k50sc0nhbf
; real_T ooycaplx1k ; real_T cu4w31sksr ; real_T f2njjfiimh ; real_T
beqgjbeb4n ; real_T fpjwalqauw ; real_T bzbuyck32c ; boolean_T coxqunjq31 ; }
B ; typedef struct { real_T o4hron4umr ; real_T jxt12q4h4a ; real_T
hzivxtj4v0 ; real_T dzce5s4u5n [ 2 ] ; real_T pq5xyicbd0 [ 2 ] ; real_T
fzlu0vneeb [ 2 ] ; real_T afo130a2ai [ 2 ] ; real_T pn3wcnuo5t [ 2 ] ; real_T
k0mu5wnpfu [ 2 ] ; real_T bvugbmrj4h ; real_T eqmj2sg4qm ; real_T psyjrz43fg
; real_T dis0i10foe ; real_T l0z0oxic4r [ 2 ] ; real_T cip2zdf2me [ 54 ] ;
real_T c0jez5cx3s ; real_T hmipvslkr1 ; real_T emkghimbji ; real_T ixyulwyx33
; real_T dzqlam0y5k ; real_T av2ad1yfyh ; real_T ctezuw3uwy ; real_T
paljmtthlt ; real_T if1kq5x22c ; real_T gex5mkzr5u ; real_T cgrc25ymx5 ;
real_T czx0bj5ltr ; real_T o1kzdph1xm ; real_T pa10wnnpub ; real_T bzuasx0iwa
; real_T n3m1icn3qb ; real_T g3fidn3w2t ; real_T drktkoupe5 ; real_T
mmdrnhie50 [ 4 ] ; real_T pp5p4tbowj ; real_T cecadqcuem ; real_T p4nbtb34ur
; real_T pvji3kkf3u ; real_T anelm3x4iv [ 4 ] ; real_T ea21lklf25 ; real_T
h3kr20z2el ; real_T ntrl1fa42b [ 4 ] ; real_T g5uh3k3gck ; real_T cufwhfilog
; real_T csjulonnym ; real_T bs44prev55 [ 3 ] ; void * d4vkr2glbb ; void *
cg3qopfbl1 ; void * kxtcxp30gh ; void * lbsdrhids0 ; void * iicmryz0k4 ; void
* eoyo01ev53 ; void * d5jesyet42 ; void * ikyqkmvn3c ; void * lqqrot5334 ;
void * dp01o3ekql ; void * ksuuyhpxu4 ; struct { void * LoggedData [ 2 ] ; }
ik30zux4ok ; struct { void * LoggedData ; } j2rsxbx1x0 ; struct { void *
LoggedData ; } hkhyybzwxu ; struct { void * LoggedData ; } miajsexpnc ;
struct { void * LoggedData ; } gf3bskbvsm ; struct { void * LoggedData ; }
bln20dqig5 ; void * f015bmui2j ; void * hw5hoy3g0v ; void * gdnrurmlfy ; void
* dqhbqmk54w ; void * icmv4lkg01 ; struct { void * LoggedData [ 2 ] ; }
n3iiljrftq ; struct { void * LoggedData [ 2 ] ; } apljpth2bj ; struct { void
* LoggedData [ 3 ] ; } jbkm5yfqhs ; int32_T c54tg2rdm5 ; int32_T pyo1jzv333 ;
int32_T ka0wher03d ; int32_T myycljfyci ; int32_T al53uz2xdy ; int32_T
if1j1sqa5y ; int32_T exf42eu50q ; int32_T mwjgfe4d1f ; uint32_T hlwgqfrk4r ;
uint32_T oybrantlp0 ; uint32_T cynedq33ig ; uint32_T h2swncc3e3 ; uint32_T
jk35ychlbp ; uint32_T krfhocoehg ; uint32_T mbshdldyye ; int_T b01i0unp5j [
42 ] ; int_T po3zfdjx02 ; int_T hro2jwrxcl ; uint8_T ntgo2euvfr ; uint8_T
hbme0a2scy ; uint8_T l125ggroev ; uint8_T asokzvawwl ; uint8_T ojtakyu10f ;
uint8_T ccnl1lobyb ; uint8_T cqxvkxfbpc ; uint8_T bzxxyscndm ; boolean_T
h02ooleufk ; boolean_T krx5f4tcui ; boolean_T cw4lzbggmq ; boolean_T
psph4ct4qs ; boolean_T cqvwemi3wr ; boolean_T jov1gos3aq ; boolean_T
eilndcq32p ; boolean_T elmn21ejed ; boolean_T b3vtehlze5 ; boolean_T
byhjcffsht ; } DW ; typedef struct { rtwCAPI_ModelMappingInfo mmi ; }
DataMapInfo ; struct P_ { real_T CC ; real_T Cell_Max_Voltage ; real_T
I_disch ; real_T DiscretePIDController_I ; real_T
DiscretePIDController_InitialConditionForIntegrator ; real_T
DiscretePIDController_Kt ; real_T DiscretePIDController_LowerSaturationLimit
; real_T DiscretePIDController_P ; real_T
DiscretePIDController_UpperSaturationLimit ; real_T MeasurementNoise_seed ;
real_T MeasurementNoise_seed_bzjvksvjcu ; real_T
MeasurementNoise_seed_paj2igjfps ; real_T UnitDelay_InitialCondition ; real_T
UnitDelay1_InitialCondition ; real_T UnitDelay2_InitialCondition ; real_T
UnitDelay_InitialCondition_dsqmqwsouv ; real_T
UnitDelay1_InitialCondition_b4qmpi3m02 ; real_T
UnitDelay2_InitialCondition_lzqzzzqyck ; real_T Integrator_gainval ; real_T
Memory1_InitialCondition ; real_T Memory1_InitialCondition_mtmvynyd4g ;
real_T Memory1_InitialCondition_fbpxruqfum ; real_T Memory_InitialCondition [
4 ] ; real_T Gain1_Gain ; real_T UnitDelay1_InitialCondition_leo0ri5tvd ;
real_T Memory2_InitialCondition ; real_T UnitDelay3_InitialCondition ; real_T
UnitDelay_InitialCondition_lg5f2ow0lx ; real_T
UnitDelay2_InitialCondition_giqowpzzvx ; real_T WhiteNoise_Mean ; real_T
WhiteNoise_StdDev ; real_T Output_Gain ; real_T
Memory_InitialCondition_pgjcoz42wr [ 4 ] ; real_T Gain1_Gain_gt5xi45qct ;
real_T UnitDelay1_InitialCondition_ij2qzjxqjn ; real_T
Memory2_InitialCondition_cdoo2qwebt ; real_T
UnitDelay3_InitialCondition_hj4lds0xht ; real_T
UnitDelay_InitialCondition_fjgvwcbzyu ; real_T
UnitDelay2_InitialCondition_jfipg1neps ; real_T WhiteNoise_Mean_ermg12yrvu ;
real_T WhiteNoise_StdDev_p5fslwkmty ; real_T Output_Gain_preff52dwy ; real_T
Memory_InitialCondition_b3vjnsfglc [ 4 ] ; real_T Gain1_Gain_poh3ue1azl ;
real_T UnitDelay1_InitialCondition_hsxkj1u2bf ; real_T
Memory2_InitialCondition_llf3ajnusn ; real_T
UnitDelay3_InitialCondition_kjq4iuaqru ; real_T
UnitDelay_InitialCondition_klojgml5si ; real_T
UnitDelay2_InitialCondition_dvcfpmrgc0 ; real_T WhiteNoise_Mean_btucgz1jww ;
real_T WhiteNoise_StdDev_mtoahzi3uk ; real_T Output_Gain_o2cuudz1gi ; real_T
uDLookupTable_tableData [ 33 ] ; real_T uDLookupTable_bp01Data [ 11 ] ;
real_T uDLookupTable_bp02Data [ 3 ] ; real_T uDLookupTable1_tableData [ 33 ]
; real_T uDLookupTable1_bp01Data [ 11 ] ; real_T uDLookupTable1_bp02Data [ 3
] ; real_T uDLookupTable2_tableData [ 33 ] ; real_T uDLookupTable2_bp01Data [
11 ] ; real_T uDLookupTable2_bp02Data [ 3 ] ; real_T uDLookupTable3_tableData
[ 33 ] ; real_T uDLookupTable3_bp01Data [ 11 ] ; real_T
uDLookupTable3_bp02Data [ 3 ] ; real_T uDLookupTable_tableData_hlscvvnmks [
33 ] ; real_T uDLookupTable_bp01Data_d4l0c2eu3n [ 11 ] ; real_T
uDLookupTable_bp02Data_igfn1ibqrq [ 3 ] ; real_T
uDLookupTable1_tableData_dqqhph5tbo [ 33 ] ; real_T
uDLookupTable1_bp01Data_bfg1eu1pvh [ 11 ] ; real_T
uDLookupTable1_bp02Data_ivgbqofzba [ 3 ] ; real_T
uDLookupTable2_tableData_goz3bffxdu [ 33 ] ; real_T
uDLookupTable2_bp01Data_mgwpsuhbfn [ 11 ] ; real_T
uDLookupTable2_bp02Data_f1mokd5wam [ 3 ] ; real_T
uDLookupTable3_tableData_n3uw0evcp1 [ 33 ] ; real_T
uDLookupTable3_bp01Data_kthx3xwrzw [ 11 ] ; real_T
uDLookupTable3_bp02Data_jcwedtfnyc [ 3 ] ; real_T
uDLookupTable_tableData_muyju3ve0k [ 33 ] ; real_T
uDLookupTable_bp01Data_pk0rkkovdp [ 11 ] ; real_T
uDLookupTable_bp02Data_pyb5ql5bu5 [ 3 ] ; real_T
uDLookupTable1_tableData_ketzs12npr [ 33 ] ; real_T
uDLookupTable1_bp01Data_hrrvxrmyu2 [ 11 ] ; real_T
uDLookupTable1_bp02Data_bwkd20jcnc [ 3 ] ; real_T
uDLookupTable2_tableData_mqugaautgc [ 33 ] ; real_T
uDLookupTable2_bp01Data_ftwoipy4qs [ 11 ] ; real_T
uDLookupTable2_bp02Data_ozjcf22dfp [ 3 ] ; real_T
uDLookupTable3_tableData_c1gnbm2fbb [ 33 ] ; real_T
uDLookupTable3_bp01Data_lx5pbcakwh [ 11 ] ; real_T
uDLookupTable3_bp02Data_f1mxjjevep [ 3 ] ; real_T Noise1_Value [ 2 ] ; real_T
Noise1_Value_dxnz00mjf5 [ 2 ] ; real_T Noise1_Value_dcsmwymza4 [ 2 ] ; real_T
Constant_Value ; real_T Gain_Gain ; real_T Constant_Value_ay5zwh5vun ; real_T
Gain_Gain_bfommv4lak ; real_T Constant_Value_jz2p0lxylj ; real_T
Gain_Gain_ofumgodytf ; real_T RTP_00F46B65_cell_temperature_Value ; real_T
RTP_00F46B65_stateOfCharge_Value ; real_T RTP_77F35BF3_cell_temperature_Value
; real_T RTP_77F35BF3_stateOfCharge_Value ; real_T
RTP_78EAB9F6_cell_temperature_Value ; real_T RTP_78EAB9F6_stateOfCharge_Value
; uint32_T uDLookupTable_maxIndex [ 2 ] ; uint32_T uDLookupTable1_maxIndex [
2 ] ; uint32_T uDLookupTable2_maxIndex [ 2 ] ; uint32_T
uDLookupTable3_maxIndex [ 2 ] ; uint32_T uDLookupTable_maxIndex_nlac5mwhde [
2 ] ; uint32_T uDLookupTable1_maxIndex_loobiu0ryk [ 2 ] ; uint32_T
uDLookupTable2_maxIndex_nbhkjutjjk [ 2 ] ; uint32_T
uDLookupTable3_maxIndex_jzphk4ofch [ 2 ] ; uint32_T
uDLookupTable_maxIndex_ipa35g4pl0 [ 2 ] ; uint32_T
uDLookupTable1_maxIndex_jkfrxrkyya [ 2 ] ; uint32_T
uDLookupTable2_maxIndex_a51myydzdo [ 2 ] ; uint32_T
uDLookupTable3_maxIndex_ovcsjvmwm5 [ 2 ] ; } ; extern const char_T *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern DW rtDW ; extern P rtP ;
extern mxArray * mr_Enhanced_BMS_GetDWork ( ) ; extern void
mr_Enhanced_BMS_SetDWork ( const mxArray * ssDW ) ; extern mxArray *
mr_Enhanced_BMS_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * Enhanced_BMS_GetCAPIStaticMap ( void ) ;
extern SimStruct * const rtS ; extern DataMapInfo * rt_dataMapInfoPtr ;
extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ; void MdlOutputs (
int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T tid ) ; void
MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif
