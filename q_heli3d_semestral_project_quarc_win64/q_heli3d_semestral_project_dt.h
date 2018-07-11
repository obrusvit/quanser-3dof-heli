/*
 * q_heli3d_semestral_project_dt.h
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

#include "ext_types.h"

/* data type size table */
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(pointer_T),
  sizeof(action_T),
  2*sizeof(uint32_T),
  sizeof(struct_5Ot7FXSF1AFZsf6MrozkWE),
  sizeof(t_card),
  sizeof(t_task),
  sizeof(t_boolean)
};

/* data type name table */
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T",
  "struct_5Ot7FXSF1AFZsf6MrozkWE",
  "t_card",
  "t_task",
  "t_boolean"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&q_heli3d_semestral_project_B.Add6), 0, 0, 31 },

  { (char_T *)(&q_heli3d_semestral_project_B.sf_MATLABFunction1.v), 0, 0, 1 },

  { (char_T *)(&q_heli3d_semestral_project_B.sf_MATLABFunction.v), 0, 0, 1 }
  ,

  { (char_T *)(&q_heli3d_semestral_project_DW.HILInitialize_AIMinimums[0]), 0, 0,
    64 },

  { (char_T *)(&q_heli3d_semestral_project_DW.HILInitialize_Card), 15, 0, 1 },

  { (char_T *)(&q_heli3d_semestral_project_DW.HILReadEncoderTimebase_Task), 16,
    0, 1 },

  { (char_T *)(&q_heli3d_semestral_project_DW.HILWriteAnalog_PWORK), 11, 0, 13 },

  { (char_T *)(&q_heli3d_semestral_project_DW.HILInitialize_ClockModes[0]), 6, 0,
    46 },

  { (char_T *)(&q_heli3d_semestral_project_DW.HILInitialize_POSortedChans[0]), 7,
    0, 8 },

  { (char_T *)(&q_heli3d_semestral_project_DW.HILWriteDigital_Buffer[0]), 17, 0,
    4 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  10U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&q_heli3d_semestral_project_P.par_inputs), 14, 0, 1 },

  { (char_T *)(&q_heli3d_semestral_project_P.K_AMP), 0, 0, 21 },

  { (char_T *)(&q_heli3d_semestral_project_P.HILReadEncoderTimebase_clock), 6, 0,
    1 },

  { (char_T *)(&q_heli3d_semestral_project_P.HILReadEncoderTimebase_channels[0]),
    7, 0, 10 },

  { (char_T *)(&q_heli3d_semestral_project_P.HILInitialize_OOTerminate), 0, 0,
    53 },

  { (char_T *)(&q_heli3d_semestral_project_P.HILInitialize_CKChannels[0]), 6, 0,
    9 },

  { (char_T *)(&q_heli3d_semestral_project_P.HILInitialize_AIChannels[0]), 7, 0,
    33 },

  { (char_T *)(&q_heli3d_semestral_project_P.HILInitialize_Active), 8, 0, 38 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  8U,
  rtPTransitions
};

/* [EOF] q_heli3d_semestral_project_dt.h */
