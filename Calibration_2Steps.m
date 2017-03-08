close all; clear; clc;

global varNum varMaxIter refPose meaVoltage varStartingPoint searchRangeCoef  

% load reference position
load POR_mm; 
% load measure voltages
load U_mm

refPose = POR_mm;
meaVoltage = U_mm;

% Difine max iteration number
varMaxIter = 20000;
% Difine number of points taken into calculation
varNum = 500;
% Difine which point to start with in the dataset
varStartingPoint = 122;


searchRangeCoef = 1;   % 0.1mm



%% Synchronize chosen dataset
% POR = refPose(varStartingPoint:varStartingPoint+varNum,:);
% U = meaVoltage(varStartingPoint:varStartingPoint+varNum,:);

%% Start Search 
History=SGOPTM();

save MM

%% Output result - calibration matrix
% koord_alle_alle=x;