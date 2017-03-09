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
varNum = 725;
% Difine which point to start with in the dataset
varStartingPoint = 1;


searchRangeCoef = 1;   



%% Synchronize chosen dataset
% POR = refPose(varStartingPoint:varStartingPoint+varNum,:);
% U = meaVoltage(varStartingPoint:varStartingPoint+varNum,:);

%% Start Search 
History=SGOPTM();
save CM
%% Output result - calibration matrix
% koord_alle_alle=x;