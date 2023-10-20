#include <SoftwareSerial.h>

SoftwareSerial BTserial(2, 3); // RX | TX
// String up = "wheeling adikrom ellaarayum...";
void setup() 

{
    Serial.begin(9600);
    Serial.println("---------------Master------------------");
    BTserial.begin(9600);  

}

void loop()

{
  // delay(5000);
  if(Serial.available()){
    BTserial.println(Serial.readString());
    Serial.println("data sent..");
  }
  // BTserial.print(up); 
  // delay(2000);
}