#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "Enhanced_BMS_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 17
#endif
#ifndef SS_INT64
#define SS_INT64 18
#endif
#else
#include "builtin_typeid_types.h"
#include "Enhanced_BMS.h"
#include "Enhanced_BMS_capi.h"
#include "Enhanced_BMS_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 8 , TARGET_STRING (
"Enhanced_BMS/Chart" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 1 , 0
, TARGET_STRING ( "Enhanced_BMS/Chart/is_active_c3_Enhanced_BMS" ) ,
TARGET_STRING ( "is_active_c3_Enhanced_BMS" ) , 0 , 1 , 0 , 0 , 0 } , { 2 , 0
, TARGET_STRING ( "Enhanced_BMS/Chart/is_c3_Enhanced_BMS" ) , TARGET_STRING (
"is_c3_Enhanced_BMS" ) , 0 , 2 , 0 , 0 , 0 } , { 3 , 0 , TARGET_STRING (
"Enhanced_BMS/Multiport Switch" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0
} , { 4 , 0 , TARGET_STRING ( "Enhanced_BMS/Unit Delay" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 0 } , { 5 , 0 , TARGET_STRING (
"Enhanced_BMS/Unit Delay1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , {
6 , 1 , TARGET_STRING ( "Enhanced_BMS/Battery/Balancing Algorithm" ) ,
TARGET_STRING ( "S1" ) , 0 , 0 , 0 , 0 , 0 } , { 7 , 1 , TARGET_STRING (
"Enhanced_BMS/Battery/Balancing Algorithm" ) , TARGET_STRING ( "S2" ) , 1 , 0
, 0 , 0 , 0 } , { 8 , 1 , TARGET_STRING (
"Enhanced_BMS/Battery/Balancing Algorithm" ) , TARGET_STRING ( "S3" ) , 2 , 0
, 0 , 0 , 0 } , { 9 , 1 , TARGET_STRING (
"Enhanced_BMS/Battery/Balancing Algorithm" ) , TARGET_STRING ( "S4" ) , 3 , 0
, 0 , 0 , 0 } , { 10 , 1 , TARGET_STRING (
"Enhanced_BMS/Battery/Balancing Algorithm" ) , TARGET_STRING ( "S5" ) , 4 , 0
, 0 , 0 , 0 } , { 11 , 1 , TARGET_STRING (
"Enhanced_BMS/Battery/Balancing Algorithm" ) , TARGET_STRING ( "S6" ) , 5 , 0
, 0 , 0 , 0 } , { 12 , 0 , TARGET_STRING (
"Enhanced_BMS/Battery/Balancing Algorithm/is_active_c1_Enhanced_BMS" ) ,
TARGET_STRING ( "is_active_c1_Enhanced_BMS" ) , 0 , 1 , 0 , 0 , 0 } , { 13 ,
0 , TARGET_STRING (
"Enhanced_BMS/Battery/Balancing Algorithm/is_c1_Enhanced_BMS" ) ,
TARGET_STRING ( "is_c1_Enhanced_BMS" ) , 0 , 2 , 0 , 0 , 0 } , { 14 , 0 ,
TARGET_STRING (
"Enhanced_BMS/Battery/Balancing Algorithm/Balancing.is_Balancing" ) ,
TARGET_STRING ( "is_Balancing" ) , 0 , 2 , 0 , 0 , 0 } , { 15 , 0 ,
TARGET_STRING ( "Enhanced_BMS/Battery/Max2" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 0 } , { 16 , 0 , TARGET_STRING ( "Enhanced_BMS/Battery/Max3" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 17 , 0 , TARGET_STRING (
"Enhanced_BMS/Battery/Max4" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } ,
{ 18 , 0 , TARGET_STRING ( "Enhanced_BMS/Battery/Unit Delay" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 19 , 0 , TARGET_STRING (
"Enhanced_BMS/Battery/Unit Delay1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 ,
0 } , { 20 , 0 , TARGET_STRING ( "Enhanced_BMS/Battery/Unit Delay2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 21 , 0 , TARGET_STRING (
"Enhanced_BMS/Solver Configuration/RTP_1" ) , TARGET_STRING ( "" ) , 0 , 0 ,
0 , 0 , 0 } , { 22 , 0 , TARGET_STRING ( "Enhanced_BMS/Subsystem/Add" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 23 , 0 , TARGET_STRING (
"Enhanced_BMS/Subsystem/Switch" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0
} , { 24 , 0 , TARGET_STRING (
"Enhanced_BMS/Solver Configuration/EVAL_KEY/INPUT_1_1_1" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 0 } , { 25 , 0 , TARGET_STRING (
"Enhanced_BMS/Solver Configuration/EVAL_KEY/INPUT_2_1_1" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 0 } , { 26 , 0 , TARGET_STRING (
"Enhanced_BMS/Solver Configuration/EVAL_KEY/INPUT_3_1_1" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 0 } , { 27 , 0 , TARGET_STRING (
"Enhanced_BMS/Solver Configuration/EVAL_KEY/INPUT_4_1_1" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 0 } , { 28 , 0 , TARGET_STRING (
"Enhanced_BMS/Solver Configuration/EVAL_KEY/INPUT_5_1_1" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 0 } , { 29 , 0 , TARGET_STRING (
"Enhanced_BMS/Solver Configuration/EVAL_KEY/INPUT_6_1_1" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 0 } , { 30 , 0 , TARGET_STRING (
"Enhanced_BMS/Solver Configuration/EVAL_KEY/INPUT_7_1_1" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 0 } , { 31 , 0 , TARGET_STRING (
"Enhanced_BMS/Solver Configuration/EVAL_KEY/OUTPUT_1_0" ) , TARGET_STRING (
"" ) , 0 , 0 , 2 , 0 , 0 } , { 32 , 0 , TARGET_STRING (
"Enhanced_BMS/Solver Configuration/EVAL_KEY/OUTPUT_1_1" ) , TARGET_STRING (
"" ) , 0 , 0 , 3 , 0 , 0 } , { 33 , 0 , TARGET_STRING (
"Enhanced_BMS/Solver Configuration/EVAL_KEY/STATE_1" ) , TARGET_STRING ( "" )
, 0 , 0 , 4 , 0 , 0 } , { 34 , 0 , TARGET_STRING (
"Enhanced_BMS/Subsystem/Compare To Constant/Compare" ) , TARGET_STRING ( "" )
, 0 , 3 , 0 , 0 , 0 } , { 35 , 2 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/Correction/cell1/MATLAB Function" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 36 , 2 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/Correction/cell1/MATLAB Function" ) ,
TARGET_STRING ( "" ) , 1 , 0 , 0 , 0 , 0 } , { 37 , 2 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/Correction/cell1/MATLAB Function" ) ,
TARGET_STRING ( "" ) , 2 , 0 , 0 , 0 , 0 } , { 38 , 0 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/Correction/cell1/Memory1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 39 , 3 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/Correction/cell2/MATLAB Function" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 40 , 3 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/Correction/cell2/MATLAB Function" ) ,
TARGET_STRING ( "" ) , 1 , 0 , 0 , 0 , 0 } , { 41 , 3 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/Correction/cell2/MATLAB Function" ) ,
TARGET_STRING ( "" ) , 2 , 0 , 0 , 0 , 0 } , { 42 , 0 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/Correction/cell2/Memory1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 43 , 4 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/Correction/cell3/MATLAB Function" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 44 , 4 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/Correction/cell3/MATLAB Function" ) ,
TARGET_STRING ( "" ) , 1 , 0 , 0 , 0 , 0 } , { 45 , 4 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/Correction/cell3/MATLAB Function" ) ,
TARGET_STRING ( "" ) , 2 , 0 , 0 , 0 , 0 } , { 46 , 0 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/Correction/cell3/Memory1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 47 , 0 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell1/2-D Lookup Table" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 48 , 0 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell1/2-D Lookup Table1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 49 , 0 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell1/2-D Lookup Table2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 50 , 0 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell1/2-D Lookup Table3" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 51 , 0 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell2/2-D Lookup Table" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 52 , 0 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell2/2-D Lookup Table1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 53 , 0 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell2/2-D Lookup Table2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 54 , 0 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell2/2-D Lookup Table3" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 55 , 0 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell3/2-D Lookup Table" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 56 , 0 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell3/2-D Lookup Table1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 57 , 0 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell3/2-D Lookup Table2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 58 , 0 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell3/2-D Lookup Table3" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 59 , 0 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/Prediction/Cell1/Gain" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 1 } , { 60 , 0 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/Prediction/Cell2/Gain" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 1 } , { 61 , 0 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/Prediction/Cell3/Gain" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 1 } , { 62 , 0 , TARGET_STRING (
"Enhanced_BMS/Subsystem/Discrete PID Controller/Saturation/Enabled/Saturation"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 63 , 0 , TARGET_STRING (
 "Enhanced_BMS/Subsystem/Discrete PID Controller/Tracking Mode Sum/Tracking Mode/SumI1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 64 , TARGET_STRING ( "Enhanced_BMS/Unit Delay" )
, TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 65 , TARGET_STRING (
"Enhanced_BMS/Unit Delay1" ) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 ,
0 } , { 66 , TARGET_STRING ( "Enhanced_BMS/Battery/Unit Delay" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 67 , TARGET_STRING (
"Enhanced_BMS/Battery/Unit Delay1" ) , TARGET_STRING ( "InitialCondition" ) ,
0 , 0 , 0 } , { 68 , TARGET_STRING ( "Enhanced_BMS/Battery/Unit Delay2" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 69 , TARGET_STRING (
"Enhanced_BMS/Subsystem/Discrete PID Controller" ) , TARGET_STRING ( "P" ) ,
0 , 0 , 0 } , { 70 , TARGET_STRING (
"Enhanced_BMS/Subsystem/Discrete PID Controller" ) , TARGET_STRING ( "I" ) ,
0 , 0 , 0 } , { 71 , TARGET_STRING (
"Enhanced_BMS/Subsystem/Discrete PID Controller" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 72 , TARGET_STRING (
"Enhanced_BMS/Subsystem/Discrete PID Controller" ) , TARGET_STRING ( "Kt" ) ,
0 , 0 , 0 } , { 73 , TARGET_STRING (
"Enhanced_BMS/Subsystem/Discrete PID Controller" ) , TARGET_STRING (
"UpperSaturationLimit" ) , 0 , 0 , 0 } , { 74 , TARGET_STRING (
"Enhanced_BMS/Subsystem/Discrete PID Controller" ) , TARGET_STRING (
"LowerSaturationLimit" ) , 0 , 0 , 0 } , { 75 , TARGET_STRING (
"Enhanced_BMS/Subsystem/Unit Delay2" ) , TARGET_STRING ( "InitialCondition" )
, 0 , 0 , 0 } , { 76 , TARGET_STRING (
 "Enhanced_BMS/Battery/Subsystem_around_RTP_00F46B65_cell_temperature/Subsystem_around_RTP_00F46B65_cell_temperature"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 77 , TARGET_STRING (
 "Enhanced_BMS/Battery/Subsystem_around_RTP_00F46B65_stateOfCharge/Subsystem_around_RTP_00F46B65_stateOfCharge"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 78 , TARGET_STRING (
 "Enhanced_BMS/Battery/Subsystem_around_RTP_77F35BF3_cell_temperature/Subsystem_around_RTP_77F35BF3_cell_temperature"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 79 , TARGET_STRING (
 "Enhanced_BMS/Battery/Subsystem_around_RTP_77F35BF3_stateOfCharge/Subsystem_around_RTP_77F35BF3_stateOfCharge"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 80 , TARGET_STRING (
 "Enhanced_BMS/Battery/Subsystem_around_RTP_78EAB9F6_cell_temperature/Subsystem_around_RTP_78EAB9F6_cell_temperature"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 81 , TARGET_STRING (
 "Enhanced_BMS/Battery/Subsystem_around_RTP_78EAB9F6_stateOfCharge/Subsystem_around_RTP_78EAB9F6_stateOfCharge"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 82 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/Correction/cell1/Measurement Noise" ) ,
TARGET_STRING ( "seed" ) , 0 , 0 , 0 } , { 83 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/Correction/cell1/Noise1" ) ,
TARGET_STRING ( "Value" ) , 0 , 6 , 0 } , { 84 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/Correction/cell1/Memory" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 7 , 0 } , { 85 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/Correction/cell1/Memory1" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 86 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/Correction/cell1/Memory2" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 87 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/Correction/cell2/Measurement Noise" ) ,
TARGET_STRING ( "seed" ) , 0 , 0 , 0 } , { 88 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/Correction/cell2/Noise1" ) ,
TARGET_STRING ( "Value" ) , 0 , 6 , 0 } , { 89 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/Correction/cell2/Memory" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 7 , 0 } , { 90 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/Correction/cell2/Memory1" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 91 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/Correction/cell2/Memory2" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 92 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/Correction/cell3/Measurement Noise" ) ,
TARGET_STRING ( "seed" ) , 0 , 0 , 0 } , { 93 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/Correction/cell3/Noise1" ) ,
TARGET_STRING ( "Value" ) , 0 , 6 , 0 } , { 94 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/Correction/cell3/Memory" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 7 , 0 } , { 95 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/Correction/cell3/Memory1" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 96 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/Correction/cell3/Memory2" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 97 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell1/2-D Lookup Table" ) ,
TARGET_STRING ( "Table" ) , 0 , 8 , 0 } , { 98 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell1/2-D Lookup Table" ) ,
TARGET_STRING ( "BreakpointsForDimension1" ) , 0 , 9 , 0 } , { 99 ,
TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell1/2-D Lookup Table" ) ,
TARGET_STRING ( "BreakpointsForDimension2" ) , 0 , 10 , 0 } , { 100 ,
TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell1/2-D Lookup Table" ) ,
TARGET_STRING ( "maxIndex" ) , 2 , 11 , 0 } , { 101 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell1/2-D Lookup Table1" ) ,
TARGET_STRING ( "Table" ) , 0 , 8 , 0 } , { 102 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell1/2-D Lookup Table1" ) ,
TARGET_STRING ( "BreakpointsForDimension1" ) , 0 , 9 , 0 } , { 103 ,
TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell1/2-D Lookup Table1" ) ,
TARGET_STRING ( "BreakpointsForDimension2" ) , 0 , 10 , 0 } , { 104 ,
TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell1/2-D Lookup Table1" ) ,
TARGET_STRING ( "maxIndex" ) , 2 , 11 , 0 } , { 105 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell1/2-D Lookup Table2" ) ,
TARGET_STRING ( "Table" ) , 0 , 8 , 0 } , { 106 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell1/2-D Lookup Table2" ) ,
TARGET_STRING ( "BreakpointsForDimension1" ) , 0 , 9 , 0 } , { 107 ,
TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell1/2-D Lookup Table2" ) ,
TARGET_STRING ( "BreakpointsForDimension2" ) , 0 , 10 , 0 } , { 108 ,
TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell1/2-D Lookup Table2" ) ,
TARGET_STRING ( "maxIndex" ) , 2 , 11 , 0 } , { 109 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell1/2-D Lookup Table3" ) ,
TARGET_STRING ( "Table" ) , 0 , 8 , 0 } , { 110 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell1/2-D Lookup Table3" ) ,
TARGET_STRING ( "BreakpointsForDimension1" ) , 0 , 9 , 0 } , { 111 ,
TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell1/2-D Lookup Table3" ) ,
TARGET_STRING ( "BreakpointsForDimension2" ) , 0 , 10 , 0 } , { 112 ,
TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell1/2-D Lookup Table3" ) ,
TARGET_STRING ( "maxIndex" ) , 2 , 11 , 0 } , { 113 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell1/Unit Delay" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 114 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell1/Unit Delay1" ) , TARGET_STRING
( "InitialCondition" ) , 0 , 0 , 0 } , { 115 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell1/Unit Delay2" ) , TARGET_STRING
( "InitialCondition" ) , 0 , 0 , 0 } , { 116 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell1/Unit Delay3" ) , TARGET_STRING
( "InitialCondition" ) , 0 , 0 , 0 } , { 117 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell2/2-D Lookup Table" ) ,
TARGET_STRING ( "Table" ) , 0 , 8 , 0 } , { 118 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell2/2-D Lookup Table" ) ,
TARGET_STRING ( "BreakpointsForDimension1" ) , 0 , 9 , 0 } , { 119 ,
TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell2/2-D Lookup Table" ) ,
TARGET_STRING ( "BreakpointsForDimension2" ) , 0 , 10 , 0 } , { 120 ,
TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell2/2-D Lookup Table" ) ,
TARGET_STRING ( "maxIndex" ) , 2 , 11 , 0 } , { 121 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell2/2-D Lookup Table1" ) ,
TARGET_STRING ( "Table" ) , 0 , 8 , 0 } , { 122 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell2/2-D Lookup Table1" ) ,
TARGET_STRING ( "BreakpointsForDimension1" ) , 0 , 9 , 0 } , { 123 ,
TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell2/2-D Lookup Table1" ) ,
TARGET_STRING ( "BreakpointsForDimension2" ) , 0 , 10 , 0 } , { 124 ,
TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell2/2-D Lookup Table1" ) ,
TARGET_STRING ( "maxIndex" ) , 2 , 11 , 0 } , { 125 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell2/2-D Lookup Table2" ) ,
TARGET_STRING ( "Table" ) , 0 , 8 , 0 } , { 126 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell2/2-D Lookup Table2" ) ,
TARGET_STRING ( "BreakpointsForDimension1" ) , 0 , 9 , 0 } , { 127 ,
TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell2/2-D Lookup Table2" ) ,
TARGET_STRING ( "BreakpointsForDimension2" ) , 0 , 10 , 0 } , { 128 ,
TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell2/2-D Lookup Table2" ) ,
TARGET_STRING ( "maxIndex" ) , 2 , 11 , 0 } , { 129 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell2/2-D Lookup Table3" ) ,
TARGET_STRING ( "Table" ) , 0 , 8 , 0 } , { 130 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell2/2-D Lookup Table3" ) ,
TARGET_STRING ( "BreakpointsForDimension1" ) , 0 , 9 , 0 } , { 131 ,
TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell2/2-D Lookup Table3" ) ,
TARGET_STRING ( "BreakpointsForDimension2" ) , 0 , 10 , 0 } , { 132 ,
TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell2/2-D Lookup Table3" ) ,
TARGET_STRING ( "maxIndex" ) , 2 , 11 , 0 } , { 133 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell2/Unit Delay" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 134 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell2/Unit Delay1" ) , TARGET_STRING
( "InitialCondition" ) , 0 , 0 , 0 } , { 135 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell2/Unit Delay2" ) , TARGET_STRING
( "InitialCondition" ) , 0 , 0 , 0 } , { 136 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell2/Unit Delay3" ) , TARGET_STRING
( "InitialCondition" ) , 0 , 0 , 0 } , { 137 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell3/2-D Lookup Table" ) ,
TARGET_STRING ( "Table" ) , 0 , 8 , 0 } , { 138 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell3/2-D Lookup Table" ) ,
TARGET_STRING ( "BreakpointsForDimension1" ) , 0 , 9 , 0 } , { 139 ,
TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell3/2-D Lookup Table" ) ,
TARGET_STRING ( "BreakpointsForDimension2" ) , 0 , 10 , 0 } , { 140 ,
TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell3/2-D Lookup Table" ) ,
TARGET_STRING ( "maxIndex" ) , 2 , 11 , 0 } , { 141 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell3/2-D Lookup Table1" ) ,
TARGET_STRING ( "Table" ) , 0 , 8 , 0 } , { 142 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell3/2-D Lookup Table1" ) ,
TARGET_STRING ( "BreakpointsForDimension1" ) , 0 , 9 , 0 } , { 143 ,
TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell3/2-D Lookup Table1" ) ,
TARGET_STRING ( "BreakpointsForDimension2" ) , 0 , 10 , 0 } , { 144 ,
TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell3/2-D Lookup Table1" ) ,
TARGET_STRING ( "maxIndex" ) , 2 , 11 , 0 } , { 145 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell3/2-D Lookup Table2" ) ,
TARGET_STRING ( "Table" ) , 0 , 8 , 0 } , { 146 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell3/2-D Lookup Table2" ) ,
TARGET_STRING ( "BreakpointsForDimension1" ) , 0 , 9 , 0 } , { 147 ,
TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell3/2-D Lookup Table2" ) ,
TARGET_STRING ( "BreakpointsForDimension2" ) , 0 , 10 , 0 } , { 148 ,
TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell3/2-D Lookup Table2" ) ,
TARGET_STRING ( "maxIndex" ) , 2 , 11 , 0 } , { 149 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell3/2-D Lookup Table3" ) ,
TARGET_STRING ( "Table" ) , 0 , 8 , 0 } , { 150 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell3/2-D Lookup Table3" ) ,
TARGET_STRING ( "BreakpointsForDimension1" ) , 0 , 9 , 0 } , { 151 ,
TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell3/2-D Lookup Table3" ) ,
TARGET_STRING ( "BreakpointsForDimension2" ) , 0 , 10 , 0 } , { 152 ,
TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell3/2-D Lookup Table3" ) ,
TARGET_STRING ( "maxIndex" ) , 2 , 11 , 0 } , { 153 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell3/Unit Delay" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 154 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell3/Unit Delay1" ) , TARGET_STRING
( "InitialCondition" ) , 0 , 0 , 0 } , { 155 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell3/Unit Delay2" ) , TARGET_STRING
( "InitialCondition" ) , 0 , 0 , 0 } , { 156 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/ECM/Cell3/Unit Delay3" ) , TARGET_STRING
( "InitialCondition" ) , 0 , 0 , 0 } , { 157 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/Prediction/Cell1/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 158 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/Prediction/Cell1/Gain" ) , TARGET_STRING
( "Gain" ) , 0 , 0 , 0 } , { 159 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/Prediction/Cell1/Gain1" ) , TARGET_STRING
( "Gain" ) , 0 , 0 , 0 } , { 160 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/Prediction/Cell2/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 161 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/Prediction/Cell2/Gain" ) , TARGET_STRING
( "Gain" ) , 0 , 0 , 0 } , { 162 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/Prediction/Cell2/Gain1" ) , TARGET_STRING
( "Gain" ) , 0 , 0 , 0 } , { 163 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/Prediction/Cell3/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 164 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/Prediction/Cell3/Gain" ) , TARGET_STRING
( "Gain" ) , 0 , 0 , 0 } , { 165 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/Prediction/Cell3/Gain1" ) , TARGET_STRING
( "Gain" ) , 0 , 0 , 0 } , { 166 , TARGET_STRING (
"Enhanced_BMS/Subsystem/Discrete PID Controller/Integrator/Discrete/Integrator"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 167 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/Correction/cell1/Measurement Noise/Output"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 168 , TARGET_STRING (
 "Enhanced_BMS/Battery/SOC Estimator/Correction/cell1/Measurement Noise/White Noise"
) , TARGET_STRING ( "Mean" ) , 0 , 0 , 0 } , { 169 , TARGET_STRING (
 "Enhanced_BMS/Battery/SOC Estimator/Correction/cell1/Measurement Noise/White Noise"
) , TARGET_STRING ( "StdDev" ) , 0 , 0 , 0 } , { 170 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/Correction/cell2/Measurement Noise/Output"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 171 , TARGET_STRING (
 "Enhanced_BMS/Battery/SOC Estimator/Correction/cell2/Measurement Noise/White Noise"
) , TARGET_STRING ( "Mean" ) , 0 , 0 , 0 } , { 172 , TARGET_STRING (
 "Enhanced_BMS/Battery/SOC Estimator/Correction/cell2/Measurement Noise/White Noise"
) , TARGET_STRING ( "StdDev" ) , 0 , 0 , 0 } , { 173 , TARGET_STRING (
"Enhanced_BMS/Battery/SOC Estimator/Correction/cell3/Measurement Noise/Output"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 174 , TARGET_STRING (
 "Enhanced_BMS/Battery/SOC Estimator/Correction/cell3/Measurement Noise/White Noise"
) , TARGET_STRING ( "Mean" ) , 0 , 0 , 0 } , { 175 , TARGET_STRING (
 "Enhanced_BMS/Battery/SOC Estimator/Correction/cell3/Measurement Noise/White Noise"
) , TARGET_STRING ( "StdDev" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0
, 0 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { - 1 } ; static const
rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 ,
0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootOutputs [ ] = { { 0 , 0 ,
( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const
rtwCAPI_ModelParameters rtModelParameters [ ] = { { 176 , TARGET_STRING (
"CC" ) , 0 , 0 , 0 } , { 177 , TARGET_STRING ( "Cell_Max_Voltage" ) , 0 , 0 ,
0 } , { 178 , TARGET_STRING ( "I_disch" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , 0
, 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . o1lapiknns , & rtDW . cqxvkxfbpc
, & rtDW . h2swncc3e3 , & rtB . hvd3jbccmz , & rtB . jmjhdalsff , & rtB .
kpzbmh0lai , & rtB . ooycaplx1k , & rtB . cu4w31sksr , & rtB . f2njjfiimh , &
rtB . beqgjbeb4n , & rtB . fpjwalqauw , & rtB . bzbuyck32c , & rtDW .
bzxxyscndm , & rtDW . krfhocoehg , & rtDW . mbshdldyye , & rtB . aurf0yuixe ,
& rtB . he1tpnoytf , & rtB . o4w5dvpcom , & rtB . drskglgsan , & rtB .
npmfe0f0qo , & rtB . e2wraft2ng , & rtB . fkbuizmwag , & rtB . gayzlcwngn , &
rtB . cc5d4yqgrh , & rtB . astrqosyep [ 0 ] , & rtB . ianuzwuuzi [ 0 ] , &
rtB . nejmax202r [ 0 ] , & rtB . kqdsxgdce3 [ 0 ] , & rtB . fvwqlwkcjj [ 0 ]
, & rtB . pmvqkgardu [ 0 ] , & rtB . c5ugal2ihq [ 0 ] , & rtB . njirpk2h0g [
0 ] , & rtB . jgxxaq3f3y [ 0 ] , & rtB . cmp2isfx12 [ 0 ] , & rtB .
coxqunjq31 , & rtB . jeirpnbx5x [ 0 ] , & rtB . fcejgnms2p , & rtB .
k50sc0nhbf , & rtB . bd21p4dssk , & rtB . nk0pyr02g1 [ 0 ] , & rtB .
iogf30vzmj , & rtB . en40yfhmae , & rtB . cbid5mayod , & rtB . ppz4jciujz [ 0
] , & rtB . kglz5kc2at , & rtB . jsegs02ydk , & rtB . ejirnozlpr , & rtB .
fsut2120nl , & rtB . iewfeqykba , & rtB . i3oa0kjo3n , & rtB . ojyf5vvsjz , &
rtB . ehadpfh5m0 , & rtB . aex4ukke0v , & rtB . lf544j4evk , & rtB .
clm2z3u0kf , & rtB . hyds5cqb3c , & rtB . p5id2fvixd , & rtB . dx143zacdx , &
rtB . mzw3hm10ix , & rtB . g2p05i01qe , & rtB . jmu41cjmsi , & rtB .
iyyq1v520t , & rtB . ogpcqmf3h5 , & rtB . ii5sqkoni1 , & rtP .
UnitDelay_InitialCondition_dsqmqwsouv , & rtP .
UnitDelay1_InitialCondition_b4qmpi3m02 , & rtP . UnitDelay_InitialCondition ,
& rtP . UnitDelay1_InitialCondition , & rtP . UnitDelay2_InitialCondition , &
rtP . DiscretePIDController_P , & rtP . DiscretePIDController_I , & rtP .
DiscretePIDController_InitialConditionForIntegrator , & rtP .
DiscretePIDController_Kt , & rtP . DiscretePIDController_UpperSaturationLimit
, & rtP . DiscretePIDController_LowerSaturationLimit , & rtP .
UnitDelay2_InitialCondition_lzqzzzqyck , & rtP .
RTP_00F46B65_cell_temperature_Value , & rtP .
RTP_00F46B65_stateOfCharge_Value , & rtP .
RTP_77F35BF3_cell_temperature_Value , & rtP .
RTP_77F35BF3_stateOfCharge_Value , & rtP .
RTP_78EAB9F6_cell_temperature_Value , & rtP .
RTP_78EAB9F6_stateOfCharge_Value , & rtP . MeasurementNoise_seed , & rtP .
Noise1_Value [ 0 ] , & rtP . Memory_InitialCondition [ 0 ] , & rtP .
Memory1_InitialCondition , & rtP . Memory2_InitialCondition , & rtP .
MeasurementNoise_seed_bzjvksvjcu , & rtP . Noise1_Value_dxnz00mjf5 [ 0 ] , &
rtP . Memory_InitialCondition_pgjcoz42wr [ 0 ] , & rtP .
Memory1_InitialCondition_mtmvynyd4g , & rtP .
Memory2_InitialCondition_cdoo2qwebt , & rtP .
MeasurementNoise_seed_paj2igjfps , & rtP . Noise1_Value_dcsmwymza4 [ 0 ] , &
rtP . Memory_InitialCondition_b3vjnsfglc [ 0 ] , & rtP .
Memory1_InitialCondition_fbpxruqfum , & rtP .
Memory2_InitialCondition_llf3ajnusn , & rtP . uDLookupTable_tableData [ 0 ] ,
& rtP . uDLookupTable_bp01Data [ 0 ] , & rtP . uDLookupTable_bp02Data [ 0 ] ,
& rtP . uDLookupTable_maxIndex [ 0 ] , & rtP . uDLookupTable1_tableData [ 0 ]
, & rtP . uDLookupTable1_bp01Data [ 0 ] , & rtP . uDLookupTable1_bp02Data [ 0
] , & rtP . uDLookupTable1_maxIndex [ 0 ] , & rtP . uDLookupTable2_tableData
[ 0 ] , & rtP . uDLookupTable2_bp01Data [ 0 ] , & rtP .
uDLookupTable2_bp02Data [ 0 ] , & rtP . uDLookupTable2_maxIndex [ 0 ] , & rtP
. uDLookupTable3_tableData [ 0 ] , & rtP . uDLookupTable3_bp01Data [ 0 ] , &
rtP . uDLookupTable3_bp02Data [ 0 ] , & rtP . uDLookupTable3_maxIndex [ 0 ] ,
& rtP . UnitDelay_InitialCondition_lg5f2ow0lx , & rtP .
UnitDelay1_InitialCondition_leo0ri5tvd , & rtP .
UnitDelay2_InitialCondition_giqowpzzvx , & rtP . UnitDelay3_InitialCondition
, & rtP . uDLookupTable_tableData_hlscvvnmks [ 0 ] , & rtP .
uDLookupTable_bp01Data_d4l0c2eu3n [ 0 ] , & rtP .
uDLookupTable_bp02Data_igfn1ibqrq [ 0 ] , & rtP .
uDLookupTable_maxIndex_nlac5mwhde [ 0 ] , & rtP .
uDLookupTable1_tableData_dqqhph5tbo [ 0 ] , & rtP .
uDLookupTable1_bp01Data_bfg1eu1pvh [ 0 ] , & rtP .
uDLookupTable1_bp02Data_ivgbqofzba [ 0 ] , & rtP .
uDLookupTable1_maxIndex_loobiu0ryk [ 0 ] , & rtP .
uDLookupTable2_tableData_goz3bffxdu [ 0 ] , & rtP .
uDLookupTable2_bp01Data_mgwpsuhbfn [ 0 ] , & rtP .
uDLookupTable2_bp02Data_f1mokd5wam [ 0 ] , & rtP .
uDLookupTable2_maxIndex_nbhkjutjjk [ 0 ] , & rtP .
uDLookupTable3_tableData_n3uw0evcp1 [ 0 ] , & rtP .
uDLookupTable3_bp01Data_kthx3xwrzw [ 0 ] , & rtP .
uDLookupTable3_bp02Data_jcwedtfnyc [ 0 ] , & rtP .
uDLookupTable3_maxIndex_jzphk4ofch [ 0 ] , & rtP .
UnitDelay_InitialCondition_fjgvwcbzyu , & rtP .
UnitDelay1_InitialCondition_ij2qzjxqjn , & rtP .
UnitDelay2_InitialCondition_jfipg1neps , & rtP .
UnitDelay3_InitialCondition_hj4lds0xht , & rtP .
uDLookupTable_tableData_muyju3ve0k [ 0 ] , & rtP .
uDLookupTable_bp01Data_pk0rkkovdp [ 0 ] , & rtP .
uDLookupTable_bp02Data_pyb5ql5bu5 [ 0 ] , & rtP .
uDLookupTable_maxIndex_ipa35g4pl0 [ 0 ] , & rtP .
uDLookupTable1_tableData_ketzs12npr [ 0 ] , & rtP .
uDLookupTable1_bp01Data_hrrvxrmyu2 [ 0 ] , & rtP .
uDLookupTable1_bp02Data_bwkd20jcnc [ 0 ] , & rtP .
uDLookupTable1_maxIndex_jkfrxrkyya [ 0 ] , & rtP .
uDLookupTable2_tableData_mqugaautgc [ 0 ] , & rtP .
uDLookupTable2_bp01Data_ftwoipy4qs [ 0 ] , & rtP .
uDLookupTable2_bp02Data_ozjcf22dfp [ 0 ] , & rtP .
uDLookupTable2_maxIndex_a51myydzdo [ 0 ] , & rtP .
uDLookupTable3_tableData_c1gnbm2fbb [ 0 ] , & rtP .
uDLookupTable3_bp01Data_lx5pbcakwh [ 0 ] , & rtP .
uDLookupTable3_bp02Data_f1mxjjevep [ 0 ] , & rtP .
uDLookupTable3_maxIndex_ovcsjvmwm5 [ 0 ] , & rtP .
UnitDelay_InitialCondition_klojgml5si , & rtP .
UnitDelay1_InitialCondition_hsxkj1u2bf , & rtP .
UnitDelay2_InitialCondition_dvcfpmrgc0 , & rtP .
UnitDelay3_InitialCondition_kjq4iuaqru , & rtP . Constant_Value , & rtP .
Gain_Gain , & rtP . Gain1_Gain , & rtP . Constant_Value_ay5zwh5vun , & rtP .
Gain_Gain_bfommv4lak , & rtP . Gain1_Gain_gt5xi45qct , & rtP .
Constant_Value_jz2p0lxylj , & rtP . Gain_Gain_ofumgodytf , & rtP .
Gain1_Gain_poh3ue1azl , & rtP . Integrator_gainval , & rtP . Output_Gain , &
rtP . WhiteNoise_Mean , & rtP . WhiteNoise_StdDev , & rtP .
Output_Gain_preff52dwy , & rtP . WhiteNoise_Mean_ermg12yrvu , & rtP .
WhiteNoise_StdDev_p5fslwkmty , & rtP . Output_Gain_o2cuudz1gi , & rtP .
WhiteNoise_Mean_btucgz1jww , & rtP . WhiteNoise_StdDev_mtoahzi3uk , & rtP .
CC , & rtP . Cell_Max_Voltage , & rtP . I_disch , } ; static int32_T *
rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } ,
{ "unsigned char" , "uint8_T" , 0 , 0 , sizeof ( uint8_T ) , ( uint8_T )
SS_UINT8 , 0 , 0 , 0 } , { "unsigned int" , "uint32_T" , 0 , 0 , sizeof (
uint32_T ) , ( uint8_T ) SS_UINT32 , 0 , 0 , 0 } , { "unsigned char" ,
"boolean_T" , 0 , 0 , sizeof ( boolean_T ) , ( uint8_T ) SS_BOOLEAN , 0 , 0 ,
0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } , { rtwCAPI_VECTOR , 6 , 2 , 0 } , {
rtwCAPI_VECTOR , 8 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 10 , 2 , 0 } , {
rtwCAPI_VECTOR , 12 , 2 , 0 } , { rtwCAPI_VECTOR , 10 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 14 , 2 , 0 } , { rtwCAPI_VECTOR , 16 , 2 , 0 } , {
rtwCAPI_VECTOR , 18 , 2 , 0 } , { rtwCAPI_VECTOR , 20 , 2 , 0 } } ; static
const uint_T rtDimensionArray [ ] = { 1 , 1 , 4 , 1 , 13 , 1 , 3 , 1 , 96 , 1
, 1 , 4 , 1 , 2 , 11 , 3 , 11 , 1 , 1 , 3 , 2 , 1 } ; static const real_T
rtcapiStoredFloats [ ] = { 0.1 , 0.0 , 1.0 } ; static const rtwCAPI_FixPtMap
rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , (
boolean_T ) 0 } , } ; static const rtwCAPI_SampleTimeMap rtSampleTimeMap [ ]
= { { ( const void * ) & rtcapiStoredFloats [ 0 ] , ( const void * ) &
rtcapiStoredFloats [ 1 ] , ( int8_T ) 0 , ( uint8_T ) 0 } , { ( NULL ) , (
NULL ) , 2 , 0 } , { ( const void * ) & rtcapiStoredFloats [ 2 ] , ( const
void * ) & rtcapiStoredFloats [ 1 ] , ( int8_T ) 1 , ( uint8_T ) 0 } } ;
static rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 64 ,
rtRootInputs , 0 , rtRootOutputs , 0 } , { rtBlockParameters , 112 ,
rtModelParameters , 3 } , { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap
, rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float"
, { 3454706739U , 4059958679U , 454448695U , 2222288127U } , ( NULL ) , 0 , (
boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * Enhanced_BMS_GetCAPIStaticMap ( void ) {
return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void Enhanced_BMS_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( ( *
rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void Enhanced_BMS_host_InitializeDataMapInfo (
Enhanced_BMS_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap ->
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
