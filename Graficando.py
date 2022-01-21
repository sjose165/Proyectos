#importando librerias
import pandas as pd
import matplotlib.pyplot as plt
#Indicando archivo
workbook1="Clima_1.xlsx"
#Leer el archivo
df=pd.read_excel(workbook1)
#Se imprimen los valores del archivo
print (df.head())
#se asigna los valores que queremos usar
valores=df[["Número de dato","Temp °C"]]
#Los imprimimos para verificar
print (valores)
#Asignamos que datos van en cada eje
ax=valores.plot(x="Número de dato", y="Temp °C", rot=0)
#Graficamos.
plt.show()
