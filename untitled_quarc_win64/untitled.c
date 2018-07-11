/*
 * untitled.c
 *
 * Classroom License -- for classroom instructional use only.  Not for
 * government, commercial, academic research, or other organizational use.
 *
 * Code generation for model "untitled".
 *
 * Model version              : 1.0
 * Simulink Coder version : 8.12 (R2017a) 16-Feb-2017
 * C source code generated on : Mon Jun 18 19:23:36 2018
 *
 * Target selection: quarc_win64.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "untitled.h"
#include "untitled_private.h"
#include "untitled_dt.h"

/* Block signals (auto storage) */
B_untitled_T untitled_B;

/* Block states (auto storage) */
DW_untitled_T untitled_DW;

/* Real-time model */
RT_MODEL_untitled_T untitled_M_;
RT_MODEL_untitled_T *const untitled_M = &untitled_M_;

/* Model output function */
void untitled_output(void)
{
  real_T rtb_Step;
  real_T rtb_Step1;
  real_T rtb_Step2;
  real_T rtb_Step3;
  real_T rtb_Step4;

  /* Step: '<Root>/Step' */
  if (untitled_M->Timing.t[0] < untitled_P.Step_Time) {
    rtb_Step = untitled_P.Step_Y0;
  } else {
    rtb_Step = untitled_P.Step_YFinal;
  }

  /* End of Step: '<Root>/Step' */

  /* Step: '<Root>/Step1' */
  if (untitled_M->Timing.t[0] < untitled_P.Step1_Time) {
    rtb_Step1 = untitled_P.Step1_Y0;
  } else {
    rtb_Step1 = untitled_P.Step1_YFinal;
  }

  /* End of Step: '<Root>/Step1' */

  /* Step: '<Root>/Step2' */
  if (untitled_M->Timing.t[0] < untitled_P.Step2_Time) {
    rtb_Step2 = untitled_P.Step2_Y0;
  } else {
    rtb_Step2 = untitled_P.Step2_YFinal;
  }

  /* End of Step: '<Root>/Step2' */

  /* Step: '<Root>/Step3' */
  if (untitled_M->Timing.t[0] < untitled_P.Step3_Time) {
    rtb_Step3 = untitled_P.Step3_Y0;
  } else {
    rtb_Step3 = untitled_P.Step3_YFinal;
  }

  /* End of Step: '<Root>/Step3' */

  /* Step: '<Root>/Step4' */
  if (untitled_M->Timing.t[0] < untitled_P.Step4_Time) {
    rtb_Step4 = untitled_P.Step4_Y0;
  } else {
    rtb_Step4 = untitled_P.Step4_YFinal;
  }

  /* End of Step: '<Root>/Step4' */

  /* Sum: '<Root>/Add6' incorporates:
   *  Sum: '<Root>/Add'
   *  Sum: '<Root>/Add2'
   *  Sum: '<Root>/Add4'
   */
  untitled_B.Add6 = (((rtb_Step + rtb_Step1) - rtb_Step2) - rtb_Step3) +
    rtb_Step4;

  /* Sum: '<Root>/Add7' incorporates:
   *  Sum: '<Root>/Add1'
   *  Sum: '<Root>/Add3'
   *  Sum: '<Root>/Add5'
   */
  untitled_B.Add7 = (((rtb_Step - rtb_Step1) + rtb_Step2) + rtb_Step3) -
    rtb_Step4;

  /* Sum: '<Root>/Add8' */
  untitled_B.Add8 = untitled_B.Add6 + untitled_B.Add7;

  /* Sum: '<Root>/Add9' */
  untitled_B.Add9 = untitled_B.Add6 - untitled_B.Add7;
}

/* Model update function */
void untitled_update(void)
{
  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++untitled_M->Timing.clockTick0)) {
    ++untitled_M->Timing.clockTickH0;
  }

  untitled_M->Timing.t[0] = untitled_M->Timing.clockTick0 *
    untitled_M->Timing.stepSize0 + untitled_M->Timing.clockTickH0 *
    untitled_M->Timing.stepSize0 * 4294967296.0;

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
    if (!(++untitled_M->Timing.clockTick1)) {
      ++untitled_M->Timing.clockTickH1;
    }

    untitled_M->Timing.t[1] = untitled_M->Timing.clockTick1 *
      untitled_M->Timing.stepSize1 + untitled_M->Timing.clockTickH1 *
      untitled_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Model initialize function */
