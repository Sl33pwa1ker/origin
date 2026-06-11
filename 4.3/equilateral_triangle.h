#pragma once
#ifndef EQUILATERAL_TRIANGLE_H
#define EQUILATERAL_TRIANGLE_H

#include "triangle.h"

class EquilateralTriangle : public Triangle {
public:
    EquilateralTriangle(double side);
    virtual ~EquilateralTriangle() = default;

    virtual void printInfo() const override;
};

#endif