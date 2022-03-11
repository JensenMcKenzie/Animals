//
// Created by Jensen's PC on 3/10/2022.
//

#ifndef ANIMALS_OWL_H
#define ANIMALS_OWL_H

#include "Animal.h"

using namespace std;

class Owl : public Animal{
    private:
        string breed;
    public:
        Owl(string name, string breed);
        void setBreed(string);
        string getBreed();
        void makeNoise();
        void showInfo();
};


#endif //ANIMALS_OWL_H
