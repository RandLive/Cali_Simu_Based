/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * funDiffVolt_1_data.h
 *
 * Code generation for function 'funDiffVolt_1_data'
 *
 */

#ifndef FUNDIFFVOLT_1_DATA_H
#define FUNDIFFVOLT_1_DATA_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "funDiffVolt_1_types.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern const volatile char_T *emlrtBreakCheckR2012bFlagVar;
extern real_T refPose[3630];
extern real_T meaVoltage[5808];
extern real_T Koordinate_real_GLS[3630];
extern real_T m1[24];
extern real_T m[24];
extern real_T K;
extern real_T minVoltage;
extern real_T varStartingPoint;
extern real_T varNum;
extern real_T F[5205];
extern real_T C;
extern real_T r[24];
extern uint32_T refPose_dirty;
extern uint32_T meaVoltage_dirty;
extern uint32_T Koordinate_real_GLS_dirty;
extern uint32_T m1_dirty;
extern uint32_T m_dirty;
extern uint32_T K_dirty;
extern uint32_T minVoltage_dirty;
extern uint32_T varStartingPoint_dirty;
extern uint32_T varNum_dirty;
extern uint32_T F_dirty;
extern uint32_T C_dirty;
extern uint32_T r_dirty;
extern emlrtContext emlrtContextGlobal;
extern emlrtRSInfo emlrtRSI;
extern emlrtRSInfo b_emlrtRSI;
extern emlrtRSInfo c_emlrtRSI;
extern emlrtRSInfo d_emlrtRSI;

#endif

/* End of code generation (funDiffVolt_1_data.h) */
