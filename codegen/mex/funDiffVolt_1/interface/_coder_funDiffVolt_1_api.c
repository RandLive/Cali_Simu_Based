/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_funDiffVolt_1_api.c
 *
 * Code generation for function '_coder_funDiffVolt_1_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "funDiffVolt_1.h"
#include "_coder_funDiffVolt_1_api.h"
#include "funDiffVolt_1_data.h"

/* Function Declarations */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[56];
static const mxArray *b_emlrt_marshallOut(const real_T u[5808]);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_refPose,
  const char_T *identifier, real_T y[3630]);
static const mxArray *c_emlrt_marshallOut(const real_T u[24]);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[3630]);
static const mxArray *d_emlrt_marshallOut(const real_T u);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_meaVoltage,
  const char_T *identifier, real_T y[5808]);
static const mxArray *e_emlrt_marshallOut(const real_T u[3973]);
static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *x, const
  char_T *identifier))[56];
static const mxArray *emlrt_marshallOut(const real_T u[3630]);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[5808]);
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_m1, const
  char_T *identifier, real_T y[24]);
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[24]);
static real_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *c_K, const
  char_T *identifier);
static real_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_F, const
  char_T *identifier, real_T y[3973]);
static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[3973]);
static real_T (*m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[56];
static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[3630]);
static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[5808]);
static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[24]);
static real_T q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[3973]);

/* Function Definitions */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[56]
{
  real_T (*y)[56];
  y = m_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static const mxArray *b_emlrt_marshallOut(const real_T u[5808])
{
  const mxArray *y;
  const mxArray *b_m1;
  static const int32_T iv1[2] = { 726, 8 };

  real_T *pData;
  int32_T i;
  y = NULL;
  b_m1 = emlrtCreateNumericArray(2, iv1, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(b_m1);
  for (i = 0; i < 5808; i++) {
    pData[i] = u[i];
  }

  emlrtAssign(&y, b_m1);
  return y;
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_refPose,
  const char_T *identifier, real_T y[3630])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  d_emlrt_marshallIn(sp, emlrtAlias(b_refPose), &thisId, y);
  emlrtDestroyArray(&b_refPose);
}

static const mxArray *c_emlrt_marshallOut(const real_T u[24])
{
  const mxArray *y;
  const mxArray *m2;
  static const int32_T iv2[2] = { 8, 3 };

  real_T *pData;
  int32_T i;
  y = NULL;
  m2 = emlrtCreateNumericArray(2, iv2, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m2);
  for (i = 0; i < 24; i++) {
    pData[i] = u[i];
  }

  emlrtAssign(&y, m2);
  return y;
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[3630])
{
  n_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *d_emlrt_marshallOut(const real_T u)
{
  const mxArray *y;
  const mxArray *m3;
  y = NULL;
  m3 = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m3);
  return y;
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_meaVoltage,
  const char_T *identifier, real_T y[5808])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  f_emlrt_marshallIn(sp, emlrtAlias(b_meaVoltage), &thisId, y);
  emlrtDestroyArray(&b_meaVoltage);
}

static const mxArray *e_emlrt_marshallOut(const real_T u[3973])
{
  const mxArray *y;
  const mxArray *m4;
  static const int32_T iv3[2] = { 1, 3973 };

  real_T *pData;
  int32_T i;
  y = NULL;
  m4 = emlrtCreateNumericArray(2, iv3, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m4);
  for (i = 0; i < 3973; i++) {
    pData[i] = u[i];
  }

  emlrtAssign(&y, m4);
  return y;
}

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *x, const
  char_T *identifier))[56]
{
  real_T (*y)[56];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(x), &thisId);
  emlrtDestroyArray(&x);
  return y;
}
  static const mxArray *emlrt_marshallOut(const real_T u[3630])
{
  const mxArray *y;
  const mxArray *m0;
  static const int32_T iv0[2] = { 726, 5 };

  real_T *pData;
  int32_T i;
  y = NULL;
  m0 = emlrtCreateNumericArray(2, iv0, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m0);
  for (i = 0; i < 3630; i++) {
    pData[i] = u[i];
  }

  emlrtAssign(&y, m0);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[5808])
{
  o_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_m1, const
  char_T *identifier, real_T y[24])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  h_emlrt_marshallIn(sp, emlrtAlias(b_m1), &thisId, y);
  emlrtDestroyArray(&b_m1);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[24])
{
  p_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *c_K, const
  char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = j_emlrt_marshallIn(sp, emlrtAlias(c_K), &thisId);
  emlrtDestroyArray(&c_K);
  return y;
}

