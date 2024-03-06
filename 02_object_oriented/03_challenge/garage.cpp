#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

#include "car.hpp"
#include "garage.hpp"

Garage::Garage() {}

void Garage::addCar(Car* car)
{
    cars.push_back(car);
}

void Garage::removeCar(Car* car)
{
    auto it = std::find(cars.begin(), cars.end(), car);
    if (it != cars.end()){
        cars.erase(it);
    }
}

int Garage::getNumCars()
{
    return cars.size();
}

void Garage::displayInfoG(){
    for (const Car* p : cars) {
        p->displayInfo();
    }
}
