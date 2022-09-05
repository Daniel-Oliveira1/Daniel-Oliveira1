/*
  Name: Daniel Oliveira
  Date: Apr 6th, 2022
  Description: This program creates 3 random numbers(0-1024) which the user needs to guess, 
  if the user's guess is too high then the LEDS will blink CW, if the user's guess is too low then the LEDS will blink CCW, 
  if the user guesses the right number then the code will blink 4 LEDS at the same time. 
*/

int Num1;
int Num2;
int Num3;

int Guess;

String PlayAgain;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  randomSeed(analogRead(0));
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Num1 = random(1024);
  Num2 = random(1024);
  Num3 = random(1024);
  Serial.print(Num1);
  Serial.print(", ");
  Serial.print(Num2);
  Serial.print(", ");
  Serial.println(Num3);
  Serial.println("Guess #1");
  while (Guess != Num1) {
    while (Serial.available() == 0);
    Guess = Serial.parseInt();
    if (Guess > Num1) {
      Serial.println("Guess lower");
      BlinkCCW();
    }
    else if (Guess == Num1) {
      Serial.println("Correct! Unlocked #1");
      BlinkUnlocked();
     
    }
    else if (Guess < Num1) {
      Serial.println("Guess Higher");
      BlinkCW();
    }
  }

  Serial.println("Guess #2");
   while (Guess != Num2) {
    while (Serial.available() == 0);
    Guess = Serial.parseInt();
    if (Guess > Num2) {
      Serial.println("Guess lower");
      BlinkCCW();
    }
    else if (Guess == Num2) {
      Serial.println("Correct! Unlocked #2");
      BlinkUnlocked();
     
    }
    else if (Guess < Num2) {
      Serial.println("Guess Higher");
      BlinkCW();
    }
  }
  
  Serial.println("Guess #3");
  while (Guess != Num3) {
    while (Serial.available() == 0);
    Guess = Serial.parseInt();
    if (Guess > Num3) {
      Serial.println("Guess lower");
      BlinkCCW();
    }
    else if (Guess == Num3) {
      Serial.println("Correct! Unlocked #3");
      BlinkUnlocked();
     
    }
    else if (Guess < Num3) {
      Serial.println("Guess Higher");
      BlinkCW();
    }
  }

while(true){
Serial.println("Would you like to play again? (y/n)");
while(Serial.available()==0);
PlayAgain=Serial.readString();
if (PlayAgain=="y"){
  break;
}
else{}
}
}

void BlinkCW(){
  digitalWrite(3, HIGH);          
  delay(200);                      
  digitalWrite(3, LOW);
  delay(200);
  digitalWrite(4, HIGH);          
  delay(200);                      
  digitalWrite(4, LOW);
  delay(200);
  digitalWrite(5, HIGH);          
  delay(200);                      
  digitalWrite(5, LOW);
  delay(200);
  digitalWrite(9, HIGH);          
  delay(200);                      
  digitalWrite(9, LOW);
  delay(200);
  digitalWrite(10, HIGH);          
  delay(200);                      
  digitalWrite(10, LOW);
  delay(200);
  digitalWrite(11, HIGH);          
  delay(200);                      
  digitalWrite(11, LOW);
  delay(200);
  digitalWrite(12, HIGH);          
  delay(200);                      
  digitalWrite(12, LOW);
  delay(200);
  digitalWrite(13, HIGH);          
  delay(200);                      
  digitalWrite(13, LOW);
  delay(200);
}

void BlinkCCW(){
  digitalWrite(12, HIGH);          
  delay(200);                      
  digitalWrite(12, LOW);
  delay(200);
  digitalWrite(11, HIGH);          
  delay(200);                      
  digitalWrite(11, LOW);
  delay(200);
  digitalWrite(10, HIGH);          
  delay(200);                      
  digitalWrite(10, LOW);
  delay(200);
  digitalWrite(9, HIGH);          
  delay(200);                      
  digitalWrite(9, LOW);
  delay(200);
  digitalWrite(5, HIGH);          
  delay(200);                      
  digitalWrite(5, LOW);
  delay(200);
  digitalWrite(4, HIGH);          
  delay(200);                      
  digitalWrite(4, LOW);
  delay(200);
  digitalWrite(3, HIGH);          
  delay(200);                      
  digitalWrite(3, LOW);
  delay(200);
  digitalWrite(13, HIGH);          
  delay(200);                      
  digitalWrite(13, LOW);
  delay(200);
}

void BlinkUnlocked(){
  digitalWrite(4, HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(4, LOW);
  digitalWrite(9, LOW);
  digitalWrite(11, LOW);
  digitalWrite(13, LOW); 
}
