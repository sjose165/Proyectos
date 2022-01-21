#include "nRF24L01.h" //incluimos la libreria del NRF24L01
#include "RF24.h"
#include "SPI.h"

int push = 7;

int SentMessage[1] = {0001};
RF24 radio(9,10); 

const uint64_t canal = 0xE6E6E6E6E6E6; //se debe de tener el mismo canal en el emisor y receptor  

void setup()
{
  Serial.begin(9600);
  pinMode(push,INPUT);
  digitalWrite(push,HIGH);
  Serial.println("Iniciando Emisor");
  radio.begin();
  radio.openWritingPipe(canal); 
}

void loop() // si se preciona el pushbutton el led se prende 
{
  if (digitalRead(push)==LOW)
  {   
    Serial.println("Enviando dato");
      SentMessage[0] = 000;
      radio.write(SentMessage, 1);    
  }
  else 
  {
      SentMessage[0] = 111;
      radio.write(SentMessage, 1);  
      Serial.println("En espera");
      delay(1.8e+6);  
  }
}
