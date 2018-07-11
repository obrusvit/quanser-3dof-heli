/*
 * q_heli3d_semestral_project.h
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

#ifndef RTW_HEADER_q_heli3d_semestral_project_h_
#define RTW_HEADER_q_heli3d_semestral_project_h_
#include <math.h>
#include <string.h>
#ifndef q_heli3d_semestral_project_COMMON_INCLUDES_
# define q_heli3d_semestral_project_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "dt_info.h"
#include "ext_work.h"
#include "hil.h"
#include "quanser_messages.h"
#include "quanser_extern.h"
#endif                                 /* q_heli3d_semestral_project_COMMON_INCLUDES_ */

#include "q_heli3d_semestral_project_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_defines.h"
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlkStateChangeFlag
# define rtmGetBlkStateChangeFlag(rtm) ((rtm)->blkStateChange)
#endif

#ifndef rtmSetBlkStateChangeFlag
# define rtmSetBlkStateChangeFlag(rtm, val) ((rtm)->blkStateChange = (val))
#endif

#ifndef rtmGetBlockIO
# define rtmGetBlockIO(rtm)            ((rtm)->blockIO)
#endif

#ifndef rtmSetBlockIO
# define rtmSetBlockIO(rtm, val)       ((rtm)->blockIO = (val))
#endif

#ifndef rtmGetChecksums
# define rtmGetChecksums(rtm)          ((rtm)->Sizes.checksums)
#endif

#ifndef rtmSetChecksums
# define rtmSetChecksums(rtm, val)     ((rtm)->Sizes.checksums = (val))
#endif

#ifndef rtmGetConstBlockIO
# define rtmGetConstBlockIO(rtm)       ((rtm)->constBlockIO)
#endif

#ifndef rtmSetConstBlockIO
# define rtmSetConstBlockIO(rtm, val)  ((rtm)->constBlockIO = (val))
#endif

#ifndef rtmGetContStateDisabled
# define rtmGetContStateDisabled(rtm)  ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
# define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
# define rtmGetContStates(rtm)         ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
# define rtmSetContStates(rtm, val)    ((rtm)->contStates = (val))
#endif

#ifndef rtmGetDataMapInfo
# define rtmGetDataMapInfo(rtm)        ()
#endif

#ifndef rtmSetDataMapInfo
# define rtmSetDataMapInfo(rtm, val)   ()
#endif

#ifndef rtmGetDefaultParam
# define rtmGetDefaultParam(rtm)       ((rtm)->defaultParam)
#endif

#ifndef rtmSetDefaultParam
# define rtmSetDefaultParam(rtm, val)  ((rtm)->defaultParam = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetDirectFeedThrough
# define rtmGetDirectFeedThrough(rtm)  ((rtm)->Sizes.sysDirFeedThru)
#endif

#ifndef rtmSetDirectFeedThrough
# define rtmSetDirectFeedThrough(rtm, val) ((rtm)->Sizes.sysDirFeedThru = (val))
#endif

#ifndef rtmGetErrorStatusFlag
# define rtmGetErrorStatusFlag(rtm)    ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatusFlag
# define rtmSetErrorStatusFlag(rtm, val) ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetFinalTime
# define rtmSetFinalTime(rtm, val)     ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetFirstInitCondFlag
# define rtmGetFirstInitCondFlag(rtm)  ()
#endif

#ifndef rtmSetFirstInitCondFlag
# define rtmSetFirstInitCondFlag(rtm, val) ()
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ((rtm)->intgData)
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ((rtm)->intgData = (val))
#endif

#ifndef rtmGetMdlRefGlobalTID
# define rtmGetMdlRefGlobalTID(rtm)    ()
#endif

#ifndef rtmSetMdlRefGlobalTID
# define rtmSetMdlRefGlobalTID(rtm, val) ()
#endif

#ifndef rtmGetMdlRefTriggerTID
# define rtmGetMdlRefTriggerTID(rtm)   ()
#endif

#ifndef rtmSetMdlRefTriggerTID
# define rtmSetMdlRefTriggerTID(rtm, val) ()
#endif

#ifndef rtmGetModelMappingInfo
# define rtmGetModelMappingInfo(rtm)   ((rtm)->SpecialInfo.mappingInfo)
#endif

#ifndef rtmSetModelMappingInfo
# define rtmSetModelMappingInfo(rtm, val) ((rtm)->SpecialInfo.mappingInfo = (val))
#endif

#ifndef rtmGetModelName
# define rtmGetModelName(rtm)          ((rtm)->modelName)
#endif

#ifndef rtmSetModelName
# define rtmSetModelName(rtm, val)     ((rtm)->modelName = (val))
#endif

#ifndef rtmGetNonInlinedSFcns
# define rtmGetNonInlinedSFcns(rtm)    ()
#endif

#ifndef rtmSetNonInlinedSFcns
# define rtmSetNonInlinedSFcns(rtm, val) ()
#endif

#ifndef rtmGetNumBlockIO
# define rtmGetNumBlockIO(rtm)         ((rtm)->Sizes.numBlockIO)
#endif

#ifndef rtmSetNumBlockIO
# define rtmSetNumBlockIO(rtm, val)    ((rtm)->Sizes.numBlockIO = (val))
#endif

#ifndef rtmGetNumBlockParams
# define rtmGetNumBlockParams(rtm)     ((rtm)->Sizes.numBlockPrms)
#endif

#ifndef rtmSetNumBlockParams
# define rtmSetNumBlockParams(rtm, val) ((rtm)->Sizes.numBlockPrms = (val))
#endif

#ifndef rtmGetNumBlocks
# define rtmGetNumBlocks(rtm)          ((rtm)->Sizes.numBlocks)
#endif

#ifndef rtmSetNumBlocks
# define rtmSetNumBlocks(rtm, val)     ((rtm)->Sizes.numBlocks = (val))
#endif

#ifndef rtmGetNumContStates
# define rtmGetNumContStates(rtm)      ((rtm)->Sizes.numContStates)
#endif

#ifndef rtmSetNumContStates
# define rtmSetNumContStates(rtm, val) ((rtm)->Sizes.numContStates = (val))
#endif

#ifndef rtmGetNumDWork
# define rtmGetNumDWork(rtm)           ((rtm)->Sizes.numDwork)
#endif

