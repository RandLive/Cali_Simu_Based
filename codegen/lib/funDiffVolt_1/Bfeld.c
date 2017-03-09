/*
 * File: Bfeld.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 09-Mar-2017 11:35:58
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "funDiffVolt_1.h"
#include "Bfeld.h"
#include "norm.h"

/* Function Declarations */
static double rt_powd_snf(double u0, double u1);

/* Function Definitions */

/*
 * Arguments    : double u0
 *                double u1
 * Return Type  : double
 */
static double rt_powd_snf(double u0, double u1)
{
  double y;
  double d5;
  double d6;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = rtNaN;
  } else {
    d5 = fabs(u0);
    d6 = fabs(u1);
    if (rtIsInf(u1)) {
      if (d5 == 1.0) {
        y = rtNaN;
      } else if (d5 > 1.0) {
        if (u1 > 0.0) {
          y = rtInf;
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = rtInf;
      }
    } else if (d6 == 0.0) {
      y = 1.0;
    } else if (d6 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > floor(u1))) {
      y = rtNaN;
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
}

/*
 * Calculate B-field (dipole based)
 * Arguments    : const double b_m[3]
 *                const double x[3]
 *                double B[3]
 * Return Type  : void
 */
void Bfeld(const double b_m[3], const double x[3], double B[3])
{
  double c;
  int k;
  double b_B;
  double c_B;
  c = 0.0;
  for (k = 0; k < 3; k++) {
    c += b_m[k] * x[k];
  }

  b_B = rt_powd_snf(norm(x), 5.0);
  c_B = rt_powd_snf(norm(x), 3.0);
  for (k = 0; k < 3; k++) {
    B[k] = 3.0 * x[k] * c / b_B - b_m[k] / c_B;
  }
}

/*
 * File trailer for Bfeld.c
 *
 * [EOF]
 */
