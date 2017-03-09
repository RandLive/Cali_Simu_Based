/*
 * File: mean.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 09-Mar-2017 11:35:58
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "funDiffVolt_1.h"
#include "mean.h"

/* Function Definitions */

/*
 * Arguments    : const double x[5168]
 * Return Type  : double
 */
double mean(const double x[5168])
{
  double y;
  int k;
  y = x[0];
  for (k = 0; k < 5167; k++) {
    y += x[k + 1];
  }

  y /= 5168.0;
  return y;
}

/*
 * File trailer for mean.c
 *
 * [EOF]
 */
