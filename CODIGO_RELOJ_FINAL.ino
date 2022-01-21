#include <Wire.h> 
#include "RTClib.h"
#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,4,5,6,7);
RTC_DS3231 RTC;

int hora=0;
int minutos=0;
int segundos=0;
int salida=13;
void setup () {
    lcd.begin(16,2);
  //Inicializamos el puerto serie, wire y el modulo RTC
    Serial.begin(9600);
    Wire.begin();
    RTC.begin();
    //Si quitamos el comentario de la linea siguiente, se ajusta la hora y la fecha con la del ordenador
    RTC.adjust(DateTime(__DATE__, __TIME__));
    pinMode(salida,OUTPUT);
  }
  
void loop () {
  
    DateTime now = RTC.now();
  hora=(now.hour(),DEC);
  minutos=(now.minute(),DEC);
  segundos=(now.second(),DEC);
    //Imprimimos el dia
    lcd.setCursor(0,0);
    lcd.print(now.day(), DEC);
    lcd.print('/');
    //Imprimimos el mes
    lcd.print(now.month(), DEC);
    lcd.print('/');
    //Imprimimos el año
    lcd.print(now.year(), DEC);
    lcd.print(' ');
    //Imprimimos la hora
    lcd.setCursor(0,1);
    lcd.print(now.hour(), DEC);
    lcd.print(':');
    //Imprimimos los minutos
    lcd.print(now.minute(), DEC);
    lcd.print(':');
    //Imprimimos los segundos
    lcd.print(now.second(), DEC);
    lcd.setCursor(11,0);
    lcd.print("FOCO");

  if (now.hour()== 12 && now.minute() == 00 && now.second() == 10)
  {
   digitalWrite(salida,LOW);
   lcd.setCursor(12,1);
   lcd.print(" ON ");
   delay(7000);  
  }
  //DECLARAR OTRA HORA DE ENCENDIDO
  else if (now.hour()== 19 && now.minute() == 04 && now.second() == 15)
  {
    digitalWrite(salida,LOW);
    lcd.setCursor(12,1);
    lcd.print(" ON ");
    delay(7000); 
  }

  else
  {
    digitalWrite(salida,HIGH);
    lcd.setCursor(11,1);
    lcd.print("OFF");
    
    }
}
