#include <iostream>

/*
    5 - Написать функцию которая принимает положительных числа: а и b, затем вывести результат
*/

unsigned int myAdd(int a, int b) {
    
    if(a > b) {
        std::cout << a << std::endl;
        return a;
    } else {
        std::cout << b << std::endl;
        return b;
    }
}

int main() {

    int Myf1 = myAdd(10, 30);
    int Myf2 = myAdd(15, 10);
    int Myf3 = myAdd(20, 30);
    int Myf4 = myAdd(90, 130);

    std::cout << "Fuction 1: " << Myf1 << std::endl;
}