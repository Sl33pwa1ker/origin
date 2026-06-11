#include "isosceles_triangle.h"
#include <iostream>

IsoscelesTriangle::IsoscelesTriangle(double base, double legs,
    double baseAngles, double vertexAngle)
    : Triangle(base, legs, legs, baseAngles, baseAngles, vertexAngle) {
    name = "Равнобедренный треугольник";
}

void IsoscelesTriangle::printInfo() const {
    std::cout << name << ":" << std::endl;
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
}