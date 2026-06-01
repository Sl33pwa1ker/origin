#include <iostream>
#include <string>

class Counter {
private:
    int value;  // Приватное поле - нет прямого доступа извне

public:
    // Конструктор с параметром (инициализация с начальным значением)
    Counter(int initialValue) {
        value = initialValue;
    }

    // Конструктор по умолчанию (значение 1)
    Counter() {
        value = 1;
    }

    // Увеличение на 1
    void increment() {
        value++;
    }

    // Уменьшение на 1
    void decrement() {
        value--;
    }

    // Получение текущего значения
    int getValue() const {
        return value;
    }
};

int main() {
    std::string answer;
    Counter* counter;  // Указатель на объект Counter

    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> answer;

    // Создание объекта в зависимости от ответа пользователя
    if (answer == "да") {
        int initialValue;
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> initialValue;
        counter = new Counter(initialValue);
    }
    else {
        counter = new Counter();  // Используем конструктор по умолчанию
    }

    char command;

    // Основной цикл обработки команд
    while (true) {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> command;

        switch (command) {
        case '+':
            counter->increment();
            break;
        case '-':
            counter->decrement();
            break;
        case '=':
            std::cout << counter->getValue() << std::endl;
            break;
        case 'x':
            std::cout << "До свидания!" << std::endl;
            delete counter;  // Освобождаем память
            return 0;
        default:
            std::cout << "Неизвестная команда!" << std::endl;
            break;
        }
    }

    return 0;
}