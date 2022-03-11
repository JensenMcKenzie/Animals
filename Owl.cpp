//
// Created by Jensen's PC on 3/10/2022.
//

#include <iostream>
#include "Owl.h"

using namespace std;

Owl::Owl(string name, string breed) : Animal(name) {
    setName(name);
    setBreed(breed);
    cout << "A Owl " << getName() << " of breed " << getBreed() << " has been created." << endl;
}

string Owl::getBreed() {
    return breed;
}

void Owl::setBreed(string breed) {
    this->breed = breed;
}

void Owl::makeNoise() {
    cout << "The Owl " << getName() << " is barking." << endl;
}

void Owl::showInfo() {
    cout << "The Owl " << getName() << " of breed " << getBreed() << endl;
}