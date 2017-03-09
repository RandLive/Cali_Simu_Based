function history = SGOPTM

global f C K m r varMaxIter searchRangeCoef


f=1e3;                                  % Frequency of Gnerated Signal
I=0.6602;                               % Normilized Current
numTransmitters=8;                      % Number of Transmitters
mu0=4*pi*10^-7;                         % Permeability Vacumm
mur_sende=1;                            % relative Permeability transmitter
mur_empfang=898.4;                      % relative permeability sensor

N_sende=207;                            % Windungszahl Sendespule
N_empfang=500;                          % Windungszahl Empfangsspule
R_sende=0.015;                          % Radius Sendespule
R_empfang=283.2*10^-6;                  % Radius Empfangsspule
A_Empfang=pi*R_empfang^2;               % Normalenfläche Empfangsspule

C1=mu0/(4*pi)*mur_sende;                % Constant of B field
C2=2*pi*f;                              % Angular Frequency
C3=-mur_empfang*N_empfang*A_Empfang;    % Constant for voltage calculation
Verstaerkung=144.3985;
C=Verstaerkung*C1*C2*C3;                % Constant - C
K=pi*N_sende*I*R_sende^2;               % Vorfaktor magnetisches Dipol

m=zeros(numTransmitters,3);             % Initialization
r=zeros(numTransmitters,3);

% load koord_alle_alle

faktor= [1 1 1 1 1 1 1 1]';
% faktor= [1+koord_alle_alle(1,1)/100 1+koord_alle_alle(2,1)/100 1+koord_alle_alle(3,1)/100 1+koord_alle_alle(4,1)/100 1+koord_alle_alle(5,1)/100 1+koord_alle_alle(6,1)/100 1+koord_alle_alle(7,1)/100 1+koord_alle_alle(8,1)/100]';

% % magnetisches Dipol
koord_alle_alle=zeros(8,7);

% phi=0+koord_alle_alle(1,2)/5;       theta=0+koord_alle_alle(1,3)/5;      m(1,:)=[faktor(1) phi theta];
% phi=20+koord_alle_alle(2,2)/5;      theta=30+koord_alle_alle(2,3)/5;     m(2,:)=[faktor(2) phi theta];
% phi=40+koord_alle_alle(3,2)/5;      theta=60+koord_alle_alle(3,3)/5;     m(3,:)=[faktor(3) phi theta];
% phi=60+koord_alle_alle(4,2)/5;      theta=90+koord_alle_alle(4,3)/5;     m(4,:)=[faktor(4) phi theta];
% phi=80+koord_alle_alle(5,2)/5;      theta=120+koord_alle_alle(5,3)/5;    m(5,:)=[faktor(5) phi theta];
% phi=100+koord_alle_alle(6,2)/5;     theta=150+koord_alle_alle(6,3)/5;    m(6,:)=[faktor(6) phi theta];
% phi=120+koord_alle_alle(7,2)/5;     theta=180+koord_alle_alle(7,3)/5;    m(7,:)=[faktor(7) phi theta];
% phi=140+koord_alle_alle(8,2)/5;     theta=210+koord_alle_alle(8,3)/5;    m(8,:)=[faktor(8) phi theta];

phi=0+koord_alle_alle(1,2)/5;       theta=0+koord_alle_alle(1,3)/5;        m(1,:)=[faktor(1) phi theta];
phi=20+koord_alle_alle(2,2)/5;      theta=30+koord_alle_alle(2,3)/5;       m(2,:)=[faktor(2) phi theta];
phi=40+koord_alle_alle(3,2)/5;      theta=60+koord_alle_alle(3,3)/5;       m(3,:)=[faktor(3) phi theta];
phi=60+koord_alle_alle(4,2)/5;      theta=90+koord_alle_alle(4,3)/5;       m(4,:)=[faktor(4) phi theta];
phi=80+koord_alle_alle(5,2)/5;      theta=120+koord_alle_alle(5,3)/5;      m(5,:)=[faktor(5) phi theta];
phi=100+koord_alle_alle(6,2)/5;     theta=150+koord_alle_alle(6,3)/5;      m(6,:)=[faktor(6) phi theta];
phi=120+koord_alle_alle(7,2)/5;     theta=180+koord_alle_alle(7,3)/5;      m(7,:)=[faktor(7) phi theta];
phi=140+koord_alle_alle(8,2)/5;     theta=210+koord_alle_alle(8,3)/5;      m(8,:)=[faktor(8) phi theta];

% faktor= [1+koord_alle_alle(1,1)/100 1+koord_alle_alle(2,1)/100 1+koord_alle_alle(3,1)/100 1+koord_alle_alle(4,1)/100 1+koord_alle_alle(5,1)/100 1+koord_alle_alle(6,1)/100 1+koord_alle_alle(7,1)/100 1+koord_alle_alle(8,1)/100]';

% % magnetisches Dipol

