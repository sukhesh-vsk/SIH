#include <ESP8266WiFi.h>

const char* ssid = "Thottaa Thookiruvenn";
const char* password = "244466666";

void setup() {
  Serial.println("Starting...");
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  Serial.println("Initializing wifi..");
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }

  Serial.println("Connected to WiFi");
}

void loop() {
  // Your code here
}
