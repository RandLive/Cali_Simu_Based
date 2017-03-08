clear;close;clc;

load PMM;

CaliTable = History.x;
% 
TotalLength = max(length(CaliTable));
Iterations = max(length(CaliTable))/8;

TotalLength = 24000;
Iterations = TotalLength/8;


CaliTable_Separate = zeros(Iterations,8,7);

for times_1=1:Iterations
    CaliTable_Separate(times_1,:,:) = CaliTable((times_1-1)*8+1:(times_1-1)*8+8,:);
end

deltaX = CaliTable_Separate(:,:,4);
deltaY = CaliTable_Separate(:,:,5);
deltaZ = CaliTable_Separate(:,:,6);
deltaPhi = CaliTable_Separate(:,:,2)/5;
deltaTheta = CaliTable_Separate(:,:,3)/5;

shiftX = [0.1011	0.0369	-0.0492	-0.3852	-0.1208	-0.4132	-0.0382	-0.2443];
shiftY = [0.2956	-0.1565	-0.4444	0.3971	0.4929	0.3175	0.1244	0.1419];
shiftZ = [-0.2684	0.4684	0.3638	0.3123	-0.1747	-0.0577	0.2663	0.1636];
shiftPhi = [0.0491	0.3687	-0.3103	0.4939	0.3095	-0.2088	0.2121	-0.2074];
shiftTheta = [0.3339	-0.2371	-0.4461	0.0313	-0.3451	-0.3193	-0.1298	-0.0436];

ErrorX=zeros(Iterations,8);
ErrorY=zeros(Iterations,8);
ErrorZ=zeros(Iterations,8);
ErrorPhi=zeros(Iterations,8);
ErrorTheta=zeros(Iterations,8);


for times_2=1:Iterations
    ErrorX(times_2,:)=-shiftX-deltaX(times_2,:);
    ErrorY(times_2,:)=-shiftY-deltaY(times_2,:);
    ErrorZ(times_2,:)=-shiftZ-deltaZ(times_2,:);
    ErrorPhi(times_2,:)=shiftPhi-deltaPhi(times_2,:);
    ErrorTheta(times_2,:)=shiftTheta-deltaTheta(times_2,:);
end

ErrorX_all = zeros(1,Iterations);
ErrorY_all = zeros(1,Iterations);
ErrorZ_all = zeros(1,Iterations);
ErrorPhi_all = zeros(1,Iterations);
ErrorTheta_all = zeros(1,Iterations);


for times_3=1:Iterations
    ErrorX_all(times_3) = sum(abs(ErrorX(times_3,:)));
    ErrorY_all(times_3) = sum(abs(ErrorY(times_3,:)));
    ErrorZ_all(times_3) = sum(abs(ErrorZ(times_3,:)));
    ErrorPhi_all(times_3) = sum(abs(ErrorPhi(times_3,:)));
    ErrorTheta_all(times_3) = sum(abs(ErrorTheta(times_3,:)));
end

Error_Position_all = sqrt(ErrorX_all.^2+ErrorY_all.^2+ErrorZ_all.^2);
Error_Orientation_all = sqrt(ErrorPhi_all.^2+ErrorTheta_all.^2);

subplot(2,1,1)
plot(Error_Position_all);hold on;
subplot(2,1,2)
plot(Error_Orientation_all);hold on;

%%
clear;clc;

load MM;

CaliTable = History.x;
% 
TotalLength = max(length(CaliTable)); %#ok<*NASGU>
Iterations = max(length(CaliTable))/8;

TotalLength = 24000;
Iterations = TotalLength/8;


CaliTable_Separate = zeros(Iterations,8,7);

for times_1=1:Iterations
    CaliTable_Separate(times_1,:,:) = CaliTable((times_1-1)*8+1:(times_1-1)*8+8,:);
end

deltaX = CaliTable_Separate(:,:,4);
deltaY = CaliTable_Separate(:,:,5);
deltaZ = CaliTable_Separate(:,:,6);
deltaPhi = CaliTable_Separate(:,:,2)/5;
deltaTheta = CaliTable_Separate(:,:,3)/5;

shiftX = 10*[0.1011	0.0369	-0.0492	-0.3852	-0.1208	-0.4132	-0.0382	-0.2443];
shiftY = 10*[0.2956	-0.1565	-0.4444	0.3971	0.4929	0.3175	0.1244	0.1419];
shiftZ = 10*[-0.2684	0.4684	0.3638	0.3123	-0.1747	-0.0577	0.2663	0.1636];
shiftPhi = 10*[0.0491	0.3687	-0.3103	0.4939	0.3095	-0.2088	0.2121	-0.2074];
shiftTheta = 10*[0.3339	-0.2371	-0.4461	0.0313	-0.3451	-0.3193	-0.1298	-0.0436];

ErrorX=zeros(Iterations,8);
ErrorY=zeros(Iterations,8);
ErrorZ=zeros(Iterations,8);
ErrorPhi=zeros(Iterations,8);
ErrorTheta=zeros(Iterations,8);


