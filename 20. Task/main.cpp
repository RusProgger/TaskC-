#include <iostream>

int main() {

    int pin;
    std::cout << "Enter pin code: ";

    do {
        std::cin >> pin;
        if(pin != 555) {
            std::cout << "Incorrect pin code\n";
        }
    }while(pin != 555);
    std::cout << "Login done\n";

    return 0;

}