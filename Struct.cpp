#include <iostream>
#include <string>

// Структура для хранения адреса
struct Address {
    std::string city;
    std::string street;
    int houseNumber;
    int apartmentNumber;
    int postalCode;
};

// Функция для вывода структуры на консоль
void printAddress(const Address& address) {
    std::cout << "Город: " << address.city << std::endl;
    std::cout << "Улица: " << address.street << std::endl;
    std::cout << "Номер дома: " << address.houseNumber << std::endl;
    std::cout << "Номер квартиры: " << address.apartmentNumber << std::endl;
    std::cout << "Индекс: " << address.postalCode << std::endl;
    std::cout << std::endl; // Пустая строка для разделения адресов
}

int main() {
    // Создание первого экземпляра структуры
    Address address1;
    address1.city = "Москва";
    address1.street = "Арбат";
    address1.houseNumber = 12;
    address1.apartmentNumber = 8;
    address1.postalCode = 123456;

    // Создание второго экземпляра структуры
    Address address2;
    address2.city = "Ижевск";
    address2.street = "Пушкина";
    address2.houseNumber = 59;
    address2.apartmentNumber = 143;
    address2.postalCode = 953769;

    // Вывод адресов на консоль
    printAddress(address1);
    printAddress(address2);

    return 0;
}