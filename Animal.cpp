//
// Created by Jensen's PC on 3/10/2022.
//

#include <iostream>
#include "Animal.h"

using namespace std;

//Full constructor
Animal::Animal(string name) {
    //Set the name, and print the success message
    setName(name);
    cout << "The Animal " << this->name << " has been created." << endl;
}

//Return the name
string Animal::getName() {
    return name;
}

//Set the name
void Animal::setName(string name) {
    this->name = name;
}

//Make the animal sleep, print message
void Animal::sleep() {
    cout << "The Animal " << name << " is asleep." << endl;
}

//Make the animal make noise, print a message
void Animal::makeNoise() {
    cout << "The Animal " << name << " is making a noise." << endl;
}

//Show information on the current animal
void Animal::showInfo() {
    cout << "The Animal " << name << endl;
}