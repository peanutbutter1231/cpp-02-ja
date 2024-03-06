#pragma once

#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

#include "car.hpp"

class Garage
{
public:
    Garage();

    void addCar(Car* car);
    void removeCar(Car* car);
    int getNumCars();

    void displayInfoG();    

private:
    std::vector<Car*> cars;
};