void untitled_initialize(void)
{
}

/* Model terminate function */
void untitled_terminate(void)
{
  /* (no terminate code required) */
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  untitled_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  untitled_update();
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
  untitled_initialize();
}

void MdlTerminate(void)
{
  untitled_terminate();
}

/* Registration function */
RT_MODEL_untitled_T *untitled(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)untitled_M, 0,
                sizeof(RT_MODEL_untitled_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&untitled_M->solverInfo,
                          &untitled_M->Timing.simTimeStep);
    rtsiSetTPtr(&untitled_M->solverInfo, &rtmGetTPtr(untitled_M));
    rtsiSetStepSizePtr(&untitled_M->solverInfo, &untitled_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&untitled_M->solverInfo, (&rtmGetErrorStatus
      (untitled_M)));
    rtsiSetRTModelPtr(&untitled_M->solverInfo, untitled_M);
  }

  rtsiSetSimTimeStep(&untitled_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&untitled_M->solverInfo,"FixedStepDiscrete");

  /* Initialize timing info */
  {
    int_T *mdlTsMap = untitled_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    untitled_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    untitled_M->Timing.sampleTimes = (&untitled_M->Timing.sampleTimesArray[0]);
    untitled_M->Timing.offsetTimes = (&untitled_M->Timing.offsetTimesArray[0]);

    /* task periods */
    untitled_M->Timing.sampleTimes[0] = (0.0);
    untitled_M->Timing.sampleTimes[1] = (0.002);

    /* task offsets */
    untitled_M->Timing.offsetTimes[0] = (0.0);
    untitled_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(untitled_M, &untitled_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = untitled_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    untitled_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(untitled_M, 30.0);
  untitled_M->Timing.stepSize0 = 0.002;
  untitled_M->Timing.stepSize1 = 0.002;

  /* External mode info */
  untitled_M->Sizes.checksums[0] = (1865406622U);
  untitled_M->Sizes.checksums[1] = (4012936568U);
  untitled_M->Sizes.checksums[2] = (1402743144U);
  untitled_M->Sizes.checksums[3] = (3678058795U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[1];
    untitled_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(untitled_M->extModeInfo,
      &untitled_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(untitled_M->extModeInfo, untitled_M->Sizes.checksums);
    rteiSetTPtr(untitled_M->extModeInfo, rtmGetTPtr(untitled_M));
  }

  untitled_M->solverInfoPtr = (&untitled_M->solverInfo);
  untitled_M->Timing.stepSize = (0.002);
  rtsiSetFixedStepSize(&untitled_M->solverInfo, 0.002);
  rtsiSetSolverMode(&untitled_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  untitled_M->blockIO = ((void *) &untitled_B);
  (void) memset(((void *) &untitled_B), 0,
                sizeof(B_untitled_T));

  /* parameters */
  untitled_M->defaultParam = ((real_T *)&untitled_P);

  /* states (dwork) */
  untitled_M->dwork = ((void *) &untitled_DW);
  (void) memset((void *)&untitled_DW, 0,
                sizeof(DW_untitled_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    untitled_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 14;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Initialize Sizes */
  untitled_M->Sizes.numContStates = (0);/* Number of continuous states */
  untitled_M->Sizes.numY = (0);        /* Number of model outputs */
  untitled_M->Sizes.numU = (0);        /* Number of model inputs */
  untitled_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  untitled_M->Sizes.numSampTimes = (2);/* Number of sample times */
  untitled_M->Sizes.numBlocks = (17);  /* Number of blocks */
  untitled_M->Sizes.numBlockIO = (4);  /* Number of block outputs */
  untitled_M->Sizes.numBlockPrms = (15);/* Sum of parameter "widths" */
  return untitled_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
