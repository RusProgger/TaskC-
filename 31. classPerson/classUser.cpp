#include <iostream>
#include <vector>

// Cоздадим класс User

class User {

    public:
        // Имя пользователя user;
        std::string name;

        // Возраст пользователя 

        unsigned short age{};
    
    void InfoUser() {
        std::cout << "User: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }

    User(std::string pt_name, unsigned pt_age) : name(pt_name), age(pt_age) {};

};


int main() {

    User Ivan("Ivan", 22);
    User Kiril("Kirill", 40);

    Ivan.InfoUser();
    Kiril.InfoUser();


    
    return 0;
}
