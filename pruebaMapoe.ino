   int x;
   int y;

   void setup() {
      Serial.begin(115200);
   }

   void loop() {
      x = random(0, 1023);
      y = map(x, 0, 1023, 0, 15);

      Serial.print("El numero aleatorio es: ");
      Serial.println(x);

      Serial.print("El numero mapeado es: ");
      Serial.println(y);

      delay(3000);

}
