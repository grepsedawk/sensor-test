//
// Created by alex on 6/1/17.
//
#include "Arduino.h"
#include "Sensor.h"

Sensor::Sensor(int pin)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
}

void Sensor::dot()
{
  Serial.println('dot');
}

void Sensor::dash()
{
  Serial.println('dash');
}
