@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2016b
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2016b\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=funDiffVolt_1_mex
set MEX_NAME=funDiffVolt_1_mex
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for funDiffVolt_1 > funDiffVolt_1_mex.mki
echo COMPILER=%COMPILER%>> funDiffVolt_1_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> funDiffVolt_1_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> funDiffVolt_1_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> funDiffVolt_1_mex.mki
echo LINKER=%LINKER%>> funDiffVolt_1_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> funDiffVolt_1_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> funDiffVolt_1_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> funDiffVolt_1_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> funDiffVolt_1_mex.mki
echo BORLAND=%BORLAND%>> funDiffVolt_1_mex.mki
echo OMPFLAGS= >> funDiffVolt_1_mex.mki
echo OMPLINKFLAGS= >> funDiffVolt_1_mex.mki
echo EMC_COMPILER=msvc140>> funDiffVolt_1_mex.mki
echo EMC_CONFIG=optim>> funDiffVolt_1_mex.mki
"C:\Program Files\MATLAB\R2016b\bin\win64\gmake" -B -f funDiffVolt_1_mex.mk
