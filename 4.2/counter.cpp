#include "counter.h"

// Конструктор по умолчанию - значение 1
Counter::Counter() : value(1) {}

// Конструктор с начальным значением
Counter::Counter(int initialValue) : value(initialValue) {}

// Увеличение счётчика на 1
void Counter::increment() {
    value++;
}

// Уменьшение счётчика на 1
void Counter::decrement() {
    value--;
}

// Получение текущего значения
int Counter::getValue() const {
    return value;
}

// Установка значения
void Counter::setValue(int newValue) {
    value = newValue;
}