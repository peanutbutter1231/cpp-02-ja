#include "car.hpp"
#include <array>
#include <iostream>

int main() {
    Car car1("Toyota", "Camry", 2020, 25'000);
    Car car2("Honda", "Civic", 2021, 23'000);
    Car car3("Ford", "Mustang", 2019, 28'000);

    std::array<Car, 3> cars {car1, car2, car3};

    for (const Car& car : cars) {
        car.displayInfo();
    }

    car1.setPrice(26'000);
    std::cout << car1.getPrice() << "\n";
}