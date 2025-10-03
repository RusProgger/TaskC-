#include <iostream>
#include <Windows.h>


void localeWinApi() {
    SetConsoleOutputCP(1251); 
    SetConsoleCP(1251);       
}

void MessageTextWelcome() {
    std::cout << "Добро пожаловать в конвертер. \n";
    std::cout << "1 байт = 8 битам. \n";
}

int InputNumberBite(int* bite) {
    return *bite * 8;
}

int InputInputNumberByte(int* byte) {
    return *byte / 8;
}


int main() {
    
    // локаль 
    localeWinApi();

    int n{ 0 };

    // Приветствие 
    MessageTextWelcome();


    std::cout << "Введите число в битах: ";
    std::cin >> n;
    std::cout << std::endl;
    std::cout << "--------------------------" << std::endl;
    int t = InputNumberBite(&n);
    int b = InputInputNumberByte(&t);
    std::cout << "Бит = " << t  << std::endl;
    std::cout << "Байт = " << b << std::endl;


    std::cin.get();
    return 0;
}

