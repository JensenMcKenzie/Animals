//
// Created by Jensen's PC on 3/10/2022.
//

#include <iostream>
#include "Frog.h"

using namespace std;

Frog::Frog(string name) : Animal(name) {
    setName(name);
    cout << "A Frog " << getName() << " has been created." << endl;
}

void Frog::makeNoise() {
    cout << "The Frog " << getName() << " is chirping." << endl;
}

void Frog::showInfo() {
    cout << "The Frog " << getName() << endl;
}