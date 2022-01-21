#include "ESP8266WiFi.h"
#include <PubSubClient.h>
 
// Update these with values suitable for your network.
 
const char* ssid = "IBERO";
const char* password = "";
const char* mqtt_server = "172.16.44.194";


//const int pinSenal = 2;
 
WiFiClient espClient;
PubSubClient client(espClient);
long lastMsg = 0;
char msg[50];
int infra = 2;
int buzz = 0;
int obstaculo = LOW;
int value = 0;
 
void setup() {
  pinMode(obstaculo, INPUT);     // Initialize the PIN2 as an input
  Serial.begin(115200);
  setup_wifi();
  client.setServer(mqtt_server, 1883);
  client.setCallback(callback);
  pinMode(buzz, OUTPUT);
  pinMode(infra, INPUT);
}
 
void setup_wifi() {
 
  delay(10);
  // We start by connecting to a WiFi network
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);

  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
 
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
 
  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
}
 
void callback(char* topic, byte* payload, unsigned int length) {
  Serial.print("Message arrived [");
  Serial.print(topic);
  Serial.print("] ");
  for (int i = 0; i < length; i++) {
    Serial.print((char)payload[i]);
  }
  Serial.println();
}
 
void reconnect() {
  // Loop until we're reconnected

  while (!client.connected()) {
    Serial.print("Attempting MQTT connection...");
    //Attempt to connect
    if (client.connect("ESP8266Client", "javier", "2309")) {
      Serial.println("connected");
      // Once connected, publish an announcement...
      client.publish("Seguridad/Sensor/Infrarojo", "Infrarojo en Línea");
      // ... and resubscribe
      client.subscribe("Seguridad/Sensor/Infrarojo");
    } else {
      Serial.print("failed, rc=");
      Serial.print(client.state());
      Serial.println(" try again in 5 seconds");
      // Wait 5 seconds before retrying
      delay(5000);
    }
  }
}
 
void loop() {
 
  if (!client.connected()) {
    reconnect();
  }
  client.loop();
  obstaculo = digitalRead(infra);
  if (obstaculo == HIGH) {
    snprintf (msg, 75, "111", value);
    tone(buzz, 500);
    Serial.print("Publish message: ");
    Serial.println(msg);
    client.publish("Seguridad/Sensor3", msg);
    delay(500);
    
  }
  else {
    Serial.println("SIN MOVIMIENTO");
    noTone(buzz);
     snprintf (msg, 75, "000", value);
    tone(buzz, 500);
    client.publish("Seguridad/Sensor3", msg);
  }
  delay(200);
}
