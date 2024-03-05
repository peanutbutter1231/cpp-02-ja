#include <iostream>

#include "driver.hpp"
#include "car.hpp"

int main() {
    Driver driver("John Doe", 30);
    Car car1("Toyota", "Camry", 2020, 25'000);
    car1.setDriver(&driver);

    std::cout << "Driver name: " << driver.getName() << std::endl;
    std::cout << "Driver age: " << driver.getAge() << " years old" << std::endl;

    std::cout << "Driver name: " << car1.getDriver()->getName() << std::endl;
    std::cout << "Driver age: " << car1.getDriver()->getAge() << " years old" << std::endl;

    return 0;
}