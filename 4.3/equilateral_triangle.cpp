#include "equilateral_triangle.h"
#include <iostream>

EquilateralTriangle::EquilateralTriangle(double side)
    : Triangle(side, side, side, 60, 60, 60) {
    name = "Равносторонний треугольник";
}

void EquilateralTriangle::printInfo() const {
    std::cout << name << ":" << std::endl;
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
}