#ifndef SQUARE_H
#define SQUARE_H

#include "quadrilateral.h"

class Square : public Quadrilateral {
public:
    Square(double side);
    virtual ~Square() = default;

    virtual void printInfo() const override;
};

#endif