#include <Servo.h>

Servo servo;
const int SERVO = 11;
const int buttonPin1 = 7;
const int buttonPin2 = 8;
int pos = 0;

void setup() {
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  servo.attach(SERVO);
  servo.write(0);
  delay(1000);
}

void loop() {
  int buttonInput1 = digitalRead(buttonPin1);
  int buttonInput2 = digitalRead(buttonPin2);

  if (buttonInput1 == HIGH && buttonInput2 == HIGH) {
    pos = 0;
    servo.write(pos);
    delay(200);
  }

  if (buttonInput1 == HIGH) {
    pos += 30;
    servo.write(pos);
    delay(200);
  }

  if (buttonInput2 == HIGH) {
    if (pos > 0) {
      pos -= 10;
      servo.write(pos);
      delay(200);
    }
  }
}
