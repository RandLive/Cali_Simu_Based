/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * funDiffVolt_1_data.c
 *
 * Code generation for function 'funDiffVolt_1_data'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "funDiffVolt_1.h"
#include "funDiffVolt_1_data.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;
real_T refPose[3630];
real_T meaVoltage[5808];
real_T Koordinate_real_GLS[3630];
real_T m1[24];
real_T m[24];
real_T K;
real_T minVoltage;
real_T varStartingPoint;
real_T varNum;
real_T F[3973];
real_T C;
real_T r[24];
uint32_T refPose_dirty;
uint32_T meaVoltage_dirty;
uint32_T Koordinate_real_GLS_dirty;
uint32_T m1_dirty;
uint32_T m_dirty;
uint32_T K_dirty;
uint32_T minVoltage_dirty;
uint32_T varStartingPoint_dirty;
uint32_T varNum_dirty;
uint32_T F_dirty;
uint32_T C_dirty;
uint32_T r_dirty;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131435U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "funDiffVolt_1",                     /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2045744189U, 2170104910U, 2743257031U, 4284093946U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

emlrtRSInfo emlrtRSI = { 30,           /* lineNo */
  "funDiffVolt_1",                     /* fcnName */
  "C:\\Users\\meli\\Desktop\\Calibration_Simulation_Based_2017\\funDiffVolt_1.m"/* pathName */
};

emlrtRSInfo b_emlrtRSI = { 4,          /* lineNo */
  "Bfeld",                             /* fcnName */
  "C:\\Users\\meli\\Desktop\\Calibration_Simulation_Based_2017\\Bfeld.m"/* pathName */
};

emlrtRSInfo c_emlrtRSI = { 37,         /* lineNo */
  "mpower",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\ops\\mpower.m"/* pathName */
};

emlrtRSInfo d_emlrtRSI = { 49,         /* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

/* End of code generation (funDiffVolt_1_data.c) */
