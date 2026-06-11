#include "rhombus.h"
#include <iostream>

Rhombus::Rhombus(double side, double angle)
    : Parallelogram(side, side, angle) {
    name = "Ромб";
}

void Rhombus::printInfo() const {
    std::cout << name << ":" << std::endl;
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
}