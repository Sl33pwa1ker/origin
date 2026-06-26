#ifndef FIGURE_EXCEPTION_H
#define FIGURE_EXCEPTION_H

#include <stdexcept>
#include <string>

class FigureException : public std::domain_error {
public:
    explicit FigureException(const std::string& message)
        : std::domain_error(message) {}
};

#endif