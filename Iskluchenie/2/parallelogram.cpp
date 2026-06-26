#include "parallelogram.h"
#include "figure_exception.h"
#include <iostream>

Parallelogram::Parallelogram(double side_a, double side_b, double angle_A)
    : Quadrilateral(side_a, side_b, side_a, side_b, angle_A, 180 - angle_A, angle_A, 180 - angle_A) {
    name = "Параллелограмм";

    if (a != c || b != d) {
        throw FigureException("противоположные стороны не равны");
    }
    if (A != C || B != D) {
        throw FigureException("противоположные углы не равны");
    }
}

void Parallelogram::printInfo() const {
    std::cout << name << " (стороны " << a << ", " << b << ", " << c << ", " << d
        << "; углы " << A << ", " << B << ", " << C << ", " << D << ")";
}