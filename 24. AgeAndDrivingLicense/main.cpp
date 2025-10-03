#include <iostream>


int main() {
    setlocale(LC_ALL, "rus");
    int age;
    std::cin >> age;

    // Проверка условия на возраст

    if(age >= 18) {
    
    std::cout << "Ура! Можно получать права!" << std::endl;
    } else {
    
    std::cout << "Права можно получить только с 18 лет!" << std::endl;
    }

    return 0;
}