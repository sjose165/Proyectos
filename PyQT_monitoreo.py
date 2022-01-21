#from ventana_ui import *
from PyQt5.QtCore import QTimer, QTime, Qt
from PyQt5.QtGui import QFont
import RPi.GPIO as GPIO
import serial
import matplotlib.pyplot as plt
import json
import time
team = {}
team['sensor']=[]
team['sensor2']=[]
team['sensor3']=[]
team['fecha']=[]
team['5']=[]
arduino = serial.Serial("/dev/ttyACM0",115200)
arduino.flushInput()
sensordedistancia=[]
sensordetemp=[]
sensordeluz=[]

x=[]
y=[]

class MainWindow(QtWidgets.QMainWindow, Ui_MainWindow):
    def __init__(self, *args, **kwargs):
        QtWidgets.QMainWindow.__init__(self, *args, **kwargs)
        self.setupUi(self)
        
        self.pushButton.setText("grafica sensor de distancia")
        self.pushButton_2.setText("grafica sensor de temperatura")
        self.pushButton_3.setText("grafica sensor de luz")
        self.pushButton.clicked.connect(self.graficasensordedistancia)
        self.pushButton_2.clicked.connect(self.graficasensordetemp)
        self.pushButton_3.clicked.connect(self.graficasensordeluz
        font = QFont('Arial',12,QFont.Bold)
        self.label.setFont(font)
        timer = QTimer(self)
        timer.timeout.connect(self.guardadodedatos)
        timer.start(100)
        
    def guardadodedatos(self):
        j=0
        k=0
        val=arduino.readline()
        val1=val.decode('utf-8').strip()
        x= val1.split()
        for i in x:
            j=j+1
        if j==5:
            team['sensor'].append(x[0])
            team['sensor2'].append(x[2])
            team['sensor3'].append(x[4])
            ltime= time.asctime( time.localtime(time.time()))
            team['fecha'].append(ltime)
            with open('data1.json','w') as f:
                json.dump(team,f)
            self.label.setText(val1)
            j=0
            k=k+1
        
    def graficasensordedistancia(self):
        k=0
        f=open('data1.json')
        team = json.load(f)
        plt.title('Caudal vs. Tiempo')
        plt.plot(team['fecha'],team['sensor'])
        plt.grid(True)
        plt.show()
        
        

    def graficasensordetemp(self):
        f=open('data1.json')
        team = json.load(f)
        plt.title('temperatura vs. Tiempo')
        plt.plot(team['fecha'],team['sensor2'])
        plt.grid(True)
        plt.show()
      
       
    
        
    def graficasensordeluz(self):
        f=open('data1.json')
        team = json.load(f)
        plt.title('luz vs. Tiempo')
        plt.plot(team['fecha'],team['sensor3'])
        plt.grid(True)
        plt.show()
       
    
    
if __name__ == "__main__":
    app = QtWidgets.QApplication([])
    window = MainWindow()
    window.show()
    app.exec_()
GPIO.cleanup()


