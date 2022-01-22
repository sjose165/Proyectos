fs=1500; %definimos variable frecuencia de muestreo
f=215; %definimos variable frecuecnia de nuestro sonido
 
duracion_segundos=5; %definimos la duracion de nuestro sonido
 
b=f*2*pi; %definimos variable b a utilizar en nuesta funcion a·sin(bt+c)
a=1; % a debe ser 1 para que la funcion no se distorcione al reproducirse
c=0;
 
t=[0:1/500:duracion_segundos];
 
%%%%% para sumar armonicos
 
cantidad_de_armonicos=8;
 
x=zeros(1,length(t));
 
for j=1:cantidad_de_armonicos
x=[sin(j*b*t)]+x;
end
 
x=x/max(x); % normalizamos el vector para garantizar amplitud 1
 
sound(x,fs); %reproducir el sonido

 