static real_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = q_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_F, const
  char_T *identifier, real_T y[3973])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  l_emlrt_marshallIn(sp, emlrtAlias(b_F), &thisId, y);
  emlrtDestroyArray(&b_F);
}

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[3973])
{
  r_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T (*m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[56]
{
  real_T (*ret)[56];
  static const int32_T dims[2] = { 8, 7 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[56])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[3630])
{
  static const int32_T dims[2] = { 726, 5 };

  int32_T i2;
  int32_T i3;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  for (i2 = 0; i2 < 5; i2++) {
    for (i3 = 0; i3 < 726; i3++) {
      ret[i3 + 726 * i2] = (*(real_T (*)[3630])mxGetData(src))[i3 + 726 * i2];
    }
  }

  emlrtDestroyArray(&src);
}

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[5808])
{
  static const int32_T dims[2] = { 726, 8 };

  int32_T i4;
  int32_T i5;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  for (i4 = 0; i4 < 8; i4++) {
    for (i5 = 0; i5 < 726; i5++) {
      ret[i5 + 726 * i4] = (*(real_T (*)[5808])mxGetData(src))[i5 + 726 * i4];
    }
  }

  emlrtDestroyArray(&src);
}

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[24])
{
  static const int32_T dims[2] = { 8, 3 };

  int32_T i6;
  int32_T i7;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  for (i6 = 0; i6 < 3; i6++) {
    for (i7 = 0; i7 < 8; i7++) {
      ret[i7 + (i6 << 3)] = (*(real_T (*)[24])mxGetData(src))[i7 + (i6 << 3)];
    }
  }

  emlrtDestroyArray(&src);
}

static real_T q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[3973])
{
  static const int32_T dims[2] = { 1, 3973 };

  int32_T i8;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  for (i8 = 0; i8 < 3973; i8++) {
    ret[i8] = (*(real_T (*)[3973])mxGetData(src))[i8];
  }

  emlrtDestroyArray(&src);
}

void funDiffVolt_1_api(const mxArray * const prhs[1], const mxArray *plhs[1])
{
  real_T (*x)[56];
  const mxArray *tmp;
  real_T F_out;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Marshall function inputs */
  x = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "x");

  /* Marshall in global variables */
  tmp = emlrtGetGlobalVariable("refPose");
  if (tmp != NULL) {
    c_emlrt_marshallIn(&st, tmp, "refPose", refPose);
    refPose_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("meaVoltage");
  if (tmp != NULL) {
    e_emlrt_marshallIn(&st, tmp, "meaVoltage", meaVoltage);
    meaVoltage_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("Koordinate_real_GLS");
  if (tmp != NULL) {
    c_emlrt_marshallIn(&st, tmp, "Koordinate_real_GLS", Koordinate_real_GLS);
    Koordinate_real_GLS_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("m1");
  if (tmp != NULL) {
    g_emlrt_marshallIn(&st, tmp, "m1", m1);
    m1_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("m");
  if (tmp != NULL) {
    g_emlrt_marshallIn(&st, tmp, "m", m);
    m_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("K");
  if (tmp != NULL) {
    K = i_emlrt_marshallIn(&st, tmp, "K");
    K_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("minVoltage");
  if (tmp != NULL) {
    minVoltage = i_emlrt_marshallIn(&st, tmp, "minVoltage");
    minVoltage_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("varStartingPoint");
  if (tmp != NULL) {
    varStartingPoint = i_emlrt_marshallIn(&st, tmp, "varStartingPoint");
    varStartingPoint_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("varNum");
  if (tmp != NULL) {
    varNum = i_emlrt_marshallIn(&st, tmp, "varNum");
    varNum_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("F");
  if (tmp != NULL) {
    k_emlrt_marshallIn(&st, tmp, "F", F);
    F_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("C");
  if (tmp != NULL) {
    C = i_emlrt_marshallIn(&st, tmp, "C");
    C_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("r");
  if (tmp != NULL) {
    g_emlrt_marshallIn(&st, tmp, "r", r);
    r_dirty = 0U;
  }

  /* Invoke the target function */
  F_out = funDiffVolt_1(&st, *x);

  /* Marshall out global variables */
  emlrtPutGlobalVariable("refPose", emlrt_marshallOut(refPose));
  emlrtPutGlobalVariable("meaVoltage", b_emlrt_marshallOut(meaVoltage));
  emlrtPutGlobalVariable("Koordinate_real_GLS", emlrt_marshallOut
    (Koordinate_real_GLS));
  emlrtPutGlobalVariable("m1", c_emlrt_marshallOut(m1));
  emlrtPutGlobalVariable("m", c_emlrt_marshallOut(m));
  emlrtPutGlobalVariable("K", d_emlrt_marshallOut(K));
  emlrtPutGlobalVariable("minVoltage", d_emlrt_marshallOut(minVoltage));
  emlrtPutGlobalVariable("varStartingPoint", d_emlrt_marshallOut
    (varStartingPoint));
  emlrtPutGlobalVariable("varNum", d_emlrt_marshallOut(varNum));
  emlrtPutGlobalVariable("F", e_emlrt_marshallOut(F));
  emlrtPutGlobalVariable("C", d_emlrt_marshallOut(C));
  emlrtPutGlobalVariable("r", c_emlrt_marshallOut(r));

  /* Marshall function outputs */
  plhs[0] = d_emlrt_marshallOut(F_out);
}

/* End of code generation (_coder_funDiffVolt_1_api.c) */
