#include <iostream>

#include "shape.hpp"
#include "circle.hpp"

int main(){
    Circle circle1(4);

    std::cout << circle1.getArea() << std::endl;
}