//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: cbf.h
//
// Code generated for Simulink model 'cbf'.
//
// Model version                  : 3.72
// Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
// C/C++ source code generated on : Fri Dec 10 12:11:26 2021
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_cbf_h_
#define RTW_HEADER_cbf_h_
#include <stddef.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#include "cbf_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

// Block signals (default storage)
struct B_cbf_T {
  SL_Bus_cbf_geometry_msgs_Twist In1;  // '<S14>/In1'
  SL_Bus_cbf_geometry_msgs_Twist In1_p;// '<S13>/In1'
  SL_Bus_cbf_geometry_msgs_Twist BusAssignment2;// '<Root>/Bus Assignment2'
  char_T b_zeroDelimTopic[25];
  SL_Bus_cbf_std_msgs_Float64 In1_o;   // '<S15>/In1'
  SL_Bus_cbf_std_msgs_Float64 In1_m;   // '<S12>/In1'
  SL_Bus_cbf_std_msgs_Bool In1_c;      // '<S16>/In1'
};

// Block states (default storage) for system '<Root>'
struct DW_cbf_T {
  ros_slros_internal_block_GetP_T obj; // '<S11>/Get Parameter6'
  ros_slros_internal_block_GetP_T obj_e;// '<S11>/Get Parameter5'
  ros_slros_internal_block_GetP_T obj_k;// '<S11>/Get Parameter4'
  ros_slros_internal_block_GetP_T obj_i;// '<S11>/Get Parameter3'
  ros_slros_internal_block_GetP_T obj_p;// '<S11>/Get Parameter2'
  ros_slros_internal_block_GetP_T obj_n;// '<S11>/Get Parameter1'
  ros_slroscpp_internal_block_P_T obj_j;// '<S5>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_c;// '<S4>/SinkBlock'
  ros_slroscpp_internal_block_S_T obj_d;// '<S10>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_n0;// '<S9>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_is;// '<S8>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_o;// '<S7>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_f;// '<S6>/SourceBlock'
  boolean_T relative_distance_prev_not_empt;// '<Root>/MATLAB Function1'
};

// Parameters (default storage)
struct P_cbf_T_ {
  SL_Bus_cbf_geometry_msgs_Twist Constant_Value;// Computed Parameter: Constant_Value
                                                   //  Referenced by: '<S2>/Constant'

  SL_Bus_cbf_geometry_msgs_Twist Out1_Y0;// Computed Parameter: Out1_Y0
                                            //  Referenced by: '<S13>/Out1'

  SL_Bus_cbf_geometry_msgs_Twist Constant_Value_p;// Computed Parameter: Constant_Value_p
                                                     //  Referenced by: '<S7>/Constant'

  SL_Bus_cbf_geometry_msgs_Twist Out1_Y0_k;// Computed Parameter: Out1_Y0_k
                                              //  Referenced by: '<S14>/Out1'

  SL_Bus_cbf_geometry_msgs_Twist Constant_Value_pq;// Computed Parameter: Constant_Value_pq
                                                      //  Referenced by: '<S8>/Constant'

  SL_Bus_cbf_std_msgs_Bool Out1_Y0_o;  // Computed Parameter: Out1_Y0_o
                                          //  Referenced by: '<S16>/Out1'

  SL_Bus_cbf_std_msgs_Bool Constant_Value_o;// Computed Parameter: Constant_Value_o
                                               //  Referenced by: '<S10>/Constant'

  SL_Bus_cbf_std_msgs_Float64 Constant_Value_m;// Computed Parameter: Constant_Value_m
                                                  //  Referenced by: '<S1>/Constant'

  SL_Bus_cbf_std_msgs_Float64 Out1_Y0_f;// Computed Parameter: Out1_Y0_f
                                           //  Referenced by: '<S12>/Out1'

  SL_Bus_cbf_std_msgs_Float64 Constant_Value_k;// Computed Parameter: Constant_Value_k
                                                  //  Referenced by: '<S6>/Constant'

  SL_Bus_cbf_std_msgs_Float64 Out1_Y0_a;// Computed Parameter: Out1_Y0_a
                                           //  Referenced by: '<S15>/Out1'

  SL_Bus_cbf_std_msgs_Float64 Constant_Value_a;// Computed Parameter: Constant_Value_a
                                                  //  Referenced by: '<S9>/Constant'

  real_T Switch_Threshold;             // Expression: 0
                                          //  Referenced by: '<Root>/Switch'

  real_T Constant1_Value;              // Expression: 5
                                          //  Referenced by: '<Root>/Constant1'

};

// Real-time Model Data Structure
struct tag_RTM_cbf_T {
  const char_T *errorStatus;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_cbf_T cbf_P;

#ifdef __cplusplus

}
#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern struct B_cbf_T cbf_B;

#ifdef __cplusplus

}
#endif

// Block states (default storage)
extern struct DW_cbf_T cbf_DW;

#ifdef __cplusplus

extern "C" {

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

extern "C" {

#endif

  extern RT_MODEL_cbf_T *const cbf_M;

#ifdef __cplusplus

}
#endif

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
//  '<S3>'   : 'cbf/MATLAB Function1'
//  '<S4>'   : 'cbf/Publish1'
//  '<S5>'   : 'cbf/Publish2'
//  '<S6>'   : 'cbf/Subscribe'
//  '<S7>'   : 'cbf/Subscribe4'
//  '<S8>'   : 'cbf/Subscribe5'
//  '<S9>'   : 'cbf/Subscribe6'
//  '<S10>'  : 'cbf/Subscribe7'
//  '<S11>'  : 'cbf/cbf_filter'
//  '<S12>'  : 'cbf/Subscribe/Enabled Subsystem'
//  '<S13>'  : 'cbf/Subscribe4/Enabled Subsystem'
//  '<S14>'  : 'cbf/Subscribe5/Enabled Subsystem'
//  '<S15>'  : 'cbf/Subscribe6/Enabled Subsystem'
//  '<S16>'  : 'cbf/Subscribe7/Enabled Subsystem'
//  '<S17>'  : 'cbf/cbf_filter/MATLAB Function1'

#endif                                 // RTW_HEADER_cbf_h_

//
// File trailer for generated code.
//
// [EOF]
//
