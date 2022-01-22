%Program 3_7
%Factored form of a z transform
clc
clear all
close all
num= input('Type in numerator coefficients=');
den= input ('Type in denominator coefficients=');
[z,p,k]=tf2zp(num,den);
m=abs(p);
disp('Zeros are at'); disp(z);
disp('Poles are at'); disp(p);
disp('Gain constant'); disp(k);
disp('Radius of poles'); disp(m);
sos=zp2sos(z,p,k);
disp('Second order sections'); disp(real(sos));
zplane(num,den)