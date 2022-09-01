String myName;
float money;
int choice;
int qty;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  //3 items
  //Name, amount & qty
  //Leave & new customer
  Serial.println("Hello, what is your name?" );
  while (Serial.available() == 0);
  myName = Serial.readString();
  Serial.print("Hello, ");
  Serial.print(myName);
  Serial.println("How much money do you have today? ");
  while (Serial.available() == 0);
  money = Serial.parseFloat();
  Serial.println("What would you like today?");
  Serial.println("#1 Hamburger = $7.99");
  Serial.println("#2 Cheeseburger = $8.99");
  Serial.println("#3 Hotdog = $5.99");
  while (Serial.available() == 0);
  choice = Serial.parseInt();
  while (Serial.available() == 0);
  if (choice == 1) {
    Serial.print("How many would you like?");
    qty = Serial.parseInt();
    while (Serial.available() == 0);
    money - 7.99 * qty;
    if (money <== 0) {
      Serial.print("You don't have enough money");
    }

  }
}
