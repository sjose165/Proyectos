#Graficar datos captados por el sensor ultrasonico
import pandas as pd
#importamos el archivo y declaramos que la primer fila es el encabezado
#Datos separados por espacios
data=pd.read_csv('DatosPGrficar.txt',header=1,delim_whitespace=True)
#Asgino los ejes a trabajar
#Datos de x la primer columna y lo mismo para Y
x=data.ix[:,0]
y=data.ix[:,1]
print (data)
