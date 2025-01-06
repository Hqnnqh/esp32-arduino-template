#include <Arduino.h>

void setup() {
    Serial.begin(115200);
    Serial.println("Hello, Arduino on ESP32!");
}

void loop() {
    Serial.println("Running Arduino code...");
    delay(1000); // Wait for 1 second
}


extern "C" void app_main() {
    initArduino();
    setup();
    while (true) {
        loop();
    }
}
