#ifndef RIGHT_TRIANGLE_H
#define RIGHT_TRIANGLE_H

#include "triangle.h"

class RightTriangle : public Triangle {
public:
    RightTriangle(double side_a, double side_b, double side_c,
        double angle_A, double angle_B);
    virtual ~RightTriangle() = default;

    virtual void printInfo() const override;
};

#endif