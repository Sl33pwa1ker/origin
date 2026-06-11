#include "rectangle.h"
#include <iostream>

Rectangle::Rectangle(double width, double height)
    : Quadrilateral(width, height, width, height, 90, 90, 90, 90) {
    name = "Прямоугольник";
}

void Rectangle::printInfo() const {
    std::cout << name << ":" << std::endl;
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
}