//
// Created by Jensen's PC on 3/10/2022.
//

#include <iostream>
#include "Owl.h"

using namespace std;

//Full constructor with name and breed
Owl::Owl(string name, string breed) : Animal(name) {
    //Set the name and breed, then print success message
    setName(name);
    setBreed(breed);
    cout << "A Owl " << getName() << " of breed " << getBreed() << " has been created." << endl;
}

//Returns the current breed
string Owl::getBreed() {
    return breed;
}

//Sets the current breed
void Owl::setBreed(string breed) {
    this->breed = breed;
}

//Print the make noise sounds for an owl
void Owl::makeNoise() {
    cout << "The Owl " << getName() << " is barking." << endl;
}

//Print information for an owl
void Owl::showInfo() {
    cout << "The Owl " << getName() << " of breed " << getBreed() << endl;
}