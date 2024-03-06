#pragma once

#include <string>

class Tire
{
public:
    Tire(float size, const std::string& type);

    float getSize() const;
    std::string getType() const;

private:
    float size;
    std::string type;
};