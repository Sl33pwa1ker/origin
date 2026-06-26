#ifndef QUADRILATERAL_H
#define QUADRILATERAL_H

#include "figure.h"

class Quadrilateral : public Figure {
protected:
    double a, b, c, d;
    double A, B, C, D;

public:
    Quadrilateral(double side_a, double side_b, double side_c, double side_d,
        double angle_A, double angle_B, double angle_C, double angle_D);
    virtual ~Quadrilateral() = default;

    virtual void printInfo() const override;
};

#endif