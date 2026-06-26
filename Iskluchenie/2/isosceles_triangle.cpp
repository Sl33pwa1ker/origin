#include "isosceles_triangle.h"
#include "figure_exception.h"
#include <iostream>

IsoscelesTriangle::IsoscelesTriangle(double side_a, double side_b,
    double angle_A, double angle_B)
    : Triangle(side_a, side_b, side_a, angle_A, angle_B, angle_A) {
    name = "Равнобедренный треугольник";

    if (a != c) {
        throw FigureException("стороны a и c не равны");
    }
    if (A != C) {
        throw FigureException("углы A и C не равны");
    }
}

void IsoscelesTriangle::printInfo() const {
    std::cout << name << " (стороны " << a << ", " << b << ", " << c
        << "; углы " << A << ", " << B << ", " << C << ")";
}