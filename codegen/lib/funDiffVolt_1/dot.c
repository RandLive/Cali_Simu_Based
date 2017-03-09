/*
 * File: dot.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 09-Mar-2017 11:35:58
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "funDiffVolt_1.h"
#include "dot.h"

/* Function Definitions */

/*
 * Arguments    : const double a[3]
 *                const double b[3]
 * Return Type  : double
 */
double dot(const double a[3], const double b[3])
{
  double c;
  int k;
  c = 0.0;
  for (k = 0; k < 3; k++) {
    c += a[k] * b[k];
  }

  return c;
}

/*
 * File trailer for dot.c
 *
 * [EOF]
 */
