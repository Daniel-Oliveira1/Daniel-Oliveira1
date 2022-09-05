//Daniel Oliveira
//March 29th, 2022
//Description: This is a simple code that uses if & else statements to take a age you input, and print out whether the age is a child, teenager or adult.
int Age;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.print("enter your age: ");
while (Serial.available() == 0);
Age = Serial.parseInt();
if (Age<13){
  Serial.println("Child");  
}
else if (Age>=13 and Age<=17){
  Serial.println("Teenager");
}
else{
  Serial.println("Adult");
}
}
