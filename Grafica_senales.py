import numpy
import pylab

muestra=102


def Señal_cuadrada(A, f, DC):
    T = 1/f
    t = numpy.linspace(0, 3*T, muestra)
    C = []

    for x in t:
        if (x%T) < T/2:
            C.append(A+DC)
        if (x%T) >= T/2:
            C.append(-A+DC)
    S=[t,C]
    
    return S

def Señal_Sinusoidal(A, f, DC):
    T=1/f
    t=numpy.linspace(0,3*T,muestra)
    s=(A*numpy.sin(2*numpy.pi*f*t))+DC

    S=[t,s]
    return S

def Señal_Triangular(A, f, DC):
    T=1/f
    t=numpy.linspace(0,3*T,muestra)
    Tr=[]

    for y in range(0,3,1):
        for x in range(0,17,1):
            Tr.append((((A/17)*x)+DC-(A/2))*2)
        for x in range(0,17,1):
            Tr.append((A-(((A/17)*x))+DC -(A/2))*2)
    S=[t,Tr]
    return S

#####################################
Señal_S1=Señal_Sinusoidal(1,1,0)
#####################################
pylab.plot(Señal_S1[0],Señal_S1[1])
#####################################
Señal_S2=Señal_Sinusoidal(1,10,0)
#####################################
pylab.plot(Señal_S2[0],Señal_S2[1])
#####################################


#Señal1=Señal_cuadrada(1,10,0)
#Señal2=Señal_Sinusoidal(1,10,0)
#Señal3=Señal_Triangular(1,10,0)
#pylab.plot(Señal1[0],Señal1[1])
#pylab.plot(Señal2[0],Señal2[1])
#pylab.plot(Señal3[0],Señal3[1])
pylab.grid('on')
pylab.show()
