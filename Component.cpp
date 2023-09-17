#include "Component.h"
Component::Component() {
    this->name = " ";
}

Component::Component(string name) {
    this->name = name;
}

void Component::getName() {
    cout << "Component name: " << name << endl;
}