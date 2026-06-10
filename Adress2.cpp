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
    Address(const std::string& city, const std::string& street, int houseNumber, int apartmentNumber)
        : city(city), street(street), houseNumber(houseNumber), apartmentNumber(apartmentNumber) {}

    std::string getCity() const {
        return city;
    }

    std::string getOutputAddress() const {
        return city + ", " + street + ", " + std::to_string(houseNumber) + ", " + std::to_string(apartmentNumber);
    }
};

void sort(Address** addresses, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (addresses[j]->getCity() > addresses[j + 1]->getCity()) {
                Address* temp = addresses[j];
                addresses[j] = addresses[j + 1];
                addresses[j + 1] = temp;
            }
        }
    }
}

int main() {
    std::ifstream inputFile("in.txt");
    if (!inputFile.is_open()) {
        std::cerr << "Не удалось открыть файл in.txt" << std::endl;
        return 1;
    }

    int N;
    inputFile >> N;

    Address** addresses = new Address * [N];

    for (int i = 0; i < N; i++) {
        std::string city, street;
        int houseNumber, apartmentNumber;

        inputFile >> city >> street >> houseNumber >> apartmentNumber;
        addresses[i] = new Address(city, street, houseNumber, apartmentNumber);
    }

    inputFile.close();

    sort(addresses, N);

    std::ofstream outputFile("out.txt");
    if (!outputFile.is_open()) {
        std::cerr << "Не удалось открыть файл out.txt" << std::endl;

        // ОСВОБОЖДАЕМ ПАМЯТЬ ПЕРЕД ВЫХОДОМ
        for (int i = 0; i < N; i++) {
            delete addresses[i];
        }
        delete[] addresses;

        return 1;
    }

    outputFile << N << std::endl;

    for (int i = 0; i < N; i++) {
        outputFile << addresses[i]->getOutputAddress() << std::endl;
    }

    outputFile.close();

    for (int i = 0; i < N; i++) {
        delete addresses[i];
    }
    delete[] addresses;

    return 0;
}