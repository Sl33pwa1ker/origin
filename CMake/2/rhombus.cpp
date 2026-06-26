#include "rhombus.h"
#include "figure_exception.h"
#include <iostream>

Rhombus::Rhombus(double side, double angle_A)
    : Quadrilateral(side, side, side, side, angle_A, 180 - angle_A, angle_A, 180 - angle_A) {
    name = "Ромб";

    if (a != b || b != c || c != d) {
        throw FigureException("все стороны не равны");
    }
    if (A != C || B != D) {
        throw FigureException("противоположные углы не равны");
    }
}

void Rhombus::printInfo() const {
    std::cout << name << " (стороны " << a << ", " << b << ", " << c << ", " << d
        << "; углы " << A << ", " << B << ", " << C << ", " << D << ")";
}