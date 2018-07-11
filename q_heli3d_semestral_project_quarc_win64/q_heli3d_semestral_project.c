/*
 * q_heli3d_semestral_project.c
 *
 * Classroom License -- for classroom instructional use only.  Not for
 * government, commercial, academic research, or other organizational use.
 *
 * Code generation for model "q_heli3d_semestral_project".
 *
 * Model version              : 1.29
 * Simulink Coder version : 8.12 (R2017a) 16-Feb-2017
 * C source code generated on : Thu Jun 21 13:50:32 2018
 *
 * Target selection: quarc_win64.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "q_heli3d_semestral_project.h"
#include "q_heli3d_semestral_project_private.h"
#include "q_heli3d_semestral_project_dt.h"

/* Block signals (auto storage) */
B_q_heli3d_semestral_project_T q_heli3d_semestral_project_B;

/* Continuous states */
X_q_heli3d_semestral_project_T q_heli3d_semestral_project_X;

/* Block states (auto storage) */
DW_q_heli3d_semestral_project_T q_heli3d_semestral_project_DW;

/* Real-time model */
RT_MODEL_q_heli3d_semestral_p_T q_heli3d_semestral_project_M_;
RT_MODEL_q_heli3d_semestral_p_T *const q_heli3d_semestral_project_M =
  &q_heli3d_semestral_project_M_;

/*
 * This function updates continuous states using the ODE1 fixed-step
 * solver algorithm
 */
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE1_IntgData *id = (ODE1_IntgData *)rtsiGetSolverData(si);
  real_T *f0 = id->f[0];
  int_T i;
  int_T nXc = 12;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);
  rtsiSetdX(si, f0);
  q_heli3d_semestral_project_derivatives();
  rtsiSetT(si, tnew);
  for (i = 0; i < nXc; ++i) {
    x[i] += h * f0[i];
  }

  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/*
 * Output and update for atomic system:
 *    '<Root>/MATLAB Function'
 *    '<Root>/MATLAB Function1'
 */
void q_heli3d_semestr_MATLABFunction(real_T rtu_f_tilde,
  B_MATLABFunction_q_heli3d_sem_T *localB)
{
  /* MATLAB Function 'MATLAB Function': '<S3>:1' */
  /* '<S3>:1:3' */
  if (rtu_f_tilde >= 0.0) {
    if (rtu_f_tilde >= q_heli3d_semestral_project_P.par_inputs.scaled_f_2_v_ths
        [0]) {
      localB->v = 1.0 /
        q_heli3d_semestral_project_P.par_inputs.scaled_f_2_v_par[2] *
        (rtu_f_tilde - q_heli3d_semestral_project_P.par_inputs.scaled_f_2_v_par
         [4]);
    } else {
      localB->v = rtu_f_tilde /
        q_heli3d_semestral_project_P.par_inputs.scaled_f_2_v_par[0];
      localB->v = sqrt(localB->v);
    }
  } else if (rtu_f_tilde <=
             q_heli3d_semestral_project_P.par_inputs.scaled_f_2_v_ths[1]) {
    localB->v = 1.0 / q_heli3d_semestral_project_P.par_inputs.scaled_f_2_v_par[3]
      * (rtu_f_tilde - q_heli3d_semestral_project_P.par_inputs.scaled_f_2_v_par
         [5]);
  } else {
    localB->v = -sqrt(rtu_f_tilde /
                      q_heli3d_semestral_project_P.par_inputs.scaled_f_2_v_par[1]);
  }

  localB->v /= 2.0;
}

