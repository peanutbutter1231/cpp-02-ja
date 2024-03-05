#pragma once

#include <string>

class Driver
{
public:
    Driver(const std::string& name, int age);

    std::string getName() const;
    int getAge() const;

private:
    std::string name;
    int age;
};