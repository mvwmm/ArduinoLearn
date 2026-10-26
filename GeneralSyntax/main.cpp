#include <Arduino.h>

int main(void) {
    init();
    initVariant();
    setup();

    for (;;) {
        loop();
        if (serialEventRun) serialEventRun();
    }
    return 0;
}
