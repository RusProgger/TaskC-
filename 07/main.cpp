#include <iostream>

/*
    --- Пользователь вводит целое число. Определите, чётное оно или нечётное. ---
*/

int main() {

    int number {0};
    std::cout << "Enter number: ";
    std::cin >> number;

    if(number % 2 == 0) {
        std::cout << "Even number = " << number;
    } else {
        std::cout << "Odd number = " << number;
    }

    return 0;
}