import datetime
import pandas as pd
import matplotlib.pyplot as plt

file = "DatosPGrficar.txt"

data = pd.read_csv(file)
#mostramos la información
data.info()
#definimos las columnas
tiempo = data['Tiempo']
tiempo = tiempo.tolist()
dist=data['Distancia']
dist=dist.tolist()
print(tiempo)
print(dist)
#Generamos el grafico
plt.plot(tiempo,dist)
plt.title("Distancia sensor")
#plt.xticks(rotation='vertical')
plt.xlabel('Tiempo (s)')
plt.ylabel('Distancia (cm)')
plt.show()
