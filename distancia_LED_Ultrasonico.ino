const int EchoPin = 5;
const int TriggerPin = 6;
const int LedPinVerde = 13;
const int LedPinBlanco = 12;
const int LedPinRojo = 11;
float distancia;
long tiempo;
 
void setup() {
   Serial.begin(9600);
   pinMode(LedPinVerde, OUTPUT);
  pinMode(LedPinBlanco, OUTPUT);
  pinMode(LedPinRojo, OUTPUT);
   pinMode(TriggerPin, OUTPUT);
   pinMode(EchoPin, INPUT);
}
 
void loop() {

  digitalWrite(TriggerPin, HIGH);  //se envía un pulso para activar el sensor
  delayMicroseconds(10);
  digitalWrite(TriggerPin, LOW);

  // medimos el pulso de respuesta
  tiempo = (pulseIn(EchoPin, HIGH)/2);
 
  // dividido por 2 por que es el
  // tiempo que el sonido tarda
  // en ir y en volver
  // ahora calcularemos la distancia en cm
  // sabiendo que el espacio es igual a la velocidad por el tiempo
  // y que la velocidad del sonido es de 343m/s y que el tiempo lo
  // tenemos en millonesimas de segundo
 
  distancia = float(tiempo * 0.0343);

   Serial.print("Distancia: "); // imprime la distancia en el Monitor Serie
   Serial.println(distancia);
   

if (distancia >= 50) {
        digitalWrite(LedPinVerde , HIGH);
        digitalWrite(LedPinBlanco , LOW);
        digitalWrite(LedPinRojo , LOW);
                      }
else if((distancia <= 49) && (distancia >= 20)){
        digitalWrite(LedPinVerde , LOW);
        digitalWrite(LedPinRojo , LOW);
        digitalWrite(LedPinBlanco , HIGH);
       
} 
else if (distancia <=19) {
        digitalWrite(LedPinVerde , LOW);
        digitalWrite(LedPinBlanco , LOW);
        digitalWrite(LedPinRojo , HIGH);
} 

delay(1000);

}