#ifndef rtmSetNumDWork
# define rtmSetNumDWork(rtm, val)      ((rtm)->Sizes.numDwork = (val))
#endif

#ifndef rtmGetNumInputPorts
# define rtmGetNumInputPorts(rtm)      ((rtm)->Sizes.numIports)
#endif

#ifndef rtmSetNumInputPorts
# define rtmSetNumInputPorts(rtm, val) ((rtm)->Sizes.numIports = (val))
#endif

#ifndef rtmGetNumNonSampledZCs
# define rtmGetNumNonSampledZCs(rtm)   ((rtm)->Sizes.numNonSampZCs)
#endif

#ifndef rtmSetNumNonSampledZCs
# define rtmSetNumNonSampledZCs(rtm, val) ((rtm)->Sizes.numNonSampZCs = (val))
#endif

#ifndef rtmGetNumOutputPorts
# define rtmGetNumOutputPorts(rtm)     ((rtm)->Sizes.numOports)
#endif

#ifndef rtmSetNumOutputPorts
# define rtmSetNumOutputPorts(rtm, val) ((rtm)->Sizes.numOports = (val))
#endif

#ifndef rtmGetNumPeriodicContStates
# define rtmGetNumPeriodicContStates(rtm) ((rtm)->Sizes.numPeriodicContStates)
#endif

#ifndef rtmSetNumPeriodicContStates
# define rtmSetNumPeriodicContStates(rtm, val) ((rtm)->Sizes.numPeriodicContStates = (val))
#endif

#ifndef rtmGetNumSFcnParams
# define rtmGetNumSFcnParams(rtm)      ((rtm)->Sizes.numSFcnPrms)
#endif

#ifndef rtmSetNumSFcnParams
# define rtmSetNumSFcnParams(rtm, val) ((rtm)->Sizes.numSFcnPrms = (val))
#endif

#ifndef rtmGetNumSFunctions
# define rtmGetNumSFunctions(rtm)      ((rtm)->Sizes.numSFcns)
#endif

#ifndef rtmSetNumSFunctions
# define rtmSetNumSFunctions(rtm, val) ((rtm)->Sizes.numSFcns = (val))
#endif

#ifndef rtmGetNumSampleTimes
# define rtmGetNumSampleTimes(rtm)     ((rtm)->Sizes.numSampTimes)
#endif

#ifndef rtmSetNumSampleTimes
# define rtmSetNumSampleTimes(rtm, val) ((rtm)->Sizes.numSampTimes = (val))
#endif

#ifndef rtmGetNumU
# define rtmGetNumU(rtm)               ((rtm)->Sizes.numU)
#endif

#ifndef rtmSetNumU
# define rtmSetNumU(rtm, val)          ((rtm)->Sizes.numU = (val))
#endif

#ifndef rtmGetNumY
# define rtmGetNumY(rtm)               ((rtm)->Sizes.numY)
#endif

#ifndef rtmSetNumY
# define rtmSetNumY(rtm, val)          ((rtm)->Sizes.numY = (val))
#endif

#ifndef rtmGetOdeF
# define rtmGetOdeF(rtm)               ((rtm)->odeF)
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ((rtm)->odeF = (val))
#endif

#ifndef rtmGetOdeY
# define rtmGetOdeY(rtm)               ()
#endif

#ifndef rtmSetOdeY
# define rtmSetOdeY(rtm, val)          ()
#endif

#ifndef rtmGetOffsetTimeArray
# define rtmGetOffsetTimeArray(rtm)    ((rtm)->Timing.offsetTimesArray)
#endif

#ifndef rtmSetOffsetTimeArray
# define rtmSetOffsetTimeArray(rtm, val) ((rtm)->Timing.offsetTimesArray = (val))
#endif

#ifndef rtmGetOffsetTimePtr
# define rtmGetOffsetTimePtr(rtm)      ((rtm)->Timing.offsetTimes)
#endif

#ifndef rtmSetOffsetTimePtr
# define rtmSetOffsetTimePtr(rtm, val) ((rtm)->Timing.offsetTimes = (val))
#endif

#ifndef rtmGetOptions
# define rtmGetOptions(rtm)            ((rtm)->Sizes.options)
#endif

#ifndef rtmSetOptions
# define rtmSetOptions(rtm, val)       ((rtm)->Sizes.options = (val))
#endif

#ifndef rtmGetParamIsMalloced
# define rtmGetParamIsMalloced(rtm)    ()
#endif

#ifndef rtmSetParamIsMalloced
# define rtmSetParamIsMalloced(rtm, val) ()
#endif

#ifndef rtmGetPath
# define rtmGetPath(rtm)               ((rtm)->path)
#endif

#ifndef rtmSetPath
# define rtmSetPath(rtm, val)          ((rtm)->path = (val))
#endif

#ifndef rtmGetPerTaskSampleHits
# define rtmGetPerTaskSampleHits(rtm)  ()
#endif

#ifndef rtmSetPerTaskSampleHits
# define rtmSetPerTaskSampleHits(rtm, val) ()
#endif

#ifndef rtmGetPerTaskSampleHitsArray
# define rtmGetPerTaskSampleHitsArray(rtm) ((rtm)->Timing.perTaskSampleHitsArray)
#endif

#ifndef rtmSetPerTaskSampleHitsArray
# define rtmSetPerTaskSampleHitsArray(rtm, val) ((rtm)->Timing.perTaskSampleHitsArray = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsPtr
# define rtmGetPerTaskSampleHitsPtr(rtm) ((rtm)->Timing.perTaskSampleHits)
#endif

#ifndef rtmSetPerTaskSampleHitsPtr
# define rtmSetPerTaskSampleHitsPtr(rtm, val) ((rtm)->Timing.perTaskSampleHits = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
# define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
# define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
# define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
# define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetPrevZCSigState
# define rtmGetPrevZCSigState(rtm)     ((rtm)->prevZCSigState)
#endif

#ifndef rtmSetPrevZCSigState
# define rtmSetPrevZCSigState(rtm, val) ((rtm)->prevZCSigState = (val))
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
#endif

#ifndef rtmSetRTWExtModeInfo
# define rtmSetRTWExtModeInfo(rtm, val) ((rtm)->extModeInfo = (val))
#endif

#ifndef rtmGetRTWGeneratedSFcn
# define rtmGetRTWGeneratedSFcn(rtm)   ((rtm)->Sizes.rtwGenSfcn)
#endif

