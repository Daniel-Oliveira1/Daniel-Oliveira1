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
  Serial.println("silly child");  
}
else if (Age>=13 and Age<=17){
  Serial.println("dumb teenager");
}
else{
  Serial.println("Adult");
}
}
