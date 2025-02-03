//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: cbf.h
//
// Code generated for Simulink model 'cbf'.
//
// Model version                  : 8.5
// Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
// C/C++ source code generated on : Mon Feb  3 10:37:39 2025
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_cbf_h_
#define RTW_HEADER_cbf_h_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#include "cbf_types.h"

extern "C"
{

#include "rt_nonfinite.h"

}

extern "C"
{

#include "rtGetInf.h"

}

#include <stddef.h>

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

// Block signals (default storage)
struct B_cbf_T {
  SL_Bus_cbf_geometry_msgs_Twist BusAssignment2;// '<Root>/Bus Assignment2'
  real_T csumrev[6];
  char_T b_zeroDelimTopic[25];
  real_T csumrev_m[3];
  char_T b_zeroDelimTopic_c[18];
  char_T b_zeroDelimTopic_k[17];
  char_T b_zeroDelimTopic_cx[15];
  real_T MovingAverage2;               // '<Root>/Moving Average2'
  real_T MovingAverage1;               // '<Root>/Moving Average1'
  real_T cumRevIndex;
  real_T csum;
  real_T modValueRev;
  real_T z;
  real_T b_value;
  SL_Bus_cbf_std_msgs_Float64 In1;     // '<S18>/In1'
  SL_Bus_cbf_std_msgs_Float64 In1_p;   // '<S17>/In1'
  SL_Bus_cbf_std_msgs_Float64 In1_f;   // '<S16>/In1'
  SL_Bus_cbf_std_msgs_Float64 In1_m;   // '<S15>/In1'
  SL_Bus_cbf_std_msgs_Float64 b_varargout_2;
};

// Block states (default storage) for system '<Root>'
struct DW_cbf_T {
  dsp_simulink_MovingAverage_cb_T obj; // '<Root>/Moving Average1'
  dsp_simulink_MovingAverage_h_T obj_i;// '<Root>/Moving Average2'
  ros_slros_internal_block_GetP_T obj_e;// '<S14>/Get Parameter5'
  ros_slros_internal_block_GetP_T obj_k;// '<S14>/Get Parameter4'
  ros_slros_internal_block_GetP_T obj_i4;// '<S14>/Get Parameter3'
  ros_slroscpp_internal_block_P_T obj_o;// '<S8>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_d;// '<S7>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_j;// '<S6>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_c;// '<S5>/SinkBlock'
  ros_slroscpp_internal_block_S_T obj_dk;// '<S13>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_n;// '<S12>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_ob;// '<S11>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_h;// '<S10>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_f;// '<S9>/SourceBlock'
  real_T TimeStampA;                   // '<Root>/Derivative1'
  real_T LastUAtTimeA;                 // '<Root>/Derivative1'
  real_T TimeStampB;                   // '<Root>/Derivative1'
  real_T LastUAtTimeB;                 // '<Root>/Derivative1'
  real_T TimeStampA_i;                 // '<Root>/Derivative2'
  real_T LastUAtTimeA_j;               // '<Root>/Derivative2'
  real_T TimeStampB_f;                 // '<Root>/Derivative2'
  real_T LastUAtTimeB_n;               // '<Root>/Derivative2'
  real_T TimeStampA_p;                 // '<Root>/Derivative4'
  real_T LastUAtTimeA_l;               // '<Root>/Derivative4'
  real_T TimeStampB_k;                 // '<Root>/Derivative4'
  real_T LastUAtTimeB_p;               // '<Root>/Derivative4'
  boolean_T relative_distance_prev_not_empt;// '<Root>/MATLAB Function1'
};

// Parameters (default storage)
struct P_cbf_T_ {
  SL_Bus_cbf_geometry_msgs_Twist Constant_Value;// Computed Parameter: Constant_Value
                                                   //  Referenced by: '<S2>/Constant'

  SL_Bus_cbf_geometry_msgs_Twist Constant_Value_a;// Computed Parameter: Constant_Value_a
                                                     //  Referenced by: '<S3>/Constant'

  SL_Bus_cbf_std_msgs_Bool Out1_Y0;    // Computed Parameter: Out1_Y0
                                          //  Referenced by: '<S19>/Out1'

  SL_Bus_cbf_std_msgs_Bool Constant_Value_o;// Computed Parameter: Constant_Value_o
                                               //  Referenced by: '<S13>/Constant'

  SL_Bus_cbf_std_msgs_Float64 Constant_Value_m;// Computed Parameter: Constant_Value_m
                                                  //  Referenced by: '<S1>/Constant'

