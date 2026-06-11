#pragma once
#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "figure.h"

class Triangle : public Figure {
protected:
    double a, b, c;  // стороны
    double A, B, C;  // углы в градусах

public:
    Triangle(double a, double b, double c, double A, double B, double C);
    virtual ~Triangle() = default;

    virtual void printInfo() const override;
};

#endif