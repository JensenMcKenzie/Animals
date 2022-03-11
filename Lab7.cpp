/*
Lab7.cpp -
Author: Jensen McKenzie
Module: 7
Project: Lab 7
Problem Statement: Pracitce inheritance with different animal objects, and see how they interact with each other.
Algorithm/Plan:
  1.Create an animal, owl and frog variable.
  2. Use showInfo() to display the information for each object.
  3. Use makeNoise() to make each of the object make noise.
  4. Use sleep() to make each of the objects sleep.

Questions:
  1. The base class is called Animal.
  2. The names of the derived classes are Owl and Frog.
  3. Animal does not have a parent class.
  4. showInfo() is overridden in both of the child classes. makeNoise() is also overridden for both child objects. sleep() is not overridden at all.
  5. Yes, you would need to use functions to retrieve the value of name.
  6. You would not need to use getters to retrieve the information.
*/

#include <iostream>
#include "Animal.h"
#include "Frog.h"
#include "Owl.h"

using namespace std;

int main() {
    //Create 3 animal objects, 1 animal, 1 owl, 1 frog
    Animal *oscar = new Animal("oscar");
    Owl *errol = new Owl("Errol", "Great Grey");
    Frog *kermit = new Frog("Kermit");
    //Show information for all objects
    oscar->showInfo();
    errol->showInfo();
    kermit->showInfo();
    //Make noise for all objects
    oscar->makeNoise();
    errol->makeNoise();
    kermit->makeNoise();
    //Make all objects sleep
    oscar->sleep();
    errol->sleep();
    kermit->sleep();
}
