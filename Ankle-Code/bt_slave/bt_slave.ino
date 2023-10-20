#include <SoftwareSerial.h>
#include <Servo.h>

SoftwareSerial BTSerial(D3, D4); // RX | TX
Servo myservo;

void setup() 
{
    Serial.begin(9600);
    Serial.println("---------------Slave------------------");
    BTSerial.begin(9600);
    myservo.attach(D7);
    myservo.write(90);
}

void loop() {
  if (BTSerial.available()){
    String received = BTSerial.readString();
    received.trim();
    
    if(received=="up"){
      myservo.write(0);
      Serial.println("Up Shifted..");
      delay(250);
      myservo.write(90);
    } else if(received=="down"){
      myservo.write(180);
      Serial.println("Down Shifted..");
      delay(250);
      myservo.write(90);
    }
    // Serial.print("Received: ");
    // Serial.print(received);
    // Serial.println();
  }
}