/* Model output function */
void q_heli3d_semestral_project_output(void)
{
  /* local block i/o variables */
  real_T rtb_HILReadEncoderTimebase[3];
  real_T rtb_Step;
  real_T rtb_TrigonometricFunction2;
  real_T rtb_Cos;
  real_T rtb_TrigonometricFunction1;
  real_T rtb_TrigonometricFunction;
  if (rtmIsMajorTimeStep(q_heli3d_semestral_project_M)) {
    /* set solver stop time */
    if (!(q_heli3d_semestral_project_M->Timing.clockTick0+1)) {
      rtsiSetSolverStopTime(&q_heli3d_semestral_project_M->solverInfo,
                            ((q_heli3d_semestral_project_M->Timing.clockTickH0 +
        1) * q_heli3d_semestral_project_M->Timing.stepSize0 * 4294967296.0));
    } else {
      rtsiSetSolverStopTime(&q_heli3d_semestral_project_M->solverInfo,
                            ((q_heli3d_semestral_project_M->Timing.clockTick0 +
        1) * q_heli3d_semestral_project_M->Timing.stepSize0 +
        q_heli3d_semestral_project_M->Timing.clockTickH0 *
        q_heli3d_semestral_project_M->Timing.stepSize0 * 4294967296.0));
    }
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(q_heli3d_semestral_project_M)) {
    q_heli3d_semestral_project_M->Timing.t[0] = rtsiGetT
      (&q_heli3d_semestral_project_M->solverInfo);
  }

  if (rtmIsMajorTimeStep(q_heli3d_semestral_project_M)) {
    /* S-Function (hil_read_encoder_timebase_block): '<S1>/HIL Read Encoder Timebase' */

    /* S-Function Block: q_heli3d_semestral_project/3-DOF Helicopter1/HIL Read Encoder Timebase (hil_read_encoder_timebase_block) */
    {
      t_error result;
      result = hil_task_read_encoder
        (q_heli3d_semestral_project_DW.HILReadEncoderTimebase_Task, 1,
         &q_heli3d_semestral_project_DW.HILReadEncoderTimebase_Buffer[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_heli3d_semestral_project_M, _rt_error_message);
      } else {
        rtb_HILReadEncoderTimebase[0] =
          q_heli3d_semestral_project_DW.HILReadEncoderTimebase_Buffer[0];
        rtb_HILReadEncoderTimebase[1] =
          q_heli3d_semestral_project_DW.HILReadEncoderTimebase_Buffer[1];
        rtb_HILReadEncoderTimebase[2] =
          q_heli3d_semestral_project_DW.HILReadEncoderTimebase_Buffer[2];
      }
    }
  }

  /* Step: '<S7>/Step' */
  if (q_heli3d_semestral_project_M->Timing.t[0] <
      q_heli3d_semestral_project_P.Step_Time) {
    rtb_Step = q_heli3d_semestral_project_P.Step_Y0;
  } else {
    rtb_Step = q_heli3d_semestral_project_P.Step_YFinal;
  }

  /* End of Step: '<S7>/Step' */

  /* Step: '<S7>/Step1' */
  if (q_heli3d_semestral_project_M->Timing.t[0] <
      q_heli3d_semestral_project_P.Step1_Time) {
    rtb_TrigonometricFunction2 = q_heli3d_semestral_project_P.Step1_Y0;
  } else {
    rtb_TrigonometricFunction2 = q_heli3d_semestral_project_P.Step1_YFinal;
  }

  /* End of Step: '<S7>/Step1' */

  /* Step: '<S7>/Step2' */
  if (q_heli3d_semestral_project_M->Timing.t[0] <
      q_heli3d_semestral_project_P.Step2_Time) {
    rtb_Cos = q_heli3d_semestral_project_P.Step2_Y0;
  } else {
    rtb_Cos = q_heli3d_semestral_project_P.Step2_YFinal;
  }

  /* End of Step: '<S7>/Step2' */

  /* Step: '<S7>/Step3' */
  if (q_heli3d_semestral_project_M->Timing.t[0] <
      q_heli3d_semestral_project_P.Step3_Time) {
    rtb_TrigonometricFunction1 = q_heli3d_semestral_project_P.Step3_Y0;
  } else {
    rtb_TrigonometricFunction1 = q_heli3d_semestral_project_P.Step3_YFinal;
  }

  /* End of Step: '<S7>/Step3' */

  /* Step: '<S7>/Step4' */
  if (q_heli3d_semestral_project_M->Timing.t[0] <
      q_heli3d_semestral_project_P.Step4_Time) {
    rtb_TrigonometricFunction = q_heli3d_semestral_project_P.Step4_Y0;
  } else {
    rtb_TrigonometricFunction = q_heli3d_semestral_project_P.Step4_YFinal;
  }

  /* End of Step: '<S7>/Step4' */

  /* Sum: '<S7>/Add6' incorporates:
   *  Sum: '<S7>/Add'
   *  Sum: '<S7>/Add3'
   *  Sum: '<S7>/Add4'
   */
  q_heli3d_semestral_project_B.Add6 = (((rtb_Step + rtb_TrigonometricFunction2)
    - rtb_Cos) - rtb_TrigonometricFunction1) + rtb_TrigonometricFunction;

  /* MATLAB Function: '<Root>/MATLAB Function' */
  q_heli3d_semestr_MATLABFunction(q_heli3d_semestral_project_B.Add6,
    &q_heli3d_semestral_project_B.sf_MATLABFunction);

  /* Sum: '<Root>/Sum1' incorporates:
   *  Constant: '<Root>/Constant'
   *  Gain: '<Root>/Gain'
   */
  q_heli3d_semestral_project_B.Sum1 = q_heli3d_semestral_project_P.Gain_Gain *
    q_heli3d_semestral_project_B.sf_MATLABFunction.v +
    q_heli3d_semestral_project_P.Constant_Value;

  /* Sum: '<S7>/Add7' incorporates:
   *  Sum: '<S7>/Add1'
   *  Sum: '<S7>/Add2'
   *  Sum: '<S7>/Add5'
   */
  q_heli3d_semestral_project_B.Add7 = (((rtb_Step - rtb_TrigonometricFunction2)
    + rtb_Cos) + rtb_TrigonometricFunction1) - rtb_TrigonometricFunction;

  /* MATLAB Function: '<Root>/MATLAB Function1' */
  q_heli3d_semestr_MATLABFunction(q_heli3d_semestral_project_B.Add7,
    &q_heli3d_semestral_project_B.sf_MATLABFunction1);

  /* Sum: '<Root>/Sum2' incorporates:
   *  Constant: '<Root>/Constant'
   *  Gain: '<Root>/Gain1'
   */
  q_heli3d_semestral_project_B.Sum2 = q_heli3d_semestral_project_P.Gain1_Gain *
    q_heli3d_semestral_project_B.sf_MATLABFunction1.v +
    q_heli3d_semestral_project_P.Constant_Value;

  /* Gain: '<S1>/Amplifier Gain Pre-Compensation' */
  rtb_Step = 1.0 / q_heli3d_semestral_project_P.K_AMP;

  /* Saturate: '<S1>/Amplifier Voltage  Limit (V)' */
  if (q_heli3d_semestral_project_B.Sum1 > q_heli3d_semestral_project_P.VMAX_AMP)
  {
    rtb_TrigonometricFunction2 = q_heli3d_semestral_project_P.VMAX_AMP;
  } else if (q_heli3d_semestral_project_B.Sum1 <
             -q_heli3d_semestral_project_P.VMAX_AMP) {
    rtb_TrigonometricFunction2 = -q_heli3d_semestral_project_P.VMAX_AMP;
  } else {
    rtb_TrigonometricFunction2 = q_heli3d_semestral_project_B.Sum1;
  }

  /* Gain: '<S1>/Amplifier Gain Pre-Compensation' */
  rtb_TrigonometricFunction2 *= rtb_Step;

  /* Saturate: '<S1>/DACB Limit (V)' */
  if (rtb_TrigonometricFunction2 > q_heli3d_semestral_project_P.VMAX_DAC) {
    q_heli3d_semestral_project_B.DACBLimitV[0] =
      q_heli3d_semestral_project_P.VMAX_DAC;
  } else if (rtb_TrigonometricFunction2 < -q_heli3d_semestral_project_P.VMAX_DAC)
  {
    q_heli3d_semestral_project_B.DACBLimitV[0] =
      -q_heli3d_semestral_project_P.VMAX_DAC;
  } else {
    q_heli3d_semestral_project_B.DACBLimitV[0] = rtb_TrigonometricFunction2;
  }

  /* Saturate: '<S1>/Amplifier Voltage  Limit (V)' */
  if (q_heli3d_semestral_project_B.Sum2 > q_heli3d_semestral_project_P.VMAX_AMP)
  {
    rtb_TrigonometricFunction2 = q_heli3d_semestral_project_P.VMAX_AMP;
  } else if (q_heli3d_semestral_project_B.Sum2 <
             -q_heli3d_semestral_project_P.VMAX_AMP) {
    rtb_TrigonometricFunction2 = -q_heli3d_semestral_project_P.VMAX_AMP;
  } else {
    rtb_TrigonometricFunction2 = q_heli3d_semestral_project_B.Sum2;
  }

  /* Gain: '<S1>/Amplifier Gain Pre-Compensation' */
  rtb_TrigonometricFunction2 *= rtb_Step;

  /* Saturate: '<S1>/DACB Limit (V)' */
  if (rtb_TrigonometricFunction2 > q_heli3d_semestral_project_P.VMAX_DAC) {
    q_heli3d_semestral_project_B.DACBLimitV[1] =
      q_heli3d_semestral_project_P.VMAX_DAC;
  } else if (rtb_TrigonometricFunction2 < -q_heli3d_semestral_project_P.VMAX_DAC)
  {
    q_heli3d_semestral_project_B.DACBLimitV[1] =
      -q_heli3d_semestral_project_P.VMAX_DAC;
  } else {
    q_heli3d_semestral_project_B.DACBLimitV[1] = rtb_TrigonometricFunction2;
  }

  if (rtmIsMajorTimeStep(q_heli3d_semestral_project_M)) {
    /* S-Function (hil_write_analog_block): '<S1>/HIL Write Analog' */

    /* S-Function Block: q_heli3d_semestral_project/3-DOF Helicopter1/HIL Write Analog (hil_write_analog_block) */
    {
      t_error result;
      result = hil_write_analog(q_heli3d_semestral_project_DW.HILInitialize_Card,
        q_heli3d_semestral_project_P.HILWriteAnalog_channels, 2,
        &q_heli3d_semestral_project_B.DACBLimitV[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_heli3d_semestral_project_M, _rt_error_message);
      }
    }
  }

  /* Gain: '<S1>/Amplifier Gain' */
  q_heli3d_semestral_project_B.AmplifierGain[0] =
    q_heli3d_semestral_project_P.K_AMP *
    q_heli3d_semestral_project_B.DACBLimitV[0];
  q_heli3d_semestral_project_B.AmplifierGain[1] =
    q_heli3d_semestral_project_P.K_AMP *
    q_heli3d_semestral_project_B.DACBLimitV[1];
  if (rtmIsMajorTimeStep(q_heli3d_semestral_project_M)) {
    /* SignalConversion: '<S1>/TmpSignal ConversionAtTo WorkspaceInport1' */
    q_heli3d_semestral_project_B.TmpSignalConversionAtToWorkspac[0] =
      q_heli3d_semestral_project_B.Sum1;
    q_heli3d_semestral_project_B.TmpSignalConversionAtToWorkspac[1] =
      q_heli3d_semestral_project_B.Sum2;

    /* Gain: '<S1>/Encoder Resolution: Elevation (rad//count)' */
    q_heli3d_semestral_project_B.EncoderResolutionElevationradco =
      q_heli3d_semestral_project_P.K_EC_E * rtb_HILReadEncoderTimebase[2];

    /* Gain: '<S1>/Encoder Resolution: Pitch (rad//count)' */
    q_heli3d_semestral_project_B.EncoderResolutionPitchradcount =
      q_heli3d_semestral_project_P.K_EC_P * rtb_HILReadEncoderTimebase[1];

    /* Gain: '<S1>/Encoder Resolution: Travel (rad//count)' */
    q_heli3d_semestral_project_B.EncoderResolutionTravelradcount =
      q_heli3d_semestral_project_P.K_EC_T * rtb_HILReadEncoderTimebase[0];

    /* S-Function (hil_write_digital_block): '<S1>/HIL Write Digital' incorporates:
     *  Constant: '<S1>/Enable Amp'
     */

    /* S-Function Block: q_heli3d_semestral_project/3-DOF Helicopter1/HIL Write Digital (hil_write_digital_block) */
    {
      t_error result;
      q_heli3d_semestral_project_DW.HILWriteDigital_Buffer[0] =
        (q_heli3d_semestral_project_P.EnableAmp_Value[0] != 0);
      q_heli3d_semestral_project_DW.HILWriteDigital_Buffer[1] =
        (q_heli3d_semestral_project_P.EnableAmp_Value[1] != 0);
      q_heli3d_semestral_project_DW.HILWriteDigital_Buffer[2] =
        (q_heli3d_semestral_project_P.EnableAmp_Value[2] != 0);
      q_heli3d_semestral_project_DW.HILWriteDigital_Buffer[3] =
        (q_heli3d_semestral_project_P.EnableAmp_Value[3] != 0);
      result = hil_write_digital
        (q_heli3d_semestral_project_DW.HILInitialize_Card,
         q_heli3d_semestral_project_P.HILWriteDigital_channels, 4,
         &q_heli3d_semestral_project_DW.HILWriteDigital_Buffer[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_heli3d_semestral_project_M, _rt_error_message);
      }
    }

    /* Sum: '<S5>/Sum' */
    q_heli3d_semestral_project_B.Sum =
      q_heli3d_semestral_project_B.EncoderResolutionElevationradco;
  }

  /* Integrator: '<S2>/Integrator3' */
  q_heli3d_semestral_project_B.Integrator3 =
    q_heli3d_semestral_project_X.Integrator3_CSTATE;
  if (rtmIsMajorTimeStep(q_heli3d_semestral_project_M)) {
    /* Sum: '<S5>/Sum1' incorporates:
     *  Constant: '<S5>/Constant'
     */
    q_heli3d_semestral_project_B.Sum1_e =
      q_heli3d_semestral_project_B.EncoderResolutionPitchradcount +
      q_heli3d_semestral_project_P.Constant_Value_c;
  }

  /* Integrator: '<S2>/Integrator5' */
  q_heli3d_semestral_project_B.Integrator5 =
    q_heli3d_semestral_project_X.Integrator5_CSTATE;
  if (rtmIsMajorTimeStep(q_heli3d_semestral_project_M)) {
  }

  /* Integrator: '<S2>/Integrator1' */
  q_heli3d_semestral_project_B.Integrator1 =
    q_heli3d_semestral_project_X.Integrator1_CSTATE;
  if (rtmIsMajorTimeStep(q_heli3d_semestral_project_M)) {
  }

  /* Sum: '<Root>/Add' */
  q_heli3d_semestral_project_B.Add = q_heli3d_semestral_project_B.Add6 +
    q_heli3d_semestral_project_B.Add7;

  /* Sum: '<Root>/Add1' */
  q_heli3d_semestral_project_B.Add1 = q_heli3d_semestral_project_B.Add6 -
    q_heli3d_semestral_project_B.Add7;
  if (rtmIsMajorTimeStep(q_heli3d_semestral_project_M)) {
    /* SignalConversion: '<Root>/TmpSignal ConversionAtTo WorkspaceInport1' */
    q_heli3d_semestral_project_B.TmpSignalConversionAtToWorksp_o[0] =
      q_heli3d_semestral_project_B.Add;
    q_heli3d_semestral_project_B.TmpSignalConversionAtToWorksp_o[1] =
      q_heli3d_semestral_project_B.Add1;

    /* SignalConversion: '<Root>/TmpSignal ConversionAtTo Workspace4Inport1' */
    q_heli3d_semestral_project_B.TmpSignalConversionAtToWorksp_m[0] =
      q_heli3d_semestral_project_B.EncoderResolutionTravelradcount;
    q_heli3d_semestral_project_B.TmpSignalConversionAtToWorksp_m[1] =
      q_heli3d_semestral_project_B.EncoderResolutionElevationradco;
    q_heli3d_semestral_project_B.TmpSignalConversionAtToWorksp_m[2] =
      q_heli3d_semestral_project_B.EncoderResolutionPitchradcount;
  }

  /* Trigonometry: '<S2>/Trigonometric Function' */
  rtb_TrigonometricFunction = cos(q_heli3d_semestral_project_B.Integrator3);

  /* Trigonometry: '<S2>/Trigonometric Function1' */
  rtb_TrigonometricFunction1 = sin(q_heli3d_semestral_project_B.Integrator5);

  /* Integrator: '<S2>/Integrator' */
  q_heli3d_semestral_project_B.Integrator =
    q_heli3d_semestral_project_X.Integrator_CSTATE;

  /* Sum: '<S2>/Add' incorporates:
   *  Gain: '<S2>/Gain'
   *  Gain: '<S2>/Gain1'
   *  Product: '<S2>/Product'
   */
  q_heli3d_semestral_project_B.Add_g = rtb_TrigonometricFunction *
    rtb_TrigonometricFunction1 * q_heli3d_semestral_project_B.Add *
    -q_heli3d_semestral_project_P.bl + -q_heli3d_semestral_project_P.cl *
    q_heli3d_semestral_project_B.Integrator;

  /* Trigonometry: '<S2>/Cos' */
  rtb_Cos = cos(q_heli3d_semestral_project_B.Integrator5);

  /* Trigonometry: '<S2>/Trigonometric Function2' */
  rtb_TrigonometricFunction2 = sin(q_heli3d_semestral_project_B.Integrator3);

  /* Integrator: '<S2>/Integrator2' */
  q_heli3d_semestral_project_B.Integrator2 =
    q_heli3d_semestral_project_X.Integrator2_CSTATE;

  /* Sum: '<S2>/Add1' incorporates:
   *  Gain: '<S2>/Gain2'
   *  Gain: '<S2>/Gain3'
   *  Gain: '<S2>/Gain4'
   *  Gain: '<S2>/Gain5'
   *  Product: '<S2>/Product1'
   *  Product: '<S2>/Product2'
   */
  q_heli3d_semestral_project_B.Add1_f = ((q_heli3d_semestral_project_B.Add *
    rtb_Cos * q_heli3d_semestral_project_P.be + rtb_TrigonometricFunction2 *
    rtb_Cos * -q_heli3d_semestral_project_P.ae2) +
    -q_heli3d_semestral_project_P.ae1 * rtb_TrigonometricFunction2) +
    -q_heli3d_semestral_project_P.ce * q_heli3d_semestral_project_B.Integrator2;

  /* Integrator: '<S2>/Integrator4' */
  q_heli3d_semestral_project_B.Integrator4 =
    q_heli3d_semestral_project_X.Integrator4_CSTATE;

  /* Sum: '<S2>/Add2' incorporates:
   *  Gain: '<S2>/Gain6'
   *  Gain: '<S2>/Gain7'
   *  Gain: '<S2>/Gain8'
   *  Product: '<S2>/Product3'
   */
  q_heli3d_semestral_project_B.Add2 = (rtb_TrigonometricFunction *
    rtb_TrigonometricFunction1 * -q_heli3d_semestral_project_P.at +
    q_heli3d_semestral_project_P.bt * q_heli3d_semestral_project_B.Add1) +
    -q_heli3d_semestral_project_P.ct * q_heli3d_semestral_project_B.Integrator4;
  if (rtmIsMajorTimeStep(q_heli3d_semestral_project_M)) {
  }
}

