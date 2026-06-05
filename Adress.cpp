#include <iostream>
#include <fstream>
#include <string>

class Address {
private:
    std::string city;
    std::string street;
    int houseNumber;
    int apartmentNumber;

public:
    // Конструктор с параметрами
    Address(const std::string& city, const std::string& street, int houseNumber, int apartmentNumber)
        : city(city), street(street), houseNumber(houseNumber), apartmentNumber(apartmentNumber) {}

    // Метод для получения строки с адресом в нужном формате
    std::string getOutputAddress() const {
        return city + ", " + street + ", " + std::to_string(houseNumber) + ", " + std::to_string(apartmentNumber);
    }
};

int main() {
    // Открываем файл для чтения
    std::ifstream inputFile("in.txt");
    if (!inputFile.is_open()) {
        std::cerr << "Не удалось открыть файл in.txt" << std::endl;
        return 1;
    }

    // Читаем количество адресов
    int N;
    inputFile >> N;

    // Создаем динамический массив указателей на Address
    Address** addresses = new Address * [N];

    // Читаем адреса из файла
    for (int i = 0; i < N; i++) {
        std::string city, street;
        int houseNumber, apartmentNumber;

        inputFile >> city >> street >> houseNumber >> apartmentNumber;
        addresses[i] = new Address(city, street, houseNumber, apartmentNumber);
    }

    inputFile.close();

    // Открываем файл для записи
    std::ofstream outputFile("out.txt");
    if (!outputFile.is_open()) {
        std::cerr << "Не удалось открыть файл out.txt" << std::endl;  // Убраны лишние скобки
        return 1;
    }

    // Записываем количество адресов
    outputFile << N << std::endl;

    // Записываем адреса в обратном порядке
    for (int i = N - 1; i >= 0; i--) {
        outputFile << addresses[i]->getOutputAddress() << std::endl;
    }

    outputFile.close();

    // Освобождаем память
    for (int i = 0; i < N; i++) {
        delete addresses[i];
    }
    delete[] addresses;

    return 0;
}