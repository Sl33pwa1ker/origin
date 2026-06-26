#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "figure.h"

class Triangle : public Figure {
protected:
    double a, b, c;
    double A, B, C;

public:
    Triangle(double side_a, double side_b, double side_c,
        double angle_A, double angle_B, double angle_C);
    virtual ~Triangle() = default;

    virtual void printInfo() const override;
};

#endif