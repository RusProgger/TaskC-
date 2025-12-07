#include <iostream>

int main() {

    // Локализация 

    std::locale::global(std::locale());

    

    std::cin.get();
    return 0;
}