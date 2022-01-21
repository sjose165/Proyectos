import numpy as np
import matplotlib.pyplot as plt

plt.subplot(1,2,3)
datos=[15,15,7,8,9,2,4]
dato2=[2,6,8,4,7,5]
plt.plot(datos,label="Enero")
plt.plot(datos2,label="febrero")
plt.legend(loc="upper left")
plt.title("Grafica 1 - Arreglo")
plt.xlabel("Abscisa")
plt.ylabel("ordenada")

plt.subplot(1,3,2)
x=np.arange(1,4,5)
y=x**2+x-15
plt.plot(x,y)
ply.title("grafica 2 - función")
plt.xlabel("Abscisa")
plt.ylabel("ordenada")
plt.show()