#ifndef rtmSetRTWGeneratedSFcn
# define rtmSetRTWGeneratedSFcn(rtm, val) ((rtm)->Sizes.rtwGenSfcn = (val))
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ()
#endif

#ifndef rtmSetRTWLogInfo
# define rtmSetRTWLogInfo(rtm, val)    ()
#endif

#ifndef rtmGetRTWRTModelMethodsInfo
# define rtmGetRTWRTModelMethodsInfo(rtm) ()
#endif

#ifndef rtmSetRTWRTModelMethodsInfo
# define rtmSetRTWRTModelMethodsInfo(rtm, val) ()
#endif

#ifndef rtmGetRTWSfcnInfo
# define rtmGetRTWSfcnInfo(rtm)        ((rtm)->sfcnInfo)
#endif

#ifndef rtmSetRTWSfcnInfo
# define rtmSetRTWSfcnInfo(rtm, val)   ((rtm)->sfcnInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfo
# define rtmGetRTWSolverInfo(rtm)      ((rtm)->solverInfo)
#endif

#ifndef rtmSetRTWSolverInfo
# define rtmSetRTWSolverInfo(rtm, val) ((rtm)->solverInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfoPtr
# define rtmGetRTWSolverInfoPtr(rtm)   ((rtm)->solverInfoPtr)
#endif

#ifndef rtmSetRTWSolverInfoPtr
# define rtmSetRTWSolverInfoPtr(rtm, val) ((rtm)->solverInfoPtr = (val))
#endif

#ifndef rtmGetReservedForXPC
# define rtmGetReservedForXPC(rtm)     ((rtm)->SpecialInfo.xpcData)
#endif

#ifndef rtmSetReservedForXPC
# define rtmSetReservedForXPC(rtm, val) ((rtm)->SpecialInfo.xpcData = (val))
#endif

#ifndef rtmGetRootDWork
# define rtmGetRootDWork(rtm)          ((rtm)->dwork)
#endif

#ifndef rtmSetRootDWork
# define rtmSetRootDWork(rtm, val)     ((rtm)->dwork = (val))
#endif

#ifndef rtmGetSFunctions
# define rtmGetSFunctions(rtm)         ((rtm)->childSfunctions)
#endif

#ifndef rtmSetSFunctions
# define rtmSetSFunctions(rtm, val)    ((rtm)->childSfunctions = (val))
#endif

#ifndef rtmGetSampleHitArray
# define rtmGetSampleHitArray(rtm)     ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmSetSampleHitArray
# define rtmSetSampleHitArray(rtm, val) ((rtm)->Timing.sampleHitArray = (val))
#endif

#ifndef rtmGetSampleHitPtr
# define rtmGetSampleHitPtr(rtm)       ((rtm)->Timing.sampleHits)
#endif

#ifndef rtmSetSampleHitPtr
# define rtmSetSampleHitPtr(rtm, val)  ((rtm)->Timing.sampleHits = (val))
#endif

#ifndef rtmGetSampleTimeArray
# define rtmGetSampleTimeArray(rtm)    ((rtm)->Timing.sampleTimesArray)
#endif

#ifndef rtmSetSampleTimeArray
# define rtmSetSampleTimeArray(rtm, val) ((rtm)->Timing.sampleTimesArray = (val))
#endif

#ifndef rtmGetSampleTimePtr
# define rtmGetSampleTimePtr(rtm)      ((rtm)->Timing.sampleTimes)
#endif

#ifndef rtmSetSampleTimePtr
# define rtmSetSampleTimePtr(rtm, val) ((rtm)->Timing.sampleTimes = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDArray
# define rtmGetSampleTimeTaskIDArray(rtm) ((rtm)->Timing.sampleTimeTaskIDArray)
#endif

#ifndef rtmSetSampleTimeTaskIDArray
# define rtmSetSampleTimeTaskIDArray(rtm, val) ((rtm)->Timing.sampleTimeTaskIDArray = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDPtr
# define rtmGetSampleTimeTaskIDPtr(rtm) ((rtm)->Timing.sampleTimeTaskIDPtr)
#endif

#ifndef rtmSetSampleTimeTaskIDPtr
# define rtmSetSampleTimeTaskIDPtr(rtm, val) ((rtm)->Timing.sampleTimeTaskIDPtr = (val))
#endif

#ifndef rtmGetSelf
# define rtmGetSelf(rtm)               ()
#endif

#ifndef rtmSetSelf
# define rtmSetSelf(rtm, val)          ()
#endif

#ifndef rtmGetSimMode
# define rtmGetSimMode(rtm)            ((rtm)->simMode)
#endif

#ifndef rtmSetSimMode
# define rtmSetSimMode(rtm, val)       ((rtm)->simMode = (val))
#endif

#ifndef rtmGetSimTimeStep
# define rtmGetSimTimeStep(rtm)        ((rtm)->Timing.simTimeStep)
#endif

#ifndef rtmSetSimTimeStep
# define rtmSetSimTimeStep(rtm, val)   ((rtm)->Timing.simTimeStep = (val))
#endif

#ifndef rtmGetStartTime
# define rtmGetStartTime(rtm)          ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetStartTime
# define rtmSetStartTime(rtm, val)     ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetStepSize
# define rtmGetStepSize(rtm)           ((rtm)->Timing.stepSize)
#endif

#ifndef rtmSetStepSize
# define rtmSetStepSize(rtm, val)      ((rtm)->Timing.stepSize = (val))
#endif

#ifndef rtmGetStopRequestedFlag
# define rtmGetStopRequestedFlag(rtm)  ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequestedFlag
# define rtmSetStopRequestedFlag(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetTaskCounters
# define rtmGetTaskCounters(rtm)       ()
#endif

#ifndef rtmSetTaskCounters
# define rtmSetTaskCounters(rtm, val)  ()
#endif

#ifndef rtmGetTaskTimeArray
# define rtmGetTaskTimeArray(rtm)      ((rtm)->Timing.tArray)
#endif

#ifndef rtmSetTaskTimeArray
# define rtmSetTaskTimeArray(rtm, val) ((rtm)->Timing.tArray = (val))
#endif

#ifndef rtmGetTimePtr
# define rtmGetTimePtr(rtm)            ((rtm)->Timing.t)
#endif

