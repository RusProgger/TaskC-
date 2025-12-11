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


// добавим класс User 

class User {

    public:
    std::string city;
    unsigned int addres;

    void UserInfo() {
        std::cout <<"User city: " << city << std::endl;
        std::cout <<"User adress" << addres << std::endl;
    }
};

int main()  {

    Person person;
    person.name = "Alex";
    person.name = "Denis";
    person.userAge = 30;

    // вывод 

    person.messageInfoUser();

    std::cin.get();
    return 0;
}