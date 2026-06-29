#include <iostream>
#include <print>

int main() {

    int number {};
    std::print("Enter number: ");
    std::cin >> number;

    int one = (number / 100);
    int hundreds = (number / 10) % 10;
    int tens = (number % 10);
    // summa
    int result = (one + hundreds + tens);
    std::print("{}", result);
    std::cin.get();
    return 0;
}