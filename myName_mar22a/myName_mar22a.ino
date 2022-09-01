void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  String myName;  // create a variable to store values: has a datatype and name 
  myName=Serial.readString();
  Serial.println(myName);
}
