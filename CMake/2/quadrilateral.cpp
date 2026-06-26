#include "quadrilateral.h"
#include "figure_exception.h"
#include <iostream>

Quadrilateral::Quadrilateral(double side_a, double side_b, double side_c, double side_d,
    double angle_A, double angle_B, double angle_C, double angle_D)
    : a(side_a), b(side_b), c(side_c), d(side_d),
    A(angle_A), B(angle_B), C(angle_C), D(angle_D) {
    name = "Четырёхугольник";
    sides_count = 4;

    if (A + B + C + D != 360) {
        throw FigureException("сумма углов не равна 360");
    }
}

void Quadrilateral::printInfo() const {
    std::cout << name << " (стороны " << a << ", " << b << ", " << c << ", " << d
        << "; углы " << A << ", " << B << ", " << C << ", " << D << ")";
}