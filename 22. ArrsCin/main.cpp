#include <iostream>

int main() {
    int ArrsNumber;
    
    
    std::cout << "Введите размер массива: ";
    std::cin >> ArrsNumber;

    // Выделяем память

    double* arrs = new double[ArrsNumber];



    // Освобождаем память

    delete[] arrs;

    // Обнуляем указатель 

    arrs = nullptr;

    return 0;
}