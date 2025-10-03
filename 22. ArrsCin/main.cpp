#include <iostream>

int main() {
    int ArrsNumber;
    
    
    std::cout << "Введите размер массива: ";
    std::cin >> ArrsNumber;

    // Выделяем память

    double* arrs = new double[ArrsNumber];

    for(int i = 0; i < ArrsNumber; i++) {
        std::cout << "Введите массив:  ";
        std::cin >> arrs[i];
        std::cout << std::endl;
    }

    for(int i = 0; i < ArrsNumber; i++) {
        std::cout << arrs[i] << std::endl;
    }

    // Освобождаем память

    delete[] arrs;

    // Обнуляем указатель 

    arrs = nullptr;

    return 0;
}