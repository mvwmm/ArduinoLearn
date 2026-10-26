const unsigned long interval = 1000;
unsigned long previousMillis = 0;

bool blinkingState = true;
bool ledState = LOW;

void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
    Serial.begin(115200);
    delay(2000);
}

void loop(){
    unsigned long currentMillis = millis();

    if (Serial.available > 0){
        String command = Serial.readStringUntil('\n');
        command.trim();
        command.toUpperCase();

        if (command == "off"){
            blinkingState = false;
            Serial.println("Blinking disabled!");
        }
        else if (command == "on"){
            blinkingState = true;
            Serial.println("Blinking enabled!");
        }
        else{
            Serial.println("Oii. No command like that exists bro. Try using on/off instead.")
        }
    }
    if (blinkingState && currentMillis - previousMillis >= interval){
        ledState = !ledState
        digitalWrite(LED_BUILTIN, ledState)
        currentMillis = previousMillis
    }
}