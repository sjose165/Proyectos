int NivelT1 = 9;
int NivelT2 = 10;
int Bomba = 7;

void setup() {
  Serial.begin(9600);
  pinMode(NivelT1, INPUT);
  pinMode(NivelT2, INPUT);
  pinMode(Bomba, OUTPUT);
}

void loop() {
  Serial.println("LECTURA NIVEL DE TANQUE 1");  
   delay(1500);
  //Tanque 1
  int estado1Bajo = digitalRead(NivelT1);
  //Tanque 2
  int estado2Bajo = digitalRead(NivelT2);
//Encendido bomba Tanque 1
  if (estado1Bajo ==HIGH )
  //&& estado1Bajo==LOW
  {
    while(estado1Bajo !=HIGH){
      digitalWrite(Bomba, HIGH);
    Serial.println("Bomba encendida");     
  int estado1Bajo = digitalRead(NivelT1);
    }
  }
  digitalWrite(Bomba,LOW);
  Serial.println("Bomba apagada");     
  //Espere 2 minutos y mida el segundo tanque
  delay(2000);/*
 //Encendido bomba Tanque 2
  if (estado2Bajo ==00 && estado2Alta==1){
    while(estado2Bajo !=1 && estado2Alta !=0){
      digitalWrite(Bomba, LOW);
  int estado2Bajo = digitalRead(NivelT2);
  int estado2Alta = digitalRead(NivelT2);
    }
  }
  digitalWrite(Bomba,HIGH);
  delay(1);*/
}
