#include <iostream>
#include <string>

// Создадим класс Person

class Person {

    public:
        std::string name;
        unsigned short userAge; 
        std::string city;
    
    void messageInfoUser() {
        std::cout << "User: " << name << std::endl;
        std::cout << "User age: " << userAge << std::endl;
    }

     // Список инициализации

     Person(std::string p_name, unsigned short p_userAge) : name{p_name} {
        userAge = p_userAge;
     }
};


// добавим класс User 

class User {

    public:
    std::string city;
    unsigned int addres;
    bool Ismarried;

    void UserInfo() {
        std::cout <<"User city: " << city << std::endl;
        std::cout <<"User adress" << addres << std::endl;
        std::cout << "User is married: " << std::endl;
    }

   


};

int main()  {

    Person Ivan{"Ivan", 30};
    
    
    // Person person;
    // person.name = "Alex";
    // person.name = "Denis";
    // person.userAge = 30;

    // вывод 

    //person.messageInfoUser();

    std::cout << "-------------------------\n";

    User userinfo;
    userinfo.city = "Kiev";
    userinfo.addres = 19;
    userinfo.Ismarried = true;

    userinfo.city = "Lviv";
    userinfo.addres = 29;
    userinfo.Ismarried = false;

    userinfo.UserInfo();

    std::cin.get();
    return 0;
}