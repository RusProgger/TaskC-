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

        bool Ismarried;
    
    void InfoUser() {
        for(int i = 0; i < 15; i++) {
            std::cout << "*";
        }
        std::cout << std::endl;

        std::cout << "User: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "City: " << city << std::endl;
        std::cout << "IsMarried: " << Ismarried << std::endl;

        for(int i = 0; i < 15; i++) {
            std::cout << "*";
        }

        std::cout << std::endl;
    }

    User(std::string pt_name, unsigned pt_age, std::string p_city, bool p_Ismarried) : name(pt_name), age(pt_age), city(p_city), Ismarried(p_Ismarried) {};

};


int main() {

    User Ivan("Ivan", 22, "Kiev", true);
    User Kiril("Kirill", 40, "Lytsk", false);
    User Denis("Denis", 31, "Dnepr", false);
    User Alex("Alex", 32, "Odessa", true);
    User Dima("Dima", 25, "Odessa", true);
    User Andrei("Andrei", 31, "Cherson", true);
    User Mikhail("Mikhail", 42, "Zaporozhe", true);

    Ivan.InfoUser();
    Kiril.InfoUser();
    Denis.InfoUser();
    Alex.InfoUser();
    Dima.InfoUser();
    Andrei.InfoUser();
    Mikhail.InfoUser();


    
    return 0;
}
