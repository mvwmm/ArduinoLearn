const unsigned long interval = 1000; // Assigning a constant positive number. Detailed explanation below.
unsigned long previousMillis = 0;    // Explanation of the datatype and stuff behind interval is given at end of this file.
bool ledState = LOW;                 // Sets the LED's state to Off in a variable called ledState
bool blinkingState = true;           // sets the blinking to true in a variable called blinkingState 

void setup(){
    pinMode(LED_BUILTIN, OUTPUT);    // Configuring a pin and telling if it is input or output.
    Serial.begin(115200);            // Port on which output is shown
    delay(2000);                     // Waits 2 seconds
}

void loop(){
    unsigned long currentMillis = millis(); // Assigning a positive number to variable currentMillis.

    if (blinkingState && currentMillis - previousMillis >= interval){ // Since blinkingState is true by default, the first condition runs by default
                                                                      // And then it checks if 1 second or more than 1 second has been passed through
                                                                      // Arithmetic operation. If it has passed more or exactly 1 second then
                                                                      // the for loop is going to be executed.

        ledState = !ledState;                                         // flips the boolean value of ledState variable.

        digitalWrite(LED_BUILTIN, ledState);                          // Self explanatory

        previousMillis = currentMillis;                               // Save at what time the LED blinked, in a variable called previousMillis
    }
}





// Explanation of big ass data types that many of you won't understand at first:
// long = the standard datatype int only lets you hold numbers till ±2.14 billion or smaller on 16/32 bit systems. 
//        But this long datatype gives you a bigger box to hold large numbers.
// const = constant. If a variable is declared with this type then that variable's value can't be changed later on the program
// unsigned = removal of minus sign which lets you store whole numbers from 0 to 4.1 billion



// General idea/concept behind how it actually works(without needing to understand the code):
//  |
//    So first of all, it starts with blinking boolean variable with true state. Which means one condition of the blinking is true at
//    last and then in the second part it just checks if 1 or more second is passed from the previous time when
//    the LED blinked(initially the previous time is at 0) then it changes when the LED turns on.





// You can have a look at blinks.ino to just have a clear syntax instead of these bunch of comments with the syntax


// I will still maybe change the explanations if you guys still dont understand shits