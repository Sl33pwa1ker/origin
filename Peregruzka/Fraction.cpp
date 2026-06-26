#include "fraction.h"
#include <algorithm>
#include <cmath>

// Алгоритм Евклида для нахождения НОД
int Fraction::gcd(int a, int b) {
    a = std::abs(a);
    b = std::abs(b);
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Сокращение дроби
void Fraction::reduce() {
    if (denominator == 0) {
        throw std::domain_error("Denominator cannot be zero");
    }

    // Если числитель равен 0, знаменатель делаем 1
    if (numerator == 0) {
        denominator = 1;
        return;
    }

    // Приводим знак к стандартному виду: знак хранится в числителе
    if (denominator < 0) {
        numerator = -numerator;
        denominator = -denominator;
    }

    int divisor = gcd(numerator, denominator);
    numerator /= divisor;
    denominator /= divisor;
}

// Конструктор
Fraction::Fraction(int num, int den) : numerator(num), denominator(den) {
    if (denominator == 0) {
        throw std::domain_error("Denominator cannot be zero");
    }
    reduce();
}

// Метод dump
std::string Fraction::dump() const {
    return std::to_string(numerator) + "/" + std::to_string(denominator);
}

// Арифметические операторы
Fraction Fraction::operator+(const Fraction& other) const {
    int new_num = numerator * other.denominator + other.numerator * denominator;
    int new_den = denominator * other.denominator;
    return Fraction(new_num, new_den);
}

Fraction Fraction::operator-(const Fraction& other) const {
    int new_num = numerator * other.denominator - other.numerator * denominator;
    int new_den = denominator * other.denominator;
    return Fraction(new_num, new_den);
}

Fraction Fraction::operator*(const Fraction& other) const {
    int new_num = numerator * other.numerator;
    int new_den = denominator * other.denominator;
    return Fraction(new_num, new_den);
}

Fraction Fraction::operator/(const Fraction& other) const {
    if (other.numerator == 0) {
        throw std::domain_error("Division by zero");
    }
    int new_num = numerator * other.denominator;
    int new_den = denominator * other.numerator;
    return Fraction(new_num, new_den);
}

// Операторы составного присваивания
Fraction& Fraction::operator+=(const Fraction& other) {
    *this = *this + other;
    return *this;
}

Fraction& Fraction::operator-=(const Fraction& other) {
    *this = *this - other;
    return *this;
}

Fraction& Fraction::operator*=(const Fraction& other) {
    *this = *this * other;
    return *this;
}

Fraction& Fraction::operator/=(const Fraction& other) {
    *this = *this / other;
    return *this;
}

// Операторы сравнения
bool Fraction::operator==(const Fraction& other) const {
    // Сравниваем перекрестным умножением
    return numerator * other.denominator == other.numerator * denominator;
}

bool Fraction::operator!=(const Fraction& other) const {
    return !(*this == other);
}

bool Fraction::operator<(const Fraction& other) const {
    return numerator * other.denominator < other.numerator * denominator;
}

bool Fraction::operator>(const Fraction& other) const {
    return other < *this;
}

bool Fraction::operator<=(const Fraction& other) const {
    return !(*this > other);
}

bool Fraction::operator>=(const Fraction& other) const {
    return !(*this < other);
}

// Унарный минус
Fraction Fraction::operator-() const {
    return Fraction(-numerator, denominator);
}

// Префиксный инкремент (увеличивает на 1)
Fraction& Fraction::operator++() {
    numerator += denominator;
    reduce();
    return *this;
}

// Префиксный декремент (уменьшает на 1)
Fraction& Fraction::operator--() {
    numerator -= denominator;
    reduce();
    return *this;
}

// Постфиксный инкремент (увеличивает на 1)
Fraction Fraction::operator++(int) {
    Fraction temp = *this;
    numerator += denominator;
    reduce();
    return temp;
}

// Постфиксный декремент (уменьшает на 1)
Fraction Fraction::operator--(int) {
    Fraction temp = *this;
    numerator -= denominator;
    reduce();
    return temp;
}