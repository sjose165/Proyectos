import RPi.GPIO as GPIO
import time
import os
import glob
import time

def ConexDatos(self):

        KEY = '1-yibbEXLvaPeW1lHfAF_0mcr7TcQkMzMZOi2usGYzsc'
        EVENT = 'Datos3_sensores'

        try:
            self.response = requests.get('https://maker.ifttt.com', timeout = 5)
            GPIO.output(11,GPIO.HIGH)
            print(self.response.status_code)
            requests.post('https://maker.ifttt.com/trigger/'+EVENT+'/with/key/'+KEY,
                          {'value1':self.Distancia, 'value2':self.Resistencia, 'value3':self.Temperatura)
        except (requests.ConnectionError, requests.Timeout) as exception:
            GPIO.output(11,GPIO.LOW)

def read_temp_raw():
    f = open(device_file, 'r')
    lines = f.readlines()
    f.close()
    return lines

def read_temp():
    archivo=open("Datos3_sensores.xlsx","a")
    archivo.write("Temperatura:"+chr(10))                      
    lines = read_temp_raw()
    while lines[0].strip()[-3:] != 'YES':
        time.sleep(0.2)
        lines = read_temp_raw()
    equals_pos = lines[1].find('t=')
    if equals_pos != -1:
        temp_string = lines[1][equals_pos+2:]
        temp_c = float(temp_string) / 1000.0
        archivo.write(str(temp_c)+chr(10))
        return temp_c                
    archivo.close()

def readDistancia():
    archivo=open("Datos3_sensores.xlsx","a")
    archivo.write("Distancia:"+chr(10))                         
    GPIO.output(18,1)
	time.sleep(0.000001)
	GPIO.output(18,0)
	inicio=time.time()

	while(GPIO.input(16)==GPIO.LOW):
		inicio=time.time()
	while(GPIO.input(16)==GPIO.HIGH):
		final=time.time()
	tiempo=final-inicio
	distancia=tiempo*34000/2
	if distancia>=2 and distancia<=400:
		archivo.write(str(distancia)+chr(10))
		print(distancia)
	if (time.time()-init_tiempo)>=10:
		break
	time.sleep(1)
    archivo.close()

def readResistencia():
    archivo=open("Datos3_sensores.xlsx","a")
    archivo.write("Resistencia"+chr(10))
        GPIO.setup(resistorPin, GPIO.OUT)
        GPIO.output(resistorPin, GPIO.LOW)
        time.sleep(0.1)

        GPIO.setup(resistorPin, GPIO.IN)
        currentTime = time.time()
        diff = 0

        while(GPIO.input(resistorPin) == GPIO.LOW):
            diff  = time.time() - currentTime
            archivo.write(str(diff*1000)+chr(10))
        print(diff * 1000)
        time.sleep(1)
    archivo.close()


GPIO.setwarnings(False)
GPIO.setmode(GPIO.BOARD)
GPIO.setup(16,GPIO.IN)
GPIO.setup(18,GPIO.OUT)
init_tiempo=time.time()
resistorPin = 7
archivo=open("Datos3_sensores.xlsx","w")


while True:
    readDistancia()
    readResistencia()
    read_temp()
    time.sleep(2)

print ("El prgrama ha finalizado")
