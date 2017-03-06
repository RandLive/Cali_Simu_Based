/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * funDiffVolt_1.c
 *
 * Code generation for function 'funDiffVolt_1'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "funDiffVolt_1.h"
#include "Bfeld.h"
#include "cosd.h"
#include "sind.h"
#include "dot.h"
#include "mean.h"
#include "funDiffVolt_1_data.h"

/* Variable Definitions */
static emlrtRTEInfo emlrtRTEI = { 25,  /* lineNo */
  7,                                   /* colNo */
  "funDiffVolt_1",                     /* fName */
  "C:\\Users\\meli\\Desktop\\Calibration_Simulation_Based_2017\\funDiffVolt_1.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { 1,     /* iFirst */
  726,                                 /* iLast */
  26,                                  /* lineNo */
  33,                                  /* colNo */
  "Koordinate_real_GLS",               /* aName */
  "funDiffVolt_1",                     /* fName */
  "C:\\Users\\meli\\Desktop\\Calibration_Simulation_Based_2017\\funDiffVolt_1.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo emlrtDCI = { 26,    /* lineNo */
  33,                                  /* colNo */
  "funDiffVolt_1",                     /* fName */
  "C:\\Users\\meli\\Desktop\\Calibration_Simulation_Based_2017\\funDiffVolt_1.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { 1,   /* iFirst */
  3973,                                /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "F",                                 /* aName */
  "funDiffVolt_1",                     /* fName */
  "C:\\Users\\meli\\Desktop\\Calibration_Simulation_Based_2017\\funDiffVolt_1.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
real_T funDiffVolt_1(const emlrtStack *sp, const real_T x[56])
{
  real_T U[5808];
  int32_T j;
  int32_T i0;
  real_T hoistedGlobal;
  real_T d0;
  real_T d1;
  real_T c_varStartingPoint;
  real_T d2;
  real_T d3;
  int32_T k;
  real_T d4;
  real_T dv6[3];
  real_T b_k;
  int32_T i1;
  real_T n[3];
  int32_T b_i1;
  real_T b_hoistedGlobal[24];
  real_T c_hoistedGlobal[3630];
  real_T d_hoistedGlobal[24];
  real_T e_hoistedGlobal[3];
  real_T f_hoistedGlobal[3];

  /*  Calculate difference between measured and real voltage at each position */
  memcpy(&U[0], &meaVoltage[0], 5808U * sizeof(real_T));
  j = 0;
  while (j < 8) {
    hoistedGlobal = (m[j] + x[j] / 100.0) * K;
    d0 = x[16 + j] / 5.0 + m[16 + j];
    sind(&d0);
    d1 = x[8 + j] / 5.0 + m[8 + j];
    cosd(&d1);
    d2 = x[16 + j] / 5.0 + m[16 + j];
    sind(&d2);
    d3 = x[8 + j] / 5.0 + m[8 + j];
    sind(&d3);
    d4 = x[16 + j] / 5.0 + m[16 + j];
    cosd(&d4);
    dv6[0] = d0 * d1;
    dv6[1] = d2 * d3;
    dv6[2] = d4;
    for (i0 = 0; i0 < 3; i0++) {
      m1[j + (i0 << 3)] = hoistedGlobal * dv6[i0];
    }

    j++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  for (i0 = 0; i0 < 726; i0++) {
    Koordinate_real_GLS[2178 + i0] = refPose[2178 + i0];
    Koordinate_real_GLS[2904 + i0] = refPose[2904 + i0];
    Koordinate_real_GLS[i0] = refPose[i0];
    Koordinate_real_GLS[726 + i0] = refPose[726 + i0];
    Koordinate_real_GLS[1452 + i0] = refPose[1452 + i0];
  }

  minVoltage = 0.002;
  j = 0;

  /*  F=zeros(varNum); */
  c_varStartingPoint = varStartingPoint;
  d0 = varStartingPoint + varNum;
  i0 = (int32_T)(d0 + (1.0 - varStartingPoint));
  emlrtForLoopVectorCheckR2012b(varStartingPoint, 1.0, d0, mxDOUBLE_CLASS, i0,
    &emlrtRTEI, sp);
  k = 0;
  while (k <= i0 - 1) {
    b_k = c_varStartingPoint + (real_T)k;
    if (b_k != (int32_T)muDoubleScalarFloor(b_k)) {
      emlrtIntegerCheckR2012b(b_k, &emlrtDCI, sp);
    }

    i1 = (int32_T)b_k;
    if (!((i1 >= 1) && (i1 <= 726))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, 726, &emlrtBCI, sp);
    }

    d0 = Koordinate_real_GLS[i1 + 2903];
    sind(&d0);
    d1 = Koordinate_real_GLS[(int32_T)b_k + 2177];
    cosd(&d1);
    d2 = Koordinate_real_GLS[(int32_T)b_k + 2903];
    sind(&d2);
    d3 = Koordinate_real_GLS[(int32_T)b_k + 2177];
    sind(&d3);
    d4 = Koordinate_real_GLS[(int32_T)b_k + 2903];
    cosd(&d4);
    n[0] = d0 * d1;
    n[1] = d2 * d3;
    n[2] = d4;
    b_i1 = 0;
    while (b_i1 < 8) {
      if (muDoubleScalarAbs(U[((int32_T)b_k + 726 * b_i1) - 1]) > minVoltage) {
        j++;
        hoistedGlobal = C;
        memcpy(&b_hoistedGlobal[0], &m1[0], 24U * sizeof(real_T));
        memcpy(&c_hoistedGlobal[0], &Koordinate_real_GLS[0], 3630U * sizeof
               (real_T));
        memcpy(&d_hoistedGlobal[0], &r[0], 24U * sizeof(real_T));
        for (i1 = 0; i1 < 3; i1++) {
          e_hoistedGlobal[i1] = b_hoistedGlobal[b_i1 + (i1 << 3)];
          f_hoistedGlobal[i1] = (c_hoistedGlobal[((int32_T)b_k + 726 * i1) - 1]
            - d_hoistedGlobal[b_i1 + (i1 << 3)]) + x[b_i1 + ((3 + i1) << 3)] /
            1000.0;
        }

        Bfeld(e_hoistedGlobal, f_hoistedGlobal, dv6);
        if (!((j >= 1) && (j <= 3973))) {
          emlrtDynamicBoundsCheckR2012b(j, 1, 3973, &b_emlrtBCI, sp);
        }

        F[j - 1] = muDoubleScalarAbs(muDoubleScalarAbs(U[((int32_T)b_k + 726 *
          b_i1) - 1]) - muDoubleScalarAbs(hoistedGlobal * dot(dv6, n))) /
          muDoubleScalarAbs(U[((int32_T)b_k + 726 * b_i1) - 1]);
      }

      b_i1++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    k++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  return mean(F);
}

/* End of code generation (funDiffVolt_1.c) */
