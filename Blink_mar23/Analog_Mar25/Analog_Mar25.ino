int val; //analog value read from A2

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  val=analogRead(A2);
  Serial.print("A2 value is : ");
  Serial.println(val);
  delay(10);
}
