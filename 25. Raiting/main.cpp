#include <iostream>
#include <string>

int main() {

    int n; 
    std::cin >> n;
    std::cout << "Рейтинг игроков:\n";

    for (int i = 0; i < n; ++i) {
        std::string name;
        int rating;
        std::cout << "User: ";
        std::cin >> name;
        std::cout << "Raiting ";
        std::cin >> rating;

        std::cout << name << " ";
        for (int j = 0; j < rating; ++j) {
            std::cout << "⭐"; 
        }

        std::cout << "\n"; // вывод
    }

    return 0;
}





