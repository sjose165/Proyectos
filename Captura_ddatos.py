# Importando bibliotecas para el sensor y para guardar datos en un archivo.

from smbus import SMBus
from bme280 import BME280
import time
import datetime
from datetime import date
from openpyxl import load_workbook

print("""Lectura de temperatura, presión y humedad
presione Ctrl+c para salir""")

# Inicializa el BME280
bus = SMBus(1)
bme280 = BME280(i2c_dev=bus)

#Toma una primer lectura y la borra para desacerce de cualquier valor basura que este ocupando la memoria.
temperature = bme280.get_temperature()
pressure = bme280.get_pressure()
humidity = bme280.get_humidity()
time.sleep(1)

#Selecciona el archivo en el cual se escribirán los datos
wb = load_workbook('/home/pi/Documents/Clima_1.xlsx')
#Selecciona la primer hoja
sheet = wb['Sheet1']
numero = 0


try:
    while True:
        #lectura del sensor
        temperature = bme280.get_temperature()
        pressure = bme280.get_pressure()
        humidity = bme280.get_humidity()
        fecha = date.today()
        hora = datetime.datetime.now().time()
        numero = numero + 1

        #imprimiendo valores
        print('agregando datos a la hoja de calculo')
        print (numero)
        print(fecha)
        print(hora)
        print('{:05.2f}*C {:05.2f}hPa {:05.2f}%'.format(temperature, pressure, humidity))
        time.sleep(1)

        #formato de guardado en la hoja de calculo
        row = (numero, fecha, hora, temperature, pressure, humidity)
        sheet.append(row)

        #Guardar la hoja de calculo
        wb.save('/home/pi/Documents/Clima_1.xlsx')

        #Tiempo entre medidas en segundos.
        time.sleep(3)

finally:
    #asegurarse de que el archivo se guarde
    wb.save('/home/pi/Documents/Clima_1.xlsx')
