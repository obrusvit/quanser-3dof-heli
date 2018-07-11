/*
 * q_heli3d_semestral_project_data.c
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

/* Block parameters (auto storage) */
P_q_heli3d_semestral_project_T q_heli3d_semestral_project_P = {
  {
    { 0.25, -0.05 },

    { 0.005, -0.004723, 0.1436, 0.03846, -0.8117, 0.08259 }
  },                                   /* Variable: par_inputs
                                        * Referenced by:
                                        *   '<Root>/MATLAB Function'
                                        *   '<Root>/MATLAB Function1'
                                        */
  3.0,                                 /* Variable: K_AMP
                                        * Referenced by:
                                        *   '<S1>/Amplifier Gain'
                                        *   '<S1>/Amplifier Gain Pre-Compensation'
                                        */
  -0.0015339807878856412,              /* Variable: K_EC_E
                                        * Referenced by: '<S1>/Encoder Resolution: Elevation (rad//count)'
                                        */
  0.0015339807878856412,               /* Variable: K_EC_P
                                        * Referenced by: '<S1>/Encoder Resolution: Pitch (rad//count)'
                                        */
  0.00076699039394282058,              /* Variable: K_EC_T
                                        * Referenced by: '<S1>/Encoder Resolution: Travel (rad//count)'
                                        */
  24.0,                                /* Variable: VMAX_AMP
                                        * Referenced by: '<S1>/Amplifier Voltage  Limit (V)'
                                        */
  10.0,                                /* Variable: VMAX_DAC
                                        * Referenced by: '<S1>/DACB Limit (V)'
                                        */
  1.36231449821743,                    /* Variable: ae1
                                        * Referenced by: '<S2>/Gain2'
                                        */
  -0.378717172068544,                  /* Variable: ae2
                                        * Referenced by: '<S2>/Gain4'
                                        */
  -0.46380452999304245,                /* Variable: at
                                        * Referenced by: '<S2>/Gain6'
                                        */
  0.11631183729532008,                 /* Variable: be
                                        * Referenced by: '<S2>/Gain5'
                                        */
  0.10316086363676404,                 /* Variable: bl
                                        * Referenced by: '<S2>/Gain1'
                                        */
  0.9621190489744299,                  /* Variable: bt
                                        * Referenced by: '<S2>/Gain8'
                                        */
  0.044697000020040227,                /* Variable: ce
                                        * Referenced by: '<S2>/Gain3'
                                        */
  0.20245774738543978,                 /* Variable: cl
                                        * Referenced by: '<S2>/Gain'
                                        */
  0.0076276348244869183,               /* Variable: ct
                                        * Referenced by: '<S2>/Gain7'
                                        */

  /*  Variable: x0
   * Referenced by:
   *   '<S2>/Integrator'
   *   '<S2>/Integrator1'
   *   '<S2>/Integrator2'
   *   '<S2>/Integrator4'
   *   '<S2>/Integrator5'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },
  0,                                   /* Mask Parameter: HILReadEncoderTimebase_clock
                                        * Referenced by: '<S1>/HIL Read Encoder Timebase'
                                        */

  /*  Mask Parameter: HILReadEncoderTimebase_channels
   * Referenced by: '<S1>/HIL Read Encoder Timebase'
   */
  { 0U, 1U, 2U },

  /*  Mask Parameter: HILWriteAnalog_channels
   * Referenced by: '<S1>/HIL Write Analog'
   */
  { 0U, 1U },

  /*  Mask Parameter: HILWriteDigital_channels
   * Referenced by: '<S1>/HIL Write Digital'
   */
  { 0U, 1U, 2U, 3U },
  500U,                                /* Mask Parameter: HILReadEncoderTimebase_samples_
                                        * Referenced by: '<S1>/HIL Read Encoder Timebase'
                                        */
  0.0,                                 /* Expression: set_other_outputs_at_terminate
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0.0,                                 /* Expression: set_other_outputs_at_switch_out
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0.0,                                 /* Expression: set_other_outputs_at_start
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0.0,                                 /* Expression: set_other_outputs_at_switch_in
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0.0,                                 /* Expression: final_analog_outputs
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0.0,                                 /* Expression: final_pwm_outputs
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  10.0,                                /* Expression: analog_input_maximums
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  -10.0,                               /* Expression: analog_input_minimums
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  10.0,                                /* Expression: analog_output_maximums
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  -10.0,                               /* Expression: analog_output_minimums
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0.0,                                 /* Expression: initial_analog_outputs
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0.0,                                 /* Expression: watchdog_analog_outputs
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  24305.934065934067,                  /* Expression: pwm_frequency
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0.0,                                 /* Expression: pwm_leading_deadband
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0.0,                                 /* Expression: pwm_trailing_deadband
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0.0,                                 /* Expression: initial_pwm_outputs
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0.0,                                 /* Expression: watchdog_pwm_outputs
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  5.0,                                 /* Expression: 5
                                        * Referenced by: '<S7>/Step'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/Step'
                                        */
  0.6,                                 /* Expression: 0.6
                                        * Referenced by: '<S7>/Step'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S7>/Step1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/Step1'
                                        */
  0.2,                                 /* Expression: 0.2
                                        * Referenced by: '<S7>/Step1'
                                        */
  11.0,                                /* Expression: 11
                                        * Referenced by: '<S7>/Step2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/Step2'
                                        */
  0.2,                                 /* Expression: 0.2
                                        * Referenced by: '<S7>/Step2'
                                        */
  11.0,                                /* Expression: 11
                                        * Referenced by: '<S7>/Step3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/Step3'
                                        */
  0.4,                                 /* Expression: 0.4
                                        * Referenced by: '<S7>/Step3'
                                        */
  14.2,                                /* Expression: 14.2
                                        * Referenced by: '<S7>/Step4'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/Step4'
                                        */
  0.4,                                 /* Expression: 0.4
                                        * Referenced by: '<S7>/Step4'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<Root>/Gain'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<Root>/Gain1'
                                        */

  /*  Computed Parameter: DerivativeFilterElevation_A
   * Referenced by: '<S1>/Derivative Filter: Elevation'
   */
  { -226.1946710584651, -15791.367041742973 },

  /*  Computed Parameter: DerivativeFilterElevation_C
   * Referenced by: '<S1>/Derivative Filter: Elevation'
   */
  { 15791.367041742973, 0.0 },

  /*  Computed Parameter: DerivativeFilterPitch_A
   * Referenced by: '<S1>/Derivative Filter: Pitch'
   */
  { -226.1946710584651, -15791.367041742973 },

  /*  Computed Parameter: DerivativeFilterPitch_C
   * Referenced by: '<S1>/Derivative Filter: Pitch'
   */
  { 15791.367041742973, 0.0 },

  /*  Computed Parameter: DerivativeFilterTravel_A
   * Referenced by: '<S1>/Derivative Filter: Travel'
   */
  { -226.1946710584651, -15791.367041742973 },

  /*  Computed Parameter: DerivativeFilterTravel_C
   * Referenced by: '<S1>/Derivative Filter: Travel'
   */
  { 15791.367041742973, 0.0 },

  /*  Expression: [1 1 1 1]
   * Referenced by: '<S1>/Enable Amp'
   */
  { 1.0, 1.0, 1.0, 1.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/Integrator3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S5>/Constant'
                                        */

  /*  Computed Parameter: HILInitialize_CKChannels
   * Referenced by: '<S1>/HIL Initialize'
   */
  { 0, 1, 2 },
  1,                                   /* Computed Parameter: HILInitialize_DOWatchdog
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_EIInitial
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_POModes
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_POConfiguration
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_POAlignment
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_POPolarity
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */

  /*  Computed Parameter: HILInitialize_AIChannels
   * Referenced by: '<S1>/HIL Initialize'
   */
  { 0U, 1U, 2U, 3U, 4U, 5U, 6U, 7U },

  /*  Computed Parameter: HILInitialize_AOChannels
   * Referenced by: '<S1>/HIL Initialize'
   */
  { 0U, 1U, 2U, 3U, 4U, 5U, 6U, 7U },

  /*  Computed Parameter: HILInitialize_EIChannels
   * Referenced by: '<S1>/HIL Initialize'
   */
  { 0U, 1U, 2U, 3U, 4U, 5U, 6U, 7U },
  4U,                                  /* Computed Parameter: HILInitialize_EIQuadrature
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */

  /*  Computed Parameter: HILInitialize_POChannels
   * Referenced by: '<S1>/HIL Initialize'
   */
  { 0U, 1U, 2U, 3U, 4U, 5U, 6U, 7U },
  1,                                   /* Computed Parameter: HILInitialize_Active
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_AOTerminate
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_AOExit
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_DOTerminate
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_DOExit
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_POTerminate
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_POExit
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_CKPStart
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_CKPEnter
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_CKStart
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_CKEnter
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_AIPStart
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_AIPEnter
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_AOPStart
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_AOPEnter
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_AOStart
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_AOEnter
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_AOReset
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_DOPStart
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_DOPEnter
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_DOStart
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_DOEnter
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_DOReset
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_EIPStart
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_EIPEnter
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_EIStart
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_EIEnter
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_POPStart
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_POPEnter
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_POStart
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_POEnter
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_POReset
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_OOReset
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_DOFinal
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_DOInitial
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILReadEncoderTimebase_Active
                                        * Referenced by: '<S1>/HIL Read Encoder Timebase'
                                        */
  0,                                   /* Computed Parameter: HILWriteAnalog_Active
                                        * Referenced by: '<S1>/HIL Write Analog'
                                        */
  0                                    /* Computed Parameter: HILWriteDigital_Active
                                        * Referenced by: '<S1>/HIL Write Digital'
                                        */
};