/* Model update function */
void q_heli3d_semestral_project_update(void)
{
  if (rtmIsMajorTimeStep(q_heli3d_semestral_project_M)) {
    rt_ertODEUpdateContinuousStates(&q_heli3d_semestral_project_M->solverInfo);
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++q_heli3d_semestral_project_M->Timing.clockTick0)) {
    ++q_heli3d_semestral_project_M->Timing.clockTickH0;
  }

  q_heli3d_semestral_project_M->Timing.t[0] = rtsiGetSolverStopTime
    (&q_heli3d_semestral_project_M->solverInfo);

  {
    /* Update absolute timer for sample time: [0.002s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick1"
     * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++q_heli3d_semestral_project_M->Timing.clockTick1)) {
      ++q_heli3d_semestral_project_M->Timing.clockTickH1;
    }

    q_heli3d_semestral_project_M->Timing.t[1] =
      q_heli3d_semestral_project_M->Timing.clockTick1 *
      q_heli3d_semestral_project_M->Timing.stepSize1 +
      q_heli3d_semestral_project_M->Timing.clockTickH1 *
      q_heli3d_semestral_project_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Derivatives for root system: '<Root>' */
void q_heli3d_semestral_project_derivatives(void)
{
  XDot_q_heli3d_semestral_proje_T *_rtXdot;
  _rtXdot = ((XDot_q_heli3d_semestral_proje_T *)
             q_heli3d_semestral_project_M->derivs);

  /* Derivatives for TransferFcn: '<S1>/Derivative Filter: Elevation' */
  _rtXdot->DerivativeFilterElevation_CSTAT[0] = 0.0;
  _rtXdot->DerivativeFilterElevation_CSTAT[0] +=
    q_heli3d_semestral_project_P.DerivativeFilterElevation_A[0] *
    q_heli3d_semestral_project_X.DerivativeFilterElevation_CSTAT[0];
  _rtXdot->DerivativeFilterElevation_CSTAT[1] = 0.0;
  _rtXdot->DerivativeFilterElevation_CSTAT[0] +=
    q_heli3d_semestral_project_P.DerivativeFilterElevation_A[1] *
    q_heli3d_semestral_project_X.DerivativeFilterElevation_CSTAT[1];
  _rtXdot->DerivativeFilterElevation_CSTAT[1] +=
    q_heli3d_semestral_project_X.DerivativeFilterElevation_CSTAT[0];
  _rtXdot->DerivativeFilterElevation_CSTAT[0] +=
    q_heli3d_semestral_project_B.EncoderResolutionElevationradco;

  /* Derivatives for TransferFcn: '<S1>/Derivative Filter: Pitch' */
  _rtXdot->DerivativeFilterPitch_CSTATE[0] = 0.0;
  _rtXdot->DerivativeFilterPitch_CSTATE[0] +=
    q_heli3d_semestral_project_P.DerivativeFilterPitch_A[0] *
    q_heli3d_semestral_project_X.DerivativeFilterPitch_CSTATE[0];
  _rtXdot->DerivativeFilterPitch_CSTATE[1] = 0.0;
  _rtXdot->DerivativeFilterPitch_CSTATE[0] +=
    q_heli3d_semestral_project_P.DerivativeFilterPitch_A[1] *
    q_heli3d_semestral_project_X.DerivativeFilterPitch_CSTATE[1];
  _rtXdot->DerivativeFilterPitch_CSTATE[1] +=
    q_heli3d_semestral_project_X.DerivativeFilterPitch_CSTATE[0];
  _rtXdot->DerivativeFilterPitch_CSTATE[0] +=
    q_heli3d_semestral_project_B.EncoderResolutionPitchradcount;

  /* Derivatives for TransferFcn: '<S1>/Derivative Filter: Travel' */
  _rtXdot->DerivativeFilterTravel_CSTATE[0] = 0.0;
  _rtXdot->DerivativeFilterTravel_CSTATE[0] +=
    q_heli3d_semestral_project_P.DerivativeFilterTravel_A[0] *
    q_heli3d_semestral_project_X.DerivativeFilterTravel_CSTATE[0];
  _rtXdot->DerivativeFilterTravel_CSTATE[1] = 0.0;
  _rtXdot->DerivativeFilterTravel_CSTATE[0] +=
    q_heli3d_semestral_project_P.DerivativeFilterTravel_A[1] *
    q_heli3d_semestral_project_X.DerivativeFilterTravel_CSTATE[1];
  _rtXdot->DerivativeFilterTravel_CSTATE[1] +=
    q_heli3d_semestral_project_X.DerivativeFilterTravel_CSTATE[0];
  _rtXdot->DerivativeFilterTravel_CSTATE[0] +=
    q_heli3d_semestral_project_B.EncoderResolutionTravelradcount;

  /* Derivatives for Integrator: '<S2>/Integrator3' */
  _rtXdot->Integrator3_CSTATE = q_heli3d_semestral_project_B.Integrator2;

  /* Derivatives for Integrator: '<S2>/Integrator5' */
  _rtXdot->Integrator5_CSTATE = q_heli3d_semestral_project_B.Integrator4;

  /* Derivatives for Integrator: '<S2>/Integrator1' */
  _rtXdot->Integrator1_CSTATE = q_heli3d_semestral_project_B.Integrator;

  /* Derivatives for Integrator: '<S2>/Integrator' */
  _rtXdot->Integrator_CSTATE = q_heli3d_semestral_project_B.Add_g;

  /* Derivatives for Integrator: '<S2>/Integrator2' */
  _rtXdot->Integrator2_CSTATE = q_heli3d_semestral_project_B.Add1_f;

  /* Derivatives for Integrator: '<S2>/Integrator4' */
  _rtXdot->Integrator4_CSTATE = q_heli3d_semestral_project_B.Add2;
}

/* Model initialize function */
void q_heli3d_semestral_project_initialize(void)
{
  /* Start for S-Function (hil_initialize_block): '<S1>/HIL Initialize' */

  /* S-Function Block: q_heli3d_semestral_project/3-DOF Helicopter1/HIL Initialize (hil_initialize_block) */
  {
    t_int result;
    t_boolean is_switching;
    result = hil_open("q8_usb", "0",
                      &q_heli3d_semestral_project_DW.HILInitialize_Card);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(q_heli3d_semestral_project_M, _rt_error_message);
      return;
    }

    is_switching = false;
    result = hil_set_card_specific_options
      (q_heli3d_semestral_project_DW.HILInitialize_Card,
       "update_rate=normal;decimation=1", 32);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(q_heli3d_semestral_project_M, _rt_error_message);
      return;
    }

    result = hil_watchdog_clear(q_heli3d_semestral_project_DW.HILInitialize_Card);
    if (result < 0 && result != -QERR_HIL_WATCHDOG_CLEAR) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(q_heli3d_semestral_project_M, _rt_error_message);
      return;
    }

    if ((q_heli3d_semestral_project_P.HILInitialize_AIPStart && !is_switching) ||
        (q_heli3d_semestral_project_P.HILInitialize_AIPEnter && is_switching)) {
      {
        int_T i1;
        real_T *dw_AIMinimums =
          &q_heli3d_semestral_project_DW.HILInitialize_AIMinimums[0];
        for (i1=0; i1 < 8; i1++) {
          dw_AIMinimums[i1] = (q_heli3d_semestral_project_P.HILInitialize_AILow);
        }
      }

      {
        int_T i1;
        real_T *dw_AIMaximums =
          &q_heli3d_semestral_project_DW.HILInitialize_AIMaximums[0];
        for (i1=0; i1 < 8; i1++) {
          dw_AIMaximums[i1] = q_heli3d_semestral_project_P.HILInitialize_AIHigh;
        }
      }

      result = hil_set_analog_input_ranges
        (q_heli3d_semestral_project_DW.HILInitialize_Card,
         q_heli3d_semestral_project_P.HILInitialize_AIChannels, 8U,
         &q_heli3d_semestral_project_DW.HILInitialize_AIMinimums[0],
         &q_heli3d_semestral_project_DW.HILInitialize_AIMaximums[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_heli3d_semestral_project_M, _rt_error_message);
        return;
      }
    }

    if ((q_heli3d_semestral_project_P.HILInitialize_AOPStart && !is_switching) ||
        (q_heli3d_semestral_project_P.HILInitialize_AOPEnter && is_switching)) {
      {
        int_T i1;
        real_T *dw_AOMinimums =
          &q_heli3d_semestral_project_DW.HILInitialize_AOMinimums[0];
        for (i1=0; i1 < 8; i1++) {
          dw_AOMinimums[i1] = (q_heli3d_semestral_project_P.HILInitialize_AOLow);
        }
      }

      {
        int_T i1;
        real_T *dw_AOMaximums =
          &q_heli3d_semestral_project_DW.HILInitialize_AOMaximums[0];
        for (i1=0; i1 < 8; i1++) {
          dw_AOMaximums[i1] = q_heli3d_semestral_project_P.HILInitialize_AOHigh;
        }
      }

      result = hil_set_analog_output_ranges
        (q_heli3d_semestral_project_DW.HILInitialize_Card,
         q_heli3d_semestral_project_P.HILInitialize_AOChannels, 8U,
         &q_heli3d_semestral_project_DW.HILInitialize_AOMinimums[0],
         &q_heli3d_semestral_project_DW.HILInitialize_AOMaximums[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_heli3d_semestral_project_M, _rt_error_message);
        return;
      }
    }

    if ((q_heli3d_semestral_project_P.HILInitialize_AOStart && !is_switching) ||
        (q_heli3d_semestral_project_P.HILInitialize_AOEnter && is_switching)) {
      {
        int_T i1;
        real_T *dw_AOVoltages =
          &q_heli3d_semestral_project_DW.HILInitialize_AOVoltages[0];
        for (i1=0; i1 < 8; i1++) {
          dw_AOVoltages[i1] =
            q_heli3d_semestral_project_P.HILInitialize_AOInitial;
        }
      }

      result = hil_write_analog(q_heli3d_semestral_project_DW.HILInitialize_Card,
        q_heli3d_semestral_project_P.HILInitialize_AOChannels, 8U,
        &q_heli3d_semestral_project_DW.HILInitialize_AOVoltages[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_heli3d_semestral_project_M, _rt_error_message);
        return;
      }
    }

    if (q_heli3d_semestral_project_P.HILInitialize_AOReset) {
      {
        int_T i1;
        real_T *dw_AOVoltages =
          &q_heli3d_semestral_project_DW.HILInitialize_AOVoltages[0];
        for (i1=0; i1 < 8; i1++) {
          dw_AOVoltages[i1] =
            q_heli3d_semestral_project_P.HILInitialize_AOWatchdog;
        }
      }

      result = hil_watchdog_set_analog_expiration_state
        (q_heli3d_semestral_project_DW.HILInitialize_Card,
         q_heli3d_semestral_project_P.HILInitialize_AOChannels, 8U,
         &q_heli3d_semestral_project_DW.HILInitialize_AOVoltages[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_heli3d_semestral_project_M, _rt_error_message);
        return;
      }
    }

    if ((q_heli3d_semestral_project_P.HILInitialize_EIPStart && !is_switching) ||
        (q_heli3d_semestral_project_P.HILInitialize_EIPEnter && is_switching)) {
      {
        int_T i1;
        int32_T *dw_QuadratureModes =
          &q_heli3d_semestral_project_DW.HILInitialize_QuadratureModes[0];
        for (i1=0; i1 < 8; i1++) {
          dw_QuadratureModes[i1] =
            q_heli3d_semestral_project_P.HILInitialize_EIQuadrature;
        }
      }

      result = hil_set_encoder_quadrature_mode
        (q_heli3d_semestral_project_DW.HILInitialize_Card,
         q_heli3d_semestral_project_P.HILInitialize_EIChannels, 8U,
         (t_encoder_quadrature_mode *)
         &q_heli3d_semestral_project_DW.HILInitialize_QuadratureModes[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_heli3d_semestral_project_M, _rt_error_message);
        return;
      }
    }

    if ((q_heli3d_semestral_project_P.HILInitialize_EIStart && !is_switching) ||
        (q_heli3d_semestral_project_P.HILInitialize_EIEnter && is_switching)) {
      {
        int_T i1;
        int32_T *dw_InitialEICounts =
          &q_heli3d_semestral_project_DW.HILInitialize_InitialEICounts[0];
        for (i1=0; i1 < 8; i1++) {
          dw_InitialEICounts[i1] =
            q_heli3d_semestral_project_P.HILInitialize_EIInitial;
        }
      }

      result = hil_set_encoder_counts
        (q_heli3d_semestral_project_DW.HILInitialize_Card,
         q_heli3d_semestral_project_P.HILInitialize_EIChannels, 8U,
         &q_heli3d_semestral_project_DW.HILInitialize_InitialEICounts[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_heli3d_semestral_project_M, _rt_error_message);
        return;
      }
    }

    if ((q_heli3d_semestral_project_P.HILInitialize_POPStart && !is_switching) ||
        (q_heli3d_semestral_project_P.HILInitialize_POPEnter && is_switching)) {
      uint32_T num_duty_cycle_modes = 0;
      uint32_T num_frequency_modes = 0;

      {
        int_T i1;
        int32_T *dw_POModeValues =
          &q_heli3d_semestral_project_DW.HILInitialize_POModeValues[0];
        for (i1=0; i1 < 8; i1++) {
          dw_POModeValues[i1] =
            q_heli3d_semestral_project_P.HILInitialize_POModes;
        }
      }

      result = hil_set_pwm_mode(q_heli3d_semestral_project_DW.HILInitialize_Card,
        q_heli3d_semestral_project_P.HILInitialize_POChannels, 8U, (t_pwm_mode *)
        &q_heli3d_semestral_project_DW.HILInitialize_POModeValues[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_heli3d_semestral_project_M, _rt_error_message);
        return;
      }

      {
        int_T i1;
        const uint32_T *p_HILInitialize_POChannels =
          q_heli3d_semestral_project_P.HILInitialize_POChannels;
        int32_T *dw_POModeValues =
          &q_heli3d_semestral_project_DW.HILInitialize_POModeValues[0];
        for (i1=0; i1 < 8; i1++) {
          if (dw_POModeValues[i1] == PWM_DUTY_CYCLE_MODE || dw_POModeValues[i1] ==
              PWM_ONE_SHOT_MODE || dw_POModeValues[i1] == PWM_TIME_MODE) {
            q_heli3d_semestral_project_DW.HILInitialize_POSortedChans[num_duty_cycle_modes]
              = (p_HILInitialize_POChannels[i1]);
            q_heli3d_semestral_project_DW.HILInitialize_POSortedFreqs[num_duty_cycle_modes]
              = q_heli3d_semestral_project_P.HILInitialize_POFrequency;
            num_duty_cycle_modes++;
          } else {
            q_heli3d_semestral_project_DW.HILInitialize_POSortedChans[7U -
              num_frequency_modes] = (p_HILInitialize_POChannels[i1]);
            q_heli3d_semestral_project_DW.HILInitialize_POSortedFreqs[7U -
              num_frequency_modes] =
              q_heli3d_semestral_project_P.HILInitialize_POFrequency;
            num_frequency_modes++;
          }
        }
      }

      if (num_duty_cycle_modes > 0) {
        result = hil_set_pwm_frequency
          (q_heli3d_semestral_project_DW.HILInitialize_Card,
           &q_heli3d_semestral_project_DW.HILInitialize_POSortedChans[0],
           num_duty_cycle_modes,
           &q_heli3d_semestral_project_DW.HILInitialize_POSortedFreqs[0]);
        if (result < 0) {
          msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
            (_rt_error_message));
          rtmSetErrorStatus(q_heli3d_semestral_project_M, _rt_error_message);
          return;
        }
      }

      if (num_frequency_modes > 0) {
        result = hil_set_pwm_duty_cycle
          (q_heli3d_semestral_project_DW.HILInitialize_Card,
           &q_heli3d_semestral_project_DW.HILInitialize_POSortedChans[num_duty_cycle_modes],
           num_frequency_modes,
           &q_heli3d_semestral_project_DW.HILInitialize_POSortedFreqs[num_duty_cycle_modes]);
        if (result < 0) {
          msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
            (_rt_error_message));
          rtmSetErrorStatus(q_heli3d_semestral_project_M, _rt_error_message);
          return;
        }
      }

      {
        int_T i1;
        int32_T *dw_POModeValues =
          &q_heli3d_semestral_project_DW.HILInitialize_POModeValues[0];
        for (i1=0; i1 < 8; i1++) {
          dw_POModeValues[i1] =
            q_heli3d_semestral_project_P.HILInitialize_POConfiguration;
        }
      }

      {
        int_T i1;
        int32_T *dw_POAlignValues =
          &q_heli3d_semestral_project_DW.HILInitialize_POAlignValues[0];
        for (i1=0; i1 < 8; i1++) {
          dw_POAlignValues[i1] =
            q_heli3d_semestral_project_P.HILInitialize_POAlignment;
        }
      }

      {
        int_T i1;
        int32_T *dw_POPolarityVals =
          &q_heli3d_semestral_project_DW.HILInitialize_POPolarityVals[0];
        for (i1=0; i1 < 8; i1++) {
          dw_POPolarityVals[i1] =
            q_heli3d_semestral_project_P.HILInitialize_POPolarity;
        }
      }

      result = hil_set_pwm_configuration
        (q_heli3d_semestral_project_DW.HILInitialize_Card,
         q_heli3d_semestral_project_P.HILInitialize_POChannels, 8U,
         (t_pwm_configuration *)
         &q_heli3d_semestral_project_DW.HILInitialize_POModeValues[0],
         (t_pwm_alignment *)
         &q_heli3d_semestral_project_DW.HILInitialize_POAlignValues[0],
         (t_pwm_polarity *)
         &q_heli3d_semestral_project_DW.HILInitialize_POPolarityVals[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_heli3d_semestral_project_M, _rt_error_message);
        return;
      }

      {
        int_T i1;
        real_T *dw_POSortedFreqs =
          &q_heli3d_semestral_project_DW.HILInitialize_POSortedFreqs[0];
        for (i1=0; i1 < 8; i1++) {
          dw_POSortedFreqs[i1] =
            q_heli3d_semestral_project_P.HILInitialize_POLeading;
        }
      }

      {
        int_T i1;
        real_T *dw_POValues =
          &q_heli3d_semestral_project_DW.HILInitialize_POValues[0];
        for (i1=0; i1 < 8; i1++) {
          dw_POValues[i1] =
            q_heli3d_semestral_project_P.HILInitialize_POTrailing;
        }
      }

      result = hil_set_pwm_deadband
        (q_heli3d_semestral_project_DW.HILInitialize_Card,
         q_heli3d_semestral_project_P.HILInitialize_POChannels, 8U,
         &q_heli3d_semestral_project_DW.HILInitialize_POSortedFreqs[0],
         &q_heli3d_semestral_project_DW.HILInitialize_POValues[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_heli3d_semestral_project_M, _rt_error_message);
        return;
      }
    }

    if ((q_heli3d_semestral_project_P.HILInitialize_POStart && !is_switching) ||
        (q_heli3d_semestral_project_P.HILInitialize_POEnter && is_switching)) {
      {
        int_T i1;
        real_T *dw_POValues =
          &q_heli3d_semestral_project_DW.HILInitialize_POValues[0];
        for (i1=0; i1 < 8; i1++) {
          dw_POValues[i1] = q_heli3d_semestral_project_P.HILInitialize_POInitial;
        }
      }

      result = hil_write_pwm(q_heli3d_semestral_project_DW.HILInitialize_Card,
        q_heli3d_semestral_project_P.HILInitialize_POChannels, 8U,
        &q_heli3d_semestral_project_DW.HILInitialize_POValues[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_heli3d_semestral_project_M, _rt_error_message);
        return;
      }
    }

    if (q_heli3d_semestral_project_P.HILInitialize_POReset) {
      {
        int_T i1;
        real_T *dw_POValues =
          &q_heli3d_semestral_project_DW.HILInitialize_POValues[0];
        for (i1=0; i1 < 8; i1++) {
          dw_POValues[i1] =
            q_heli3d_semestral_project_P.HILInitialize_POWatchdog;
        }
      }

      result = hil_watchdog_set_pwm_expiration_state
        (q_heli3d_semestral_project_DW.HILInitialize_Card,
         q_heli3d_semestral_project_P.HILInitialize_POChannels, 8U,
         &q_heli3d_semestral_project_DW.HILInitialize_POValues[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_heli3d_semestral_project_M, _rt_error_message);
        return;
      }
    }
  }

  /* Start for S-Function (hil_read_encoder_timebase_block): '<S1>/HIL Read Encoder Timebase' */

  /* S-Function Block: q_heli3d_semestral_project/3-DOF Helicopter1/HIL Read Encoder Timebase (hil_read_encoder_timebase_block) */
  {
    t_error result;
    result = hil_task_create_encoder_reader
      (q_heli3d_semestral_project_DW.HILInitialize_Card,
       q_heli3d_semestral_project_P.HILReadEncoderTimebase_samples_,
       q_heli3d_semestral_project_P.HILReadEncoderTimebase_channels, 3,
       &q_heli3d_semestral_project_DW.HILReadEncoderTimebase_Task);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(q_heli3d_semestral_project_M, _rt_error_message);
    }
  }

  /* InitializeConditions for TransferFcn: '<S1>/Derivative Filter: Elevation' */
  q_heli3d_semestral_project_X.DerivativeFilterElevation_CSTAT[0] = 0.0;

  /* InitializeConditions for TransferFcn: '<S1>/Derivative Filter: Pitch' */
  q_heli3d_semestral_project_X.DerivativeFilterPitch_CSTATE[0] = 0.0;

  /* InitializeConditions for TransferFcn: '<S1>/Derivative Filter: Travel' */
  q_heli3d_semestral_project_X.DerivativeFilterTravel_CSTATE[0] = 0.0;

  /* InitializeConditions for TransferFcn: '<S1>/Derivative Filter: Elevation' */
  q_heli3d_semestral_project_X.DerivativeFilterElevation_CSTAT[1] = 0.0;

  /* InitializeConditions for TransferFcn: '<S1>/Derivative Filter: Pitch' */
  q_heli3d_semestral_project_X.DerivativeFilterPitch_CSTATE[1] = 0.0;

  /* InitializeConditions for TransferFcn: '<S1>/Derivative Filter: Travel' */
  q_heli3d_semestral_project_X.DerivativeFilterTravel_CSTATE[1] = 0.0;

  /* InitializeConditions for Integrator: '<S2>/Integrator3' */
  q_heli3d_semestral_project_X.Integrator3_CSTATE =
    q_heli3d_semestral_project_P.Integrator3_IC;

  /* InitializeConditions for Integrator: '<S2>/Integrator5' */
  q_heli3d_semestral_project_X.Integrator5_CSTATE =
    q_heli3d_semestral_project_P.x0[4];

  /* InitializeConditions for Integrator: '<S2>/Integrator1' */
  q_heli3d_semestral_project_X.Integrator1_CSTATE =
    q_heli3d_semestral_project_P.x0[0];

  /* InitializeConditions for Integrator: '<S2>/Integrator' */
  q_heli3d_semestral_project_X.Integrator_CSTATE =
    q_heli3d_semestral_project_P.x0[1];

  /* InitializeConditions for Integrator: '<S2>/Integrator2' */
  q_heli3d_semestral_project_X.Integrator2_CSTATE =
    q_heli3d_semestral_project_P.x0[3];

  /* InitializeConditions for Integrator: '<S2>/Integrator4' */
  q_heli3d_semestral_project_X.Integrator4_CSTATE =
    q_heli3d_semestral_project_P.x0[5];
}

