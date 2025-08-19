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

    int t = InputNumberBite(&n);
    std::cout << t << " бит" << std::endl;
    /*std::cout << (t / 8) << " байт" << std::endl;*/

    return 0;
}

