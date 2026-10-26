String userName;

void setup() {
  Serial.begin(115200);
  pinMode(2, OUTPUT);
  delay(2000);
  Serial.println("--Nokqrii ESP32--");
  Serial.println("Welcome to ESP32's Hardware. Owned and managed by the goat Nokqrii.");
  Serial.println("Enter your name: ");
  while (Serial.available() == 0) {
    // Keep looping doing nothing while waiting for data
  }
  userName = Serial.readStringUntil('\n');
  userName.trim();
  Serial.println("I am ESP32 talking directly with you.");
  Serial.println("You can probably feel silicon in your blood rn! Hahahahaha");
  Serial.println();
  Serial.println("Available commands: ON, OFF, STATUS, HELP, NAME, BLINK");
  Serial.print("Greetings from ESP32, ");
  Serial.println(userName);
  Serial.println();
}

void loop() {
  Serial.println("Enter a command to be performed: ");
  while (Serial.available() == 0) {}
  String userInput = Serial.readStringUntil('\n');
  userInput.trim();
  userInput.toUpperCase();

  if (userInput == "ON"){
    digitalWrite(2, HIGH);
    Serial.println("Successfully turned on the LED");
  }
  else if (userInput == "OFF"){
    digitalWrite(2, LOW);
    Serial.println("Successfully turned off the LED");
  }
  else if (userInput == "STATUS"){
    bool currentStatus = digitalRead(2);
    Serial.print("Current status: ");
    Serial.println(currentStatus == HIGH ? "ON" : "OFF");
  }
  else if (userInput == "HELP"){
    Serial.println("Available commands: ON, OFF, STATUS, HELP, NAME, BLINK");
  }
  else if (userInput == "NAME"){
    Serial.print("Current user's name is: ");
    Serial.println(userName);
  }
  else if (userInput == "BLINK"){
    for (int i = 0; i <= 5; i++){
      digitalWrite(2, HIGH);
      delay(300);
      digitalWrite(2, LOW);
      delay(300);
    }
    Serial.println("Blink Sequence completed!");
  }
  else{
    Serial.println("Unknown command provided.");
  }
  Serial.println();
}