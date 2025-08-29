#include <iostream>

int main() {

    int number;
    int summa = 0;

    std::cout << "Enter number: ";
    std::cin >> number;

    if(number > 0) {
        for(int n = 1; n <= number; n++) {
           summa += n;
        }
    } else {
        std::cout << "Not a number";
    }

    std::cout << "Summa " << number << " = " << summa << std::endl;
    return 0;
}