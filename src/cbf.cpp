//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: cbf.cpp
//
// Code generated for Simulink model 'cbf'.
//
// Model version                  : 5.1
// Simulink Coder version         : 9.7 (R2022a) 13-Nov-2021
// C/C++ source code generated on : Mon Jun 20 15:39:01 2022
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "cbf.h"

extern "C" {

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
  real_T rtb_cmd_accel;
  real_T rtb_minmax3015;
  real_T value;
  real_T value_0;
  real_T value_1;
  boolean_T b_varargout_1;

  // Outputs for Atomic SubSystem: '<Root>/Subscribe6'
  // MATLABSystem: '<S9>/SourceBlock'
  b_varargout_1 = Sub_cbf_549.getLatestMessage(&b_varargout_2);

  // Outputs for Enabled SubSystem: '<S9>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S16>/Enable'

  if (b_varargout_1) {
    // SignalConversion generated from: '<S16>/In1'
    cbf_B.In1_g = b_varargout_2;
  }

  // End of MATLABSystem: '<S9>/SourceBlock'
  // End of Outputs for SubSystem: '<S9>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe6'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe'
  // MATLABSystem: '<S6>/SourceBlock'
  b_varargout_1 = Sub_cbf_546.getLatestMessage(&b_varargout_2);

  // Outputs for Enabled SubSystem: '<S6>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S13>/Enable'

  if (b_varargout_1) {
    // SignalConversion generated from: '<S13>/In1'
    cbf_B.In1_o = b_varargout_2;
  }

  // End of MATLABSystem: '<S6>/SourceBlock'
  // End of Outputs for SubSystem: '<S6>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe4'
  // MATLABSystem: '<S7>/SourceBlock'
  b_varargout_1 = Sub_cbf_547.getLatestMessage(&cbf_B.BusAssignment2);

  // Outputs for Enabled SubSystem: '<S7>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S14>/Enable'

  if (b_varargout_1) {
    // SignalConversion generated from: '<S14>/In1'
    cbf_B.In1_j = cbf_B.BusAssignment2;
  }

  // End of MATLABSystem: '<S7>/SourceBlock'
  // End of Outputs for SubSystem: '<S7>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe4'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe5'
  // MATLABSystem: '<S8>/SourceBlock'
  b_varargout_1 = Sub_cbf_548.getLatestMessage(&cbf_B.BusAssignment2);

  // Outputs for Enabled SubSystem: '<S8>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S15>/Enable'

  if (b_varargout_1) {
    // SignalConversion generated from: '<S15>/In1'
    cbf_B.In1 = cbf_B.BusAssignment2;
  }

  // End of MATLABSystem: '<S8>/SourceBlock'
  // End of Outputs for SubSystem: '<S8>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe5'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe8'
  // MATLABSystem: '<S11>/SourceBlock'
  b_varargout_1 = Sub_cbf_551.getLatestMessage(&b_varargout_2);

  // Outputs for Enabled SubSystem: '<S11>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S18>/Enable'

  if (b_varargout_1) {
    // SignalConversion generated from: '<S18>/In1'
    cbf_B.In1_d = b_varargout_2;
  }

  // End of MATLABSystem: '<S11>/SourceBlock'
  // End of Outputs for SubSystem: '<S11>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe8'

  // MATLABSystem: '<S12>/Get Parameter2'
  ParamGet_cbf_568.get_parameter(&cbf_B.value);

  // MATLABSystem: '<S12>/Get Parameter1'
  ParamGet_cbf_567.get_parameter(&cbf_B.value_c);

  // MATLABSystem: '<S12>/Get Parameter7'
  ParamGet_cbf_573.get_parameter(&cbf_B.value_k);

  // MATLABSystem: '<S12>/Get Parameter8'
  ParamGet_cbf_574.get_parameter(&value);

  // MATLABSystem: '<S12>/Get Parameter3'
  ParamGet_cbf_569.get_parameter(&rtb_cmd_accel);

  // MATLABSystem: '<S12>/Get Parameter4'
  ParamGet_cbf_570.get_parameter(&rtb_minmax3015);

  // MATLABSystem: '<S12>/Get Parameter5'
  ParamGet_cbf_571.get_parameter(&value_0);

  // MATLABSystem: '<S12>/Get Parameter9'
  ParamGet_cbf_575.get_parameter(&value_1);

  // MATLAB Function: '<S12>/MATLAB Function1' incorporates:
  //   MATLABSystem: '<S12>/Get Parameter1'
  //   MATLABSystem: '<S12>/Get Parameter2'
  //   MATLABSystem: '<S12>/Get Parameter3'
  //   MATLABSystem: '<S12>/Get Parameter4'
  //   MATLABSystem: '<S12>/Get Parameter5'
  //   MATLABSystem: '<S12>/Get Parameter7'
  //   MATLABSystem: '<S12>/Get Parameter8'
  //   MATLABSystem: '<S12>/Get Parameter9'

  cbf_B.value = ((((cbf_B.value / value - 1.0) * cbf_B.In1_d.Data + -3.0) +
                  (cbf_B.In1_j.Linear.Z - cbf_B.value * cbf_B.In1_d.Data) *
                  cbf_B.value_k) + (cbf_B.In1_o.Data - cbf_B.value *
    cbf_B.In1.Linear.X) * cbf_B.value_c) * (value / cbf_B.value);
  value = (((-3.0 - cbf_B.In1_d.Data) * value_1 + value_0 * cbf_B.In1_j.Linear.Z)
           + (cbf_B.In1_o.Data - rtb_cmd_accel) * rtb_minmax3015) * (1.0 / value);
  if ((cbf_B.value <= value) || rtIsNaN(value)) {
    rtb_cmd_accel = cbf_B.value;
  } else {
    rtb_cmd_accel = value;
  }

  // MATLABSystem: '<Root>/Get Parameter3'
  ParamGet_cbf_540.get_parameter(&rtb_minmax3015);

  // Switch: '<Root>/Switch' incorporates:
  //   Constant: '<Root>/Constant2'
  //   SignalConversion generated from: '<Root>/Bus Selector7'

  if (cbf_P.Constant2_Value > cbf_P.Switch_Threshold) {
    // MinMax: '<Root>/Doesn't allow nominal to brake harder than -0.5' incorporates:
    //   MATLABSystem: '<Root>/Get Parameter3'
    //   SignalConversion generated from: '<Root>/Bus Selector7'

    if ((cbf_B.In1_g.Data >= rtb_minmax3015) || rtIsNaN(rtb_minmax3015)) {
      rtb_minmax3015 = cbf_B.In1_g.Data;
    }

    // End of MinMax: '<Root>/Doesn't allow nominal to brake harder than -0.5'

    // MinMax: '<Root>/MinMax'
    if ((rtb_cmd_accel <= rtb_minmax3015) || rtIsNaN(rtb_minmax3015)) {
      rtb_minmax3015 = rtb_cmd_accel;
    }

    // End of MinMax: '<Root>/MinMax'
  } else {
    rtb_minmax3015 = cbf_B.In1_g.Data;
  }

  // End of Switch: '<Root>/Switch'

  // Saturate: '<Root>/min//max -3.0//1.5'
  if (rtb_minmax3015 > cbf_P.minmax3015_UpperSat) {
    rtb_minmax3015 = cbf_P.minmax3015_UpperSat;
  } else if (rtb_minmax3015 < cbf_P.minmax3015_LowerSat) {
    rtb_minmax3015 = cbf_P.minmax3015_LowerSat;
  }

  // End of Saturate: '<Root>/min//max -3.0//1.5'

  // BusAssignment: '<Root>/Bus Assignment1'
  rtb_BusAssignment1.Data = rtb_minmax3015;

  // Outputs for Atomic SubSystem: '<Root>/Publish1'
  // MATLABSystem: '<S4>/SinkBlock'
  Pub_cbf_543.publish(&rtb_BusAssignment1);

  // End of Outputs for SubSystem: '<Root>/Publish1'

  // BusAssignment: '<Root>/Bus Assignment2' incorporates:
  //   Constant: '<S2>/Constant'
  //   MATLAB Function: '<S12>/MATLAB Function1'
  //   SignalConversion generated from: '<Root>/Bus Selector7'

  cbf_B.BusAssignment2 = cbf_P.Constant_Value;
  cbf_B.BusAssignment2.Linear.X = cbf_B.In1_g.Data;
  cbf_B.BusAssignment2.Linear.Y = rtb_cmd_accel;
  cbf_B.BusAssignment2.Linear.Z = rtb_minmax3015;
  cbf_B.BusAssignment2.Angular.Y = cbf_B.value;
  cbf_B.BusAssignment2.Angular.Z = value;

  // Outputs for Atomic SubSystem: '<Root>/Publish2'
  // MATLABSystem: '<S5>/SinkBlock'
  Pub_cbf_544.publish(&cbf_B.BusAssignment2);

  // End of Outputs for SubSystem: '<Root>/Publish2'

  // MATLAB Function: '<Root>/MATLAB Function1'
  cbf_DW.relative_distance_prev_not_empt = true;

  // MATLABSystem: '<S12>/Get Parameter6'
  ParamGet_cbf_572.get_parameter(&cbf_B.value);

  // Outputs for Atomic SubSystem: '<Root>/Subscribe7'
  // MATLABSystem: '<S10>/SourceBlock'
  Sub_cbf_550.getLatestMessage(&b_varargout_2_0);

  // End of Outputs for SubSystem: '<Root>/Subscribe7'
}

