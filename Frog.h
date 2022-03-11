//
// Created by Jensen's PC on 3/10/2022.
//

#ifndef ANIMALS_FROG_H
#define ANIMALS_FROG_H

#include "Animal.h"

using namespace std;

class Frog : public Animal{
    public :
        Frog(string name);
        void makeNoise();
        void showInfo();
};


#endif //ANIMALS_FROG_H