/* Model terminate function */
void q_heli3d_semestral_project_terminate(void)
{
  /* Terminate for S-Function (hil_initialize_block): '<S1>/HIL Initialize' */

  /* S-Function Block: q_heli3d_semestral_project/3-DOF Helicopter1/HIL Initialize (hil_initialize_block) */
  {
    t_boolean is_switching;
    t_int result;
    t_uint32 num_final_analog_outputs = 0;
    t_uint32 num_final_pwm_outputs = 0;
    hil_task_stop_all(q_heli3d_semestral_project_DW.HILInitialize_Card);
    hil_monitor_stop_all(q_heli3d_semestral_project_DW.HILInitialize_Card);
    is_switching = false;
    if ((q_heli3d_semestral_project_P.HILInitialize_AOTerminate && !is_switching)
        || (q_heli3d_semestral_project_P.HILInitialize_AOExit && is_switching))
    {
      {
        int_T i1;
        real_T *dw_AOVoltages =
          &q_heli3d_semestral_project_DW.HILInitialize_AOVoltages[0];
        for (i1=0; i1 < 8; i1++) {
          dw_AOVoltages[i1] = q_heli3d_semestral_project_P.HILInitialize_AOFinal;
        }
      }

      num_final_analog_outputs = 8U;
    }

    if ((q_heli3d_semestral_project_P.HILInitialize_POTerminate && !is_switching)
        || (q_heli3d_semestral_project_P.HILInitialize_POExit && is_switching))
    {
      {
        int_T i1;
        real_T *dw_POValues =
          &q_heli3d_semestral_project_DW.HILInitialize_POValues[0];
        for (i1=0; i1 < 8; i1++) {
          dw_POValues[i1] = q_heli3d_semestral_project_P.HILInitialize_POFinal;
        }
      }

      num_final_pwm_outputs = 8U;
    }

    if (0
        || num_final_analog_outputs > 0
        || num_final_pwm_outputs > 0
        ) {
      /* Attempt to write the final outputs atomically (due to firmware issue in old Q2-USB). Otherwise write channels individually */
      result = hil_write(q_heli3d_semestral_project_DW.HILInitialize_Card
                         , q_heli3d_semestral_project_P.HILInitialize_AOChannels,
                         num_final_analog_outputs
                         , q_heli3d_semestral_project_P.HILInitialize_POChannels,
                         num_final_pwm_outputs
                         , NULL, 0
                         , NULL, 0
                         ,
                         &q_heli3d_semestral_project_DW.HILInitialize_AOVoltages[
                         0]
                         ,
                         &q_heli3d_semestral_project_DW.HILInitialize_POValues[0]
                         , (t_boolean *) NULL
                         , NULL
                         );
      if (result == -QERR_HIL_WRITE_NOT_SUPPORTED) {
        t_error local_result;
        result = 0;

        /* The hil_write operation is not supported by this card. Write final outputs for each channel type */
        if (num_final_analog_outputs > 0) {
          local_result = hil_write_analog
            (q_heli3d_semestral_project_DW.HILInitialize_Card,
             q_heli3d_semestral_project_P.HILInitialize_AOChannels,
             num_final_analog_outputs,
             &q_heli3d_semestral_project_DW.HILInitialize_AOVoltages[0]);
          if (local_result < 0) {
            result = local_result;
          }
        }

        if (num_final_pwm_outputs > 0) {
          local_result = hil_write_pwm
            (q_heli3d_semestral_project_DW.HILInitialize_Card,
             q_heli3d_semestral_project_P.HILInitialize_POChannels,
             num_final_pwm_outputs,
             &q_heli3d_semestral_project_DW.HILInitialize_POValues[0]);
          if (local_result < 0) {
            result = local_result;
          }
        }

        if (result < 0) {
          msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
            (_rt_error_message));
          rtmSetErrorStatus(q_heli3d_semestral_project_M, _rt_error_message);
        }
      }
    }

    hil_task_delete_all(q_heli3d_semestral_project_DW.HILInitialize_Card);
    hil_monitor_delete_all(q_heli3d_semestral_project_DW.HILInitialize_Card);
    hil_close(q_heli3d_semestral_project_DW.HILInitialize_Card);
    q_heli3d_semestral_project_DW.HILInitialize_Card = NULL;
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/

/* Solver interface called by GRT_Main */
#ifndef USE_GENERATED_SOLVER

void rt_ODECreateIntegrationData(RTWSolverInfo *si)
{
  UNUSED_PARAMETER(si);
  return;
}                                      /* do nothing */

void rt_ODEDestroyIntegrationData(RTWSolverInfo *si)
{
  UNUSED_PARAMETER(si);
  return;
}                                      /* do nothing */

void rt_ODEUpdateContinuousStates(RTWSolverInfo *si)
{
  UNUSED_PARAMETER(si);
  return;
}                                      /* do nothing */

#endif

void MdlOutputs(int_T tid)
{
  q_heli3d_semestral_project_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  q_heli3d_semestral_project_update();
  UNUSED_PARAMETER(tid);
}

void MdlInitializeSizes(void)
{
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  q_heli3d_semestral_project_initialize();
}

void MdlTerminate(void)
{
  q_heli3d_semestral_project_terminate();
}

/* Registration function */
RT_MODEL_q_heli3d_semestral_p_T *q_heli3d_semestral_project(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)q_heli3d_semestral_project_M, 0,
                sizeof(RT_MODEL_q_heli3d_semestral_p_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&q_heli3d_semestral_project_M->solverInfo,
                          &q_heli3d_semestral_project_M->Timing.simTimeStep);
    rtsiSetTPtr(&q_heli3d_semestral_project_M->solverInfo, &rtmGetTPtr
                (q_heli3d_semestral_project_M));
    rtsiSetStepSizePtr(&q_heli3d_semestral_project_M->solverInfo,
                       &q_heli3d_semestral_project_M->Timing.stepSize0);
    rtsiSetdXPtr(&q_heli3d_semestral_project_M->solverInfo,
                 &q_heli3d_semestral_project_M->derivs);
    rtsiSetContStatesPtr(&q_heli3d_semestral_project_M->solverInfo, (real_T **)
                         &q_heli3d_semestral_project_M->contStates);
    rtsiSetNumContStatesPtr(&q_heli3d_semestral_project_M->solverInfo,
      &q_heli3d_semestral_project_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&q_heli3d_semestral_project_M->solverInfo,
      &q_heli3d_semestral_project_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&q_heli3d_semestral_project_M->solverInfo,
      &q_heli3d_semestral_project_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&q_heli3d_semestral_project_M->solverInfo,
      &q_heli3d_semestral_project_M->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&q_heli3d_semestral_project_M->solverInfo,
                          (&rtmGetErrorStatus(q_heli3d_semestral_project_M)));
    rtsiSetRTModelPtr(&q_heli3d_semestral_project_M->solverInfo,
                      q_heli3d_semestral_project_M);
  }

  rtsiSetSimTimeStep(&q_heli3d_semestral_project_M->solverInfo, MAJOR_TIME_STEP);
  q_heli3d_semestral_project_M->intgData.f[0] =
    q_heli3d_semestral_project_M->odeF[0];
  q_heli3d_semestral_project_M->contStates = ((real_T *)
    &q_heli3d_semestral_project_X);
  rtsiSetSolverData(&q_heli3d_semestral_project_M->solverInfo, (void *)
                    &q_heli3d_semestral_project_M->intgData);
  rtsiSetSolverName(&q_heli3d_semestral_project_M->solverInfo,"ode1");

  /* Initialize timing info */
  {
    int_T *mdlTsMap = q_heli3d_semestral_project_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    q_heli3d_semestral_project_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    q_heli3d_semestral_project_M->Timing.sampleTimes =
      (&q_heli3d_semestral_project_M->Timing.sampleTimesArray[0]);
    q_heli3d_semestral_project_M->Timing.offsetTimes =
      (&q_heli3d_semestral_project_M->Timing.offsetTimesArray[0]);

    /* task periods */
    q_heli3d_semestral_project_M->Timing.sampleTimes[0] = (0.0);
    q_heli3d_semestral_project_M->Timing.sampleTimes[1] = (0.002);

    /* task offsets */
    q_heli3d_semestral_project_M->Timing.offsetTimes[0] = (0.0);
    q_heli3d_semestral_project_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(q_heli3d_semestral_project_M,
             &q_heli3d_semestral_project_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = q_heli3d_semestral_project_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    q_heli3d_semestral_project_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(q_heli3d_semestral_project_M, -1);
  q_heli3d_semestral_project_M->Timing.stepSize0 = 0.002;
  q_heli3d_semestral_project_M->Timing.stepSize1 = 0.002;

  /* External mode info */
  q_heli3d_semestral_project_M->Sizes.checksums[0] = (1522554653U);
  q_heli3d_semestral_project_M->Sizes.checksums[1] = (445539586U);
  q_heli3d_semestral_project_M->Sizes.checksums[2] = (1487385108U);
  q_heli3d_semestral_project_M->Sizes.checksums[3] = (2751930921U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[3];
    q_heli3d_semestral_project_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(q_heli3d_semestral_project_M->extModeInfo,
      &q_heli3d_semestral_project_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(q_heli3d_semestral_project_M->extModeInfo,
                        q_heli3d_semestral_project_M->Sizes.checksums);
    rteiSetTPtr(q_heli3d_semestral_project_M->extModeInfo, rtmGetTPtr
                (q_heli3d_semestral_project_M));
  }

  q_heli3d_semestral_project_M->solverInfoPtr =
    (&q_heli3d_semestral_project_M->solverInfo);
  q_heli3d_semestral_project_M->Timing.stepSize = (0.002);
  rtsiSetFixedStepSize(&q_heli3d_semestral_project_M->solverInfo, 0.002);
  rtsiSetSolverMode(&q_heli3d_semestral_project_M->solverInfo,
                    SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  q_heli3d_semestral_project_M->blockIO = ((void *)
    &q_heli3d_semestral_project_B);

  {
    q_heli3d_semestral_project_B.Add6 = 0.0;
    q_heli3d_semestral_project_B.Sum1 = 0.0;
    q_heli3d_semestral_project_B.Add7 = 0.0;
    q_heli3d_semestral_project_B.Sum2 = 0.0;
    q_heli3d_semestral_project_B.DACBLimitV[0] = 0.0;
    q_heli3d_semestral_project_B.DACBLimitV[1] = 0.0;
    q_heli3d_semestral_project_B.AmplifierGain[0] = 0.0;
    q_heli3d_semestral_project_B.AmplifierGain[1] = 0.0;
    q_heli3d_semestral_project_B.TmpSignalConversionAtToWorkspac[0] = 0.0;
    q_heli3d_semestral_project_B.TmpSignalConversionAtToWorkspac[1] = 0.0;
    q_heli3d_semestral_project_B.EncoderResolutionElevationradco = 0.0;
    q_heli3d_semestral_project_B.EncoderResolutionPitchradcount = 0.0;
    q_heli3d_semestral_project_B.EncoderResolutionTravelradcount = 0.0;
    q_heli3d_semestral_project_B.Sum = 0.0;
    q_heli3d_semestral_project_B.Integrator3 = 0.0;
    q_heli3d_semestral_project_B.Sum1_e = 0.0;
    q_heli3d_semestral_project_B.Integrator5 = 0.0;
    q_heli3d_semestral_project_B.Integrator1 = 0.0;
    q_heli3d_semestral_project_B.Add = 0.0;
    q_heli3d_semestral_project_B.Add1 = 0.0;
    q_heli3d_semestral_project_B.TmpSignalConversionAtToWorksp_o[0] = 0.0;
    q_heli3d_semestral_project_B.TmpSignalConversionAtToWorksp_o[1] = 0.0;
    q_heli3d_semestral_project_B.TmpSignalConversionAtToWorksp_m[0] = 0.0;
    q_heli3d_semestral_project_B.TmpSignalConversionAtToWorksp_m[1] = 0.0;
    q_heli3d_semestral_project_B.TmpSignalConversionAtToWorksp_m[2] = 0.0;
    q_heli3d_semestral_project_B.Integrator = 0.0;
    q_heli3d_semestral_project_B.Add_g = 0.0;
    q_heli3d_semestral_project_B.Integrator2 = 0.0;
    q_heli3d_semestral_project_B.Add1_f = 0.0;
    q_heli3d_semestral_project_B.Integrator4 = 0.0;
    q_heli3d_semestral_project_B.Add2 = 0.0;
    q_heli3d_semestral_project_B.sf_MATLABFunction1.v = 0.0;
    q_heli3d_semestral_project_B.sf_MATLABFunction.v = 0.0;
  }

  /* parameters */
  q_heli3d_semestral_project_M->defaultParam = ((real_T *)
    &q_heli3d_semestral_project_P);

  /* states (continuous) */
  {
    real_T *x = (real_T *) &q_heli3d_semestral_project_X;
    q_heli3d_semestral_project_M->contStates = (x);
    (void) memset((void *)&q_heli3d_semestral_project_X, 0,
                  sizeof(X_q_heli3d_semestral_project_T));
  }

  /* states (dwork) */
  q_heli3d_semestral_project_M->dwork = ((void *) &q_heli3d_semestral_project_DW);
  (void) memset((void *)&q_heli3d_semestral_project_DW, 0,
                sizeof(DW_q_heli3d_semestral_project_T));

  {
    int32_T i;
    for (i = 0; i < 8; i++) {
      q_heli3d_semestral_project_DW.HILInitialize_AIMinimums[i] = 0.0;
    }
  }

  {
    int32_T i;
    for (i = 0; i < 8; i++) {
      q_heli3d_semestral_project_DW.HILInitialize_AIMaximums[i] = 0.0;
    }
  }

  {
    int32_T i;
    for (i = 0; i < 8; i++) {
      q_heli3d_semestral_project_DW.HILInitialize_AOMinimums[i] = 0.0;
    }
  }

  {
    int32_T i;
    for (i = 0; i < 8; i++) {
      q_heli3d_semestral_project_DW.HILInitialize_AOMaximums[i] = 0.0;
    }
  }

  {
    int32_T i;
    for (i = 0; i < 8; i++) {
      q_heli3d_semestral_project_DW.HILInitialize_AOVoltages[i] = 0.0;
    }
  }

  {
    int32_T i;
    for (i = 0; i < 8; i++) {
      q_heli3d_semestral_project_DW.HILInitialize_FilterFrequency[i] = 0.0;
    }
  }

  {
    int32_T i;
    for (i = 0; i < 8; i++) {
      q_heli3d_semestral_project_DW.HILInitialize_POSortedFreqs[i] = 0.0;
    }
  }

  {
    int32_T i;
    for (i = 0; i < 8; i++) {
      q_heli3d_semestral_project_DW.HILInitialize_POValues[i] = 0.0;
    }
  }

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    q_heli3d_semestral_project_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 18;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Initialize Sizes */
  q_heli3d_semestral_project_M->Sizes.numContStates = (12);/* Number of continuous states */
  q_heli3d_semestral_project_M->Sizes.numPeriodicContStates = (0);/* Number of periodic continuous states */
  q_heli3d_semestral_project_M->Sizes.numY = (0);/* Number of model outputs */
  q_heli3d_semestral_project_M->Sizes.numU = (0);/* Number of model inputs */
  q_heli3d_semestral_project_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  q_heli3d_semestral_project_M->Sizes.numSampTimes = (2);/* Number of sample times */
  q_heli3d_semestral_project_M->Sizes.numBlocks = (80);/* Number of blocks */
  q_heli3d_semestral_project_M->Sizes.numBlockIO = (27);/* Number of block outputs */
  q_heli3d_semestral_project_M->Sizes.numBlockPrms = (166);/* Sum of parameter "widths" */
  return q_heli3d_semestral_project_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
