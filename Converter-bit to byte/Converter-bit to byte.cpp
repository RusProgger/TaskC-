#include <iostream>
#include <Windows.h>


void localeWinApi() {
    SetConsoleOutputCP(1251); 
    SetConsoleCP(1251);       
}

void MessageTextWelcome() {
    std::cout << "Добро пожаловать. \n";
}

int InputNumberBite(int* bite) {
    
    return *bite * 8;
}

int main() {
    
    // локаль 
    localeWinApi();
    
    int n{ 0 };



    // Приветствие 
    MessageTextWelcome();
    std::cout << "Введите число: ";
    std::cin >> n;

    int t = InputNumberBite(&n);
    std::cout << t << " байта";


    return 0;
}

