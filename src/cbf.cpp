//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: cbf.cpp
//
// Code generated for Simulink model 'cbf'.
//
// Model version                  : 8.0
// Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
// C/C++ source code generated on : Sat Feb  1 14:51:52 2025
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "cbf.h"

extern "C"
{

#include "rt_nonfinite.h"

}

#include "rtwtypes.h"
#include "cbf_types.h"

// Block signals (default storage)
B_cbf_T cbf_B;

// Block states (default storage)
DW_cbf_T cbf_DW;

// Real-time model
RT_MODEL_cbf_T cbf_M_ = RT_MODEL_cbf_T();
RT_MODEL_cbf_T *const cbf_M = &cbf_M_;

// Model step function
void cbf_step(void)
{
  SL_Bus_cbf_std_msgs_Bool b_varargout_2_0;
  SL_Bus_cbf_std_msgs_Float64 b_varargout_2;
  SL_Bus_cbf_std_msgs_Float64 rtb_BusAssignment1;
  real_T b_value;
  real_T b_value_0;
  real_T b_value_1;
  real_T rtb_minmax1550;
  real_T timegap_accel_tmp;
  boolean_T b_varargout_1;

  // Outputs for Atomic SubSystem: '<Root>/Subscribe6'
  // MATLABSystem: '<S9>/SourceBlock'
  b_varargout_1 = Sub_cbf_476.getLatestMessage(&b_varargout_2);

  // Outputs for Enabled SubSystem: '<S9>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S15>/Enable'

  // Start for MATLABSystem: '<S9>/SourceBlock'
  if (b_varargout_1) {
    // SignalConversion generated from: '<S15>/In1'
    cbf_B.In1 = b_varargout_2;
  }

  // End of Start for MATLABSystem: '<S9>/SourceBlock'
  // End of Outputs for SubSystem: '<S9>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe6'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe'
  // MATLABSystem: '<S6>/SourceBlock'
  b_varargout_1 = Sub_cbf_429.getLatestMessage(&b_varargout_2);

  // Outputs for Enabled SubSystem: '<S6>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S12>/Enable'

  // Start for MATLABSystem: '<S6>/SourceBlock'
  if (b_varargout_1) {
    // SignalConversion generated from: '<S12>/In1'
    cbf_B.In1_m = b_varargout_2;
  }

  // End of Start for MATLABSystem: '<S6>/SourceBlock'
  // End of Outputs for SubSystem: '<S6>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe4'
  // MATLABSystem: '<S8>/SourceBlock'
  b_varargout_1 = Sub_cbf_430.getLatestMessage(&b_varargout_2);

  // Outputs for Enabled SubSystem: '<S8>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S14>/Enable'

  // Start for MATLABSystem: '<S8>/SourceBlock'
  if (b_varargout_1) {
    // SignalConversion generated from: '<S14>/In1'
    cbf_B.In1_p = b_varargout_2;
  }

  // End of Start for MATLABSystem: '<S8>/SourceBlock'
  // End of Outputs for SubSystem: '<S8>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe4'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe1'
  // MATLABSystem: '<S7>/SourceBlock'
  b_varargout_1 = Sub_cbf_527.getLatestMessage(&b_varargout_2);

  // Outputs for Enabled SubSystem: '<S7>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S13>/Enable'

  // Start for MATLABSystem: '<S7>/SourceBlock'
  if (b_varargout_1) {
    // SignalConversion generated from: '<S13>/In1'
    cbf_B.In1_f = b_varargout_2;
  }

  // End of Start for MATLABSystem: '<S7>/SourceBlock'
  // End of Outputs for SubSystem: '<S7>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe1'

  // MATLABSystem: '<S11>/Get Parameter2'
  ParamGet_cbf_448.get_parameter(&cbf_B.b_value);

  // MATLABSystem: '<S11>/Get Parameter1'
  ParamGet_cbf_447.get_parameter(&b_value);

  // MATLABSystem: '<S11>/Get Parameter3'
  ParamGet_cbf_449.get_parameter(&b_value_0);

  // MATLABSystem: '<S11>/Get Parameter4'
  ParamGet_cbf_450.get_parameter(&b_value_1);

  // MATLABSystem: '<S11>/Get Parameter5'
  ParamGet_cbf_463.get_parameter(&rtb_minmax1550);

  // MATLAB Function: '<S11>/MATLAB Function1' incorporates:
  //   MATLABSystem: '<S11>/Get Parameter1'
  //   MATLABSystem: '<S11>/Get Parameter2'
  //   MATLABSystem: '<S11>/Get Parameter3'
  //   MATLABSystem: '<S11>/Get Parameter4'
  //   MATLABSystem: '<S11>/Get Parameter5'
  //
  timegap_accel_tmp = (cbf_B.In1_m.Data - cbf_B.b_value * cbf_B.In1_f.Data) -
    b_value_0;
  cbf_B.timegap_accel = b_value / cbf_B.b_value * timegap_accel_tmp + 1.0 /
    cbf_B.b_value * cbf_B.In1_p.Data;
  b_value_0 = (b_value_1 + rtb_minmax1550) * cbf_B.In1_p.Data + b_value_1 *
    rtb_minmax1550 * (cbf_B.In1_m.Data - b_value_0);
  if ((cbf_B.timegap_accel <= b_value_0) || rtIsNaN(b_value_0)) {
    b_value_1 = cbf_B.timegap_accel;
  } else {
    b_value_1 = b_value_0;
  }

  // Switch: '<Root>/Switch' incorporates:
  //   Constant: '<Root>/Constant2'
  //   SignalConversion generated from: '<Root>/Bus Selector7'

  if (cbf_P.Constant2_Value > cbf_P.Switch_Threshold) {
    // MinMax: '<Root>/MinMax' incorporates:
    //   MATLAB Function: '<S11>/MATLAB Function1'
    //   SignalConversion generated from: '<Root>/Bus Selector7'

    if ((b_value_1 <= cbf_B.In1.Data) || rtIsNaN(cbf_B.In1.Data)) {
      rtb_minmax1550 = b_value_1;
    } else {
      rtb_minmax1550 = cbf_B.In1.Data;
    }

    // End of MinMax: '<Root>/MinMax'
  } else {
    rtb_minmax1550 = cbf_B.In1.Data;
  }

  // End of Switch: '<Root>/Switch'

  // Saturate: '<Root>/min//max 1.5//-5.0'
  if (rtb_minmax1550 > cbf_P.minmax1550_UpperSat) {
    rtb_minmax1550 = cbf_P.minmax1550_UpperSat;
  } else if (rtb_minmax1550 < cbf_P.minmax1550_LowerSat) {
    rtb_minmax1550 = cbf_P.minmax1550_LowerSat;
  }

  // End of Saturate: '<Root>/min//max 1.5//-5.0'

  // BusAssignment: '<Root>/Bus Assignment1'
  rtb_BusAssignment1.Data = rtb_minmax1550;

  // Outputs for Atomic SubSystem: '<Root>/Publish1'
  // MATLABSystem: '<S4>/SinkBlock'
  Pub_cbf_401.publish(&rtb_BusAssignment1);

  // End of Outputs for SubSystem: '<Root>/Publish1'

  // BusAssignment: '<Root>/Bus Assignment2' incorporates:
  //   MATLAB Function: '<S11>/MATLAB Function1'
  //   MATLABSystem: '<S11>/Get Parameter1'
  //   MATLABSystem: '<S11>/Get Parameter2'
  //   SignalConversion generated from: '<Root>/Bus Selector7'
  //
  cbf_B.BusAssignment2.Linear.X = cbf_B.In1.Data;
  cbf_B.BusAssignment2.Linear.Y = b_value_1;
  cbf_B.BusAssignment2.Linear.Z = rtb_minmax1550;
  cbf_B.BusAssignment2.Angular.Y = cbf_B.timegap_accel;
  cbf_B.BusAssignment2.Angular.Z = b_value_0;
  cbf_B.BusAssignment2.Angular.X = (cbf_B.In1_p.Data - cbf_B.b_value * b_value_1)
    + timegap_accel_tmp * b_value;

  // Outputs for Atomic SubSystem: '<Root>/Publish2'
  // MATLABSystem: '<S5>/SinkBlock'
  Pub_cbf_520.publish(&cbf_B.BusAssignment2);

  // End of Outputs for SubSystem: '<Root>/Publish2'

  // MATLAB Function: '<Root>/MATLAB Function1'
  cbf_DW.relative_distance_prev_not_empt = true;

  // Outputs for Atomic SubSystem: '<Root>/Subscribe7'
  // MATLABSystem: '<S10>/SourceBlock'
  Sub_cbf_481.getLatestMessage(&b_varargout_2_0);

  // End of Outputs for SubSystem: '<Root>/Subscribe7'
}

