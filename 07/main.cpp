#include <iostream>

/*
    --- Пользователь вводит целое число. Определите, чётное оно или нечётное. ---
*/

int enterNumber() {
    int number;
    std::cout << "Enter number: ";
    std::cin >> number;
    return number;
}

void numberEven() {
    std::cout << "Even number ";
}

void numberOdd() {
    std::cout << "Odd number ";
}

int main() {

    // int number {0};
    // std::cout << "Enter number: ";
    // std::cin >> number;

    // if(number % 2 == 0) {
    //     std::cout << "Even number = " << number;
    // } else {
    //     std::cout << "Odd number = " << number;
    // }

    // Programm function

    int numberTitle = enterNumber();

    if(numberTitle % 2 != 0) {
        numberOdd();
    } else {
        numberEven();
    }

    std::cin.get();
    return 0;
}