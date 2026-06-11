#pragma once
#ifndef FIGURE_H
#define FIGURE_H

#include <string>

class Figure {
protected:
    std::string name;

public:
    Figure();
    virtual ~Figure() = default;

    virtual void printInfo() const = 0;  // чисто виртуальная функция
    std::string getName() const;
};

#endif