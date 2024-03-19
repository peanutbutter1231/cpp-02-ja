#include "shape.hpp"
#include "circle.hpp"

Circle::Circle(double radius) : m_radius(radius) {}

double Circle::getArea() {
    // 円の面積を計算
    double area = 3.14159 * m_radius * m_radius;

    return area;
}
