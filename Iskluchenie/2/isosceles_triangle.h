#ifndef ISOSCELES_TRIANGLE_H
#define ISOSCELES_TRIANGLE_H

#include "triangle.h"

class IsoscelesTriangle : public Triangle {
public:
    IsoscelesTriangle(double side_a, double side_b, double angle_A, double angle_B);
    virtual ~IsoscelesTriangle() = default;

    virtual void printInfo() const override;
};

#endif