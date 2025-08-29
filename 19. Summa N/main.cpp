#include <iostream>

using namespace std;

int main() {

    int number;
    int summa {0};

    std::cout << "Enter number: ";
    std::cin >> number;

    if(number > 0) {
        for(int n = 1; n <= number; n++) {
           std::cout << (summa += n) << std::endl;
        }
    } else {
        std::cout << "Please enter a positive number." << std::endl;
    }

    std::cout << "Summa " << number << " = " << summa << std::endl;
    return 0;
}