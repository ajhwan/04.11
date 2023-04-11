#include <Servo.h>

Servo myservo; 

int pos = 0;  
int buttonPin = 7;

void setup() {
  myservo.attach(11);
  pinMode(buttonPin, INPUT);
}

void loop() {
  int buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH)
  {
    myservo.write(pos);
    pos = pos+10;
    delay(200);
  }
  if (pos == 180)
  {
    delay(3000);
    pos = 0;
    myservo.write(pos);
    delay(200);
  }
}
