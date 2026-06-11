#pragma once
#ifndef QUADRILATERAL_H
#define QUADRILATERAL_H

#include "figure.h"

class Quadrilateral : public Figure {
protected:
    double a, b, c, d;  // стороны
    double A, B, C, D;  // углы в градусах

public:
    Quadrilateral(double a, double b, double c, double d,
        double A, double B, double C, double D);
    virtual ~Quadrilateral() = default;

    virtual void printInfo() const override;
};

#endif