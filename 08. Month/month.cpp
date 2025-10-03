#include <iostream>

int main() {

    unsigned int month;

    std::cout << "Enter number month 1-12: ";
    std::cin >> month;

    if(month >= 1 && month < 3 || month == 12) {
        std::cout << "Winter - Month " <<  month << std::endl;
    } else if(month >= 3 && month < 6) {
        std::cout << "Spring - Month " <<  month << std::endl;
    } else if(month >= 6 && month < 9) {
        std::cout << "Summer - Month " <<  month << std::endl;
    } else if(month >= 9 && month < 12) {
        std::cout << "Autumn — Month " <<  month << std::endl;
    } else {
        std::cout << "Invalid month: " <<  month << std::endl;
    }

    std::cin.get();
    return 0;
}