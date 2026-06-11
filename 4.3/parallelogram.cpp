#include "parallelogram.h"
#include <iostream>

Parallelogram::Parallelogram(double sideA, double sideB, double angle)
    : Quadrilateral(sideA, sideB, sideA, sideB, angle, 180 - angle, angle, 180 - angle) {
    name = "Параллелограмм";
}

void Parallelogram::printInfo() const {
    std::cout << name << ":" << std::endl;
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
}