#include <iostream>

/*

Задача вывести на экран 2 значения через пробел, 
    1 - адрес этого массива в оперативной памяти
    2 - размер этого массива в байтах.

*/

// const int size = 5;

int main() {
    
    int size;

    // double arr[size];

    // std::cout << "Адрес: " << static_cast<const void*>(arr) << " ";
    // std::cout << "Размер (байт): " << sizeof(arr) << std::endl;


    std::cout << "Enter size array: ";
    std::cin >> size;

    if (size <= 0) {
        std::cerr << "Invalid array size.\n";
        return 1;
    }

    int* arr = new int[size];

    std::cout << "Adress array: " << static_cast<const void*>(arr) << std::endl;
    std::cout << "Size array: " << size * sizeof(int) << std::endl;
    std::cout << "Array: " << *arr << std::endl;


    delete[] arr;
    arr = nullptr;
}