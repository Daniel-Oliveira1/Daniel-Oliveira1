//Daniel Oliveira
//March 28th, 2022
//Description: This code asks the user for a number, and then counts towawrds the number starting from -5, and then increases by 5 until it reaches the inputted number.

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
