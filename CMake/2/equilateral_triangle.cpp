#include "equilateral_triangle.h"
#include "figure_exception.h"
#include <iostream>

EquilateralTriangle::EquilateralTriangle(double side)
    : Triangle(side, side, side, 60, 60, 60) {
    name = "Равносторонний треугольник";

    if (a != b || b != c) {
        throw FigureException("все стороны не равны");
    }
    if (A != 60 || B != 60 || C != 60) {
        throw FigureException("все углы не равны 60");
    }
}

void EquilateralTriangle::printInfo() const {
    std::cout << name << " (стороны " << a << ", " << b << ", " << c
        << "; углы " << A << ", " << B << ", " << C << ")";
}