#include "figure.h"

Figure::Figure() : name("Фигура") {}

std::string Figure::getName() const {
    return name;
}