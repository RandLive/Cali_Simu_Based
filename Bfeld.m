function B=Bfeld(m,x)
% Calculate B-field (dipole based)

B=3*x*dot(m,x)/(norm(x)^5)- m/(norm(x)^3);