#include <iostream>

int main() {

    int number;
    int summa = 0;

    std::cout << "Enter number: ";
    std::cin >> number;

    if(number > 0) {
        for(int n = 0; n < number; n++) {
           summa += n;
        }
    } else {
        std::cout << "Not a number";
    }

    std::cout << "Summa " << summa << " = " << number << std::endl;
    return 0;
}