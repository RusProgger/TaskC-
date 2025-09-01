#include <iostream>

int main() {

    int pin;
    do {
        std::cout << "Enter pin code: ";
        std::cin >> pin;
        if(pin != 555) {
            std::cout << "Incorrect pin code\n";
        }
    }while(pin != 555);
    std::cout << "Login done\n";

    std::cin.get();
    return 0;

}