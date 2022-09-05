//Daniel Oliveira
//March 24th, 2022
//Description: This is a simple code that asks you your name and your age, and then prints them back to you. 
//At the end it then asks if you would like to play again, and then retarts the game.

String MyName;
int Age;
char playAgain;

void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Who are you?");
  while(Serial.available()==0);
  MyName=Serial.readString();
  Serial.print(MyName);
  Serial.println("How old are you?");
  while(Serial.available()==0);
  Age=Serial.parseInt();
  Serial.println(Age);
  Serial.println("Play Again?");
  while(Serial.available()==0);
  playAgain=Serial.read();
  Serial.println(Age);
  
}
