#include <Arduino.h>

int main(void) {
    init();          // 1. Initializes the microcontroller hardware
    initVariant();   // 2. Initializes specific board variants (if needed)

    setup();         // 3. Runs your setup code EXACTLY ONCE
    
    for (;;) {       // 4. Starts an infinite loop
        loop();      // 5. Runs your loop code over and over
        if (serialEventRun) serialEventRun(); // 6. Checks for serial data
    }
        
    return 0;
}
