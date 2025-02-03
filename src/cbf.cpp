//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: cbf.cpp
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
#include "cbf.h"
#include "cbf_types.h"

extern "C"
{

#include "rt_nonfinite.h"

}

#include "rtwtypes.h"
#include "cbf_private.h"

// Block signals (default storage)
B_cbf_T cbf_B;

// Block states (default storage)
DW_cbf_T cbf_DW;

// Real-time model
RT_MODEL_cbf_T cbf_M_ = RT_MODEL_cbf_T();
RT_MODEL_cbf_T *const cbf_M = &cbf_M_;

// Forward declaration for local functions
static void cbf_SystemCore_setup(dsp_simulink_MovingAverage_cb_T *obj);
static void cbf_SystemCore_setup_h(dsp_simulink_MovingAverage_h_T *obj);
static void cbf_SystemCore_setup(dsp_simulink_MovingAverage_cb_T *obj)
{
  obj->isSetupComplete = false;
  obj->isInitialized = 1;

  // Start for MATLABSystem: '<Root>/Moving Average1'
  obj->NumChannels = 1;
  obj->FrameLength = 1;
  obj->_pobj0.isInitialized = 0;
  obj->_pobj0.isInitialized = 0;
  obj->pStatistic = &obj->_pobj0;
  obj->isSetupComplete = true;
  obj->TunablePropsChanged = false;
}

static void cbf_SystemCore_setup_h(dsp_simulink_MovingAverage_h_T *obj)
{
  obj->isSetupComplete = false;
  obj->isInitialized = 1;

  // Start for MATLABSystem: '<Root>/Moving Average2'
  obj->NumChannels = 1;
  obj->FrameLength = 1;
  obj->_pobj0.isInitialized = 0;
  obj->_pobj0.isInitialized = 0;
  obj->pStatistic = &obj->_pobj0;
  obj->isSetupComplete = true;
  obj->TunablePropsChanged = false;
}

