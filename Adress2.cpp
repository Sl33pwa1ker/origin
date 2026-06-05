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

    // Геттер для города (нужен для сортировки)
    std::string getCity() const {
        return city;
    }

    // Метод для получения строки с адресом в нужном формате
    std::string getOutputAddress() const {
        return city + ", " + street + ", " + std::to_string(houseNumber) + ", " + std::to_string(apartmentNumber);
    }
};

// Функция сортировки пузырьком по названию города
void sort(Address** addresses, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            // Сравниваем названия городов
            if (addresses[j]->getCity() > addresses[j + 1]->getCity()) {
                // Меняем местами указатели
                Address* temp = addresses[j];
                addresses[j] = addresses[j + 1];
                addresses[j + 1] = temp;
            }
        }
    }
}

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

    // Сортируем адреса по названию города
    sort(addresses, N);

    // Открываем файл для записи
    std::ofstream outputFile("out.txt");
    if (!outputFile.is_open()) {
        std::cerr << "Не удалось открыть файл out.txt" << std::endl;
        return 1;
    }

    // Записываем количество адресов
    outputFile << N << std::endl;

    // Записываем отсортированные адреса
    for (int i = 0; i < N; i++) {
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