#ifndef rtmSetTimePtr
# define rtmSetTimePtr(rtm, val)       ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTimingData
# define rtmGetTimingData(rtm)         ((rtm)->Timing.timingData)
#endif

#ifndef rtmSetTimingData
# define rtmSetTimingData(rtm, val)    ((rtm)->Timing.timingData = (val))
#endif

#ifndef rtmGetU
# define rtmGetU(rtm)                  ((rtm)->inputs)
#endif

#ifndef rtmSetU
# define rtmSetU(rtm, val)             ((rtm)->inputs = (val))
#endif

#ifndef rtmGetVarNextHitTimesListPtr
# define rtmGetVarNextHitTimesListPtr(rtm) ((rtm)->Timing.varNextHitTimesList)
#endif

#ifndef rtmSetVarNextHitTimesListPtr
# define rtmSetVarNextHitTimesListPtr(rtm, val) ((rtm)->Timing.varNextHitTimesList = (val))
#endif

#ifndef rtmGetY
# define rtmGetY(rtm)                  ((rtm)->outputs)
#endif

#ifndef rtmSetY
# define rtmSetY(rtm, val)             ((rtm)->outputs = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetZCSignalValues
# define rtmGetZCSignalValues(rtm)     ((rtm)->zcSignalValues)
#endif

#ifndef rtmSetZCSignalValues
# define rtmSetZCSignalValues(rtm, val) ((rtm)->zcSignalValues = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
# define rtmGet_TimeOfLastOutput(rtm)  ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmSet_TimeOfLastOutput
# define rtmSet_TimeOfLastOutput(rtm, val) ((rtm)->Timing.timeOfLastOutput = (val))
#endif

#ifndef rtmGetdX
# define rtmGetdX(rtm)                 ((rtm)->derivs)
#endif

#ifndef rtmSetdX
# define rtmSetdX(rtm, val)            ((rtm)->derivs = (val))
#endif

#ifndef rtmGetChecksumVal
# define rtmGetChecksumVal(rtm, idx)   ((rtm)->Sizes.checksums[idx])
#endif

#ifndef rtmSetChecksumVal
# define rtmSetChecksumVal(rtm, idx, val) ((rtm)->Sizes.checksums[idx] = (val))
#endif

#ifndef rtmGetDWork
# define rtmGetDWork(rtm, idx)         ((rtm)->dwork[idx])
#endif

#ifndef rtmSetDWork
# define rtmSetDWork(rtm, idx, val)    ((rtm)->dwork[idx] = (val))
#endif

#ifndef rtmGetOffsetTime
# define rtmGetOffsetTime(rtm, idx)    ((rtm)->Timing.offsetTimes[idx])
#endif

#ifndef rtmSetOffsetTime
# define rtmSetOffsetTime(rtm, idx, val) ((rtm)->Timing.offsetTimes[idx] = (val))
#endif

#ifndef rtmGetSFunction
# define rtmGetSFunction(rtm, idx)     ((rtm)->childSfunctions[idx])
#endif

#ifndef rtmSetSFunction
# define rtmSetSFunction(rtm, idx, val) ((rtm)->childSfunctions[idx] = (val))
#endif

#ifndef rtmGetSampleTime
# define rtmGetSampleTime(rtm, idx)    ((rtm)->Timing.sampleTimes[idx])
#endif

#ifndef rtmSetSampleTime
# define rtmSetSampleTime(rtm, idx, val) ((rtm)->Timing.sampleTimes[idx] = (val))
#endif

#ifndef rtmGetSampleTimeTaskID
# define rtmGetSampleTimeTaskID(rtm, idx) ((rtm)->Timing.sampleTimeTaskIDPtr[idx])
#endif

#ifndef rtmSetSampleTimeTaskID
# define rtmSetSampleTimeTaskID(rtm, idx, val) ((rtm)->Timing.sampleTimeTaskIDPtr[idx] = (val))
#endif

#ifndef rtmGetVarNextHitTimeList
# define rtmGetVarNextHitTimeList(rtm, idx) ((rtm)->Timing.varNextHitTimesList[idx])
#endif

#ifndef rtmSetVarNextHitTimeList
# define rtmSetVarNextHitTimeList(rtm, idx, val) ((rtm)->Timing.varNextHitTimesList[idx] = (val))
#endif

#ifndef rtmIsContinuousTask
# define rtmIsContinuousTask(rtm, tid) ((tid) == 0)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmIsMajorTimeStep
# define rtmIsMajorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
# define rtmIsMinorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmIsSampleHit
# define rtmIsSampleHit(rtm, sti, tid) ((rtmIsMajorTimeStep((rtm)) && (rtm)->Timing.sampleHits[(rtm)->Timing.sampleTimeTaskIDPtr[sti]]))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmSetT
# define rtmSetT(rtm, val)                                       /* Do Nothing */
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val)          ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTStart
# define rtmGetTStart(rtm)             ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetTStart
# define rtmSetTStart(rtm, val)        ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetTaskTime
# define rtmGetTaskTime(rtm, sti)      (rtmGetTPtr((rtm))[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmSetTaskTime
# define rtmSetTaskTime(rtm, sti, val) (rtmGetTPtr((rtm))[sti] = (val))
#endif

#ifndef rtmGetTimeOfLastOutput
# define rtmGetTimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifdef rtmGetRTWSolverInfo
#undef rtmGetRTWSolverInfo
#endif

#define rtmGetRTWSolverInfo(rtm)       &((rtm)->solverInfo)

/* Definition for use in the target main file */
#define q_heli3d_semestral_project_rtModel RT_MODEL_q_heli3d_semestral_p_T

/* Block signals for system '<Root>/MATLAB Function' */
typedef struct {
  real_T v;                            /* '<Root>/MATLAB Function' */
} B_MATLABFunction_q_heli3d_sem_T;

