#include <LiquidCrystal_I2C.h>
//Librerias
#include <Wire.h> //comms
#include <Adafruit_MLX90614.h> //Termico
//#include <LiquidCrystal_I2C.h> //Pantalla
#include <SR04.h> //Ultrasonico
#include "pitches.h" //Buzzer

//Definicion de Pines
#define Echo 11 //Echo del Ultrasonico
#define Trig 10 //Trig del Ultrasonico
#define LP 5 //Salida LED ADVERTENCIA 
#define LG 4 //SALIDA LED APROBADO
int BZ = 7;      // BUZZER EN PIN 7 

//Inicializar
Adafruit_MLX90614 mlx = Adafruit_MLX90614(); //Sensor Termico
LiquidCrystal_I2C lcd (0x27,16,2); // Pantalla LCD

SR04 sr04=SR04(Echo,Trig); //Ultrasonico

//Variables
int Espera1=500; //Espera en el loop

//Distancia
int Dist; //Distancia del ultrasonico
int DistMin=15; //Distancia minima para detectar al sujeto (mm)
int Presente=0; //Si hay alguien frente al Termometro
int Espera=2000; //Tiempo de espera para verificar sujeto
unsigned long Tiempo=0; //Tiempo que lleva detectado para Millis
int Ahora=0; //Millis en el momento que se inicia

//Temperatura
float TempObj; //Temperatura del sujeto
float TempMax=37.00; //Temperatura maxima permitida
int TpoAlarma=200; //Tiempo de Alarma por alta temperatura

void setup() 
{
  pinMode(LP,OUTPUT); //LED
  mlx.begin(); //Termico
  
  //Sonido inicial
  tone(12,NOTE_C5,3000);
  digitalWrite(LP,HIGH);
  delay(3000);
  digitalWrite(LP,LOW);

//Mensaje inicial
  lcd.init();
  lcd.backlight();
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Ambiente: ");
  lcd.setCursor(10,0);
  lcd.print(mlx.readAmbientTempC());
  lcd.setCursor(0,1);
  lcd.print("Objeto: ");
  lcd.print(TempObj);
  lcd.setCursor(10,1);
  delay(1000);
}

void loop() 
{
          //Distancia
          Dist=sr04.Distance();
      if(Dist>DistMin) //No hay nadie
             {
                Presente=0;
                 Tiempo=millis();
              }
              
      if(Dist<=DistMin && Presente==0) //Llego alguien, tomemos el tiempo
              {
                Presente=1;
                 Tiempo=millis();
              }

      if(Presente==1)
              {
                  if(millis()-Tiempo>Espera) //Se completo el tiempo
                        {
                           Presente=2;
                        }
               }


//Temperaturas
        lcd.setCursor(4,1);
        lcd.print(mlx.readAmbientTempC());
        lcd.setCursor(8,1);
        lcd.print("c");

        TempObj=mlx.readObjectTempC();
        
        switch(Presente)
              {
                  case 0: //No hay nadie
                    lcd.setCursor(4,2);
                    lcd.print("--.--c");
                   break;


                  case 1: //Llego alguien
                    lcd.setCursor(4,2);
                    lcd.print("--.--c");
                    tone(12,NOTE_C5,TpoAlarma);
                  break;

                   case 2: //Se Completo el tiempo
                      lcd.setCursor(4,2);
                      lcd.print(TempObj);
                      lcd.setCursor(9,2);
                      lcd.print("c");
                      
                        if(TempObj>TempMax)
                             {
                                tone(12,NOTE_G5,TpoAlarma);
                                   // lcd.setCursor(0,3);
                                    //lcd.print("TEMP ALTA!!!");
                                    digitalWrite(LP,HIGH);
                                    delay(TpoAlarma);
                                    digitalWrite(LP,LOW);
                              }

                          else
                              {
                                 digitalWrite(LG,HIGH);
                                    delay(TpoAlarma);
                                 digitalWrite(LG,LOW);
                              }
                    break;
                    
             }
}
