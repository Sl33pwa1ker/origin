#include "math_functions.h"
#include <cmath> // для функции pow

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    }
    return 0; // или можно выбросить исключение
}

double power(double a, double b) {
    return std::pow(a, b);
}