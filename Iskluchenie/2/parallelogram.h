#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H

#include "quadrilateral.h"

class Parallelogram : public Quadrilateral {
public:
    Parallelogram(double side_a, double side_b, double angle_A);
    virtual ~Parallelogram() = default;

    virtual void printInfo() const override;
};

#endif