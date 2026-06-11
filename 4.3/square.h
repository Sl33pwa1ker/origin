#pragma once
#ifndef SQUARE_H
#define SQUARE_H

#include "rectangle.h"

class Square : public Rectangle {
public:
    Square(double side);
    virtual ~Square() = default;

    virtual void printInfo() const override;
};

#endif