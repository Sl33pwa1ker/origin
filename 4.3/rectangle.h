#pragma once
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "quadrilateral.h"

class Rectangle : public Quadrilateral {
public:
    Rectangle(double width, double height);
    virtual ~Rectangle() = default;

    virtual void printInfo() const override;
};

#endif