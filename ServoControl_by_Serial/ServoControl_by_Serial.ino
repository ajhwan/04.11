#include <Servo.h>

const int SERVO = 11;
Servo servo;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  servo.attach(SERVO);
  servo.write(0);
  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()) {
    char userInput = Serial.read();

    switch(userInput){
      case '0' :
        servo.write(0);
        Serial.println("0");
        delay(500);
        break;
      case '1' :
        servo.write(30);
        Serial.println("30");
        delay(500);
        break;
      case '2' :
        servo.write(60);
        Serial.println("60");
        delay(500);
        break;
      case '3' :
        servo.write(120);
        Serial.println("120");
        delay(500);
        break;
      case '4' :
        servo.write(180);
        Serial.println("180");
        delay(1000);
        break;  
      default:
        break; 
    }
  }
}
