#include <iostream>
#include <vector>
#include <string>



class Player {
private:
    std::string name;
    int rating;

public:
    
    Player(const std::string& name, int rating) {
        this->name = name;
        this->rating = rating;
    }

    // Метод для отображения пользователя и его рейтинга
    void display() const {
        std::cout << name << " ";
        for (int i = 0; i < rating; ++i) {
            std::cout << "⭐";
        }
        std::cout << "\n";
    }
};

int main() {
    int n;
    std::cin >> n;

    std::vector<Player> players;

    for (int i = 0; i < n; ++i) {
        std::string name;
        int rating;
        std::cin >> name >> rating;
        // Тут добавляем уже рейтинг и пользолвателя
        players.emplace_back(name, rating); 
    }

    std::cout << "Рейтинг игроков:\n";
    for (const auto& player : players) {
        player.display(); 
    }

    return 0;
}





