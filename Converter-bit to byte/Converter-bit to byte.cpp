#include <iostream>
#include <Windows.h>


void localeWinApi() {
    SetConsoleOutputCP(1251); 
    SetConsoleCP(1251);       
}

void MessageTextWelcome() {
    std::cout << "Добро пожаловать. ";
}

int main() {
    
    // локаль 
    localeWinApi();
    
    // Приветствие 
    MessageTextWelcome();



    return 0;
}