/* Block signals (auto storage) */
typedef struct {
  real_T Add6;                         /* '<S7>/Add6' */
  real_T Sum1;                         /* '<Root>/Sum1' */
  real_T Add7;                         /* '<S7>/Add7' */
  real_T Sum2;                         /* '<Root>/Sum2' */
  real_T DACBLimitV[2];                /* '<S1>/DACB Limit (V)' */
  real_T AmplifierGain[2];             /* '<S1>/Amplifier Gain' */
  real_T TmpSignalConversionAtToWorkspac[2];
  real_T EncoderResolutionElevationradco;/* '<S1>/Encoder Resolution: Elevation (rad//count)' */
  real_T EncoderResolutionPitchradcount;/* '<S1>/Encoder Resolution: Pitch (rad//count)' */
  real_T EncoderResolutionTravelradcount;/* '<S1>/Encoder Resolution: Travel (rad//count)' */
  real_T Sum;                          /* '<S5>/Sum' */
  real_T Integrator3;                  /* '<S2>/Integrator3' */
  real_T Sum1_e;                       /* '<S5>/Sum1' */
  real_T Integrator5;                  /* '<S2>/Integrator5' */
  real_T Integrator1;                  /* '<S2>/Integrator1' */
  real_T Add;                          /* '<Root>/Add' */
  real_T Add1;                         /* '<Root>/Add1' */
  real_T TmpSignalConversionAtToWorksp_o[2];
  real_T TmpSignalConversionAtToWorksp_m[3];
  real_T Integrator;                   /* '<S2>/Integrator' */
  real_T Add_g;                        /* '<S2>/Add' */
  real_T Integrator2;                  /* '<S2>/Integrator2' */
  real_T Add1_f;                       /* '<S2>/Add1' */
  real_T Integrator4;                  /* '<S2>/Integrator4' */
  real_T Add2;                         /* '<S2>/Add2' */
  B_MATLABFunction_q_heli3d_sem_T sf_MATLABFunction1;/* '<Root>/MATLAB Function1' */
  B_MATLABFunction_q_heli3d_sem_T sf_MATLABFunction;/* '<Root>/MATLAB Function' */
} B_q_heli3d_semestral_project_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T HILInitialize_AIMinimums[8];  /* '<S1>/HIL Initialize' */
  real_T HILInitialize_AIMaximums[8];  /* '<S1>/HIL Initialize' */
  real_T HILInitialize_AOMinimums[8];  /* '<S1>/HIL Initialize' */
  real_T HILInitialize_AOMaximums[8];  /* '<S1>/HIL Initialize' */
  real_T HILInitialize_AOVoltages[8];  /* '<S1>/HIL Initialize' */
  real_T HILInitialize_FilterFrequency[8];/* '<S1>/HIL Initialize' */
  real_T HILInitialize_POSortedFreqs[8];/* '<S1>/HIL Initialize' */
  real_T HILInitialize_POValues[8];    /* '<S1>/HIL Initialize' */
  t_card HILInitialize_Card;           /* '<S1>/HIL Initialize' */
  t_task HILReadEncoderTimebase_Task;  /* '<S1>/HIL Read Encoder Timebase' */
  void *HILWriteAnalog_PWORK;          /* '<S1>/HIL Write Analog' */
  struct {
    void *LoggedData;
  } Scope_PWORK;                       /* '<S1>/Scope' */

  struct {
    void *LoggedData;
  } ToWorkspace_PWORK;                 /* '<S1>/To Workspace' */

  void *HILWriteDigital_PWORK;         /* '<S1>/HIL Write Digital' */
  struct {
    void *LoggedData;
  } elevation_PWORK;                   /* '<S5>/elevation ' */

  struct {
    void *LoggedData;
  } pitch_PWORK;                       /* '<S5>/pitch' */

  struct {
    void *LoggedData;
  } travel_PWORK;                      /* '<S5>/travel' */

  struct {
    void *LoggedData;
  } v1v2_PWORK;                        /* '<S5>/v1, v2' */

  struct {
    void *LoggedData;
  } ToWorkspace_PWORK_n;               /* '<Root>/To Workspace' */

  struct {
    void *LoggedData;
  } ToWorkspace4_PWORK;                /* '<Root>/To Workspace4' */

  struct {
    void *LoggedData[2];
  } Scope_PWORK_o;                     /* '<S6>/Scope' */

  struct {
    void *LoggedData;
  } Scope1_PWORK;                      /* '<Root>/Scope1' */

  int32_T HILInitialize_ClockModes[3]; /* '<S1>/HIL Initialize' */
  int32_T HILInitialize_QuadratureModes[8];/* '<S1>/HIL Initialize' */
  int32_T HILInitialize_InitialEICounts[8];/* '<S1>/HIL Initialize' */
  int32_T HILInitialize_POModeValues[8];/* '<S1>/HIL Initialize' */
  int32_T HILInitialize_POAlignValues[8];/* '<S1>/HIL Initialize' */
  int32_T HILInitialize_POPolarityVals[8];/* '<S1>/HIL Initialize' */
  int32_T HILReadEncoderTimebase_Buffer[3];/* '<S1>/HIL Read Encoder Timebase' */
  uint32_T HILInitialize_POSortedChans[8];/* '<S1>/HIL Initialize' */
  t_boolean HILWriteDigital_Buffer[4]; /* '<S1>/HIL Write Digital' */
} DW_q_heli3d_semestral_project_T;

/* Continuous states (auto storage) */
typedef struct {
  real_T DerivativeFilterElevation_CSTAT[2];/* '<S1>/Derivative Filter: Elevation' */
  real_T DerivativeFilterPitch_CSTATE[2];/* '<S1>/Derivative Filter: Pitch' */
  real_T DerivativeFilterTravel_CSTATE[2];/* '<S1>/Derivative Filter: Travel' */
  real_T Integrator3_CSTATE;           /* '<S2>/Integrator3' */
  real_T Integrator5_CSTATE;           /* '<S2>/Integrator5' */
  real_T Integrator1_CSTATE;           /* '<S2>/Integrator1' */
  real_T Integrator_CSTATE;            /* '<S2>/Integrator' */
  real_T Integrator2_CSTATE;           /* '<S2>/Integrator2' */
  real_T Integrator4_CSTATE;           /* '<S2>/Integrator4' */
} X_q_heli3d_semestral_project_T;

