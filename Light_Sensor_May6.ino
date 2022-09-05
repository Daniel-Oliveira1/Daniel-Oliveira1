int val;
int val2;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.print("L= ");
val = analogRead(A0);
val2=analogRead(A1);
//Serial.println(val);
Serial.print("L= ");
Serial.println(val2);
delay(10);
}
