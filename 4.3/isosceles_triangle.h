#pragma once
#ifndef ISOSCELES_TRIANGLE_H
#define ISOSCELES_TRIANGLE_H

#include "triangle.h"

class IsoscelesTriangle : public Triangle {
public:
    IsoscelesTriangle(double base, double legs, double baseAngles, double vertexAngle);
    virtual ~IsoscelesTriangle() = default;

    virtual void printInfo() const override;
};

#endif