// Model initialize function
void cbf_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  {
    int32_T i;
    char_T b_zeroDelimTopic_2[15];
    char_T b_zeroDelimTopic[14];
    char_T b_zeroDelimTopic_0[10];
    char_T b_zeroDelimTopic_1[8];
    char_T b_zeroDelimName[6];
    char_T b_zeroDelimName_0[3];
    static const char_T b_zeroDelimTopic_3[14] = "cmd_accel_pre";
    static const char_T b_zeroDelimTopic_4[10] = "lead_dist";
    static const char_T b_zeroDelimTopic_5[8] = "rel_vel";
    static const char_T b_zeroDelimTopic_6[17] = "/car/state/vel_x";
    static const char_T b_zeroDelimTopic_7[10] = "cmd_accel";
    static const char_T b_zeroDelimTopic_8[15] = "/cbf/cbf_debug";
    static const char_T b_zeroDelimTopic_9[25] = "/car/hud/mini_car_enable";
    static const char_T b_zeroDelimName_1[8] = "timegap";
    static const char_T b_zeroDelimName_2[10] = "k_timegap";
    static const char_T b_zeroDelimName_3[6] = "s_min";

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe6'
    // SystemInitialize for Enabled SubSystem: '<S9>/Enabled Subsystem'
    // SystemInitialize for SignalConversion generated from: '<S15>/In1' incorporates:
    //   Outport: '<S15>/Out1'

    cbf_B.In1 = cbf_P.Out1_Y0_a;

    // End of SystemInitialize for SubSystem: '<S9>/Enabled Subsystem'

    // Start for MATLABSystem: '<S9>/SourceBlock'
    cbf_DW.obj_n0.matlabCodegenIsDeleted = false;
    cbf_DW.obj_n0.isInitialized = 1;
    for (i = 0; i < 14; i++) {
      b_zeroDelimTopic[i] = b_zeroDelimTopic_3[i];
    }

    Sub_cbf_476.createSubscriber(&b_zeroDelimTopic[0], 1);
    cbf_DW.obj_n0.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S9>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe6'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe'
    // SystemInitialize for Enabled SubSystem: '<S6>/Enabled Subsystem'
    // SystemInitialize for SignalConversion generated from: '<S12>/In1' incorporates:
    //   Outport: '<S12>/Out1'

    cbf_B.In1_m = cbf_P.Out1_Y0_f;

    // End of SystemInitialize for SubSystem: '<S6>/Enabled Subsystem'

    // Start for MATLABSystem: '<S6>/SourceBlock'
    cbf_DW.obj_f.matlabCodegenIsDeleted = false;
    cbf_DW.obj_f.isInitialized = 1;
    for (i = 0; i < 10; i++) {
      b_zeroDelimTopic_0[i] = b_zeroDelimTopic_4[i];
    }

    Sub_cbf_429.createSubscriber(&b_zeroDelimTopic_0[0], 1);
    cbf_DW.obj_f.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S6>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe4'
    // SystemInitialize for Enabled SubSystem: '<S8>/Enabled Subsystem'
    // SystemInitialize for SignalConversion generated from: '<S14>/In1' incorporates:
    //   Outport: '<S14>/Out1'

    cbf_B.In1_p = cbf_P.Out1_Y0_p;

    // End of SystemInitialize for SubSystem: '<S8>/Enabled Subsystem'

    // Start for MATLABSystem: '<S8>/SourceBlock'
    cbf_DW.obj_o.matlabCodegenIsDeleted = false;
    cbf_DW.obj_o.isInitialized = 1;
    for (i = 0; i < 8; i++) {
      b_zeroDelimTopic_1[i] = b_zeroDelimTopic_5[i];
    }

    Sub_cbf_430.createSubscriber(&b_zeroDelimTopic_1[0], 1);
    cbf_DW.obj_o.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S8>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe4'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe1'
    // SystemInitialize for Enabled SubSystem: '<S7>/Enabled Subsystem'
    // SystemInitialize for SignalConversion generated from: '<S13>/In1' incorporates:
    //   Outport: '<S13>/Out1'

    cbf_B.In1_f = cbf_P.Out1_Y0_n;

    // End of SystemInitialize for SubSystem: '<S7>/Enabled Subsystem'

    // Start for MATLABSystem: '<S7>/SourceBlock'
    cbf_DW.obj_h.matlabCodegenIsDeleted = false;
    cbf_DW.obj_h.isInitialized = 1;
    for (i = 0; i < 17; i++) {
      cbf_B.b_zeroDelimTopic_m[i] = b_zeroDelimTopic_6[i];
    }

    Sub_cbf_527.createSubscriber(&cbf_B.b_zeroDelimTopic_m[0], 1);
    cbf_DW.obj_h.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S7>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe1'

    // SystemInitialize for Atomic SubSystem: '<Root>/Publish1'
    // Start for MATLABSystem: '<S4>/SinkBlock'
    cbf_DW.obj_c.matlabCodegenIsDeleted = false;
    cbf_DW.obj_c.isInitialized = 1;
    for (i = 0; i < 10; i++) {
      b_zeroDelimTopic_0[i] = b_zeroDelimTopic_7[i];
    }

    Pub_cbf_401.createPublisher(&b_zeroDelimTopic_0[0], 1);
    cbf_DW.obj_c.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S4>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Publish1'

    // SystemInitialize for Atomic SubSystem: '<Root>/Publish2'
    // Start for MATLABSystem: '<S5>/SinkBlock'
    cbf_DW.obj_j.matlabCodegenIsDeleted = false;
    cbf_DW.obj_j.isInitialized = 1;
    for (i = 0; i < 15; i++) {
      b_zeroDelimTopic_2[i] = b_zeroDelimTopic_8[i];
    }

    Pub_cbf_520.createPublisher(&b_zeroDelimTopic_2[0], 1);
    cbf_DW.obj_j.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S5>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Publish2'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe7'
    // Start for MATLABSystem: '<S10>/SourceBlock'
    cbf_DW.obj_d.matlabCodegenIsDeleted = false;
    cbf_DW.obj_d.isInitialized = 1;
    for (i = 0; i < 25; i++) {
      cbf_B.b_zeroDelimTopic[i] = b_zeroDelimTopic_9[i];
    }

    Sub_cbf_481.createSubscriber(&cbf_B.b_zeroDelimTopic[0], 1);
    cbf_DW.obj_d.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S10>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe7'

    // Start for MATLABSystem: '<S11>/Get Parameter2'
    cbf_DW.obj_p.matlabCodegenIsDeleted = false;
    cbf_DW.obj_p.isInitialized = 1;
    for (i = 0; i < 8; i++) {
      b_zeroDelimTopic_1[i] = b_zeroDelimName_1[i];
    }

    ParamGet_cbf_448.initialize(&b_zeroDelimTopic_1[0]);
    ParamGet_cbf_448.initialize_error_codes(0, 1, 2, 3);
    ParamGet_cbf_448.set_initial_value(2.0);
    cbf_DW.obj_p.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S11>/Get Parameter2'

    // Start for MATLABSystem: '<S11>/Get Parameter1'
    cbf_DW.obj_n.matlabCodegenIsDeleted = false;
    cbf_DW.obj_n.isInitialized = 1;
    for (i = 0; i < 10; i++) {
      b_zeroDelimTopic_0[i] = b_zeroDelimName_2[i];
    }

    ParamGet_cbf_447.initialize(&b_zeroDelimTopic_0[0]);
    ParamGet_cbf_447.initialize_error_codes(0, 1, 2, 3);
    ParamGet_cbf_447.set_initial_value(0.1);
    cbf_DW.obj_n.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S11>/Get Parameter1'

    // Start for MATLABSystem: '<S11>/Get Parameter3'
    cbf_DW.obj_i.matlabCodegenIsDeleted = false;
    cbf_DW.obj_i.isInitialized = 1;
    for (i = 0; i < 6; i++) {
      b_zeroDelimName[i] = b_zeroDelimName_3[i];
    }

    ParamGet_cbf_449.initialize(&b_zeroDelimName[0]);
    ParamGet_cbf_449.initialize_error_codes(0, 1, 2, 3);
    ParamGet_cbf_449.set_initial_value(7.0);
    cbf_DW.obj_i.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S11>/Get Parameter3'

    // Start for MATLABSystem: '<S11>/Get Parameter4'
    cbf_DW.obj_k.matlabCodegenIsDeleted = false;
    cbf_DW.obj_k.isInitialized = 1;
    b_zeroDelimName_0[0] = 'k';
    b_zeroDelimName_0[1] = '1';
    b_zeroDelimName_0[2] = '\x00';
    ParamGet_cbf_450.initialize(&b_zeroDelimName_0[0]);
    ParamGet_cbf_450.initialize_error_codes(0, 1, 2, 3);
    ParamGet_cbf_450.set_initial_value(0.5);
    cbf_DW.obj_k.isSetupComplete = true;

    // Start for MATLABSystem: '<S11>/Get Parameter5'
    cbf_DW.obj.matlabCodegenIsDeleted = false;
    cbf_DW.obj.isInitialized = 1;
    b_zeroDelimName_0[0] = 'k';
    b_zeroDelimName_0[1] = '2';
    b_zeroDelimName_0[2] = '\x00';
    ParamGet_cbf_463.initialize(&b_zeroDelimName_0[0]);
    ParamGet_cbf_463.initialize_error_codes(0, 1, 2, 3);
    ParamGet_cbf_463.set_initial_value(0.5);
    cbf_DW.obj.isSetupComplete = true;
  }
}

