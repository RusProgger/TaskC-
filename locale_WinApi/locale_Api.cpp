#include <iostream>
#include <windows.h>


void localeWinApi() {
    SetConsoleOutputCP(1251); // Устанавливает кодовую страницу вывода
    SetConsoleCP(1251);       // Устанавливает кодовую страницу ввода
}


int main() {
    localeWinApi();
    int age {0};
    std::cout << "Введите ваш возраст: ";
    std::cin >> age;
    
    std::cout << "Привет, это вызов функции localeWinApi." << std::endl;

    return 0;
}