for times_2=1:Iterations
    ErrorX(times_2,:)=-shiftX-deltaX(times_2,:);
    ErrorY(times_2,:)=-shiftY-deltaY(times_2,:);
    ErrorZ(times_2,:)=-shiftZ-deltaZ(times_2,:);
    ErrorPhi(times_2,:)=shiftPhi-deltaPhi(times_2,:);
    ErrorTheta(times_2,:)=shiftTheta-deltaTheta(times_2,:);
end

ErrorX_all = zeros(1,Iterations);
ErrorY_all = zeros(1,Iterations);
ErrorZ_all = zeros(1,Iterations);
ErrorPhi_all = zeros(1,Iterations);
ErrorTheta_all = zeros(1,Iterations);


for times_3=1:Iterations
    ErrorX_all(times_3) = sum(abs(ErrorX(times_3,:)));
    ErrorY_all(times_3) = sum(abs(ErrorY(times_3,:)));
    ErrorZ_all(times_3) = sum(abs(ErrorZ(times_3,:)));
    ErrorPhi_all(times_3) = sum(abs(ErrorPhi(times_3,:)));
    ErrorTheta_all(times_3) = sum(abs(ErrorTheta(times_3,:)));
end

Error_Position_all = sqrt(ErrorX_all.^2+ErrorY_all.^2+ErrorZ_all.^2);
Error_Orientation_all = sqrt(ErrorPhi_all.^2+ErrorTheta_all.^2);

subplot(2,1,1)
plot(Error_Position_all);hold on;
subplot(2,1,2)
plot(Error_Orientation_all);hold on;

%%
clear;clc;

load CM;

CaliTable = History.x;

TotalLength = max(length(CaliTable));
Iterations = max(length(CaliTable))/8;

TotalLength = 24000;
Iterations = TotalLength/8;

CaliTable_Separate = zeros(Iterations,8,7);

for times_1=1:Iterations
    CaliTable_Separate(times_1,:,:) = CaliTable((times_1-1)*8+1:(times_1-1)*8+8,:);
end

deltaX = CaliTable_Separate(:,:,4);
deltaY = CaliTable_Separate(:,:,5);
deltaZ = CaliTable_Separate(:,:,6);
deltaPhi = CaliTable_Separate(:,:,2)/5;
deltaTheta = CaliTable_Separate(:,:,3)/5;

shiftX = 100*[0.1011	0.0369	-0.0492	-0.3852	-0.1208	-0.4132	-0.0382	-0.2443];
shiftY = 100*[0.2956	-0.1565	-0.4444	0.3971	0.4929	0.3175	0.1244	0.1419];
shiftZ = 100*[-0.2684	0.4684	0.3638	0.3123	-0.1747	-0.0577	0.2663	0.1636];
shiftPhi = 100*[0.0491	0.3687	-0.3103	0.4939	0.3095	-0.2088	0.2121	-0.2074];
shiftTheta = 100*[0.3339	-0.2371	-0.4461	0.0313	-0.3451	-0.3193	-0.1298	-0.0436];

ErrorX=zeros(Iterations,8);
ErrorY=zeros(Iterations,8);
ErrorZ=zeros(Iterations,8);
ErrorPhi=zeros(Iterations,8);
ErrorTheta=zeros(Iterations,8);


for times_2=1:Iterations
    ErrorX(times_2,:)=-shiftX-deltaX(times_2,:);
    ErrorY(times_2,:)=-shiftY-deltaY(times_2,:);
    ErrorZ(times_2,:)=-shiftZ-deltaZ(times_2,:);
    ErrorPhi(times_2,:)=shiftPhi-deltaPhi(times_2,:);
    ErrorTheta(times_2,:)=shiftTheta-deltaTheta(times_2,:);
end

ErrorX_all = zeros(1,Iterations);
ErrorY_all = zeros(1,Iterations);
ErrorZ_all = zeros(1,Iterations);
ErrorPhi_all = zeros(1,Iterations);
ErrorTheta_all = zeros(1,Iterations);


for times_3=1:Iterations
    ErrorX_all(times_3) = sum(abs(ErrorX(times_3,:)));
    ErrorY_all(times_3) = sum(abs(ErrorY(times_3,:)));
    ErrorZ_all(times_3) = sum(abs(ErrorZ(times_3,:)));
    ErrorPhi_all(times_3) = sum(abs(ErrorPhi(times_3,:)));
    ErrorTheta_all(times_3) = sum(abs(ErrorTheta(times_3,:)));
end

Error_Position_all = sqrt(ErrorX_all.^2+ErrorY_all.^2+ErrorZ_all.^2);
Error_Orientation_all = sqrt(ErrorPhi_all.^2+ErrorTheta_all.^2);

subplot(2,1,1)
plot(Error_Position_all);hold off;grid on;
subplot(2,1,2)
plot(Error_Orientation_all);hold off;grid on;

