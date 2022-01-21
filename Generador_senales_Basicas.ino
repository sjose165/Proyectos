
void setup() {
Serial.begin(9600);
}

void S_DientesS(){
   for (int i=-100; i<100; i++){
         Serial.println(i);
      delay(5);}
}

void S_Triangular(){
  for (int y=-100; y<100; y++){
         Serial.println(y);
      delay(2);}
     for (int y=101; y>-100; y--){
         Serial.println(y);
      delay(2);}
}

void S_Senoidal(){
    for (int i=0; i<360; i++){
    Serial.println(100*sin(DEG_TO_RAD*i));
     delay(2);}
  }

void S_Cuadrada(){
        int x = 0;
           for (int i=0; i<120; i++){
              if (i<=60){
               x=-100;}
              if (i>60){
              x=100;}
        Serial.println(x);
        delay(10);}
      }

void loop() {
  
//SEÑAL DIENTE DE SIERRA
for (int T=0; T<10; T++)
  {  
    S_DientesS();   
  }
        
//SEÑAL TRIANGULAR
 for (int T=0; T<10; T++)
  {  
   S_Triangular();
  }      
  
//SEÑAL SENOIDAL
  for (int T=0; T<10; T++)
  {
  S_Senoidal();
  } 
 
 //SEÑAL CUADRADA
 for (int T=0; T<10; T++)
  {
    S_Cuadrada();
  }    
 
    
}
