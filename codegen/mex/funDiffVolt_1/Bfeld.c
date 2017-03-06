/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Bfeld.c
 *
 * Code generation for function 'Bfeld'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "funDiffVolt_1.h"
#include "Bfeld.h"
#include "norm.h"

/* Function Definitions */
void Bfeld(const real_T b_m[3], const real_T x[3], real_T B[3])
{
  real_T c;
  int32_T k;
  real_T b_c;
  real_T c_c;

  /*  Calculate B-field (dipole based) */
  c = 0.0;
  for (k = 0; k < 3; k++) {
    c += b_m[k] * x[k];
  }

  b_c = muDoubleScalarPower(norm(x), 5.0);
  c_c = muDoubleScalarPower(norm(x), 3.0);
  for (k = 0; k < 3; k++) {
    B[k] = 3.0 * x[k] * c / b_c - b_m[k] / c_c;
  }
}

/* End of code generation (Bfeld.c) */
