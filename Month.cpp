#include <iostream>
#include <string>

// Перечисление для месяцев года
enum class Month {
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

// Функция для получения названия месяца по номеру
std::string getMonthName(Month month) {
    switch (month) {
    case Month::January:   return "Январь";
    case Month::February:  return "Февраль";
    case Month::March:     return "Март";
    case Month::April:     return "Апрель";
    case Month::May:       return "Май";
    case Month::June:      return "Июнь";
    case Month::July:      return "Июль";
    case Month::August:    return "Август";
    case Month::September: return "Сентябрь";
    case Month::October:   return "Октябрь";
    case Month::November:  return "Ноябрь";
    case Month::December:  return "Декабрь";
    default:               return "";
    }
}

int main() {
    int userInput;

    while (true) {
        std::cout << "Введите номер месяца: ";
        std::cin >> userInput;

        // Проверка на выход из программы
        if (userInput == 0) {
            std::cout << "До свидания" << std::endl;
            break;
        }

        // Проверка корректности номера месяца (от 1 до 12)
        if (userInput < 1 || userInput > 12) {
            std::cout << "Неправильный номер!" << std::endl;
            continue;
        }

        // Преобразование числа в перечисление с помощью static_cast
        Month month = static_cast<Month>(userInput);

        // Вывод названия месяца
        std::cout << getMonthName(month) << std::endl;
    }

    return 0;
}