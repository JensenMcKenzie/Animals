#include <iostream>
#include "Animal.h"
#include "Frog.h"
#include "Owl.h"

using namespace std;

int main() {
    Animal *oscar = new Animal("oscar");
    Owl *errol = new Owl("Errol", "Great Grey");
    Frog *kermit = new Frog("Kermit");
    oscar->showInfo();
    errol->showInfo();
    kermit->showInfo();
    oscar->makeNoise();
    errol->makeNoise();
    kermit->makeNoise();
    oscar->sleep();
    errol->sleep();
    kermit->sleep();
}
