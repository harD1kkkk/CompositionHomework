#pragma once
#include <iostream>
#include <string>

using namespace std;

class Component {
public:
    Component(string name);
    Component();
    void getName();

private:
    string name;
};