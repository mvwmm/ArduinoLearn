
void setup() {
  Serial.begin(115200);
  pinMode(LED_BUILTIN, OUTPUT);
  delay(2000);
  Serial.println("== Nokqrii Calc ==");
}

void loop() {
  Serial.print("Enter first number: ");
  while (Serial.available() == 0){};
  String input1 = Serial.readStringUntil('\n');
  input1.trim();
  float num1 = input1.toFloat();
  Serial.println(num1);
  
  Serial.print("Enter operation(+,-,/,*): ");
  while (Serial.available() == 0){};
  String inputOfUser = Serial.readStringUntil('\n');
  inputOfUser.trim();
  char op = inputOfUser.charAt(0);
  Serial.println(op);


  Serial.print("Enter second number: ");
  while (Serial.available() == 0){};
  String input2 = Serial.readStringUntil('\n');
  input2.trim();
  float num2 = input2.toFloat();
  Serial.println(num2);

  if (op == '+'){
    Serial.print("Result: ");
    Serial.println(num1+num2);
    BlinkLED();
  }
  else if (op == '-'){
    Serial.print("Result: ");
    Serial.println(num1-num2);
    BlinkLED();
  }
  else if (op == '/'){
    if (num2 != 0){
      Serial.print("Result: ");
      Serial.println(num1/num2);
      BlinkLED();
    }
    else{
      Serial.println("Cannot divide a number by 0.");
    }
  }
  else if (op == '*'){
    Serial.print("Result: ");
    Serial.println(num1*num2);
    BlinkLED();
  }
  else{
    Serial.println("Unknown operator provided.");
  }
}

void BlinkLED(){
  for (int i = 0; i < 6; i++){
    digitalWrite(LED_BUILTIN, HIGH);
    delay(500);
    digitalWrite(LED_BUILTIN, LOW);
    delay(500);
  }
}