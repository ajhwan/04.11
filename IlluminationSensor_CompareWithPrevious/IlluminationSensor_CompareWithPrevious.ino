int led1 = 6;
int led2 = 9;
int precds = 0;
int sensVal = 0;

void setup() {
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  int cds = analogRead(A1);
  cds = map(cds, 0, 1023, 0, 255);

  if (cds != precds) {
    Serial.print("cds : ");
    Serial.println(cds);
    Serial.print("precds : ");
    Serial.println(precds);
  }

  sensVal = max(cds, precds);

  if (sensVal == cds) {
    analogWrite(led1, 255);
    digitalWrite(led2, LOW);
    precds = cds;
    delay(200);
  }
   else {
    analogWrite(led2, 255);
    digitalWrite(led1, LOW);
    precds = cds;
    delay(200);
  }
}
