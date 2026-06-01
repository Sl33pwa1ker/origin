#include <iostream>

class Calculator {
private:
    double num1;
    double num2;

public:
    // Методы для арифметических операций
    double add() {
        return num1 + num2;
    }

    double multiply() {
        return num1 * num2;
    }

    double subtract_1_2() {
        return num1 - num2;
    }

    double subtract_2_1() {
        return num2 - num1;
    }

    double divide_1_2() {
        return num1 / num2;
    }

    double divide_2_1() {
        return num2 / num1;
    }

    // Методы для установки значений с проверкой
    bool set_num1(double num1) {
        if (num1 != 0) {
            this->num1 = num1;
            return true;
        }
        return false;
    }

    bool set_num2(double num2) {
        if (num2 != 0) {
            this->num2 = num2;
            return true;
        }
        return false;
    }
};

int main() {
    Calculator calc;
    double input1, input2;

    std::cout << "Калькулятор двух чисел (для выхода закройте консоль)" << std::endl;
    std::cout << std::endl;

    while (true) {
        // Ввод первого числа
        do {
            std::cout << "Введите num1: ";
            std::cin >> input1;

            if (!calc.set_num1(input1)) {
                std::cout << "Неверный ввод! num1 не может быть равно 0." << std::endl;
            }
        } while (!calc.set_num1(input1));

        // Ввод второго числа
        do {
            std::cout << "Введите num2: ";
            std::cin >> input2;

            if (!calc.set_num2(input2)) {
                std::cout << "Неверный ввод! num2 не может быть равно 0." << std::endl;
            }
        } while (!calc.set_num2(input2));

        // Вывод результатов всех операций
        std::cout << "num1 + num2 = " << calc.add() << std::endl;
        std::cout << "num1 - num2 = " << calc.subtract_1_2() << std::endl;
        std::cout << "num2 - num1 = " << calc.subtract_2_1() << std::endl;
        std::cout << "num1 * num2 = " << calc.multiply() << std::endl;
        std::cout << "num1 / num2 = " << calc.divide_1_2() << std::endl;
        std::cout << "num2 / num1 = " << calc.divide_2_1() << std::endl;
        std::cout << std::endl;
    }

    return 0;
}