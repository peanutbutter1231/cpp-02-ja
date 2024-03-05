#include <string>

#include "driver.hpp"

Driver::Driver(const std::string& name, int age) : name(name), age(age){};

std::string Driver::getName() const{
    return name;
}

int Driver::getAge() const{
    return age;
}

