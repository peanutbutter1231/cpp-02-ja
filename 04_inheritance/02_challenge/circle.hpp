#pragma once

#include "shape.hpp"

class Circle : public Shape {
public:
    Circle(double radius);
    double getArea(); 

private:
    double m_radius;
};