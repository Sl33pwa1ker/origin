#ifndef FRACTION_H
#define FRACTION_H

#include <string>
#include <stdexcept>

class Fraction {
private:
    int numerator;     // Числитель
    int denominator;   // Знаменатель

    // Вспомогательная функция для нахождения НОД (алгоритм Евклида)
    static int gcd(int a, int b);

    // Функция для сокращения дроби
    void reduce();

public:
    // Конструкторы
    Fraction(int num = 0, int den = 1);
    Fraction(const Fraction& other) = default;

    // Деструктор
    ~Fraction() = default;

    // Геттеры
    int getNumerator() const { return numerator; }
    int getDenominator() const { return denominator; }

    // Метод dump() для возврата строки "числитель/знаменатель"
    std::string dump() const;

    // Арифметические операторы (бинарные)
    Fraction operator+(const Fraction& other) const;
    Fraction operator-(const Fraction& other) const;
    Fraction operator*(const Fraction& other) const;
    Fraction operator/(const Fraction& other) const;

    // Операторы составного присваивания
    Fraction& operator+=(const Fraction& other);
    Fraction& operator-=(const Fraction& other);
    Fraction& operator*=(const Fraction& other);
    Fraction& operator/=(const Fraction& other);

    // Операторы сравнения
    bool operator==(const Fraction& other) const;
    bool operator!=(const Fraction& other) const;
    bool operator<(const Fraction& other) const;
    bool operator>(const Fraction& other) const;
    bool operator<=(const Fraction& other) const;
    bool operator>=(const Fraction& other) const;

    // Унарный минус
    Fraction operator-() const;

    // Префиксный инкремент/декремент (увеличивают/уменьшают на 1)
    Fraction& operator++();    // ++fraction
    Fraction& operator--();    // --fraction

    // Постфиксный инкремент/декремент (увеличивают/уменьшают на 1)
    Fraction operator++(int);  // fraction++
    Fraction operator--(int);  // fraction--
};

#endif