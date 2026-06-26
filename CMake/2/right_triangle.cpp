#include "right_triangle.h"
#include "figure_exception.h"
#include <iostream>

RightTriangle::RightTriangle(double side_a, double side_b, double side_c,
    double angle_A, double angle_B)
    : Triangle(side_a, side_b, side_c, angle_A, angle_B, 90) {
    name = "Прямоугольный треугольник";

    if (C != 90) {
        throw FigureException("угол C не равен 90");
    }
}

void RightTriangle::printInfo() const {
    std::cout << name << " (стороны " << a << ", " << b << ", " << c
        << "; углы " << A << ", " << B << ", " << C << ")";
}