// Model initialize function
void cbf_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  {
    char_T b_zeroDelimTopic[14];
    char_T b_zeroDelimTopic_0[10];
    char_T b_zeroDelimTopic_1[8];
    char_T b_zeroDelimName[7];
    char_T b_zeroDelimTopic_3[6];
    char_T b_zeroDelimTopic_2[4];
    char_T b_zeroDelimName_0[3];
    static const char_T tmp[13] = { 'c', 'm', 'd', '_', 'a', 'c', 'c', 'e', 'l',
      '_', 'p', 'r', 'e' };

    static const char_T tmp_0[9] = { 'l', 'e', 'a', 'd', '_', 'd', 'i', 's', 't'
    };

    static const char_T tmp_1[7] = { 'r', 'e', 'l', '_', 'v', 'e', 'l' };

    static const char_T tmp_2[5] = { 'a', 'c', 'c', 'e', 'l' };

    static const char_T tmp_3[9] = { 'c', 'm', 'd', '_', 'a', 'c', 'c', 'e', 'l'
    };

    static const char_T tmp_4[14] = { '/', 'c', 'b', 'f', '/', 'c', 'b', 'f',
      '_', 'd', 'e', 'b', 'u', 'g' };

    static const char_T tmp_5[24] = { '/', 'c', 'a', 'r', '/', 'h', 'u', 'd',
      '/', 'm', 'i', 'n', 'i', '_', 'c', 'a', 'r', '_', 'e', 'n', 'a', 'b', 'l',
      'e' };

    static const char_T tmp_6[7] = { 't', 'i', 'm', 'e', 'g', 'a', 'p' };

    static const char_T tmp_7[6] = { 'k', '_', 't', 'g', '_', '0' };

    static const char_T tmp_8[6] = { 'k', '_', 't', 'g', '_', '1' };

    static const char_T tmp_9[6] = { 'k', '_', 'c', 'a', '_', '2' };

    static const char_T tmp_a[5] = { 's', '_', 'm', 'i', 'n' };

    static const char_T tmp_b[6] = { 'k', '_', 'c', 'a', '_', '0' };

    static const char_T tmp_c[6] = { 'k', '_', 'c', 'a', '_', '1' };

    static const char_T tmp_d[9] = { 'a', 'c', 't', '_', 'd', 'e', 'l', 'a', 'y'
    };

    static const char_T tmp_e[20] = { 'a', '_', 'm', 'i', 'n', '_', 'n', 'o',
      '_', 'b', 'r', 'a', 'k', 'e', '_', 'c', 'h', 'e', 'c', 'k' };

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe6'
    // SystemInitialize for Enabled SubSystem: '<S9>/Enabled Subsystem'
    // SystemInitialize for SignalConversion generated from: '<S16>/In1' incorporates:
    //   Outport: '<S16>/Out1'

    cbf_B.In1_g = cbf_P.Out1_Y0_e;

    // End of SystemInitialize for SubSystem: '<S9>/Enabled Subsystem'

    // Start for MATLABSystem: '<S9>/SourceBlock'
    cbf_DW.obj_j.matlabCodegenIsDeleted = false;
    cbf_DW.obj_j.isInitialized = 1;
    for (int32_T i = 0; i < 13; i++) {
      b_zeroDelimTopic[i] = tmp[i];
    }

    b_zeroDelimTopic[13] = '\x00';
    Sub_cbf_549.createSubscriber(&b_zeroDelimTopic[0], 1);
    cbf_DW.obj_j.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S9>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe6'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe'
    // SystemInitialize for Enabled SubSystem: '<S6>/Enabled Subsystem'
    // SystemInitialize for SignalConversion generated from: '<S13>/In1' incorporates:
    //   Outport: '<S13>/Out1'

    cbf_B.In1_o = cbf_P.Out1_Y0_k;

    // End of SystemInitialize for SubSystem: '<S6>/Enabled Subsystem'

    // Start for MATLABSystem: '<S6>/SourceBlock'
    cbf_DW.obj_mg.matlabCodegenIsDeleted = false;
    cbf_DW.obj_mg.isInitialized = 1;
    for (int32_T i = 0; i < 9; i++) {
      b_zeroDelimTopic_0[i] = tmp_0[i];
    }

    b_zeroDelimTopic_0[9] = '\x00';
    Sub_cbf_546.createSubscriber(&b_zeroDelimTopic_0[0], 1);
    cbf_DW.obj_mg.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S6>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe4'
    // SystemInitialize for Enabled SubSystem: '<S7>/Enabled Subsystem'
    // SystemInitialize for SignalConversion generated from: '<S14>/In1' incorporates:
    //   Outport: '<S14>/Out1'

    cbf_B.In1_j = cbf_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S7>/Enabled Subsystem'

    // Start for MATLABSystem: '<S7>/SourceBlock'
    cbf_DW.obj_c.matlabCodegenIsDeleted = false;
    cbf_DW.obj_c.isInitialized = 1;
    for (int32_T i = 0; i < 7; i++) {
      b_zeroDelimTopic_1[i] = tmp_1[i];
    }

    b_zeroDelimTopic_1[7] = '\x00';
    Sub_cbf_547.createSubscriber(&b_zeroDelimTopic_1[0], 1);
    cbf_DW.obj_c.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S7>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe4'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe5'
    // SystemInitialize for Enabled SubSystem: '<S8>/Enabled Subsystem'
    // SystemInitialize for SignalConversion generated from: '<S15>/In1' incorporates:
    //   Outport: '<S15>/Out1'

    cbf_B.In1 = cbf_P.Out1_Y0_m;

    // End of SystemInitialize for SubSystem: '<S8>/Enabled Subsystem'

    // Start for MATLABSystem: '<S8>/SourceBlock'
    cbf_DW.obj_i.matlabCodegenIsDeleted = false;
    cbf_DW.obj_i.isInitialized = 1;
    b_zeroDelimTopic_2[0] = 'v';
    b_zeroDelimTopic_2[1] = 'e';
    b_zeroDelimTopic_2[2] = 'l';
    b_zeroDelimTopic_2[3] = '\x00';
    Sub_cbf_548.createSubscriber(&b_zeroDelimTopic_2[0], 1);
    cbf_DW.obj_i.isSetupComplete = true;

    // End of SystemInitialize for SubSystem: '<Root>/Subscribe5'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe8'
    // SystemInitialize for Enabled SubSystem: '<S11>/Enabled Subsystem'
    // SystemInitialize for SignalConversion generated from: '<S18>/In1' incorporates:
    //   Outport: '<S18>/Out1'

    cbf_B.In1_d = cbf_P.Out1_Y0_p;

    // End of SystemInitialize for SubSystem: '<S11>/Enabled Subsystem'

    // Start for MATLABSystem: '<S11>/SourceBlock'
    cbf_DW.obj_f.matlabCodegenIsDeleted = false;
    cbf_DW.obj_f.isInitialized = 1;
    for (int32_T i = 0; i < 5; i++) {
      b_zeroDelimTopic_3[i] = tmp_2[i];
    }

    b_zeroDelimTopic_3[5] = '\x00';
    Sub_cbf_551.createSubscriber(&b_zeroDelimTopic_3[0], 1);
    cbf_DW.obj_f.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S11>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe8'

    // SystemInitialize for Atomic SubSystem: '<Root>/Publish1'
    // Start for MATLABSystem: '<S4>/SinkBlock'
    cbf_DW.obj_np.matlabCodegenIsDeleted = false;
    cbf_DW.obj_np.isInitialized = 1;
    for (int32_T i = 0; i < 9; i++) {
      b_zeroDelimTopic_0[i] = tmp_3[i];
    }

    b_zeroDelimTopic_0[9] = '\x00';
    Pub_cbf_543.createPublisher(&b_zeroDelimTopic_0[0], 1);
    cbf_DW.obj_np.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S4>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Publish1'

    // SystemInitialize for Atomic SubSystem: '<Root>/Publish2'
    // Start for MATLABSystem: '<S5>/SinkBlock'
    cbf_DW.obj_p.matlabCodegenIsDeleted = false;
    cbf_DW.obj_p.isInitialized = 1;
    for (int32_T i = 0; i < 14; i++) {
      cbf_B.b_zeroDelimTopic_m[i] = tmp_4[i];
    }

    cbf_B.b_zeroDelimTopic_m[14] = '\x00';
    Pub_cbf_544.createPublisher(&cbf_B.b_zeroDelimTopic_m[0], 1);
    cbf_DW.obj_p.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S5>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Publish2'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe7'
    // Start for MATLABSystem: '<S10>/SourceBlock'
    cbf_DW.obj_e.matlabCodegenIsDeleted = false;
    cbf_DW.obj_e.isInitialized = 1;
    for (int32_T i = 0; i < 24; i++) {
      cbf_B.b_zeroDelimTopic[i] = tmp_5[i];
    }

    cbf_B.b_zeroDelimTopic[24] = '\x00';
    Sub_cbf_550.createSubscriber(&cbf_B.b_zeroDelimTopic[0], 1);
    cbf_DW.obj_e.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S10>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe7'

    // Start for MATLABSystem: '<S12>/Get Parameter2'
    cbf_DW.obj_m.matlabCodegenIsDeleted = false;
    cbf_DW.obj_m.isInitialized = 1;
    for (int32_T i = 0; i < 7; i++) {
      b_zeroDelimTopic_1[i] = tmp_6[i];
    }

    b_zeroDelimTopic_1[7] = '\x00';
    ParamGet_cbf_568.initialize(&b_zeroDelimTopic_1[0]);
    ParamGet_cbf_568.initialize_error_codes(0, 1, 2, 3);
    ParamGet_cbf_568.set_initial_value(2.0);
    cbf_DW.obj_m.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S12>/Get Parameter2'

    // Start for MATLABSystem: '<S12>/Get Parameter1'
    cbf_DW.obj_n.matlabCodegenIsDeleted = false;
    cbf_DW.obj_n.isInitialized = 1;
    for (int32_T i = 0; i < 6; i++) {
      b_zeroDelimName[i] = tmp_7[i];
    }

    b_zeroDelimName[6] = '\x00';
    ParamGet_cbf_567.initialize(&b_zeroDelimName[0]);
    ParamGet_cbf_567.initialize_error_codes(0, 1, 2, 3);
    ParamGet_cbf_567.set_initial_value(0.1);
    cbf_DW.obj_n.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S12>/Get Parameter1'

    // Start for MATLABSystem: '<S12>/Get Parameter7'
    cbf_DW.obj_h.matlabCodegenIsDeleted = false;
    cbf_DW.obj_h.isInitialized = 1;
    for (int32_T i = 0; i < 6; i++) {
      b_zeroDelimName[i] = tmp_8[i];
    }

    b_zeroDelimName[6] = '\x00';
    ParamGet_cbf_573.initialize(&b_zeroDelimName[0]);
    ParamGet_cbf_573.initialize_error_codes(0, 1, 2, 3);
    ParamGet_cbf_573.set_initial_value(0.2);
    cbf_DW.obj_h.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S12>/Get Parameter7'

    // Start for MATLABSystem: '<S12>/Get Parameter8'
    cbf_DW.obj_b.matlabCodegenIsDeleted = false;
    cbf_DW.obj_b.isInitialized = 1;
    for (int32_T i = 0; i < 6; i++) {
      b_zeroDelimName[i] = tmp_9[i];
    }

    b_zeroDelimName[6] = '\x00';
    ParamGet_cbf_574.initialize(&b_zeroDelimName[0]);
    ParamGet_cbf_574.initialize_error_codes(0, 1, 2, 3);
    ParamGet_cbf_574.set_initial_value(0.1);
    cbf_DW.obj_b.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S12>/Get Parameter8'

    // Start for MATLABSystem: '<S12>/Get Parameter3'
    cbf_DW.obj_bu.matlabCodegenIsDeleted = false;
    cbf_DW.obj_bu.isInitialized = 1;
    for (int32_T i = 0; i < 5; i++) {
      b_zeroDelimTopic_3[i] = tmp_a[i];
    }

    b_zeroDelimTopic_3[5] = '\x00';
    ParamGet_cbf_569.initialize(&b_zeroDelimTopic_3[0]);
    ParamGet_cbf_569.initialize_error_codes(0, 1, 2, 3);
    ParamGet_cbf_569.set_initial_value(5.0);
    cbf_DW.obj_bu.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S12>/Get Parameter3'

    // Start for MATLABSystem: '<S12>/Get Parameter4'
    cbf_DW.obj_l.matlabCodegenIsDeleted = false;
    cbf_DW.obj_l.isInitialized = 1;
    for (int32_T i = 0; i < 6; i++) {
      b_zeroDelimName[i] = tmp_b[i];
    }

    b_zeroDelimName[6] = '\x00';
    ParamGet_cbf_570.initialize(&b_zeroDelimName[0]);
    ParamGet_cbf_570.initialize_error_codes(0, 1, 2, 3);
    ParamGet_cbf_570.set_initial_value(0.05);
    cbf_DW.obj_l.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S12>/Get Parameter4'

    // Start for MATLABSystem: '<S12>/Get Parameter5'
    cbf_DW.obj_bw.matlabCodegenIsDeleted = false;
    cbf_DW.obj_bw.isInitialized = 1;
    for (int32_T i = 0; i < 6; i++) {
      b_zeroDelimName[i] = tmp_c[i];
    }

    b_zeroDelimName[6] = '\x00';
    ParamGet_cbf_571.initialize(&b_zeroDelimName[0]);
    ParamGet_cbf_571.initialize_error_codes(0, 1, 2, 3);
    ParamGet_cbf_571.set_initial_value(0.05);
    cbf_DW.obj_bw.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S12>/Get Parameter5'

    // Start for MATLABSystem: '<S12>/Get Parameter9'
    cbf_DW.obj.matlabCodegenIsDeleted = false;
    cbf_DW.obj.isInitialized = 1;
    for (int32_T i = 0; i < 9; i++) {
      b_zeroDelimTopic_0[i] = tmp_d[i];
    }

    b_zeroDelimTopic_0[9] = '\x00';
    ParamGet_cbf_575.initialize(&b_zeroDelimTopic_0[0]);
    ParamGet_cbf_575.initialize_error_codes(0, 1, 2, 3);
    ParamGet_cbf_575.set_initial_value(0.2);
    cbf_DW.obj.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S12>/Get Parameter9'

    // Start for MATLABSystem: '<Root>/Get Parameter3'
    cbf_DW.obj_lp.matlabCodegenIsDeleted = false;
    cbf_DW.obj_lp.isInitialized = 1;
    for (int32_T i = 0; i < 20; i++) {
      cbf_B.b_zeroDelimName[i] = tmp_e[i];
    }

    cbf_B.b_zeroDelimName[20] = '\x00';
    ParamGet_cbf_540.initialize(&cbf_B.b_zeroDelimName[0]);
    ParamGet_cbf_540.initialize_error_codes(0, 1, 2, 3);
    ParamGet_cbf_540.set_initial_value(-0.5);
    cbf_DW.obj_lp.isSetupComplete = true;

    // End of Start for MATLABSystem: '<Root>/Get Parameter3'

    // Start for MATLABSystem: '<S12>/Get Parameter6'
    cbf_DW.obj_k.matlabCodegenIsDeleted = false;
    cbf_DW.obj_k.isInitialized = 1;
    b_zeroDelimName_0[0] = 'w';
    b_zeroDelimName_0[1] = '3';
    b_zeroDelimName_0[2] = '\x00';
    ParamGet_cbf_572.initialize(&b_zeroDelimName_0[0]);
    ParamGet_cbf_572.initialize_error_codes(0, 1, 2, 3);
    ParamGet_cbf_572.set_initial_value(6.0);
    cbf_DW.obj_k.isSetupComplete = true;
  }
}

