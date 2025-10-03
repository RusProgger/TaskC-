#include <iostream>
#include <string>

int main() {

    unsigned int forMax;

    // Спрашиваем у пользователя ввод числа

    std::cout << "Enter number: ";
    std::cin >> forMax;

    std::string beep = "Бип!!";

    // цикл 

    for(int i = 1; i <= forMax; i++) {
        // вывод цикла 
        std::cout << i << "\n";

        // проверка условий

        if(i % 5 == 0) {
            std::cout << beep << "\n";
        }
    }

    // задержка консоли
    std::cin.get();
    return 0;
}