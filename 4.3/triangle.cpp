#include "triangle.h"
#include <iostream>

Triangle::Triangle(double sideA, double sideB, double sideC,
    double angleA, double angleB, double angleC)
    : a(sideA), b(sideB), c(sideC), A(angleA), B(angleB), C(angleC) {
    name = "Треугольник";
}

void Triangle::printInfo() const {
    std::cout << name << ":" << std::endl;
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
}