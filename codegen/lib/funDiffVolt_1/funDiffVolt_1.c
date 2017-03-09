/*
 * File: funDiffVolt_1.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 09-Mar-2017 11:35:58
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "funDiffVolt_1.h"
#include "cosd.h"
#include "sind.h"
#include "dot.h"
#include "Bfeld.h"
#include "mean.h"
#include "funDiffVolt_1_data.h"

/* Function Definitions */

/*
 * Calculate difference between measured and real voltage at each position
 * Arguments    : const double x[56]
 * Return Type  : double
 */
double funDiffVolt_1(const double x[56])
{
  int j;
  int i0;
  double k;
  double d0;
  double d1;
  double d2;
  int b_k;
  double d3;
  double d4;
  double dv6[3];
  double n[3];
  int i1;
  double dv7[3];
  int b_i1;
  double dv8[3];
  for (j = 0; j < 8; j++) {
    k = (m[j] + x[j] / 100.0) * K;
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
      m1[j + (i0 << 3)] = k * dv6[i0];
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
  j = -1;

  /*  F=zeros(varNum); */
  i0 = (int)((varStartingPoint + varNum) + (1.0 - varStartingPoint));
  for (b_k = 0; b_k < i0; b_k++) {
    k = varStartingPoint + (double)b_k;
    d0 = Koordinate_real_GLS[(int)k + 2903];
    sind(&d0);
    d1 = Koordinate_real_GLS[(int)k + 2177];
    cosd(&d1);
    d2 = Koordinate_real_GLS[(int)k + 2903];
    sind(&d2);
    d3 = Koordinate_real_GLS[(int)k + 2177];
    sind(&d3);
    d4 = Koordinate_real_GLS[(int)k + 2903];
    cosd(&d4);
    n[0] = d0 * d1;
    n[1] = d2 * d3;
    n[2] = d4;
    for (i1 = 0; i1 < 8; i1++) {
      if (fabs(meaVoltage[((int)k + 726 * i1) - 1]) > minVoltage) {
        j++;
        for (b_i1 = 0; b_i1 < 3; b_i1++) {
          dv6[b_i1] = m1[i1 + (b_i1 << 3)];
          dv7[b_i1] = (Koordinate_real_GLS[((int)k + 726 * b_i1) - 1] - r[i1 +
                       (b_i1 << 3)]) + x[i1 + ((3 + b_i1) << 3)] / 1000.0;
        }

        Bfeld(dv6, dv7, dv8);
        F[j] = fabs(fabs(meaVoltage[((int)k + 726 * i1) - 1]) - fabs(C * dot(dv8,
          n))) / fabs(meaVoltage[((int)k + 726 * i1) - 1]);
      }
    }
  }

  return mean(F);
}

/*
 * File trailer for funDiffVolt_1.c
 *
 * [EOF]
 */