/* State derivatives (auto storage) */
typedef struct {
  real_T DerivativeFilterElevation_CSTAT[2];/* '<S1>/Derivative Filter: Elevation' */
  real_T DerivativeFilterPitch_CSTATE[2];/* '<S1>/Derivative Filter: Pitch' */
  real_T DerivativeFilterTravel_CSTATE[2];/* '<S1>/Derivative Filter: Travel' */
  real_T Integrator3_CSTATE;           /* '<S2>/Integrator3' */
  real_T Integrator5_CSTATE;           /* '<S2>/Integrator5' */
  real_T Integrator1_CSTATE;           /* '<S2>/Integrator1' */
  real_T Integrator_CSTATE;            /* '<S2>/Integrator' */
  real_T Integrator2_CSTATE;           /* '<S2>/Integrator2' */
  real_T Integrator4_CSTATE;           /* '<S2>/Integrator4' */
} XDot_q_heli3d_semestral_proje_T;

/* State disabled  */
typedef struct {
  boolean_T DerivativeFilterElevation_CSTAT[2];/* '<S1>/Derivative Filter: Elevation' */
  boolean_T DerivativeFilterPitch_CSTATE[2];/* '<S1>/Derivative Filter: Pitch' */
  boolean_T DerivativeFilterTravel_CSTATE[2];/* '<S1>/Derivative Filter: Travel' */
  boolean_T Integrator3_CSTATE;        /* '<S2>/Integrator3' */
  boolean_T Integrator5_CSTATE;        /* '<S2>/Integrator5' */
  boolean_T Integrator1_CSTATE;        /* '<S2>/Integrator1' */
  boolean_T Integrator_CSTATE;         /* '<S2>/Integrator' */
  boolean_T Integrator2_CSTATE;        /* '<S2>/Integrator2' */
  boolean_T Integrator4_CSTATE;        /* '<S2>/Integrator4' */
} XDis_q_heli3d_semestral_proje_T;

#ifndef ODE1_INTG
#define ODE1_INTG

/* ODE1 Integration Data */
typedef struct {
  real_T *f[1];                        /* derivatives */
} ODE1_IntgData;

#endif

/* Backward compatible GRT Identifiers */
#define rtB                            q_heli3d_semestral_project_B
#define BlockIO                        B_q_heli3d_semestral_project_T
#define rtX                            q_heli3d_semestral_project_X
#define ContinuousStates               X_q_heli3d_semestral_project_T
#define rtXdot                         q_heli3d_semestral_project_XDot
#define StateDerivatives               XDot_q_heli3d_semestral_proje_T
#define tXdis                          q_heli3d_semestral_project_XDis
#define StateDisabled                  XDis_q_heli3d_semestral_proje_T
#define rtP                            q_heli3d_semestral_project_P
#define Parameters                     P_q_heli3d_semestral_project_T
#define rtDWork                        q_heli3d_semestral_project_DW
#define D_Work                         DW_q_heli3d_semestral_project_T

