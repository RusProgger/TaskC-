#include <iostream>

// Создадим класс Person

class Person {

    public:
        std::string name;
        unsigned short userAge; 
    
    void messageInfoUser() {
        std::cout << "User: " << name << std::endl;
        std::cout << "User age: " << userAge << std::endl;
    }
};


int main()  {

    std::cin.get();
    return 0;
}