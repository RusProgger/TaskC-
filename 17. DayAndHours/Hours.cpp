#include <iostream>

// Константа 1 день = 24 часам

#define DAY 24

int main() {

    int hours;
    std::cout << "Enter hours: ";
    std::cin >> hours;

    // решение 

    int resDay = hours / DAY;
    int resHours = hours % DAY;

    std::cout << "Day = " << resDay << " hours: " << resHours;

    std::cin.get(); 
    return 0;
}