// Model terminate function
void cbf_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Subscribe6'
  // Terminate for MATLABSystem: '<S9>/SourceBlock'
  if (!cbf_DW.obj_n0.matlabCodegenIsDeleted) {
    cbf_DW.obj_n0.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S9>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe6'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe'
  // Terminate for MATLABSystem: '<S6>/SourceBlock'
  if (!cbf_DW.obj_f.matlabCodegenIsDeleted) {
    cbf_DW.obj_f.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S6>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe4'
  // Terminate for MATLABSystem: '<S8>/SourceBlock'
  if (!cbf_DW.obj_o.matlabCodegenIsDeleted) {
    cbf_DW.obj_o.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S8>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe4'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe1'
  // Terminate for MATLABSystem: '<S7>/SourceBlock'
  if (!cbf_DW.obj_h.matlabCodegenIsDeleted) {
    cbf_DW.obj_h.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S7>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe1'

  // Terminate for MATLABSystem: '<S11>/Get Parameter2'
  if (!cbf_DW.obj_p.matlabCodegenIsDeleted) {
    cbf_DW.obj_p.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S11>/Get Parameter2'

  // Terminate for MATLABSystem: '<S11>/Get Parameter1'
  if (!cbf_DW.obj_n.matlabCodegenIsDeleted) {
    cbf_DW.obj_n.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S11>/Get Parameter1'

  // Terminate for MATLABSystem: '<S11>/Get Parameter3'
  if (!cbf_DW.obj_i.matlabCodegenIsDeleted) {
    cbf_DW.obj_i.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S11>/Get Parameter3'

  // Terminate for MATLABSystem: '<S11>/Get Parameter4'
  if (!cbf_DW.obj_k.matlabCodegenIsDeleted) {
    cbf_DW.obj_k.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S11>/Get Parameter4'

  // Terminate for MATLABSystem: '<S11>/Get Parameter5'
  if (!cbf_DW.obj.matlabCodegenIsDeleted) {
    cbf_DW.obj.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S11>/Get Parameter5'

  // Terminate for Atomic SubSystem: '<Root>/Publish1'
  // Terminate for MATLABSystem: '<S4>/SinkBlock'
  if (!cbf_DW.obj_c.matlabCodegenIsDeleted) {
    cbf_DW.obj_c.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S4>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish1'

  // Terminate for Atomic SubSystem: '<Root>/Publish2'
  // Terminate for MATLABSystem: '<S5>/SinkBlock'
  if (!cbf_DW.obj_j.matlabCodegenIsDeleted) {
    cbf_DW.obj_j.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S5>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish2'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe7'
  // Terminate for MATLABSystem: '<S10>/SourceBlock'
  if (!cbf_DW.obj_d.matlabCodegenIsDeleted) {
    cbf_DW.obj_d.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S10>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe7'
}

//
// File trailer for generated code.
//
// [EOF]
//