// Model step function
void cbf_step(void)
{
  {
    SL_Bus_cbf_std_msgs_Bool b_varargout_2;
    SL_Bus_cbf_std_msgs_Float64 rtb_BusAssignment1;
    h_dsp_internal_SlidingWindo_h_T *obj_0;
    h_dsp_internal_SlidingWindowA_T *obj;
    real_T rtb_Derivative1;
    real_T rtb_Derivative4;
    real_T tmp;
    real_T *lastU;
    int32_T i;
    boolean_T b_varargout_1;

    // Outputs for Atomic SubSystem: '<Root>/Subscribe6'
    // MATLABSystem: '<S12>/SourceBlock'
    b_varargout_1 = Sub_cbf_476.getLatestMessage(&cbf_B.b_varargout_2);

    // Outputs for Enabled SubSystem: '<S12>/Enabled Subsystem' incorporates:
    //   EnablePort: '<S18>/Enable'

    // Start for MATLABSystem: '<S12>/SourceBlock'
    if (b_varargout_1) {
      // SignalConversion generated from: '<S18>/In1'
      cbf_B.In1 = cbf_B.b_varargout_2;
    }

    // End of Start for MATLABSystem: '<S12>/SourceBlock'
    // End of Outputs for SubSystem: '<S12>/Enabled Subsystem'
    // End of Outputs for SubSystem: '<Root>/Subscribe6'

    // Outputs for Atomic SubSystem: '<Root>/Subscribe'
    // MATLABSystem: '<S9>/SourceBlock'
    b_varargout_1 = Sub_cbf_429.getLatestMessage(&cbf_B.b_varargout_2);

    // Outputs for Enabled SubSystem: '<S9>/Enabled Subsystem' incorporates:
    //   EnablePort: '<S15>/Enable'

    // Start for MATLABSystem: '<S9>/SourceBlock'
    if (b_varargout_1) {
      // SignalConversion generated from: '<S15>/In1'
      cbf_B.In1_m = cbf_B.b_varargout_2;
    }

    // End of Start for MATLABSystem: '<S9>/SourceBlock'
    // End of Outputs for SubSystem: '<S9>/Enabled Subsystem'
    // End of Outputs for SubSystem: '<Root>/Subscribe'

    // Outputs for Atomic SubSystem: '<Root>/Subscribe4'
    // MATLABSystem: '<S11>/SourceBlock'
    b_varargout_1 = Sub_cbf_430.getLatestMessage(&cbf_B.b_varargout_2);

    // Outputs for Enabled SubSystem: '<S11>/Enabled Subsystem' incorporates:
    //   EnablePort: '<S17>/Enable'

    // Start for MATLABSystem: '<S11>/SourceBlock'
    if (b_varargout_1) {
      // SignalConversion generated from: '<S17>/In1'
      cbf_B.In1_p = cbf_B.b_varargout_2;
    }

    // End of Start for MATLABSystem: '<S11>/SourceBlock'
    // End of Outputs for SubSystem: '<S11>/Enabled Subsystem'
    // End of Outputs for SubSystem: '<Root>/Subscribe4'

    // Outputs for Atomic SubSystem: '<Root>/Subscribe1'
    // MATLABSystem: '<S10>/SourceBlock'
    b_varargout_1 = Sub_cbf_527.getLatestMessage(&cbf_B.b_varargout_2);

    // Outputs for Enabled SubSystem: '<S10>/Enabled Subsystem' incorporates:
    //   EnablePort: '<S16>/Enable'

    // Start for MATLABSystem: '<S10>/SourceBlock'
    if (b_varargout_1) {
      // SignalConversion generated from: '<S16>/In1'
      cbf_B.In1_f = cbf_B.b_varargout_2;
    }

    // End of Start for MATLABSystem: '<S10>/SourceBlock'
    // End of Outputs for SubSystem: '<S10>/Enabled Subsystem'
    // End of Outputs for SubSystem: '<Root>/Subscribe1'

    // MATLABSystem: '<Root>/Moving Average1'
    if (cbf_DW.obj.TunablePropsChanged) {
      cbf_DW.obj.TunablePropsChanged = false;
    }

    obj = cbf_DW.obj.pStatistic;
    if (cbf_DW.obj.pStatistic->isInitialized != 1) {
      cbf_DW.obj.pStatistic->isSetupComplete = false;
      cbf_DW.obj.pStatistic->isInitialized = 1;
      obj->pCumSum = 0.0;
      obj->pCumRevIndex = 1.0;
      obj->pModValueRev = 0.0;
      obj->isSetupComplete = true;
      obj->pCumSum = 0.0;
      for (i = 0; i < 6; i++) {
        obj->pCumSumRev[i] = 0.0;
        obj->pCumSumRev[i] = 0.0;
      }

      obj->pCumRevIndex = 1.0;
      obj->pModValueRev = 0.0;
    }

    cbf_B.cumRevIndex = obj->pCumRevIndex;
    cbf_B.csum = obj->pCumSum;
    for (i = 0; i < 6; i++) {
      cbf_B.csumrev[i] = obj->pCumSumRev[i];
    }

    cbf_B.modValueRev = obj->pModValueRev;
    cbf_B.z = 0.0;

    // MATLABSystem: '<Root>/Moving Average1'
    cbf_B.MovingAverage1 = 0.0;

    // MATLABSystem: '<Root>/Moving Average1'
    cbf_B.csum += cbf_B.In1_p.Data;
    if (cbf_B.modValueRev == 0.0) {
      cbf_B.z = cbf_B.csumrev[static_cast<int32_T>(cbf_B.cumRevIndex) - 1] +
        cbf_B.csum;
    }

    cbf_B.csumrev[static_cast<int32_T>(cbf_B.cumRevIndex) - 1] =
      cbf_B.In1_p.Data;
    if (cbf_B.cumRevIndex != 6.0) {
      cbf_B.cumRevIndex++;
    } else {
      cbf_B.cumRevIndex = 1.0;
      cbf_B.csum = 0.0;
      for (i = 4; i >= 0; i--) {
        cbf_B.csumrev[i] += cbf_B.csumrev[i + 1];
      }
    }

    if (cbf_B.modValueRev == 0.0) {
      // MATLABSystem: '<Root>/Moving Average1'
      cbf_B.MovingAverage1 = cbf_B.z / 7.0;
    }

    obj->pCumSum = cbf_B.csum;
    for (i = 0; i < 6; i++) {
      obj->pCumSumRev[i] = cbf_B.csumrev[i];
    }

    obj->pCumRevIndex = cbf_B.cumRevIndex;
    if (cbf_B.modValueRev > 0.0) {
      obj->pModValueRev = cbf_B.modValueRev - 1.0;
    } else {
      obj->pModValueRev = 0.0;
    }

    // Derivative: '<Root>/Derivative1' incorporates:
    //   Derivative: '<Root>/Derivative2'
    //   Derivative: '<Root>/Derivative4'

    tmp = cbf_M->Timing.t[0];
    if ((cbf_DW.TimeStampA >= tmp) && (cbf_DW.TimeStampB >= tmp)) {
      rtb_Derivative1 = 0.0;
    } else {
      cbf_B.cumRevIndex = cbf_DW.TimeStampA;
      lastU = &cbf_DW.LastUAtTimeA;
      if (cbf_DW.TimeStampA < cbf_DW.TimeStampB) {
        if (cbf_DW.TimeStampB < tmp) {
          cbf_B.cumRevIndex = cbf_DW.TimeStampB;
          lastU = &cbf_DW.LastUAtTimeB;
        }
      } else if (cbf_DW.TimeStampA >= tmp) {
        cbf_B.cumRevIndex = cbf_DW.TimeStampB;
        lastU = &cbf_DW.LastUAtTimeB;
      }

      rtb_Derivative1 = (cbf_B.MovingAverage1 - *lastU) / (tmp -
        cbf_B.cumRevIndex);
    }

    // End of Derivative: '<Root>/Derivative1'

    // MATLABSystem: '<Root>/Moving Average2'
    if (cbf_DW.obj_i.TunablePropsChanged) {
      cbf_DW.obj_i.TunablePropsChanged = false;
    }

    obj_0 = cbf_DW.obj_i.pStatistic;
    if (cbf_DW.obj_i.pStatistic->isInitialized != 1) {
      cbf_DW.obj_i.pStatistic->isSetupComplete = false;
      cbf_DW.obj_i.pStatistic->isInitialized = 1;
      obj_0->pCumSum = 0.0;
      obj_0->pCumRevIndex = 1.0;
      obj_0->pModValueRev = 0.0;
      obj_0->isSetupComplete = true;
      obj_0->pCumSum = 0.0;
      obj_0->pCumSumRev[0] = 0.0;
      obj_0->pCumSumRev[0] = 0.0;
      obj_0->pCumSumRev[1] = 0.0;
      obj_0->pCumSumRev[1] = 0.0;
      obj_0->pCumSumRev[2] = 0.0;
      obj_0->pCumSumRev[2] = 0.0;
      obj_0->pCumRevIndex = 1.0;
      obj_0->pModValueRev = 0.0;
    }

    cbf_B.cumRevIndex = obj_0->pCumRevIndex;
    cbf_B.csum = obj_0->pCumSum;
    cbf_B.csumrev_m[0] = obj_0->pCumSumRev[0];
    cbf_B.csumrev_m[1] = obj_0->pCumSumRev[1];
    cbf_B.csumrev_m[2] = obj_0->pCumSumRev[2];
    cbf_B.modValueRev = obj_0->pModValueRev;
    cbf_B.z = 0.0;

    // MATLABSystem: '<Root>/Moving Average2'
    cbf_B.MovingAverage2 = 0.0;

    // MATLABSystem: '<Root>/Moving Average2'
    cbf_B.csum += cbf_B.In1_f.Data;
    if (cbf_B.modValueRev == 0.0) {
      cbf_B.z = cbf_B.csumrev_m[static_cast<int32_T>(cbf_B.cumRevIndex) - 1] +
        cbf_B.csum;
    }

    cbf_B.csumrev_m[static_cast<int32_T>(cbf_B.cumRevIndex) - 1] =
      cbf_B.In1_f.Data;
    if (cbf_B.cumRevIndex != 3.0) {
      cbf_B.cumRevIndex++;
    } else {
      cbf_B.cumRevIndex = 1.0;
      cbf_B.csum = 0.0;
      cbf_B.csumrev_m[1] += cbf_B.csumrev_m[2];
      cbf_B.csumrev_m[0] += cbf_B.csumrev_m[1];
    }

    if (cbf_B.modValueRev == 0.0) {
      // MATLABSystem: '<Root>/Moving Average2'
      cbf_B.MovingAverage2 = cbf_B.z / 4.0;
    }

    obj_0->pCumSum = cbf_B.csum;
    obj_0->pCumSumRev[0] = cbf_B.csumrev_m[0];
    obj_0->pCumSumRev[1] = cbf_B.csumrev_m[1];
    obj_0->pCumSumRev[2] = cbf_B.csumrev_m[2];
    obj_0->pCumRevIndex = cbf_B.cumRevIndex;
    if (cbf_B.modValueRev > 0.0) {
      obj_0->pModValueRev = cbf_B.modValueRev - 1.0;
    } else {
      obj_0->pModValueRev = 0.0;
    }

    // Derivative: '<Root>/Derivative2'
    if ((cbf_DW.TimeStampA_i >= tmp) && (cbf_DW.TimeStampB_f >= tmp)) {
      cbf_B.cumRevIndex = 0.0;
    } else {
      cbf_B.cumRevIndex = cbf_DW.TimeStampA_i;
      lastU = &cbf_DW.LastUAtTimeA_j;
      if (cbf_DW.TimeStampA_i < cbf_DW.TimeStampB_f) {
        if (cbf_DW.TimeStampB_f < tmp) {
          cbf_B.cumRevIndex = cbf_DW.TimeStampB_f;
          lastU = &cbf_DW.LastUAtTimeB_n;
        }
      } else if (cbf_DW.TimeStampA_i >= tmp) {
        cbf_B.cumRevIndex = cbf_DW.TimeStampB_f;
        lastU = &cbf_DW.LastUAtTimeB_n;
      }

      cbf_B.cumRevIndex = (cbf_B.MovingAverage2 - *lastU) / (tmp -
        cbf_B.cumRevIndex);
    }

    // MATLABSystem: '<S14>/Get Parameter3'
    ParamGet_cbf_449.get_parameter(&cbf_B.z);

    // MATLABSystem: '<S14>/Get Parameter4'
    ParamGet_cbf_450.get_parameter(&cbf_B.b_value);

    // MATLABSystem: '<S14>/Get Parameter5'
    ParamGet_cbf_463.get_parameter(&rtb_Derivative4);

    // MATLAB Function: '<S14>/MATLAB Function1' incorporates:
    //   MATLABSystem: '<S14>/Get Parameter3'
    //   MATLABSystem: '<S14>/Get Parameter4'
    //   MATLABSystem: '<S14>/Get Parameter5'
    //
    cbf_B.csum = cbf_B.cumRevIndex + rtb_Derivative1;
    cbf_B.modValueRev = (cbf_B.b_value + rtb_Derivative4) * cbf_B.In1_p.Data;
    cbf_B.z = cbf_B.b_value * rtb_Derivative4 * (cbf_B.In1_m.Data - cbf_B.z);
    cbf_B.b_value = (cbf_B.modValueRev + cbf_B.csum) + cbf_B.z;

    // Switch: '<Root>/Switch' incorporates:
    //   Constant: '<Root>/Constant2'
    //   SignalConversion generated from: '<Root>/Bus Selector7'

    if (cbf_P.Constant2_Value > cbf_P.Switch_Threshold) {
      // MinMax: '<Root>/MinMax' incorporates:
      //   MATLAB Function: '<S14>/MATLAB Function1'
      //   SignalConversion generated from: '<Root>/Bus Selector7'

      if ((cbf_B.b_value <= cbf_B.In1.Data) || rtIsNaN(cbf_B.In1.Data)) {
        rtb_Derivative4 = cbf_B.b_value;
      } else {
        rtb_Derivative4 = cbf_B.In1.Data;
      }

      // End of MinMax: '<Root>/MinMax'
    } else {
      rtb_Derivative4 = cbf_B.In1.Data;
    }

    // End of Switch: '<Root>/Switch'

    // Saturate: '<Root>/min//max 1.5//-5.0'
    if (rtb_Derivative4 > cbf_P.minmax1550_UpperSat) {
      rtb_Derivative4 = cbf_P.minmax1550_UpperSat;
    } else if (rtb_Derivative4 < cbf_P.minmax1550_LowerSat) {
      rtb_Derivative4 = cbf_P.minmax1550_LowerSat;
    }

    // End of Saturate: '<Root>/min//max 1.5//-5.0'

    // BusAssignment: '<Root>/Bus Assignment1'
    rtb_BusAssignment1.Data = rtb_Derivative4;

    // Outputs for Atomic SubSystem: '<Root>/Publish1'
    // MATLABSystem: '<S5>/SinkBlock'
    Pub_cbf_401.publish(&rtb_BusAssignment1);

    // End of Outputs for SubSystem: '<Root>/Publish1'

    // BusAssignment: '<Root>/Bus Assignment2' incorporates:
    //   Constant: '<S2>/Constant'
    //   MATLAB Function: '<S14>/MATLAB Function1'
    //   SignalConversion generated from: '<Root>/Bus Selector7'

    cbf_B.BusAssignment2 = cbf_P.Constant_Value;
    cbf_B.BusAssignment2.Linear.X = cbf_B.In1.Data;
    cbf_B.BusAssignment2.Linear.Y = cbf_B.b_value;
    cbf_B.BusAssignment2.Linear.Z = rtb_Derivative4;
    cbf_B.BusAssignment2.Angular.X = ((cbf_B.csum - cbf_B.b_value) +
      cbf_B.modValueRev) + cbf_B.z;

    // Outputs for Atomic SubSystem: '<Root>/Publish2'
    // MATLABSystem: '<S6>/SinkBlock'
    Pub_cbf_520.publish(&cbf_B.BusAssignment2);

    // End of Outputs for SubSystem: '<Root>/Publish2'

    // BusAssignment: '<Root>/Bus Assignment4' incorporates:
    //   Constant: '<S3>/Constant'

    cbf_B.BusAssignment2 = cbf_P.Constant_Value_a;
    cbf_B.BusAssignment2.Linear.X = cbf_B.cumRevIndex;
    cbf_B.BusAssignment2.Linear.Y = cbf_B.MovingAverage2;

    // Outputs for Atomic SubSystem: '<Root>/Publish5'
    // MATLABSystem: '<S7>/SinkBlock'
    Pub_cbf_552.publish(&cbf_B.BusAssignment2);

    // End of Outputs for SubSystem: '<Root>/Publish5'

    // Derivative: '<Root>/Derivative4'
    if ((cbf_DW.TimeStampA_p >= tmp) && (cbf_DW.TimeStampB_k >= tmp)) {
      rtb_Derivative4 = 0.0;
    } else {
      cbf_B.cumRevIndex = cbf_DW.TimeStampA_p;
      lastU = &cbf_DW.LastUAtTimeA_l;
      if (cbf_DW.TimeStampA_p < cbf_DW.TimeStampB_k) {
        if (cbf_DW.TimeStampB_k < tmp) {
          cbf_B.cumRevIndex = cbf_DW.TimeStampB_k;
          lastU = &cbf_DW.LastUAtTimeB_p;
        }
      } else if (cbf_DW.TimeStampA_p >= tmp) {
        cbf_B.cumRevIndex = cbf_DW.TimeStampB_k;
        lastU = &cbf_DW.LastUAtTimeB_p;
      }

      rtb_Derivative4 = (cbf_B.In1_p.Data - *lastU) / (tmp - cbf_B.cumRevIndex);
    }

    // BusAssignment: '<Root>/Bus Assignment5' incorporates:
    //   Constant: '<S3>/Constant'

    cbf_B.BusAssignment2 = cbf_P.Constant_Value_a;
    cbf_B.BusAssignment2.Linear.X = cbf_B.MovingAverage1;
    cbf_B.BusAssignment2.Linear.Y = rtb_Derivative1;
    cbf_B.BusAssignment2.Linear.Z = rtb_Derivative4;

    // Outputs for Atomic SubSystem: '<Root>/Publish6'
    // MATLABSystem: '<S8>/SinkBlock'
    Pub_cbf_540.publish(&cbf_B.BusAssignment2);

    // End of Outputs for SubSystem: '<Root>/Publish6'

    // MATLAB Function: '<Root>/MATLAB Function1'
    cbf_DW.relative_distance_prev_not_empt = true;

    // Outputs for Atomic SubSystem: '<Root>/Subscribe7'
    // MATLABSystem: '<S13>/SourceBlock'
    Sub_cbf_481.getLatestMessage(&b_varargout_2);

    // End of Outputs for SubSystem: '<Root>/Subscribe7'
  }

  {
    real_T *lastU;

    // Update for Derivative: '<Root>/Derivative1'
    if (cbf_DW.TimeStampA == (rtInf)) {
      cbf_DW.TimeStampA = cbf_M->Timing.t[0];
      lastU = &cbf_DW.LastUAtTimeA;
    } else if (cbf_DW.TimeStampB == (rtInf)) {
      cbf_DW.TimeStampB = cbf_M->Timing.t[0];
      lastU = &cbf_DW.LastUAtTimeB;
    } else if (cbf_DW.TimeStampA < cbf_DW.TimeStampB) {
      cbf_DW.TimeStampA = cbf_M->Timing.t[0];
      lastU = &cbf_DW.LastUAtTimeA;
    } else {
      cbf_DW.TimeStampB = cbf_M->Timing.t[0];
      lastU = &cbf_DW.LastUAtTimeB;
    }

    *lastU = cbf_B.MovingAverage1;

    // End of Update for Derivative: '<Root>/Derivative1'

    // Update for Derivative: '<Root>/Derivative2'
    if (cbf_DW.TimeStampA_i == (rtInf)) {
      cbf_DW.TimeStampA_i = cbf_M->Timing.t[0];
      lastU = &cbf_DW.LastUAtTimeA_j;
    } else if (cbf_DW.TimeStampB_f == (rtInf)) {
      cbf_DW.TimeStampB_f = cbf_M->Timing.t[0];
      lastU = &cbf_DW.LastUAtTimeB_n;
    } else if (cbf_DW.TimeStampA_i < cbf_DW.TimeStampB_f) {
      cbf_DW.TimeStampA_i = cbf_M->Timing.t[0];
      lastU = &cbf_DW.LastUAtTimeA_j;
    } else {
      cbf_DW.TimeStampB_f = cbf_M->Timing.t[0];
      lastU = &cbf_DW.LastUAtTimeB_n;
    }

    *lastU = cbf_B.MovingAverage2;

    // End of Update for Derivative: '<Root>/Derivative2'

    // Update for Derivative: '<Root>/Derivative4'
    if (cbf_DW.TimeStampA_p == (rtInf)) {
      cbf_DW.TimeStampA_p = cbf_M->Timing.t[0];
      lastU = &cbf_DW.LastUAtTimeA_l;
    } else if (cbf_DW.TimeStampB_k == (rtInf)) {
      cbf_DW.TimeStampB_k = cbf_M->Timing.t[0];
      lastU = &cbf_DW.LastUAtTimeB_p;
    } else if (cbf_DW.TimeStampA_p < cbf_DW.TimeStampB_k) {
      cbf_DW.TimeStampA_p = cbf_M->Timing.t[0];
      lastU = &cbf_DW.LastUAtTimeA_l;
    } else {
      cbf_DW.TimeStampB_k = cbf_M->Timing.t[0];
      lastU = &cbf_DW.LastUAtTimeB_p;
    }

    *lastU = cbf_B.In1_p.Data;

    // End of Update for Derivative: '<Root>/Derivative4'
  }

  // Update absolute time for base rate
  // The "clockTick0" counts the number of times the code of this task has
  //  been executed. The absolute time is the multiplication of "clockTick0"
  //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
  //  overflow during the application lifespan selected.

  cbf_M->Timing.t[0] =
    ((time_T)(++cbf_M->Timing.clockTick0)) * cbf_M->Timing.stepSize0;

  {
    // Update absolute timer for sample time: [0.05s, 0.0s]
    // The "clockTick1" counts the number of times the code of this task has
    //  been executed. The resolution of this integer timer is 0.05, which is the step size
    //  of the task. Size of "clockTick1" ensures timer will not overflow during the
    //  application lifespan selected.

    cbf_M->Timing.clockTick1++;
  }
}

