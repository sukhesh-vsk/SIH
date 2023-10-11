#include <Servo.h>

Servo myservo;

int servoPin = D7;

void setup() {
  myservo.attach(servoPin);
  Serial.begin(9600);
  myservo.write(90);
}

void loop() {
  Serial.println("Enter choice : ");
  while(!Serial.available()){
    // wait 
  }
  
  char choice = Serial.read();

  if(choice=='u'){
    myservo.write(0);
    Serial.println("Up Shifted..");
    delay(250);
    myservo.write(90);
  } 
  else if(choice=='d'){
    myservo.write(180);
    Serial.println("Down Shifted..");
    delay(250);
    myservo.write(90);
  }
} 
