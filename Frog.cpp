//
// Created by Jensen's PC on 3/10/2022.
//

#include <iostream>
#include "Frog.h"

using namespace std;

//Full constructor
Frog::Frog(string name) : Animal(name) {
    //Set the name, print specialized success message
    setName(name);
    cout << "A Frog " << getName() << " has been created." << endl;
}

//Print the make noise text for a frog
void Frog::makeNoise() {
    cout << "The Frog " << getName() << " is chirping." << endl;
}

//Print information for a frog
void Frog::showInfo() {
    cout << "The Frog " << getName() << endl;
}