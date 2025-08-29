#include <iostream>

int main() {

    int number;

    std::cout << "Enter number: ";
    std::cin >> number;

    if(number > 0) {
        for(int n = 0; n < number; n++) {
            std::cout << number;
        }
    } else {
        std::cout << "Not a number";
    }

    return 0;
}