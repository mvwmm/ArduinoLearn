void setup(){
    pinMode(LED_BUILTIN, OUTPUT); // Configures the settings for a specific pin.
// Syntax: pinMode(pin, mode);
// configures a specific digital pin to behave either as an input or an output
// LED_BUILTIN = The LED that is present and in-built in the chip
// OUTPUT = Changing the voltage(Allowing current to pass or to not pass)
}


void loop(){
    int x;
    std::cout << "How many times you want the LED to blink? ";
    std::in >> x;
    for (int i = 0; i < x; i++){
        digitalWrite(LED_BUILTIN, HIGH);          // Turn on LED
        delay(200);                               // Wait 0.2 seconds
        digitalWrite(LED_BUILTIN, LOW);           // Turn off LED
        delay(200);                               // Wait 0.2 seconds
    }
}
/*
Other hardcoded method of the same thing above but this one has no looping within it:

void loop(){
    digitalWrite(LED_BUILTIN, HIGH);          // Turn on LED
    delay(200);                               // Wait 0.2 seconds
    digitalWrite(LED_BUILTIN, LOW);           // Turn off LED
    delay(200);                               // Wait 0.2 seconds
    digitalWrite(LED_BUILTIN, HIGH);          // Turn on LED
    delay(200);                               // Wait 0.2 seconds
    digitalWrite(LED_BUILTIN, LOW);           // Turn off LED
    delay(200);                               // Wait 0.2 seconds
    digitalWrite(LED_BUILTIN, HIGH);          // Turn on LED
    delay(200);                               // Wait 0.2 seconds
    digitalWrite(LED_BUILTIN, LOW);           // Turn off LED
    delay(200);                               // Wait 0.2 seconds
    digitalWrite(LED_BUILTIN, HIGH);          // Turn on LED
    delay(200);                               // Wait 0.2 seconds
    digitalWrite(LED_BUILTIN, LOW);           // Turn off LED
    delay(200);                               // Wait 0.2 seconds
}

*/





// DigitalWrite = Changing the voltage of a pin in the physical hardware

// Syntax: digitalWrite(Pin, value);
// value can be either low(no passing of current) or high(allow passing of current)







// However, one thing to note:
// delay is extremely easy to use like when you first use it then you will see 4 lines of code with easy blinking. Everything is fun,
// glittery, and games but once you move to intermediate level then you will get to know that delay() function actually pauses the entire 
// program for one task. Like even in the above function inside the for loop, it waits for 0.2 seconds before processing the next line.
// I hope you get to know that waiting for just one program freezes the entire program and is not a good thing for most of  the programs.


// If you want to learn how to blink it without freezing the program, go to blink2.ino
// It will be a bit pain for you to learn it but trust me, it is insanely useful!