/*
Name: Daniel Oliveira
Date: March 31th, 2022
Description: This code acts as an store, where the user gets a menu and can choose items to purchase, and at the end the user is then given the
amount due that they will need to pay.
*/

String Customer;
char WantToBuy;
float Money;
int Item;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Welcome, What is your name? ");
  while (Serial.available() == 0);
  Customer = Serial.readString();
  Serial.print("Nice to meet you ");
  Serial.println(Customer);

  Serial.println("Are you interested in buying something?");
  while (Serial.available() == 0);
  WantToBuy = Serial.read();

  //SHOULD I STAY OR SHOULD I GO??
  if (WantToBuy == "yes") {
    Serial.println("How much money do you have?");
    while (Serial.available() == 0);
    Money = Serial.parseFloat();

    do { //Atleast once, but perhaps may buy more
      //Show menu
      Menu();
      while (Serial.available() == 0);
      Item = Serial.parseInt();

      if (Item == 1) {
        Money = Money - 1.00;
        Serial.println("Here is your can of pop... ");
      }
      else if (Item == 2) {
        Money = Money - 1.50;
        Serial.println("Here is your chocolate bar...");
      }
      else if (Item == 3) {
        Money = Money - 1.75;
        Serial.println("Here is you bag of chips...");
      }
    } while (Item != 4);
  }
  else {
    Serial.println("Have a nice day!");
  }
}

//Menu with prices
void Menu() {
  Serial.println("Here are the items availble for purchase");
  Serial.println("#1) $1.00 -- Can of pop");
  Serial.println("#2) $1.50 -- Chocolate bar");
  Serial.println("#3) $1.75 -- Bag of Chips");
  Serial.println("#4) Finish/Leave");
  Serial.println("Which item would you like to buy? ");
}
