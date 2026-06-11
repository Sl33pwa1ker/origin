#pragma once
#ifndef RIGHT_TRIANGLE_H
#define RIGHT_TRIANGLE_H

#include "triangle.h"

class RightTriangle : public Triangle {
public:
    RightTriangle(double a, double b, double c, double A, double B);
    virtual ~RightTriangle() = default;

    virtual void printInfo() const override;
};

#endif