// zavd_83.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "MobilePhone.h"
#include <iostream>

using namespace std;

int main() {
    string modelName;
    cout << "Enter name of your phone: ";
    getline(cin, modelName);

    if (modelName.empty()) {
        cout << "Model name cannot be empty. Exiting the simulator." << endl;
        return 1;
    }

    MobilePhone phone(modelName);
    bool isPlaying = false;

    while (true) {
        cout << "Mobile Phone Simulator" << endl;
        cout << "1. Turn On" << endl;
        cout << "2. Turn Off" << endl;
        cout << "3. Use Component Functionality" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;

        if (choice == 1) {
            if (isPlaying) {
                cout << "Phone is already turned on." << endl;
            }
            else {
                phone.turnOn();
                isPlaying = true;
            }
        }
        else if (choice == 2) {
            if (isPlaying) {
                phone.turnOff();
                isPlaying = false;
            }
            else {
                cout << "Phone is already turned off." << endl;
            }
        }
        else if (choice == 3) {
            if (isPlaying) {
                phone.useComponentFunctionality();
            }
            else {
                cout << "Phone is turned off. Turn it on to use component functionality." << endl;
            }
        }
        else if (choice == 4) {
            cout << "Exiting.... Goodbye!" << endl;
            return 0;
        }
        else {
            cout << "Invalid choice." << endl;
        }
    }
}