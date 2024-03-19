#include <iostream>

#include "animal.hpp"
#include "dog.hpp"

int main(){
    Animal base_animal;
    base_animal.makeSound();

    Dog dog1;
    dog1.makeSound();

    return 0;
}