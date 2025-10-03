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

void numberEven(int numb) {
    std::cout << "Even number " << numb;
}

void numberOdd(int numb) {
    std::cout << "Odd number " << numb;
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
        numberOdd(numberTitle);
    } else {
        numberEven(numberTitle);
    }

    std::cin.get();
    return 0;
}