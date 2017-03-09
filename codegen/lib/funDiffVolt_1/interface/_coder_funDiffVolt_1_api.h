/*
 * File: _coder_funDiffVolt_1_api.h
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 09-Mar-2017 11:35:58
 */

#ifndef _CODER_FUNDIFFVOLT_1_API_H
#define _CODER_FUNDIFFVOLT_1_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_funDiffVolt_1_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern real_T funDiffVolt_1(real_T x[56]);
extern void funDiffVolt_1_api(const mxArray *prhs[1], const mxArray *plhs[1]);
extern void funDiffVolt_1_atexit(void);
extern void funDiffVolt_1_initialize(void);
extern void funDiffVolt_1_terminate(void);
extern void funDiffVolt_1_xil_terminate(void);

#endif

/*
 * File trailer for _coder_funDiffVolt_1_api.h
 *
 * [EOF]
 */