/* Parameters (auto storage) */
struct P_q_heli3d_semestral_project_T_ {
  struct_5Ot7FXSF1AFZsf6MrozkWE par_inputs;/* Variable: par_inputs
                                            * Referenced by:
                                            *   '<Root>/MATLAB Function'
                                            *   '<Root>/MATLAB Function1'
                                            */
  real_T K_AMP;                        /* Variable: K_AMP
                                        * Referenced by:
                                        *   '<S1>/Amplifier Gain'
                                        *   '<S1>/Amplifier Gain Pre-Compensation'
                                        */
  real_T K_EC_E;                       /* Variable: K_EC_E
                                        * Referenced by: '<S1>/Encoder Resolution: Elevation (rad//count)'
                                        */
  real_T K_EC_P;                       /* Variable: K_EC_P
                                        * Referenced by: '<S1>/Encoder Resolution: Pitch (rad//count)'
                                        */
  real_T K_EC_T;                       /* Variable: K_EC_T
                                        * Referenced by: '<S1>/Encoder Resolution: Travel (rad//count)'
                                        */
  real_T VMAX_AMP;                     /* Variable: VMAX_AMP
                                        * Referenced by: '<S1>/Amplifier Voltage  Limit (V)'
                                        */
  real_T VMAX_DAC;                     /* Variable: VMAX_DAC
                                        * Referenced by: '<S1>/DACB Limit (V)'
                                        */
  real_T ae1;                          /* Variable: ae1
                                        * Referenced by: '<S2>/Gain2'
                                        */
  real_T ae2;                          /* Variable: ae2
                                        * Referenced by: '<S2>/Gain4'
                                        */
  real_T at;                           /* Variable: at
                                        * Referenced by: '<S2>/Gain6'
                                        */
  real_T be;                           /* Variable: be
                                        * Referenced by: '<S2>/Gain5'
                                        */
  real_T bl;                           /* Variable: bl
                                        * Referenced by: '<S2>/Gain1'
                                        */
  real_T bt;                           /* Variable: bt
                                        * Referenced by: '<S2>/Gain8'
                                        */
  real_T ce;                           /* Variable: ce
                                        * Referenced by: '<S2>/Gain3'
                                        */
  real_T cl;                           /* Variable: cl
                                        * Referenced by: '<S2>/Gain'
                                        */
  real_T ct;                           /* Variable: ct
                                        * Referenced by: '<S2>/Gain7'
                                        */
  real_T x0[6];                        /* Variable: x0
                                        * Referenced by:
                                        *   '<S2>/Integrator'
                                        *   '<S2>/Integrator1'
                                        *   '<S2>/Integrator2'
                                        *   '<S2>/Integrator4'
                                        *   '<S2>/Integrator5'
                                        */
  int32_T HILReadEncoderTimebase_clock;/* Mask Parameter: HILReadEncoderTimebase_clock
                                        * Referenced by: '<S1>/HIL Read Encoder Timebase'
                                        */
  uint32_T HILReadEncoderTimebase_channels[3];/* Mask Parameter: HILReadEncoderTimebase_channels
                                               * Referenced by: '<S1>/HIL Read Encoder Timebase'
                                               */
  uint32_T HILWriteAnalog_channels[2]; /* Mask Parameter: HILWriteAnalog_channels
                                        * Referenced by: '<S1>/HIL Write Analog'
                                        */
  uint32_T HILWriteDigital_channels[4];/* Mask Parameter: HILWriteDigital_channels
                                        * Referenced by: '<S1>/HIL Write Digital'
                                        */
  uint32_T HILReadEncoderTimebase_samples_;/* Mask Parameter: HILReadEncoderTimebase_samples_
                                            * Referenced by: '<S1>/HIL Read Encoder Timebase'
                                            */
  real_T HILInitialize_OOTerminate;    /* Expression: set_other_outputs_at_terminate
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  real_T HILInitialize_OOExit;         /* Expression: set_other_outputs_at_switch_out
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  real_T HILInitialize_OOStart;        /* Expression: set_other_outputs_at_start
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  real_T HILInitialize_OOEnter;        /* Expression: set_other_outputs_at_switch_in
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  real_T HILInitialize_AOFinal;        /* Expression: final_analog_outputs
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  real_T HILInitialize_POFinal;        /* Expression: final_pwm_outputs
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  real_T HILInitialize_AIHigh;         /* Expression: analog_input_maximums
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  real_T HILInitialize_AILow;          /* Expression: analog_input_minimums
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  real_T HILInitialize_AOHigh;         /* Expression: analog_output_maximums
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  real_T HILInitialize_AOLow;          /* Expression: analog_output_minimums
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  real_T HILInitialize_AOInitial;      /* Expression: initial_analog_outputs
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  real_T HILInitialize_AOWatchdog;     /* Expression: watchdog_analog_outputs
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  real_T HILInitialize_POFrequency;    /* Expression: pwm_frequency
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  real_T HILInitialize_POLeading;      /* Expression: pwm_leading_deadband
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  real_T HILInitialize_POTrailing;     /* Expression: pwm_trailing_deadband
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  real_T HILInitialize_POInitial;      /* Expression: initial_pwm_outputs
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  real_T HILInitialize_POWatchdog;     /* Expression: watchdog_pwm_outputs
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  real_T Step_Time;                    /* Expression: 5
                                        * Referenced by: '<S7>/Step'
                                        */
  real_T Step_Y0;                      /* Expression: 0
                                        * Referenced by: '<S7>/Step'
                                        */
  real_T Step_YFinal;                  /* Expression: 0.6
                                        * Referenced by: '<S7>/Step'
                                        */
  real_T Step1_Time;                   /* Expression: 10
                                        * Referenced by: '<S7>/Step1'
                                        */
  real_T Step1_Y0;                     /* Expression: 0
                                        * Referenced by: '<S7>/Step1'
                                        */
  real_T Step1_YFinal;                 /* Expression: 0.2
                                        * Referenced by: '<S7>/Step1'
                                        */
  real_T Step2_Time;                   /* Expression: 11
                                        * Referenced by: '<S7>/Step2'
                                        */
  real_T Step2_Y0;                     /* Expression: 0
                                        * Referenced by: '<S7>/Step2'
                                        */
  real_T Step2_YFinal;                 /* Expression: 0.2
                                        * Referenced by: '<S7>/Step2'
                                        */
  real_T Step3_Time;                   /* Expression: 11
                                        * Referenced by: '<S7>/Step3'
                                        */
  real_T Step3_Y0;                     /* Expression: 0
                                        * Referenced by: '<S7>/Step3'
                                        */
  real_T Step3_YFinal;                 /* Expression: 0.4
                                        * Referenced by: '<S7>/Step3'
                                        */
  real_T Step4_Time;                   /* Expression: 14.2
                                        * Referenced by: '<S7>/Step4'
                                        */
  real_T Step4_Y0;                     /* Expression: 0
                                        * Referenced by: '<S7>/Step4'
                                        */
  real_T Step4_YFinal;                 /* Expression: 0.4
                                        * Referenced by: '<S7>/Step4'
                                        */
  real_T Gain_Gain;                    /* Expression: 1
                                        * Referenced by: '<Root>/Gain'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T Gain1_Gain;                   /* Expression: 1
                                        * Referenced by: '<Root>/Gain1'
                                        */
  real_T DerivativeFilterElevation_A[2];/* Computed Parameter: DerivativeFilterElevation_A
                                         * Referenced by: '<S1>/Derivative Filter: Elevation'
                                         */
  real_T DerivativeFilterElevation_C[2];/* Computed Parameter: DerivativeFilterElevation_C
                                         * Referenced by: '<S1>/Derivative Filter: Elevation'
                                         */
  real_T DerivativeFilterPitch_A[2];   /* Computed Parameter: DerivativeFilterPitch_A
                                        * Referenced by: '<S1>/Derivative Filter: Pitch'
                                        */
  real_T DerivativeFilterPitch_C[2];   /* Computed Parameter: DerivativeFilterPitch_C
                                        * Referenced by: '<S1>/Derivative Filter: Pitch'
                                        */
  real_T DerivativeFilterTravel_A[2];  /* Computed Parameter: DerivativeFilterTravel_A
                                        * Referenced by: '<S1>/Derivative Filter: Travel'
                                        */
  real_T DerivativeFilterTravel_C[2];  /* Computed Parameter: DerivativeFilterTravel_C
                                        * Referenced by: '<S1>/Derivative Filter: Travel'
                                        */
  real_T EnableAmp_Value[4];           /* Expression: [1 1 1 1]
                                        * Referenced by: '<S1>/Enable Amp'
                                        */
  real_T Integrator3_IC;               /* Expression: 0
                                        * Referenced by: '<S2>/Integrator3'
                                        */
  real_T Constant_Value_c;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant'
                                        */
  int32_T HILInitialize_CKChannels[3]; /* Computed Parameter: HILInitialize_CKChannels
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  int32_T HILInitialize_DOWatchdog;    /* Computed Parameter: HILInitialize_DOWatchdog
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  int32_T HILInitialize_EIInitial;     /* Computed Parameter: HILInitialize_EIInitial
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  int32_T HILInitialize_POModes;       /* Computed Parameter: HILInitialize_POModes
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  int32_T HILInitialize_POConfiguration;/* Computed Parameter: HILInitialize_POConfiguration
                                         * Referenced by: '<S1>/HIL Initialize'
                                         */
  int32_T HILInitialize_POAlignment;   /* Computed Parameter: HILInitialize_POAlignment
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  int32_T HILInitialize_POPolarity;    /* Computed Parameter: HILInitialize_POPolarity
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  uint32_T HILInitialize_AIChannels[8];/* Computed Parameter: HILInitialize_AIChannels
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  uint32_T HILInitialize_AOChannels[8];/* Computed Parameter: HILInitialize_AOChannels
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  uint32_T HILInitialize_EIChannels[8];/* Computed Parameter: HILInitialize_EIChannels
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  uint32_T HILInitialize_EIQuadrature; /* Computed Parameter: HILInitialize_EIQuadrature
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  uint32_T HILInitialize_POChannels[8];/* Computed Parameter: HILInitialize_POChannels
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_Active;      /* Computed Parameter: HILInitialize_Active
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AOTerminate; /* Computed Parameter: HILInitialize_AOTerminate
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AOExit;      /* Computed Parameter: HILInitialize_AOExit
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOTerminate; /* Computed Parameter: HILInitialize_DOTerminate
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOExit;      /* Computed Parameter: HILInitialize_DOExit
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_POTerminate; /* Computed Parameter: HILInitialize_POTerminate
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_POExit;      /* Computed Parameter: HILInitialize_POExit
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_CKPStart;    /* Computed Parameter: HILInitialize_CKPStart
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_CKPEnter;    /* Computed Parameter: HILInitialize_CKPEnter
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_CKStart;     /* Computed Parameter: HILInitialize_CKStart
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_CKEnter;     /* Computed Parameter: HILInitialize_CKEnter
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AIPStart;    /* Computed Parameter: HILInitialize_AIPStart
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AIPEnter;    /* Computed Parameter: HILInitialize_AIPEnter
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AOPStart;    /* Computed Parameter: HILInitialize_AOPStart
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AOPEnter;    /* Computed Parameter: HILInitialize_AOPEnter
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AOStart;     /* Computed Parameter: HILInitialize_AOStart
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AOEnter;     /* Computed Parameter: HILInitialize_AOEnter
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AOReset;     /* Computed Parameter: HILInitialize_AOReset
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOPStart;    /* Computed Parameter: HILInitialize_DOPStart
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOPEnter;    /* Computed Parameter: HILInitialize_DOPEnter
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOStart;     /* Computed Parameter: HILInitialize_DOStart
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOEnter;     /* Computed Parameter: HILInitialize_DOEnter
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOReset;     /* Computed Parameter: HILInitialize_DOReset
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_EIPStart;    /* Computed Parameter: HILInitialize_EIPStart
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_EIPEnter;    /* Computed Parameter: HILInitialize_EIPEnter
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_EIStart;     /* Computed Parameter: HILInitialize_EIStart
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_EIEnter;     /* Computed Parameter: HILInitialize_EIEnter
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_POPStart;    /* Computed Parameter: HILInitialize_POPStart
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_POPEnter;    /* Computed Parameter: HILInitialize_POPEnter
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_POStart;     /* Computed Parameter: HILInitialize_POStart
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_POEnter;     /* Computed Parameter: HILInitialize_POEnter
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_POReset;     /* Computed Parameter: HILInitialize_POReset
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_OOReset;     /* Computed Parameter: HILInitialize_OOReset
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOFinal;     /* Computed Parameter: HILInitialize_DOFinal
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOInitial;   /* Computed Parameter: HILInitialize_DOInitial
                                        * Referenced by: '<S1>/HIL Initialize'
                                        */
  boolean_T HILReadEncoderTimebase_Active;/* Computed Parameter: HILReadEncoderTimebase_Active
                                           * Referenced by: '<S1>/HIL Read Encoder Timebase'
                                           */
  boolean_T HILWriteAnalog_Active;     /* Computed Parameter: HILWriteAnalog_Active
                                        * Referenced by: '<S1>/HIL Write Analog'
                                        */
  boolean_T HILWriteDigital_Active;    /* Computed Parameter: HILWriteDigital_Active
                                        * Referenced by: '<S1>/HIL Write Digital'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_q_heli3d_semestral_pr_T {
  const char_T *path;
  const char_T *modelName;
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;
  void *blockIO;
  const void *constBlockIO;
  void *defaultParam;
  ZCSigState *prevZCSigState;
  real_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  void *zcSignalValues;
  void *inputs;
  void *outputs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T blkStateChange;
  real_T odeF[1][12];
  ODE1_IntgData intgData;
  void *dwork;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    uint32_T options;
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
    void *xpcData;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T stepSize1;
    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    void *timingData;
    real_T *varNextHitTimesList;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[2];
    time_T offsetTimesArray[2];
    int_T sampleTimeTaskIDArray[2];
    int_T sampleHitArray[2];
    int_T perTaskSampleHitsArray[4];
    time_T tArray[2];
  } Timing;
};

/* Block parameters (auto storage) */
extern P_q_heli3d_semestral_project_T q_heli3d_semestral_project_P;

/* Block signals (auto storage) */
extern B_q_heli3d_semestral_project_T q_heli3d_semestral_project_B;

/* Continuous states (auto storage) */
extern X_q_heli3d_semestral_project_T q_heli3d_semestral_project_X;

/* Block states (auto storage) */
extern DW_q_heli3d_semestral_project_T q_heli3d_semestral_project_DW;

/* Model entry point functions */
extern void q_heli3d_semestral_project_initialize(void);
extern void q_heli3d_semestral_project_output(void);
extern void q_heli3d_semestral_project_update(void);
extern void q_heli3d_semestral_project_terminate(void);

/*====================*
 * External functions *
 *====================*/
extern q_heli3d_semestral_project_rtModel *q_heli3d_semestral_project(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Real-time Model object */
extern RT_MODEL_q_heli3d_semestral_p_T *const q_heli3d_semestral_project_M;

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
 * '<Root>' : 'q_heli3d_semestral_project'
 * '<S1>'   : 'q_heli3d_semestral_project/3-DOF Helicopter1'
 * '<S2>'   : 'q_heli3d_semestral_project/Benchmark model'
 * '<S3>'   : 'q_heli3d_semestral_project/MATLAB Function'
 * '<S4>'   : 'q_heli3d_semestral_project/MATLAB Function1'
 * '<S5>'   : 'q_heli3d_semestral_project/Scopes1'
 * '<S6>'   : 'q_heli3d_semestral_project/Test input'
 * '<S7>'   : 'q_heli3d_semestral_project/Test input/sequence_meas1'
 * '<S8>'   : 'q_heli3d_semestral_project/Test input/sequence_meas2'
 * '<S9>'   : 'q_heli3d_semestral_project/Test input/sequence_meas3'
 * '<S10>'  : 'q_heli3d_semestral_project/Test input/sequence_meas4'
 */
#endif                                 /* RTW_HEADER_q_heli3d_semestral_project_h_ */
