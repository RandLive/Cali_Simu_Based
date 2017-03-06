/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mean.c
 *
 * Code generation for function 'mean'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "funDiffVolt_1.h"
#include "mean.h"

/* Function Definitions */
real_T mean(const real_T x[3973])
{
  real_T y;
  int32_T k;
  y = x[0];
  for (k = 0; k < 3972; k++) {
    y += x[k + 1];
  }

  y /= 3973.0;
  return y;
}

/* End of code generation (mean.c) */
