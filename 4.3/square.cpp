#include "square.h"
#include <iostream>

Square::Square(double side)
    : Rectangle(side, side) {
    name = "Квадрат";
}

void Square::printInfo() const {
    std::cout << name << ":" << std::endl;
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
}