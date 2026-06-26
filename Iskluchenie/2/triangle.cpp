#include "triangle.h"
#include <iostream>

Triangle::Triangle(double side_a, double side_b, double side_c,
    double angle_A, double angle_B, double angle_C)
    : a(side_a), b(side_b), c(side_c), A(angle_A), B(angle_B), C(angle_C) {
    name = "Треугольник";
    sides_count = 3;

    if (A + B + C != 180) {
        throw FigureException("сумма углов не равна 180");
    }
}

void Triangle::printInfo() const {
    std::cout << name << " (стороны " << a << ", " << b << ", " << c
        << "; углы " << A << ", " << B << ", " << C << ")";
}