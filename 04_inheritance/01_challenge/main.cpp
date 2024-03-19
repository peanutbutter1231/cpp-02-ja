#include <iostream>
#include <string>

class Vehicle {
public:
    Vehicle(const std::string& type, double speed, double fuel)
        : type_(type), speed_(speed), fuel_(fuel) {}

    void DisplayInfo() const {
        std::cout << "Type: " << type_ << "\n";
        std::cout << "Speed: " << speed_ << " km/h\n";
        std::cout << "Fuel: " << fuel_ << " liters\n";
    }

private:
    std::string type_;
    double speed_;
    double fuel_;
};

class Car : public Vehicle {
public:
    Car(const std::string& brand, double speed, double fuel)
        : Vehicle("Car", speed, fuel), brand_(brand) {}

    void DisplayBrand() const {
        std::cout << "Brand: " << brand_ << "\n";
    }

private:
    std::string brand_;
};

class Motorcycle : public Vehicle {
public:
    Motorcycle(const std::string& make, double speed, double fuel)
        : Vehicle("Motorcycle", speed, fuel), make_(make) {}

    void DisplayMake() const {
        std::cout << "Make: " << make_ << "\n";
    }

private:
    std::string make_;
};

int main() {
    Car myCar("Toyota", 120.0, 40.0);
    Motorcycle myMotorcycle("Honda", 90.0, 20.0);

    std::cout << "Car Info:\n";
    myCar.DisplayInfo();
    myCar.DisplayBrand();

    std::cout << "\nMotorcycle Info:\n";
    myMotorcycle.DisplayInfo();
    myMotorcycle.DisplayMake();

    return 0;
}