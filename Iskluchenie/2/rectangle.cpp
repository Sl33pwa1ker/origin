#include "rectangle.h"
#include "figure_exception.h"
#include <iostream>

Rectangle::Rectangle(double side_a, double side_b)
    : Quadrilateral(side_a, side_b, side_a, side_b, 90, 90, 90, 90) {
    name = "Прямоугольник";

    if (a != c || b != d) {
        throw FigureException("противоположные стороны не равны");
    }
    if (A != 90 || B != 90 || C != 90 || D != 90) {
        throw FigureException("все углы не равны 90");
    }
}

void Rectangle::printInfo() const {
    std::cout << name << " (стороны " << a << ", " << b << ", " << c << ", " << d
        << "; углы " << A << ", " << B << ", " << C << ", " << D << ")";
}