/*
 * File: WiperSystem.h
 *
 * Code generated for Simulink model 'WiperSystem'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 8.10 (R2016a) 10-Feb-2016
 * C/C++ source code generated on : Wed Oct 30 20:58:40 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR (32-bit)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_WiperSystem_h_
#define RTW_HEADER_WiperSystem_h_
#ifndef WiperSystem_COMMON_INCLUDES_
# define WiperSystem_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* WiperSystem_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM RT_MODEL;

/* Real-time Model Data Structure */
struct tag_RTM {
  const char_T * volatile errorStatus;
  RTWSolverInfo solverInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    SimTimeStep simTimeStep;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Model entry point functions */
extern void WiperSystem_initialize(void);
extern void WiperSystem_step(void);

/* Real-time Model object */
extern RT_MODEL *const rtM;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/ ' : Unused code path elimination
 * Block '<Root>/Data Type Conversion1' : Unused code path elimination
 * Block '<Root>/Data Type Conversion2' : Unused code path elimination
 * Block '<Root>/Scope' : Unused code path elimination
 * Block '<S1>/FromWs' : Unused code path elimination
 * Block '<S3>/AND' : Unused code path elimination
 * Block '<S3>/Constant' : Unused code path elimination
 * Block '<S3>/Constant1' : Unused code path elimination
 * Block '<S3>/Constant2' : Unused code path elimination
 * Block '<S3>/Constant3' : Unused code path elimination
 * Block '<S3>/Constant4' : Unused code path elimination
 * Block '<S3>/Constant5' : Unused code path elimination
 * Block '<S3>/Constant6' : Unused code path elimination
 * Block '<S3>/Constant7' : Unused code path elimination
 * Block '<S3>/Constant8' : Unused code path elimination
 * Block '<S3>/High Speed' : Unused code path elimination
 * Block '<S3>/Low Speed' : Unused code path elimination
 * Block '<S3>/Multiport Switch' : Unused code path elimination
 * Block '<S3>/Multiport Switch1' : Unused code path elimination
 * Block '<S3>/OFFMode' : Unused code path elimination
 * Block '<S3>/OFFMode1' : Unused code path elimination
 * Block '<S3>/Switch' : Unused code path elimination
 * Block '<S3>/Unit Delay' : Unused code path elimination
 * Block '<S4>/Add' : Unused code path elimination
 * Block '<S4>/Add1' : Unused code path elimination
 * Block '<S4>/Saturation' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'WiperSystem'
 * '<S1>'   : 'WiperSystem/Signal Builder'
 * '<S2>'   : 'WiperSystem/Wiper System'
 * '<S3>'   : 'WiperSystem/Wiper System/Wiper Motor'
 * '<S4>'   : 'WiperSystem/Wiper System/Wiper Motor/singal Handling'
 */
#endif                                 /* RTW_HEADER_WiperSystem_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