// Model initialize function
void cbf_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  {
    // Setup solver object
    rtsiSetSimTimeStepPtr(&cbf_M->solverInfo, &cbf_M->Timing.simTimeStep);
    rtsiSetTPtr(&cbf_M->solverInfo, &rtmGetTPtr(cbf_M));
    rtsiSetStepSizePtr(&cbf_M->solverInfo, &cbf_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&cbf_M->solverInfo, (&rtmGetErrorStatus(cbf_M)));
    rtsiSetRTModelPtr(&cbf_M->solverInfo, cbf_M);
  }

  rtsiSetSimTimeStep(&cbf_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetIsMinorTimeStepWithModeChange(&cbf_M->solverInfo, false);
  rtsiSetSolverName(&cbf_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(cbf_M, &cbf_M->Timing.tArray[0]);
  cbf_M->Timing.stepSize0 = 0.05;

  {
    h_dsp_internal_SlidingWindo_h_T *obj_0;
    h_dsp_internal_SlidingWindowA_T *obj;
    int32_T i;
    char_T b_zeroDelimTopic[14];
    char_T b_zeroDelimTopic_0[10];
    char_T b_zeroDelimTopic_1[8];
    char_T b_zeroDelimName[6];
    char_T b_zeroDelimName_0[3];
    static const char_T b_zeroDelimTopic_2[14] = "cmd_accel_pre";
    static const char_T b_zeroDelimTopic_3[10] = "lead_dist";
    static const char_T b_zeroDelimTopic_4[8] = "rel_vel";
    static const char_T b_zeroDelimTopic_5[17] = "/car/state/vel_x";
    static const char_T b_zeroDelimTopic_6[10] = "cmd_accel";
    static const char_T b_zeroDelimTopic_7[15] = "/cbf/cbf_debug";
    static const char_T b_zeroDelimTopic_8[17] = "accel_processing";
    static const char_T b_zeroDelimTopic_9[18] = "rel_vel_smoothing";
    static const char_T b_zeroDelimTopic_a[25] = "/car/hud/mini_car_enable";
    static const char_T b_zeroDelimName_1[6] = "s_min";

    // InitializeConditions for Derivative: '<Root>/Derivative1'
    cbf_DW.TimeStampA = (rtInf);
    cbf_DW.TimeStampB = (rtInf);

    // InitializeConditions for Derivative: '<Root>/Derivative2'
    cbf_DW.TimeStampA_i = (rtInf);
    cbf_DW.TimeStampB_f = (rtInf);

    // InitializeConditions for Derivative: '<Root>/Derivative4'
    cbf_DW.TimeStampA_p = (rtInf);
    cbf_DW.TimeStampB_k = (rtInf);

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe6'
    // SystemInitialize for Enabled SubSystem: '<S12>/Enabled Subsystem'
    // SystemInitialize for SignalConversion generated from: '<S18>/In1' incorporates:
    //   Outport: '<S18>/Out1'

    cbf_B.In1 = cbf_P.Out1_Y0_a;

    // End of SystemInitialize for SubSystem: '<S12>/Enabled Subsystem'

    // Start for MATLABSystem: '<S12>/SourceBlock'
    cbf_DW.obj_n.matlabCodegenIsDeleted = false;
    cbf_DW.obj_n.isInitialized = 1;
    for (i = 0; i < 14; i++) {
      b_zeroDelimTopic[i] = b_zeroDelimTopic_2[i];
    }

    Sub_cbf_476.createSubscriber(&b_zeroDelimTopic[0], 1);
    cbf_DW.obj_n.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S12>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe6'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe'
    // SystemInitialize for Enabled SubSystem: '<S9>/Enabled Subsystem'
    // SystemInitialize for SignalConversion generated from: '<S15>/In1' incorporates:
    //   Outport: '<S15>/Out1'

    cbf_B.In1_m = cbf_P.Out1_Y0_f;

    // End of SystemInitialize for SubSystem: '<S9>/Enabled Subsystem'

    // Start for MATLABSystem: '<S9>/SourceBlock'
    cbf_DW.obj_f.matlabCodegenIsDeleted = false;
    cbf_DW.obj_f.isInitialized = 1;
    for (i = 0; i < 10; i++) {
      b_zeroDelimTopic_0[i] = b_zeroDelimTopic_3[i];
    }

    Sub_cbf_429.createSubscriber(&b_zeroDelimTopic_0[0], 1);
    cbf_DW.obj_f.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S9>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe4'
    // SystemInitialize for Enabled SubSystem: '<S11>/Enabled Subsystem'
    // SystemInitialize for SignalConversion generated from: '<S17>/In1' incorporates:
    //   Outport: '<S17>/Out1'

    cbf_B.In1_p = cbf_P.Out1_Y0_p;

    // End of SystemInitialize for SubSystem: '<S11>/Enabled Subsystem'

    // Start for MATLABSystem: '<S11>/SourceBlock'
    cbf_DW.obj_ob.matlabCodegenIsDeleted = false;
    cbf_DW.obj_ob.isInitialized = 1;
    for (i = 0; i < 8; i++) {
      b_zeroDelimTopic_1[i] = b_zeroDelimTopic_4[i];
    }

    Sub_cbf_430.createSubscriber(&b_zeroDelimTopic_1[0], 1);
    cbf_DW.obj_ob.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S11>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe4'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe1'
    // SystemInitialize for Enabled SubSystem: '<S10>/Enabled Subsystem'
    // SystemInitialize for SignalConversion generated from: '<S16>/In1' incorporates:
    //   Outport: '<S16>/Out1'

    cbf_B.In1_f = cbf_P.Out1_Y0_n;

    // End of SystemInitialize for SubSystem: '<S10>/Enabled Subsystem'

    // Start for MATLABSystem: '<S10>/SourceBlock'
    cbf_DW.obj_h.matlabCodegenIsDeleted = false;
    cbf_DW.obj_h.isInitialized = 1;
    for (i = 0; i < 17; i++) {
      cbf_B.b_zeroDelimTopic_k[i] = b_zeroDelimTopic_5[i];
    }

    Sub_cbf_527.createSubscriber(&cbf_B.b_zeroDelimTopic_k[0], 1);
    cbf_DW.obj_h.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S10>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe1'

    // SystemInitialize for Atomic SubSystem: '<Root>/Publish1'
    // Start for MATLABSystem: '<S5>/SinkBlock'
    cbf_DW.obj_c.matlabCodegenIsDeleted = false;
    cbf_DW.obj_c.isInitialized = 1;
    for (i = 0; i < 10; i++) {
      b_zeroDelimTopic_0[i] = b_zeroDelimTopic_6[i];
    }

    Pub_cbf_401.createPublisher(&b_zeroDelimTopic_0[0], 1);
    cbf_DW.obj_c.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S5>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Publish1'

    // SystemInitialize for Atomic SubSystem: '<Root>/Publish2'
    // Start for MATLABSystem: '<S6>/SinkBlock'
    cbf_DW.obj_j.matlabCodegenIsDeleted = false;
    cbf_DW.obj_j.isInitialized = 1;
    for (i = 0; i < 15; i++) {
      cbf_B.b_zeroDelimTopic_cx[i] = b_zeroDelimTopic_7[i];
    }

    Pub_cbf_520.createPublisher(&cbf_B.b_zeroDelimTopic_cx[0], 1);
    cbf_DW.obj_j.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S6>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Publish2'

    // SystemInitialize for Atomic SubSystem: '<Root>/Publish5'
    // Start for MATLABSystem: '<S7>/SinkBlock'
    cbf_DW.obj_d.matlabCodegenIsDeleted = false;
    cbf_DW.obj_d.isInitialized = 1;
    for (i = 0; i < 17; i++) {
      cbf_B.b_zeroDelimTopic_k[i] = b_zeroDelimTopic_8[i];
    }

    Pub_cbf_552.createPublisher(&cbf_B.b_zeroDelimTopic_k[0], 1);
    cbf_DW.obj_d.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S7>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Publish5'

    // SystemInitialize for Atomic SubSystem: '<Root>/Publish6'
    // Start for MATLABSystem: '<S8>/SinkBlock'
    cbf_DW.obj_o.matlabCodegenIsDeleted = false;
    cbf_DW.obj_o.isInitialized = 1;
    for (i = 0; i < 18; i++) {
      cbf_B.b_zeroDelimTopic_c[i] = b_zeroDelimTopic_9[i];
    }

    Pub_cbf_540.createPublisher(&cbf_B.b_zeroDelimTopic_c[0], 1);
    cbf_DW.obj_o.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S8>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Publish6'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe7'
    // Start for MATLABSystem: '<S13>/SourceBlock'
    cbf_DW.obj_dk.matlabCodegenIsDeleted = false;
    cbf_DW.obj_dk.isInitialized = 1;
    for (i = 0; i < 25; i++) {
      cbf_B.b_zeroDelimTopic[i] = b_zeroDelimTopic_a[i];
    }

    Sub_cbf_481.createSubscriber(&cbf_B.b_zeroDelimTopic[0], 1);
    cbf_DW.obj_dk.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S13>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe7'

    // Start for MATLABSystem: '<Root>/Moving Average1'
    cbf_DW.obj.isInitialized = 0;
    cbf_DW.obj.NumChannels = -1;
    cbf_DW.obj.FrameLength = -1;
    cbf_DW.obj.matlabCodegenIsDeleted = false;
    cbf_SystemCore_setup(&cbf_DW.obj);

    // InitializeConditions for MATLABSystem: '<Root>/Moving Average1'
    obj = cbf_DW.obj.pStatistic;
    if (obj->isInitialized == 1) {
      obj->pCumSum = 0.0;
      for (i = 0; i < 6; i++) {
        obj->pCumSumRev[i] = 0.0;
      }

      obj->pCumRevIndex = 1.0;
      obj->pModValueRev = 0.0;
    }

    // End of InitializeConditions for MATLABSystem: '<Root>/Moving Average1'

    // Start for MATLABSystem: '<Root>/Moving Average2'
    cbf_DW.obj_i.isInitialized = 0;
    cbf_DW.obj_i.NumChannels = -1;
    cbf_DW.obj_i.FrameLength = -1;
    cbf_DW.obj_i.matlabCodegenIsDeleted = false;
    cbf_SystemCore_setup_h(&cbf_DW.obj_i);

    // InitializeConditions for MATLABSystem: '<Root>/Moving Average2'
    obj_0 = cbf_DW.obj_i.pStatistic;
    if (obj_0->isInitialized == 1) {
      obj_0->pCumSum = 0.0;
      obj_0->pCumSumRev[0] = 0.0;
      obj_0->pCumSumRev[1] = 0.0;
      obj_0->pCumSumRev[2] = 0.0;
      obj_0->pCumRevIndex = 1.0;
      obj_0->pModValueRev = 0.0;
    }

    // End of InitializeConditions for MATLABSystem: '<Root>/Moving Average2'

    // Start for MATLABSystem: '<S14>/Get Parameter3'
    cbf_DW.obj_i4.matlabCodegenIsDeleted = false;
    cbf_DW.obj_i4.isInitialized = 1;
    for (i = 0; i < 6; i++) {
      b_zeroDelimName[i] = b_zeroDelimName_1[i];
    }

    ParamGet_cbf_449.initialize(&b_zeroDelimName[0]);
    ParamGet_cbf_449.initialize_error_codes(0, 1, 2, 3);
    ParamGet_cbf_449.set_initial_value(10.0);
    cbf_DW.obj_i4.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S14>/Get Parameter3'

    // Start for MATLABSystem: '<S14>/Get Parameter4'
    cbf_DW.obj_k.matlabCodegenIsDeleted = false;
    cbf_DW.obj_k.isInitialized = 1;
    b_zeroDelimName_0[0] = 'k';
    b_zeroDelimName_0[1] = '1';
    b_zeroDelimName_0[2] = '\x00';
    ParamGet_cbf_450.initialize(&b_zeroDelimName_0[0]);
    ParamGet_cbf_450.initialize_error_codes(0, 1, 2, 3);
    ParamGet_cbf_450.set_initial_value(0.5);
    cbf_DW.obj_k.isSetupComplete = true;

    // Start for MATLABSystem: '<S14>/Get Parameter5'
    cbf_DW.obj_e.matlabCodegenIsDeleted = false;
    cbf_DW.obj_e.isInitialized = 1;
    b_zeroDelimName_0[0] = 'k';
    b_zeroDelimName_0[1] = '2';
    b_zeroDelimName_0[2] = '\x00';
    ParamGet_cbf_463.initialize(&b_zeroDelimName_0[0]);
    ParamGet_cbf_463.initialize_error_codes(0, 1, 2, 3);
    ParamGet_cbf_463.set_initial_value(0.2);
    cbf_DW.obj_e.isSetupComplete = true;
  }
}

// Model terminate function
void cbf_terminate(void)
{
  h_dsp_internal_SlidingWindo_h_T *obj_0;
  h_dsp_internal_SlidingWindowA_T *obj;

  // Terminate for Atomic SubSystem: '<Root>/Subscribe6'
  // Terminate for MATLABSystem: '<S12>/SourceBlock'
  if (!cbf_DW.obj_n.matlabCodegenIsDeleted) {
    cbf_DW.obj_n.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S12>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe6'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe'
  // Terminate for MATLABSystem: '<S9>/SourceBlock'
  if (!cbf_DW.obj_f.matlabCodegenIsDeleted) {
    cbf_DW.obj_f.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S9>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe4'
  // Terminate for MATLABSystem: '<S11>/SourceBlock'
  if (!cbf_DW.obj_ob.matlabCodegenIsDeleted) {
    cbf_DW.obj_ob.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S11>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe4'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe1'
  // Terminate for MATLABSystem: '<S10>/SourceBlock'
  if (!cbf_DW.obj_h.matlabCodegenIsDeleted) {
    cbf_DW.obj_h.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S10>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe1'

  // Terminate for MATLABSystem: '<Root>/Moving Average1'
  if (!cbf_DW.obj.matlabCodegenIsDeleted) {
    cbf_DW.obj.matlabCodegenIsDeleted = true;
    if ((cbf_DW.obj.isInitialized == 1) && cbf_DW.obj.isSetupComplete) {
      obj = cbf_DW.obj.pStatistic;
      if (obj->isInitialized == 1) {
        obj->isInitialized = 2;
      }

      cbf_DW.obj.NumChannels = -1;
      cbf_DW.obj.FrameLength = -1;
    }
  }

  // End of Terminate for MATLABSystem: '<Root>/Moving Average1'

  // Terminate for MATLABSystem: '<Root>/Moving Average2'
  if (!cbf_DW.obj_i.matlabCodegenIsDeleted) {
    cbf_DW.obj_i.matlabCodegenIsDeleted = true;
    if ((cbf_DW.obj_i.isInitialized == 1) && cbf_DW.obj_i.isSetupComplete) {
      obj_0 = cbf_DW.obj_i.pStatistic;
      if (obj_0->isInitialized == 1) {
        obj_0->isInitialized = 2;
      }

      cbf_DW.obj_i.NumChannels = -1;
      cbf_DW.obj_i.FrameLength = -1;
    }
  }

  // End of Terminate for MATLABSystem: '<Root>/Moving Average2'

  // Terminate for MATLABSystem: '<S14>/Get Parameter3'
  if (!cbf_DW.obj_i4.matlabCodegenIsDeleted) {
    cbf_DW.obj_i4.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S14>/Get Parameter3'

  // Terminate for MATLABSystem: '<S14>/Get Parameter4'
  if (!cbf_DW.obj_k.matlabCodegenIsDeleted) {
    cbf_DW.obj_k.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S14>/Get Parameter4'

  // Terminate for MATLABSystem: '<S14>/Get Parameter5'
  if (!cbf_DW.obj_e.matlabCodegenIsDeleted) {
    cbf_DW.obj_e.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S14>/Get Parameter5'

  // Terminate for Atomic SubSystem: '<Root>/Publish1'
  // Terminate for MATLABSystem: '<S5>/SinkBlock'
  if (!cbf_DW.obj_c.matlabCodegenIsDeleted) {
    cbf_DW.obj_c.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S5>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish1'

  // Terminate for Atomic SubSystem: '<Root>/Publish2'
  // Terminate for MATLABSystem: '<S6>/SinkBlock'
  if (!cbf_DW.obj_j.matlabCodegenIsDeleted) {
    cbf_DW.obj_j.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S6>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish2'

  // Terminate for Atomic SubSystem: '<Root>/Publish5'
  // Terminate for MATLABSystem: '<S7>/SinkBlock'
  if (!cbf_DW.obj_d.matlabCodegenIsDeleted) {
    cbf_DW.obj_d.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S7>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish5'

  // Terminate for Atomic SubSystem: '<Root>/Publish6'
  // Terminate for MATLABSystem: '<S8>/SinkBlock'
  if (!cbf_DW.obj_o.matlabCodegenIsDeleted) {
    cbf_DW.obj_o.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S8>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish6'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe7'
  // Terminate for MATLABSystem: '<S13>/SourceBlock'
  if (!cbf_DW.obj_dk.matlabCodegenIsDeleted) {
    cbf_DW.obj_dk.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S13>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe7'
}

//
// File trailer for generated code.
//
// [EOF]
//
