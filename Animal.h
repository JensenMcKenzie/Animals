//
// Created by Jensen's PC on 3/10/2022.
//

#ifndef ANIMALS_ANIMAL_H
#define ANIMALS_ANIMAL_H

#include <string>

using namespace std;

class Animal {
    private :
        string name;

    public:
        Animal(string);
        string getName();
        void setName(string);
        void sleep();
        void makeNoise();
        void showInfo();
};


#endif //ANIMALS_ANIMAL_H
