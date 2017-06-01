#include <Arduino.h>
#include "libraries/sensor/Sensor.h"

Sensor sensor(13);

void setup() {
    Serial.begin(9600);
}

void loop() {
    sensor.dot(); sensor.dot(); sensor.dot();
    sensor.dash(); sensor.dash(); sensor.dash();
    sensor.dot(); sensor.dot(); sensor.dot();
    delay(3000);
}