// Model terminate function
void cbf_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Subscribe6'
  // Terminate for MATLABSystem: '<S9>/SourceBlock'
  if (!cbf_DW.obj_j.matlabCodegenIsDeleted) {
    cbf_DW.obj_j.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S9>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe6'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe'
  // Terminate for MATLABSystem: '<S6>/SourceBlock'
  if (!cbf_DW.obj_mg.matlabCodegenIsDeleted) {
    cbf_DW.obj_mg.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S6>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe4'
  // Terminate for MATLABSystem: '<S7>/SourceBlock'
  if (!cbf_DW.obj_c.matlabCodegenIsDeleted) {
    cbf_DW.obj_c.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S7>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe4'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe5'
  // Terminate for MATLABSystem: '<S8>/SourceBlock'
  if (!cbf_DW.obj_i.matlabCodegenIsDeleted) {
    cbf_DW.obj_i.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S8>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe5'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe8'
  // Terminate for MATLABSystem: '<S11>/SourceBlock'
  if (!cbf_DW.obj_f.matlabCodegenIsDeleted) {
    cbf_DW.obj_f.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S11>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe8'

  // Terminate for MATLABSystem: '<S12>/Get Parameter2'
  if (!cbf_DW.obj_m.matlabCodegenIsDeleted) {
    cbf_DW.obj_m.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S12>/Get Parameter2'

  // Terminate for MATLABSystem: '<S12>/Get Parameter1'
  if (!cbf_DW.obj_n.matlabCodegenIsDeleted) {
    cbf_DW.obj_n.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S12>/Get Parameter1'

  // Terminate for MATLABSystem: '<S12>/Get Parameter7'
  if (!cbf_DW.obj_h.matlabCodegenIsDeleted) {
    cbf_DW.obj_h.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S12>/Get Parameter7'

  // Terminate for MATLABSystem: '<S12>/Get Parameter8'
  if (!cbf_DW.obj_b.matlabCodegenIsDeleted) {
    cbf_DW.obj_b.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S12>/Get Parameter8'

  // Terminate for MATLABSystem: '<S12>/Get Parameter3'
  if (!cbf_DW.obj_bu.matlabCodegenIsDeleted) {
    cbf_DW.obj_bu.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S12>/Get Parameter3'

  // Terminate for MATLABSystem: '<S12>/Get Parameter4'
  if (!cbf_DW.obj_l.matlabCodegenIsDeleted) {
    cbf_DW.obj_l.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S12>/Get Parameter4'

  // Terminate for MATLABSystem: '<S12>/Get Parameter5'
  if (!cbf_DW.obj_bw.matlabCodegenIsDeleted) {
    cbf_DW.obj_bw.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S12>/Get Parameter5'

  // Terminate for MATLABSystem: '<S12>/Get Parameter9'
  if (!cbf_DW.obj.matlabCodegenIsDeleted) {
    cbf_DW.obj.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S12>/Get Parameter9'

  // Terminate for MATLABSystem: '<Root>/Get Parameter3'
  if (!cbf_DW.obj_lp.matlabCodegenIsDeleted) {
    cbf_DW.obj_lp.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<Root>/Get Parameter3'

  // Terminate for Atomic SubSystem: '<Root>/Publish1'
  // Terminate for MATLABSystem: '<S4>/SinkBlock'
  if (!cbf_DW.obj_np.matlabCodegenIsDeleted) {
    cbf_DW.obj_np.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S4>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish1'

  // Terminate for Atomic SubSystem: '<Root>/Publish2'
  // Terminate for MATLABSystem: '<S5>/SinkBlock'
  if (!cbf_DW.obj_p.matlabCodegenIsDeleted) {
    cbf_DW.obj_p.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S5>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish2'

  // Terminate for MATLABSystem: '<S12>/Get Parameter6'
  if (!cbf_DW.obj_k.matlabCodegenIsDeleted) {
    cbf_DW.obj_k.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S12>/Get Parameter6'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe7'
  // Terminate for MATLABSystem: '<S10>/SourceBlock'
  if (!cbf_DW.obj_e.matlabCodegenIsDeleted) {
    cbf_DW.obj_e.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S10>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe7'
}

//
// File trailer for generated code.
//
// [EOF]
//
