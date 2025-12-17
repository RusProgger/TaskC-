#include <iostream>
#include <vector>

// Cоздадим класс User

class User {

    public:
        // Имя пользователя user;
        std::string name;

        // Возраст пользователя 

        unsigned short age{};

        // Местоположение пользователя

        std::string city;
    
    void InfoUser() {
        std::cout << "User: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "City: " << city << std::endl;
    }

    User(std::string pt_name, unsigned pt_age, std::string p_city) : name(pt_name), age(pt_age), city(p_city) {};

};


int main() {

    User Ivan("Ivan", 22, "Kiev");
    User Kiril("Kirill", 40, "Lytsk");
    User Denis("Denis", 31, "Dnepr");
    User Alex("Alex", 32, "Odessa");
    User Dima("Dima", 25, "Odessa");
    User Andrei("Andrei", 31, "Cherson");
    User Mikhail("Mikhail", 42, "Zaporozhe");

    Ivan.InfoUser();
    Kiril.InfoUser();
    Denis.InfoUser();
    Alex.InfoUser();
    Dima.InfoUser();


    
    return 0;
}
