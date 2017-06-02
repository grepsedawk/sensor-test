#include <Arduino.h>
#include <Sensor.h>
#include <Timer.h>

Timer t;
Sensor temperature(A0, 515, 240, 70, 98);

void setup() {
  Serial.begin(9600);
  t.every(1000, print_temp);
}

void loop() {
  t.update();
}

void print_temp() {
  Serial.println(temperature.value());
}