  SL_Bus_cbf_std_msgs_Float64 Out1_Y0_f;// Computed Parameter: Out1_Y0_f
                                           //  Referenced by: '<S15>/Out1'

  SL_Bus_cbf_std_msgs_Float64 Constant_Value_k;// Computed Parameter: Constant_Value_k
                                                  //  Referenced by: '<S9>/Constant'

  SL_Bus_cbf_std_msgs_Float64 Out1_Y0_n;// Computed Parameter: Out1_Y0_n
                                           //  Referenced by: '<S16>/Out1'

  SL_Bus_cbf_std_msgs_Float64 Constant_Value_l;// Computed Parameter: Constant_Value_l
                                                  //  Referenced by: '<S10>/Constant'

  SL_Bus_cbf_std_msgs_Float64 Out1_Y0_p;// Computed Parameter: Out1_Y0_p
                                           //  Referenced by: '<S17>/Out1'

  SL_Bus_cbf_std_msgs_Float64 Constant_Value_p;// Computed Parameter: Constant_Value_p
                                                  //  Referenced by: '<S11>/Constant'

  SL_Bus_cbf_std_msgs_Float64 Out1_Y0_a;// Computed Parameter: Out1_Y0_a
                                           //  Referenced by: '<S18>/Out1'

  SL_Bus_cbf_std_msgs_Float64 Constant_Value_ad;// Computed Parameter: Constant_Value_ad
                                                   //  Referenced by: '<S12>/Constant'

  real_T Constant2_Value;              // Expression: 1.0
                                          //  Referenced by: '<Root>/Constant2'

  real_T Switch_Threshold;             // Expression: 0.5
                                          //  Referenced by: '<Root>/Switch'

  real_T minmax1550_UpperSat;          // Expression: 1.5
                                          //  Referenced by: '<Root>/min//max 1.5//-5.0'

  real_T minmax1550_LowerSat;          // Expression: -5.0
                                          //  Referenced by: '<Root>/min//max 1.5//-5.0'

  real_T Constant1_Value;              // Expression: 5
                                          //  Referenced by: '<Root>/Constant1'

};

// Real-time Model Data Structure
struct tag_RTM_cbf_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;

  //
  //  Timing:
  //  The following substructure contains information regarding
  //  the timing information for the model.

  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    SimTimeStep simTimeStep;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C"
{

#endif

  extern P_cbf_T cbf_P;

#ifdef __cplusplus

}

#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C"
{

#endif

  extern struct B_cbf_T cbf_B;

#ifdef __cplusplus

}

#endif

// Block states (default storage)
extern struct DW_cbf_T cbf_DW;

#ifdef __cplusplus

extern "C"
{

#endif

  // Model entry point functions
  extern void cbf_initialize(void);
  extern void cbf_step(void);
  extern void cbf_terminate(void);

#ifdef __cplusplus

}

#endif

// Real-time Model object
#ifdef __cplusplus

extern "C"
{

#endif

  extern RT_MODEL_cbf_T *const cbf_M;

#ifdef __cplusplus

}

#endif

extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<Root>/Scope' : Unused code path elimination


//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'cbf'
//  '<S1>'   : 'cbf/Blank Message1'
//  '<S2>'   : 'cbf/Blank Message2'
//  '<S3>'   : 'cbf/Blank Message6'
//  '<S4>'   : 'cbf/MATLAB Function1'
//  '<S5>'   : 'cbf/Publish1'
//  '<S6>'   : 'cbf/Publish2'
//  '<S7>'   : 'cbf/Publish5'
//  '<S8>'   : 'cbf/Publish6'
//  '<S9>'   : 'cbf/Subscribe'
//  '<S10>'  : 'cbf/Subscribe1'
//  '<S11>'  : 'cbf/Subscribe4'
//  '<S12>'  : 'cbf/Subscribe6'
//  '<S13>'  : 'cbf/Subscribe7'
//  '<S14>'  : 'cbf/cbf_filter'
//  '<S15>'  : 'cbf/Subscribe/Enabled Subsystem'
//  '<S16>'  : 'cbf/Subscribe1/Enabled Subsystem'
//  '<S17>'  : 'cbf/Subscribe4/Enabled Subsystem'
//  '<S18>'  : 'cbf/Subscribe6/Enabled Subsystem'
//  '<S19>'  : 'cbf/Subscribe7/Enabled Subsystem'
//  '<S20>'  : 'cbf/cbf_filter/MATLAB Function1'

#endif                                 // RTW_HEADER_cbf_h_

//
// File trailer for generated code.
//
// [EOF]
//
