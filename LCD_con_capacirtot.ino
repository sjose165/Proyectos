#include <Wire.h>
#include <LCD.h> //libreria para el controlador del LCD 
#include <LiquidCrystal.h> // Libreria para hacer funcionar el LCD 

LiquidCrystal lcd(8, 9, 4, 5, 6, 7); 7 // pines de entrada del LCD
int ne555 = 10;  // asignacion del pin para el timer 555
unsigned long duration2;  // que se declara la variable que almacenará al valor del pulso          
float c; // se declara la variable del capcitor de aignación analoga 

void setup() {
  
  pinMode(ne555, INPUT); // se declara  entrada el pin del 555
  lcd.begin(16, 2); // se declara el tamaño de la matriz lcd
   lcd.setCursor (0, 0); //inicializamos el curos del LCD 
   
 //          123456789123456 
 lcd.print ("El valor del "); //mprimimos en el LCD las asignaciones 
 lcd.setCursor (0, 1);

 
 delay (2500);
 lcd.clear();
  
}

void loop() {
 
  duration2 = pulseIn(ne555, LOW); // se detecta el valor a travez de un pulso de baja
  c= duration2/(0.693*68950); // se obtiene el valor del capacitor mediante una ecuacion
  
  lcd.print(c); // se imprime el valor del capacitor en el LCD 
    
}
