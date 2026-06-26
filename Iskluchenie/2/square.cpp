#include "square.h"
#include "figure_exception.h"
#include <iostream>

Square::Square(double side)
    : Quadrilateral(side, side, side, side, 90, 90, 90, 90) {
    name = "Квадрат";

    if (a != b || b != c || c != d) {
        throw FigureException("все стороны не равны");
    }
    if (A != 90 || B != 90 || C != 90 || D != 90) {
        throw FigureException("все углы не равны 90");
    }
}

void Square::printInfo() const {
    std::cout << name << " (стороны " << a << ", " << b << ", " << c << ", " << d
        << "; углы " << A << ", " << B << ", " << C << ", " << D << ")";
}