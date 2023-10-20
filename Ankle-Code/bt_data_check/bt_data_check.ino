#include <SoftwareSerial.h>

SoftwareSerial BTserial(2, 3); // RX | TX
int upButton = 9;
int downButton = 6;

void setup() 
{
    Serial.begin(9600);
    Serial.println("---------------Master------------------");
    BTserial.begin(9600);  
    pinMode(upButton, INPUT);
    pinMode(downButton, INPUT);
}

void loop()
{
  if(digitalRead(upButton)){
    BTserial.print("up");
    Serial.println("data sent..");
    delay(500);
  }
  else if(digitalRead(downButton)){
    BTserial.print("down");
    Serial.println("data sent..");
    delay(500);
  }
}
