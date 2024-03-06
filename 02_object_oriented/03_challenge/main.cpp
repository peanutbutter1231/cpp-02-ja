#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <array>

#include "car.hpp"
#include "garage.hpp"

int main()
{
    Garage garage;

    Car car1("Toyota", "Camry", 2020, 25'000);
    Car car2("Honda", "Civic", 2021, 23'000);
    Car car3("Ford", "Mustang", 2019, 28'000);

    garage.addCar(&car1);
    garage.addCar(&car2);
    garage.addCar(&car3);

//    car1.displayInfo();
//    car2.displayInfo();
//    car3.displayInfo();

    garage.displayInfoG();
    std::cout << "\n";

//    std::cout << garage.getNumCars() << "\n";

    garage.removeCar(&car2);

    garage.displayInfoG();

//    std::cout << garage.getNumCars();
}