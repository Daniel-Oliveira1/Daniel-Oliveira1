/*
Name: Daniel Oliveira
Date: March 29th, 2022
Description: This is the code for an autonomous line following robot that uses two light sensors to detect the difference of light being reflected 
off a white sheet of paper, and being reflected off a black line(electrical tape), and then turns accordingly to follow the black line. This is done by using arduino.
*/

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
