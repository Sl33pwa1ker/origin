#include "right_triangle.h"
#include <iostream>

RightTriangle::RightTriangle(double a, double b, double c, double A, double B)
    : Triangle(a, b, c, A, B, 90) {
    name = "Прямоугольный треугольник";
}

void RightTriangle::printInfo() const {
    std::cout << name << ":" << std::endl;
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
}