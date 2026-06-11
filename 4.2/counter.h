#pragma once
#ifndef COUNTER_H
#define COUNTER_H

#include <string>

class Counter {
private:
    int value;

public:
    // Конструкторы
    Counter();
    Counter(int initialValue);

    // Методы
    void increment();
    void decrement();
    int getValue() const;
    void setValue(int newValue);
};

#endif