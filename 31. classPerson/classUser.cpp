#include <iostream>
#include <vector>

// Cоздадим класс User
class User {

    public:
        User(const std::string &name, 
        unsigned age, 
        std::string city, 
        bool isMarried) 
        : name(name), age(age), city(city), Ismarried(isMarried) {};
        
    void InfoUser() const {
        for(int i = 0; i < 40; i++) {
            std::cout << "*";
        }
        std::cout << std::endl;

        std::cout << "User: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "City: " << city << std::endl;
        std::cout << "IsMarried: " << ((Ismarried) ? "Yes" : "No") << std::endl;

        std::cout << std::endl;
    }

    private:
        std::string name;
        unsigned short age{};
        std::string city;
        bool Ismarried;

};


int main() {

    // User Ivan("Ivan", 22, "Kiev", true);
    // User Kiril("Kirill", 40, "Lytsk", false);
    // User Denis("Denis", 31, "Dnepr", false);
    // User Alex("Alex", 32, "Odessa", true);
    // User Dima("Dima", 25, "Odessa", true);
    // User Andrei("Andrei", 31, "Cherson", true);
    // User Mikhail("Mikhail", 42, "Zaporozhe", true);

    std::vector<User> users;

    users.emplace_back("Ivan", 22, "Kiev", true);
    users.emplace_back("Kirill", 40, "Lytsk", false);
    users.emplace_back("Denis", 31, "Dnepr", false);
    users.emplace_back("Alex", 32, "Odessa", true);
    users.emplace_back("Dima", 25, "Odessa", true);
    users.emplace_back("Andrei", 31, "Cherson", true);
    users.emplace_back("Mikhail", 42, "Zaporozhe", true);

    // 

    for (const auto& user : users) {
        user.InfoUser();
    }

    // Ivan.InfoUser();
    // Kiril.InfoUser();
    // Denis.InfoUser();
    // Alex.InfoUser();
    // Dima.InfoUser();
    // Andrei.InfoUser();
    // Mikhail.InfoUser();

    std::cout << "Enter to exit...";
    std::cin.get();
    
    return 0;
}