% % Ortskoordinaten der Spulen
r(1,:)=[-0.06+koord_alle_alle(1,4)/-1000  0.05+koord_alle_alle(1,5)/-1000 0+koord_alle_alle(1,6)/-1000];
r(2,:)=[-0.02+koord_alle_alle(2,4)/-1000  0.05+koord_alle_alle(2,5)/-1000 0+koord_alle_alle(2,6)/-1000];
r(3,:)=[0.02+koord_alle_alle(3,4)/-1000   0.05+koord_alle_alle(3,5)/-1000 0+koord_alle_alle(3,6)/-1000];
r(4,:)=[0.06+koord_alle_alle(4,4)/-1000   0.05+koord_alle_alle(4,5)/-1000 0+koord_alle_alle(4,6)/-1000];
r(5,:)=[-0.06+koord_alle_alle(5,4)/-1000 -0.05+koord_alle_alle(5,5)/-1000 0+koord_alle_alle(5,6)/-1000];
r(6,:)=[-0.02+koord_alle_alle(6,4)/-1000 -0.05+koord_alle_alle(6,5)/-1000 0+koord_alle_alle(6,6)/-1000];
r(7,:)=[0.02+koord_alle_alle(7,4)/-1000  -0.05+koord_alle_alle(7,5)/-1000 0+koord_alle_alle(7,6)/-1000];
r(8,:)=[0.06+koord_alle_alle(8,4)/-1000  -0.05+koord_alle_alle(8,5)/-1000 0+koord_alle_alle(8,6)/-1000];

% % Ortskoordinaten der Spulen
% r(1,:)=[-0.06 0.05 0];
% r(2,:)=[-0.02 0.05 0];
% r(3,:)=[0.02 0.05 0];
% r(4,:)=[0.06 0.05 0];
% r(5,:)=[-0.06 -0.05 0];
% r(6,:)=[-0.02 -0.05 0];
% r(7,:)=[0.02 -0.05 0];
% r(8,:)=[0.06 -0.05 0];

% [x,fval,exitflag,output]=POS_fast(RefPose,MeaVoltage);


% Abweichung=zeros(8,7);

% searchRangeCoef = 10;   % 0.1mm
% searchRangeCoef = 100;  % 1mm
% searchRangeCoef = -1000; % 1cm

% Search lower boundary
lb=searchRangeCoef*...
    [-1000 -1 -1 -1 -1 -1 -1;...
    -1000 -1 -1 -1 -1 -1 -1;...
    -1000 -1 -1 -1 -1 -1 -1;...
    -1000 -1 -1 -1 -1 -1 -1;...
    -1000 -1 -1 -1 -1 -1 -1;...
    -1000 -1 -1 -1 -1 -1 -1;...
    -1000 -1 -1 -1 -1 -1 -1;...
    -1000 -1 -1 -1 -1 -1 -1];

% Search uppper boundary
ub=searchRangeCoef*...
    [1000 1 1 1 1 1 1;...
    1000 1 1 1 1 1 1;...
    1000 1 1 1 1 1 1;...
    1000 1 1 1 1 1 1;...
    1000 1 1 1 1 1 1;...
    1000 1 1 1 1 1 1;...
    1000 1 1 1 1 1 1;...
    1000 1 1 1 1 1 1];

% lb=searchRangeCoef*...
%     [-100 -360/5 -360/5 -100 -100 -100 -100;...
%     -100 -360/5 -360/5 -100 -100 -100 -100;...
%     -100 -360/5 -360/5 -100 -100 -100 -100;...
%     -100 -360/5 -360/5 -100 -100 -100 -100;...
%     -100 -360/5 -360/5 -100 -100 -100 -100;...
%     -100 -360/5 -360/5 -100 -100 -100 -100;...
%     -100 -360/5 -360/5 -100 -100 -100 -100;...
%     -100 -360/5 -360/5 -100 -100 -100 -100];
% 
% % Search uppper boundary
% ub=searchRangeCoef*...
%     [100 360/5 360/5 100 100 100 100;...
%     100 360/5 360/5 100 100 100 100;...
%     100 360/5 360/5 100 100 100 100;...
%     100 360/5 360/5 100 100 100 100;...
%     100 360/5 360/5 100 100 100 100;...
%     100 360/5 360/5 100 100 100 100;...
%     100 360/5 360/5 100 100 100 100;...
%     100 360/5 360/5 100 100 100 100];


history.x = [];
history.fval = [];

x0=zeros(8,7);

% options = optimoptions(@patternsearch,'OutputFcn',@stopfun,...
%     'Display','iter','TolMesh',10^(-1000),'TolCon',10^(-1000),'TolX',10^(-1000),'TolFun',10^(-1000),'MaxIter',varMaxIter,'MaxFunEvals',200000000,'CompleteSearch','on','CompletePoll','on','UseParallel','never',...
%     'PlotFcn',@psplotbestf);

options = psoptimset('OutputFcn',@stopfun,'Display','iter','TolMesh',10^(-10),'TolCon',10^(-10),'TolX',10^(-10),'TolFun',10^(-10),'MaxIter',varMaxIter,'MaxFunEvals',200000000,'CompleteSearch','on','CompletePoll','on','UseParallel','never','PlotFcn',@psplotbestf);

kood_alle_alle = patternsearch(@funDiffVolt_1_mex, x0,[],[],[],[],lb,ub,[],options); %#ok<NASGU>
% kood_alle_alle = patternsearch(@funDiffVolt_1, x0,[],[],[],[],lb,ub,[],options); %#ok<NASGU>


    function [stop,options,optchanged] = stopfun(optimvalues,options,flag)
        % output function
        stop = false;
        optchanged = false;
        
        switch flag
            case 'iter'
                history.fval = [history.fval; optimvalues.fval];
                history.x=[history.x; optimvalues.x];
        end
    end

end

