#pragma once
#include "Component.h"

class MobilePhone {
public:
    MobilePhone(string model);

    void turnOn();
    void turnOff();
    void useComponentFunctionality();

private:
    string model;
    bool turnedOn;
    Component display;
    Component camera;
    Component processor;
};