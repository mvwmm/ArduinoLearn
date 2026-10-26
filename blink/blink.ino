void setup(){
    pinMode(LED_BUILTIN, OUTPUT); // Configures the settings
// Syntax: pinMode(pin, mode);
// configures a specific digital pin to behave either as an input or an output
// LED_BUILTIN = The LED that is present and in-built in the chip
// OUTPUT = Changing the voltage(Allowing current to pass or to not pass)
}


void loop(){
    digitalWrite(LED_BUILTIN, HIGH) // Turns on the LED
    delay(2000)                     // Waits for 2 seconds
    digitalWrite(LED_BUILTIN, LOW)  // Turns off the LED
}

// DigitalWrite = Changing the voltage of a pin in the physical hardware

// Syntax: digitalWrite(Pin, value);
// value can be either low(no passing of current) or high(allow passing of current)