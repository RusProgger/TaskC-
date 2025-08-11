#include <iostream>

/*

Задача вывести на экран 2 значения через пробел, 
    1 - адрес этого массива в оперативной памяти
    2 - размер этого массива в байтах.

*/


int main() {
    
    int size;

    std::cout << "Enter size array: ";
    std::cin >> size;

    int arr[size];


    std::cout << "Adress array: " << static_cast<const void*>(arr) << std::endl;
    std::cout << "Size array: " << sizeof(arr) << std::endl;
}