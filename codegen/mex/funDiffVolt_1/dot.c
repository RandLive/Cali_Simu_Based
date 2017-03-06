/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * dot.c
 *
 * Code generation for function 'dot'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "funDiffVolt_1.h"
#include "dot.h"

/* Function Definitions */
real_T dot(const real_T a[3], const real_T b[3])
{
  real_T c;
  int32_T k;
  c = 0.0;
  for (k = 0; k < 3; k++) {
    c += a[k] * b[k];
  }

  return c;
}

/* End of code generation (dot.c) */
