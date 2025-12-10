#include <iostream>
#include <windows.h>


void localeWinApi() {
    SetConsoleOutputCP(1251); // Устанавливает кодовую страницу вывода
    SetConsoleCP(1251);       // Устанавливает кодовую страницу ввода
}

void functionAge(int ageF) {
    std::cout << "Вход разрешен, вам исполнилось :" << ageF << " лет " << std::endl;
}

void functionAgeNo(int ageF) {
    std::cout << "Вход запрещен. Вам " << ageF << " лет "  << std::endl;
}


int main() {
    localeWinApi();
    int age {0};
    std::cout << "Введите ваш возраст: ";
    // std::cin >> age;

    // проверка условий если пользователь введет не число

    if(!(std::cin >> age)) {
        std::cout << "Ошибка! Введите числовое значение." << std::endl;
        return 1;
    }
    
    // Проверка

    if(age >= 18 ) {
        functionAge(age);
    } else {
        functionAgeNo(age);
    }


    std::cin.get();
    return 0;
}