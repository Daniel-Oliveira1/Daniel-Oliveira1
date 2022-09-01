int Lsensor;
int Rsensor;

void setup() {
  Serial.begin(9600);
  pinMode(12, OUTPUT); //Left Wheel
  pinMode(13, OUTPUT); //Right Wheel
}

void loop() {
  Rsensor = analogRead(A1);
  Lsensor = analogRead(A0);
  Serial.println(Rsensor);
  Serial.println(Lsensor);

  if (Rsensor < 330  &&  Lsensor > 500) {        //turn Left

    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);
    delay(90);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
    delay(90);
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);
  }

  else if (Lsensor < 330  &&  Rsensor > 500) {    //turn right

    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
    delay(90);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
    delay(90);
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
  }

  else {                              // always move if not turning
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
    delay(90);
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    delay(90);
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
  }
}
