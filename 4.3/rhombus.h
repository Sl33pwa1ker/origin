#pragma once
#ifndef RHOMBUS_H
#define RHOMBUS_H

#include "parallelogram.h"

class Rhombus : public Parallelogram {
public:
    Rhombus(double side, double angle);
    virtual ~Rhombus() = default;

    virtual void printInfo() const override;
};

#endif