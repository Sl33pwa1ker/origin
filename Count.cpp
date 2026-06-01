#include <iostream>
#include <string>

// Структура для хранения информации о банковском счёте
struct BankAccount {
    int accountNumber;
    std::string ownerName;
    double balance;
};

// Функция для изменения баланса счёта (принимает структуру по ссылке)
void changeBalance(BankAccount& account, double newBalance) {
    account.balance = newBalance;
}

int main() {
    BankAccount account;

    // Ввод информации о счёте
    std::cout << "Введите номер счёта: ";
    std::cin >> account.accountNumber;

    std::cout << "Введите имя владельца: ";
    std::cin.ignore(); // Игнорируем символ новой строки после предыдущего ввода
    std::getline(std::cin, account.ownerName);

    std::cout << "Введите баланс: ";
    std::cin >> account.balance;

    // Ввод нового баланса
    double newBalance;
    std::cout << "Введите новый баланс: ";
    std::cin >> newBalance;

    // Изменение баланса через функцию
    changeBalance(account, newBalance);

    // Вывод обновлённой информации
    std::cout << "Ваш счёт: " << account.ownerName << ", "
        << account.accountNumber << ", " << account.balance << std::endl;

    return 0;
}