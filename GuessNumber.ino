bool game = true;
void setup(){
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(115200);
  delay(2000);
}

void loop(){
  delay(2000);
  while(game == true){
    Serial.println("Do you wanna play?(y/n) ");
    while (Serial.available() == 0) {
      // Wait for input
    }
    String command = Serial.readStringUntil('\n');
    command.trim();
    command.toLowerCase();
    if (command == "y"){
      int num = random(1, 101);
      Serial.println("Oii. I am thinking of a number between 1 to 100!");
      Serial.println("Take a guess which number I am thinking of: ");
      while (Serial.available() == 0) {}
      int guess = Serial.readStringUntil('\n').toInt();

      while (guess != num){
        if (guess == 0){
          Serial.println("Guess a number from 1 to 100 gng");
          Serial.println();
        }
        else if (guess < 1 || guess > 100){
          Serial.println("Rejected because you have to guess of a number from 1 to 100");
        }
        else if (guess > num){
          Serial.println("Think of a lower number!");
        }
        else if (guess < num){
          Serial.println("Think of a bigger number!");
        }
        Serial.println("Okay again. Take a guess which number I am thinking of: ");
        while (Serial.available() == 0) {}
        guess = Serial.readStringUntil('\n').toInt();
      }
      Serial.print("Ahhh ggs gng congrats!! You got me here. I was actually thinking of ");
      Serial.println(num);
      for (int i = 0; i < 6; i++) {
        digitalWrite(LED_BUILTIN, HIGH);
        delay(300);
        digitalWrite(LED_BUILTIN, LOW);
        delay(300);
      }
    }
    else if (command == "n"){
      Serial.println("Goodbye!");
      game = false;
    }
    else{
      Serial.println("Unknown command provided.");
    }
  }
}