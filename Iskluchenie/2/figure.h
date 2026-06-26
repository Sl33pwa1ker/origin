#ifndef FIGURE_H
#define FIGURE_H

#include <string>
#include "figure_exception.h"

class Figure {
protected:
    std::string name;
    int sides_count;

public:
    Figure() : name("Фигура"), sides_count(0) {}
    virtual ~Figure() = default;

    virtual void printInfo() const = 0;

    int getSidesCount() const { return sides_count; }
    std::string getName() const { return name; }
};

#endif