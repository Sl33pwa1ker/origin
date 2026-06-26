#include <iostream>
#include <string>
#include <exception>

class bad_length : public std::exception {
public:
    const char* what() const noexcept override {
        return "Вы ввели слово запретной длины! До свидания";
    }
};

int function(std::string str, int forbidden_length) {
    int len = str.length();
    if (len == forbidden_length) {
        throw bad_length();
    }
    return len;
}

int main() {
    int forbidden_length;

    std::cout << "Введите запретную длину: ";
    std::cin >> forbidden_length;
    std::cin.ignore();

    std::string input;

    while (true) {
        std::cout << "Введите слово: ";
        std::getline(std::cin, input);

        try {
            int len = function(input, forbidden_length);
            std::cout << "Длина слова \"" << input << "\" равна " << len << std::endl;
        }
        catch (const bad_length& e) {
            std::cout << e.what() << std::endl;
            break;
        }
        catch (...) {
            std::cout << "Неизвестная ошибка!" << std::endl;
            break;
        }
    }

    return 0;
}