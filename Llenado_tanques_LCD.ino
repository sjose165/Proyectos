/* EL codigo funciona para el simulador al tener las activaciones de la bomba 
con HIGH y apagado con LOW, mientras que si se carga en arduino fisico, 
no funcionará por como funcoina el modulo de relevadores */

#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h>

int NivelT1 = 9;
int NivelT2 = 10;
int Bomba = 7;
int Bomba2 = 12;
int CisternaN = 8;
LiquidCrystal_I2C      lcd(0x27, 2, 1, 0, 4, 5, 6,7);

void setup() {
  Serial.begin(9600);
  lcd.setBacklightPin(3,POSITIVE);
  lcd.setBacklight(HIGH);
  lcd.begin (16,2);
  lcd.clear (); 
  pinMode(NivelT1, INPUT);
  pinMode(NivelT2, INPUT);
  pinMode(Bomba, OUTPUT);
  pinMode(CisternaN, INPUT);
}

void FTanques(){
lcd.clear();
 lcd.setCursor(1,0);
 lcd.print("Lectura nivel");
 lcd.setCursor(3,1);
 lcd.print("Tanque 1");
 delay(3000);
  ///////Tanque 1/////// 
 if (digitalRead(NivelT1)==LOW){
    digitalWrite(Bomba, HIGH);
     lcd.clear ();
     lcd.setCursor(0,0);
     lcd.print("Llenando tanque"); 
     lcd.setCursor(0,1);
     lcd.print("ENCENDIDA");
      delay(5000);
     digitalWrite(Bomba, LOW);
      lcd.clear ();
     lcd.setCursor(0,0);
     lcd.print("Tanque 1 LLENO"); }

 if (digitalRead(NivelT1)==HIGH){
  lcd.clear ();
  lcd.setCursor(0,0);
  lcd.print("Tanque 1 LLENO");
   delay(2000);
      }     
  ///////Tanque 2/////// 
 lcd.clear ();
 lcd.setCursor(1,0);
 lcd.print("Lectura nivel");
 lcd.setCursor(3,1);
 lcd.print("Tanque 2");   
    delay(3000);
  if (digitalRead(NivelT2)==LOW){
    digitalWrite(Bomba, HIGH);
  lcd.clear ();
  lcd.setCursor(0,0);
  lcd.print("Llenando tanque"); 
  lcd.setCursor(0,1);
  lcd.print("Bomba ENCENDIDA"); 
  delay(5000);
  digitalWrite(Bomba, LOW);
  lcd.clear ();
  lcd.setCursor(0,0);
  lcd.print("Tanque 2 LLENO");
      }
 if (digitalRead(NivelT2)==HIGH){
    lcd.clear ();
    lcd.setCursor(0,0);
    lcd.print("Tanque 2 LLENO");
    delay(2000);
      }
}

void loop() {
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("INICIO LECTURA"); 
  delay(5000);
  FTanques();
  lcd.clear ();
  lcd.setCursor(1,0);
  lcd.print("Nueva lectura");
  lcd.setCursor(1,1);
  lcd.print("hasta manana."); 
  delay(7000);
    }
