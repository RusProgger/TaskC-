#include <iostream>
#include <string>

int main() {

    unsigned int forMax = 13;
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

    return 0;
}