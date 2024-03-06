#include <string>

#include "tire.hpp"

Tire::Tire(float size, const std::string& type) : size(size), type(type){}

float Tire::getSize()const{
    return size;
}

std::string Tire::getType()const{
    return type;
}