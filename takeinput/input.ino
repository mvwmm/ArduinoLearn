void setup() {
    Serial.begin(512500);
    delay(2000);
    Serial.println("Whats your name? ");
    String username = Serial.readStringUntil('\n'); // This line takes input/reads what was typed by the user
    Serial.print("Greetings, ");
    Serial.println(username);
}

void loop(){
    // Empty loop
}


// In this program:
// The program printed "Whats your username? "
// Then it waits for user to type something and hit enter
// Once user hits enter, something like this is sent to program:
//  N A M E \n
// "NAME" is what they typed and "\n" indicates that "E" is the final letter they typed.
// Now in the line: String username = Serial.readStringUntil('\n');
// It first creates a variable with string type
// Then Serial.readStringUntil('\n') assigns whatever was typed by the user to the variable username

// readString is simple and self-explnatory:
//  |
//  |
//  ----> It basically reads a string that was sent

// Until('\n) Explanation of this is given below
// |
// |
// -----> It continues to do previous task(reading a string in this case) until it finds "\n" in the input provided by user.
//        Once it finds that "\n" then it will simply stop reading and execute next lines of codes