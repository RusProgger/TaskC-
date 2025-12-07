#include <iostream>

int main() {

    // Локализация 

    std::locale::global(std::locale());

    int n = 0; // хранит число, которое ввёл пользователь.
    int res = 1; // результат факториала
    int count = 1; // счётчик

    // цикл 

    while(count <= n) {
        res = res * count;
        count = count + 1;
    }

    std::cout << "FuctorialNumber: " << res;

    std::cin.get();
    return 0;
}