#pragma once
#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H

#include "quadrilateral.h"

class Parallelogram : public Quadrilateral {
public:
    Parallelogram(double sideA, double sideB, double angle);
    virtual ~Parallelogram() = default;

    virtual void printInfo() const override;
};

#endif