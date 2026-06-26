#ifndef RHOMBUS_H
#define RHOMBUS_H

#include "quadrilateral.h"

class Rhombus : public Quadrilateral {
public:
    Rhombus(double side, double angle_A);
    virtual ~Rhombus() = default;

    virtual void printInfo() const override;
};

#endif