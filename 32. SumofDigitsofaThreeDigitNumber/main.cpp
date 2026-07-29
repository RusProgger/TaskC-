#include <iostream>
#include <limits>
#include <print>

int main() {

    unsigned int number {};
    std::print("Enter number: ");
    std::cin >> number;

    // обработка ошибки

    if(std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Ошибка!! Это не число..\n";
    }

    int one = (number / 100);
    int hundreds = (number / 10) % 10;
    int tens = (number % 10);
    // summa
    int result = (one + hundreds + tens);
    std::print("{}", result);
    std::cin.get();
    return 0;
}