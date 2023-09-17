#include "MobilePhone.h"
MobilePhone::MobilePhone(string model) {
    this->model = model;
    turnedOn = false;
    display = Component("Display");
    camera = Component("Camera");
    processor = Component("Processor");
}

void MobilePhone::turnOn() {
    turnedOn = true;
    cout << model << " turned on" << endl;
}

void MobilePhone::turnOff() {
    turnedOn = false;
    cout << model << " turned off" << endl;
}

void MobilePhone::useComponentFunctionality() {
    if (turnedOn) {
        display.getName();
        camera.getName();
        processor.getName();
    }
    else {
        cout << model << " cannot perform operations because it's turned off" << endl;
    }
}