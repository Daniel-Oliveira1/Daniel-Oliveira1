int Num;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("enter num: ");
  while (Serial.available() == 0);
  Num = Serial.parseInt();
  for (int i = -5; i <= Num; i = i + 5) {
    Serial.println(i);
  }
}
