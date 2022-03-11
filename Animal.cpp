//
// Created by Jensen's PC on 3/10/2022.
//

#include <iostream>
#include "Animal.h"

using namespace std;

Animal::Animal(string name) {
    setName(name);
    cout << "The Animal " << this->name << " has been created." << endl;
}

string Animal::getName() {
    return name;
}

void Animal::setName(string name) {
    this->name = name;
}

void Animal::sleep() {
    cout << "The Animal " << name << " is asleep." << endl;
}

void Animal::makeNoise() {
    cout << "The Animal " << name << " is making a noise." << endl;
}

void Animal::showInfo() {
    cout << "The Animal " << name << endl;
}