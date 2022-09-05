//Daniel Oliveira
//May 6th, 2022
//Description: This code uses arduino to display the values of two light sensors that are connected to the arduino(analog 0 and 1).

int val1;
int val2;
void setup() {
Serial.begin(9600);
}

void loop() {
Serial.print("L= ");
val1 = analogRead(A0);
val2=analogRead(A1);
Serial.println(val);
Serial.print("L= ");
Serial.println(val2);
delay(10);
}
