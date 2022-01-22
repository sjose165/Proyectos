load handel.mat
A1 = 'handel.wav';
audiowrite('A1.wav',y,Fs);
[y,Fs] = audioread('A1.wav');
n = 50;
Wn = 0.4;
b = fir1(n,Wn);
filtd=filter(b,1, y);
audiowrite('A2.wav',filtd,Fs);
sound(y,Fs);
pause(10);
sound(filtd,Fs);
