close all; clear; clc;

global varNum varMaxIter refPose meaVoltage varStartingPoint searchRangeCoef  

% load reference position
load POR_pmm; 
% load measure voltages
load U_pmm

refPose = POR_pmm;
meaVoltage = U_pmm;

% Difine max iteration number
varMaxIter = 20000;
% Difine number of points taken into calculation
varNum = 500;
% Difine which point to start with in the dataset
varStartingPoint = 122;


searchRangeCoef = 100;   % 0.1mm


%% Synchronize chosen dataset
% POR = refPose(varStartingPoint:varStartingPoint+varNum,:);
% U = meaVoltage(varStartingPoint:varStartingPoint+varNum,:);

%% Start Search 
History=SGOPTM();
save PMM

%% Output result - calibration matrix
% koord_alle_alle=x;