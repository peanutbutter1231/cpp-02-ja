#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <array>

#include "car.hpp"
#include "tire.hpp"

int main()
{
    Tire tire(20, "winter");

    Car car1("Toyota", "Camry", 2020, 25'000, 20.5, "Winter");
    Car car2("Honda", "Civic", 2021, 23'000, 17.5, "All-Season");
    Car car3("Ford", "Mustang", 2019, 28'000, 30, "Summer");

    car1.displayInfo();
    car2.displayInfo();
    car3.displayInfo();

    return 0;
}