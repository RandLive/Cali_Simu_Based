function F_out=funDiffVolt_1(x)
% Calculate difference between measured and real voltage at each position

global varStartingPoint varNum meaVoltage refPose C K r m Koordinate_real_GLS m1 minVoltage F

Koordinate_real = refPose;
U = meaVoltage;

for j=1:8
    m1(j,:)=(m(j,1)+x(j,1)/100)*K*[sind(x(j,3)/5+m(j,3))*cosd(x(j,2)/5+m(j,2)) sind(x(j,3)/5+m(j,3))*sind(x(j,2)/5+m(j,2))        cosd(x(j,3)/5+m(j,3))]; %#ok<*AGROW>
end

Koordinate_real_GLS(:,4)=Koordinate_real(:,4);
Koordinate_real_GLS(:,5)=Koordinate_real(:,5);
Koordinate_real_GLS(:,1)=Koordinate_real(:,1);
Koordinate_real_GLS(:,2)=Koordinate_real(:,2);
Koordinate_real_GLS(:,3)=Koordinate_real(:,3);

minVoltage=0.002;
j=0;

% F=zeros(varNum);


for k=varStartingPoint:varStartingPoint+varNum
    n=[sind(Koordinate_real_GLS(k,5))*cosd(Koordinate_real_GLS(k,4)) sind(Koordinate_real_GLS(k,5))*sind(Koordinate_real_GLS(k,4)) cosd(Koordinate_real_GLS(k,5))];
    for i1=1:8        
        if (abs(U(k,i1)))>minVoltage
            j=j+1;
            F(j)= (abs(abs(U(k,i1))-abs(C*dot(Bfeld(m1(i1,:),Koordinate_real_GLS(k,1:3)-r(i1,:)+x(i1,4:6)/1000),n)))/abs(U(k,i1)));
        end     
    end
end

F_out=mean(F);

end
