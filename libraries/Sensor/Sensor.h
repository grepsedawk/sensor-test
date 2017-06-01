//
// Created by alex on 6/1/17.
//

#ifndef SENSOR_H
#define SENSOR_H

#include "Arduino.h"

class Sensor {
public:
    Sensor(int pin);
    void dot();
    void dash();
private:
    int _pin;
};


#endif //SENSOR_H
