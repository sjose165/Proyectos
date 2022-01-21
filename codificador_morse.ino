int ledpin = 13;
int ledpin12= 11;
const int buzzer = 9; //El pin al que se conecta el buzzer es el 9

void setup(){


  Serial.begin(9600);
 pinMode(buzzer, OUTPUT); // Pin 9 declarado como salida
  pinMode(ledpin,OUTPUT);
  pinMode(ledpin12,OUTPUT);

  Serial.println(" Escribe las letras en MAYUSCULAS");

Serial.println("CONVERSIÓN:");

}

void loop(){
  while (Serial.available() ==0);
  int val= Serial.read();


//PARA LETRA A 
  if(val == 'A') {
Serial.print(".-  ");
    digitalWrite(ledpin,HIGH);
    delay (600);
    digitalWrite (ledpin, LOW);
     tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(150);
  noTone(buzzer);     // Detiene el zumbador
  //delay(1);        //Espera un segundo y vuelve a repetir el bucle
    digitalWrite(ledpin12,HIGH);
    delay (1300);
    digitalWrite (ledpin12, LOW);
    tone(buzzer, 2500); 
  delay(400);
  noTone(buzzer);     
  //delay(5000);  
     }
 //PARA B
 if(val == 'B') {
Serial.print("-...  ");
    digitalWrite(ledpin12,HIGH);
    delay (1200);
    digitalWrite (ledpin12, LOW);
   tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(700);
  noTone(buzzer);     // Detiene el zumbador
    digitalWrite(ledpin,HIGH);
    delay (600);
    digitalWrite (ledpin, LOW);
   tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(400);
  noTone(buzzer);     // Detiene el zumbador
    digitalWrite(ledpin,HIGH);
    delay (600);
    digitalWrite (ledpin, LOW);
tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(400);
  noTone(buzzer);     // Detiene el zumbador
    digitalWrite(ledpin,HIGH);
    delay (600);
    digitalWrite (ledpin, LOW);
    tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(400);
  noTone(buzzer);     // Detiene el zumbador
     }
//PARA C
  if(val == 'C') {
Serial.print("-.-.  ");
    digitalWrite(ledpin12,HIGH);
    delay (1200);
    digitalWrite (ledpin12, LOW);
 tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(750);
  noTone(buzzer);     // Detiene el zumbador
    digitalWrite(ledpin,HIGH);
    delay (600);
    digitalWrite (ledpin, LOW);
 tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(400);
  noTone(buzzer);     // Detiene el zumbador
    digitalWrite(ledpin12,HIGH);
    delay (1200);
    digitalWrite (ledpin12, LOW);
 tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(750);
  noTone(buzzer);     // Detiene el zumbador
    digitalWrite(ledpin,HIGH);
    delay (600);
    digitalWrite (ledpin, LOW);
    tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(400);
  noTone(buzzer);     // Detiene el zumbador
     }
  //PARA D
  if(val == 'D') {
Serial.print("-..");
    digitalWrite(ledpin12,HIGH);
    delay (1200);
    digitalWrite (ledpin12, LOW);
   tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(700);
  noTone(buzzer);     // Detiene el zumbador
    digitalWrite(ledpin,HIGH);
    delay (600);
    digitalWrite (ledpin, LOW);
   tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(400);
  noTone(buzzer);     // Detiene el zumbador
    digitalWrite(ledpin,HIGH);
    delay (600);
    digitalWrite (ledpin, LOW);
    tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(400);
  noTone(buzzer);     // Detiene el zumbador
     }
  //PARA E
  if(val == 'E') {
Serial.print(".");
    digitalWrite(ledpin,HIGH);
    delay (600);
    digitalWrite (ledpin, LOW);
    tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(400);
  noTone(buzzer);     // Detiene el zumbador
     }
  //PARA F
  if(val == 'F') {
Serial.print("..-.");
    digitalWrite(ledpin,HIGH); 
    delay (600);
    digitalWrite (ledpin, LOW);
    tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(400);
  noTone(buzzer);     // Detiene el zumbador
    digitalWrite(ledpin,HIGH);
    delay (600);
    digitalWrite (ledpin, LOW);
  tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(400);
  noTone(buzzer);     // Detiene el zumbador
    digitalWrite(ledpin12,HIGH);
    delay (1200);
    digitalWrite (ledpin12, LOW);
   tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(700);
  noTone(buzzer);     // Detiene el zumbador
    digitalWrite(ledpin,HIGH);
    delay (600);
    digitalWrite (ledpin, LOW);  
    tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(400);
  noTone(buzzer);     // Detiene el zumbador
 }
 //PARA G
  if(val == 'G') {
Serial.print("--.");
    digitalWrite(ledpin12,HIGH); 
    delay (1200);
    digitalWrite (ledpin12, LOW);
    tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(700);
  noTone(buzzer);     // Detiene el zumbador
    digitalWrite(ledpin12,HIGH);
    delay (1200);
    digitalWrite (ledpin12, LOW);
    tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(700);
  noTone(buzzer);     // Detiene el zumbador
    digitalWrite(ledpin,HIGH);
    delay (600);
    digitalWrite (ledpin, LOW);
     tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(400);
  noTone(buzzer);     // Detiene el zumbador
 }
  //PARA H
  if(val == 'H') {
Serial.print("....");
    digitalWrite(ledpin,HIGH); 
    delay (600);
    digitalWrite (ledpin, LOW);
     tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(400);
  noTone(buzzer);     // Detiene el zumbador
    digitalWrite(ledpin,HIGH);
    delay (600);
    digitalWrite (ledpin, LOW);
        tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(400);
  noTone(buzzer);     // Detiene el zumbador
    digitalWrite(ledpin,HIGH);
    delay (600);
    digitalWrite (ledpin, LOW);  
         tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(400);
  noTone(buzzer);     // Detiene el zumbador 
 digitalWrite(ledpin,HIGH);
    delay (600);
    digitalWrite (ledpin, LOW);  
         tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(400);
  noTone(buzzer);     // Detiene el zumbador 
}
//PARA I
  if(val == 'I') {
Serial.print("..");
    digitalWrite(ledpin,HIGH);
    delay (600);
    digitalWrite (ledpin, LOW);
       tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(400);
  noTone(buzzer);     // Detiene el zumbador
    digitalWrite(ledpin,HIGH);
    delay (600);
    digitalWrite (ledpin, LOW); 
         tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(400);
  noTone(buzzer);     // Detiene el zumbador 
     }
//PARA J
  if(val == 'J') {
Serial.print(".---");
    digitalWrite(ledpin,HIGH); 
    delay (600);
    digitalWrite (ledpin, LOW);
      tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(400);
  noTone(buzzer);     // Detiene el zumbador
    digitalWrite(ledpin12,HIGH);
    delay (1200);
    digitalWrite (ledpin12, LOW);
        tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(700);
  noTone(buzzer);     // Detiene el zumbador
    digitalWrite(ledpin12,HIGH);
    delay (1200);
    digitalWrite (ledpin12, LOW);
         tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(700);
  noTone(buzzer);     // Detiene el zumbador
    digitalWrite(ledpin12,HIGH);
    delay (1200);
    digitalWrite (ledpin12, LOW);   
  tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(700);
  noTone(buzzer);     // Detiene el zumbador   
}
//PARA L
  if(val == 'L') {
Serial.print(".-..");
    digitalWrite(ledpin,HIGH); 
    delay (600);
    digitalWrite (ledpin, LOW);
         tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(400);
  noTone(buzzer);     // Detiene el zumbador
    digitalWrite(ledpin12,HIGH);
    delay (1200);
    digitalWrite (ledpin12, LOW);
        tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(700);
  noTone(buzzer);     // Detiene el zumbador
    digitalWrite(ledpin,HIGH);
    delay (600);
    digitalWrite (ledpin, LOW);   
            tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(400);
  noTone(buzzer);     // Detiene el zumbador   
   digitalWrite(ledpin,HIGH);
    delay (600);
    digitalWrite (ledpin, LOW);   
            tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(400);
  noTone(buzzer);     // Detiene el zumbador   
}
//PARA M
  if(val == 'M') {
Serial.print("--");
    digitalWrite(ledpin12,HIGH); 
    delay (1200);
    digitalWrite (ledpin12, LOW);
  tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(700);
  noTone(buzzer);     // Detiene el zumbador   
    digitalWrite(ledpin12,HIGH);
    delay (1200);
    digitalWrite (ledpin12, LOW);
    tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(700);
  noTone(buzzer);     // Detiene el zumbador   
    }
//PARA N
  if(val == 'N') {
Serial.print("-.");
    digitalWrite(ledpin12,HIGH); 
    delay (1200);
    digitalWrite (ledpin12, LOW);
 tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(700);
  noTone(buzzer);     // Detiene el zumbador   
    digitalWrite(ledpin,HIGH);
    delay (600);
    digitalWrite (ledpin, LOW);
    tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(400);
  noTone(buzzer);     // Detiene el zumbador   
    }
//PARA O
  if(val == 'O') {
Serial.print("---");
    digitalWrite(ledpin12,HIGH); 
    delay (1200);
    digitalWrite (ledpin12, LOW);
 tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(700);
  noTone(buzzer);     // Detiene el zumbador   
    digitalWrite(ledpin12,HIGH);
    delay (1200);
    digitalWrite (ledpin12, LOW);
 tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(700);
  noTone(buzzer);     // Detiene el zumbador   
    digitalWrite(ledpin12,HIGH);
    delay (1200);
    digitalWrite (ledpin12, LOW);
 tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(700);
  noTone(buzzer);     // Detiene el zumbador   
    }
//PARA P
  if(val == 'P') {
Serial.print(".--.");
    digitalWrite(ledpin,HIGH); 
    delay (600);
    digitalWrite (ledpin, LOW);
 tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(400);
  noTone(buzzer);     // Detiene el zumbador   
    digitalWrite(ledpin12,HIGH);
    delay (1200);
    digitalWrite (ledpin12, LOW);
 tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(700);
  noTone(buzzer);     // Detiene el zumbador   
    digitalWrite(ledpin12,HIGH);
    delay (1200);
    digitalWrite (ledpin12, LOW);
 tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(700);
  noTone(buzzer);     // Detiene el zumbador   
    digitalWrite(ledpin,HIGH);
    delay (600);
    digitalWrite (ledpin, LOW);
 tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(400);
  noTone(buzzer);     // Detiene el zumbador   
    }
//PARA Q
  if(val == 'Q') {
Serial.print("--.-");
    digitalWrite(ledpin12,HIGH); 
    delay (1200);
    digitalWrite (ledpin12, LOW);
  tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(700);
  noTone(buzzer);     // Detiene el zumbador   
    digitalWrite(ledpin12,HIGH);
    delay (1200);
    digitalWrite (ledpin12, LOW);
 tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(700);
  noTone(buzzer);     // Detiene el zumbador   
    digitalWrite(ledpin,HIGH);
    delay (600);
    digitalWrite (ledpin, LOW);
  tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(400);
  noTone(buzzer);     // Detiene el zumbador   
    digitalWrite(ledpin12,HIGH);
    delay (1200);
    digitalWrite (ledpin12, LOW);
 tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(700);
  noTone(buzzer);     // Detiene el zumbador   
    }
    //PARA R
  if(val == 'R') {
Serial.print(".-.");
    digitalWrite(ledpin,HIGH); 
    delay (600);
    digitalWrite (ledpin, LOW);
 tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(400);
  noTone(buzzer);     // Detiene el zumbador   
    digitalWrite(ledpin12,HIGH);
    delay (1200);
    digitalWrite (ledpin12, LOW);
 tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(700);
  noTone(buzzer);     // Detiene el zumbador   
    digitalWrite(ledpin,HIGH);
    delay (600);
    digitalWrite (ledpin, LOW);
 tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(400);
  noTone(buzzer);     // Detiene el zumbador   
    }
    //PARA S
  if(val == 'S') {
Serial.print("...");
    digitalWrite(ledpin,HIGH); 
    delay (600);
    digitalWrite (ledpin, LOW);
 tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(400);
  noTone(buzzer);     // Detiene el zumbador   
    digitalWrite(ledpin,HIGH);
    delay (600);
    digitalWrite (ledpin, LOW);
 tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(400);
  noTone(buzzer);     // Detiene el zumbador   
    digitalWrite(ledpin,HIGH);
    delay (600);
    digitalWrite (ledpin, LOW);
 tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(400);
  noTone(buzzer);     // Detiene el zumbador   
    }
    //PARA T
  if(val == 'T') {
Serial.print("-");
    digitalWrite(ledpin12,HIGH);
    delay (1200);
    digitalWrite (ledpin12, LOW);
     tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(400);
  noTone(buzzer);     // Detiene el zumbador   
  }
       
        //PARA U
  if(val == 'U') {
Serial.print("..-");
    digitalWrite(ledpin,HIGH); 
    delay (600);
    digitalWrite (ledpin, LOW);
  tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(400);
  noTone(buzzer);     // Detiene el zumbador   
    digitalWrite(ledpin,HIGH);
    delay (600);
    digitalWrite (ledpin, LOW);
 tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(400);
  noTone(buzzer);     // Detiene el zumbador   
    digitalWrite(ledpin12,HIGH);
    delay (1200);
    digitalWrite (ledpin12, LOW);
 tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(700);
  noTone(buzzer);     // Detiene el zumbador   
    }
        //PARA V
  if(val == 'V') {
Serial.print("...-");
    digitalWrite(ledpin,HIGH); 
    delay (600);
    digitalWrite (ledpin, LOW);
 tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(400);
  noTone(buzzer);     // Detiene el zumbador   
    digitalWrite(ledpin,HIGH);
    delay (600);
    digitalWrite (ledpin, LOW);
   tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(400);
  noTone(buzzer);     // Detiene el zumbador   
    digitalWrite(ledpin,HIGH);
    delay (600);
    digitalWrite (ledpin, LOW);
 tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(400);
  noTone(buzzer);     // Detiene el zumbador   
    digitalWrite(ledpin12,HIGH);
    delay (1200);
    digitalWrite (ledpin12, LOW);
 tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(700);
  noTone(buzzer);     // Detiene el zumbador   
    }
     //PARA W
  if(val == 'W') {
Serial.print(".--");
    digitalWrite(ledpin,HIGH); 
    delay (600);
    digitalWrite (ledpin, LOW);
 tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(400);
  noTone(buzzer);     // Detiene el zumbador   
    digitalWrite(ledpin12,HIGH);
    delay (1200);
    digitalWrite (ledpin12, LOW);
 tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(700);
  noTone(buzzer);     // Detiene el zumbador   
    digitalWrite(ledpin12,HIGH);
    delay (1200);
    digitalWrite (ledpin12, LOW);
 tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(400);
  noTone(buzzer);     // Detiene el zumbador   
    }
    //PARA X
  if(val == 'X') {
Serial.print("-..-");
    digitalWrite(ledpin12,HIGH); 
    delay (1200);
    digitalWrite (ledpin12, LOW);
 tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(700);
  noTone(buzzer);     // Detiene el zumbador   
    digitalWrite(ledpin,HIGH);
    delay (600);
    digitalWrite (ledpin, LOW);
 tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(400);
  noTone(buzzer);     // Detiene el zumbador   
    digitalWrite(ledpin,HIGH);
    delay (600);
    digitalWrite (ledpin, LOW);
 tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(400);
  noTone(buzzer);     // Detiene el zumbador   
    digitalWrite(ledpin12,HIGH);
    delay (1200);
    digitalWrite (ledpin12, LOW);
 tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(700);
  noTone(buzzer);     // Detiene el zumbador   
    } 
    //PARA y
  if(val == 'Y') {
Serial.print("-.--");
    digitalWrite(ledpin12,HIGH); 
    delay (1200);
    digitalWrite (ledpin12, LOW);
 tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(700);
  noTone(buzzer);     // Detiene el zumbador   
    digitalWrite(ledpin,HIGH);
    delay (600);
    digitalWrite (ledpin, LOW);
tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(400);
  noTone(buzzer);     // Detiene el zumbador   
    digitalWrite(ledpin12,HIGH);
    delay (1200);
    digitalWrite (ledpin12, LOW);
tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(700);
  noTone(buzzer);     // Detiene el zumbador   
    digitalWrite(ledpin12,HIGH);
    delay (1200);
    digitalWrite (ledpin12, LOW);
tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(700);
  noTone(buzzer);     // Detiene el zumbador   
    } 
     //PARA Z
  if(val == 'Z') {
Serial.print("--..");
    digitalWrite(ledpin12,HIGH); 
    delay (1200);
    digitalWrite (ledpin12, LOW);
tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(700);
  noTone(buzzer);     // Detiene el zumbador   
    digitalWrite(ledpin12,HIGH);
    delay (1200);
    digitalWrite (ledpin12, LOW);
tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(700);
  noTone(buzzer);     // Detiene el zumbador   
    digitalWrite(ledpin,HIGH);
    delay (600);
    digitalWrite (ledpin, LOW);
tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(400);
  noTone(buzzer);     // Detiene el zumbador   
    digitalWrite(ledpin,HIGH);
    delay (600);
    digitalWrite (ledpin, LOW);
tone(buzzer, 2500); // Envía señal de 1Khz al zumbador
  delay(400);
  noTone(buzzer);     // Detiene el zumbador   
    } 
   
    
}
