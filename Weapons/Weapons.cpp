#include <iostream>
#include <random>

void WeaponsStateAK74() {
	std::cout << "Cостояние АК74: ";
}


int RandomWeaponsState() {
	std::random_device rd;                        
	std::mt19937 gen(rd());                       
	std::uniform_int_distribution<> dist(1, 100); 
	return dist(gen);
}



int main() {

	// Локаль
	std::locale::global(std::locale(""));
	
	// Рандом от 1 до 100
	int randomNumber = RandomWeaponsState();

	// Проверка оружия на состояние


	if (randomNumber >= 80 && randomNumber <= 100) {
		WeaponsStateAK74();
		std::cout << "Отличное состояние: " << randomNumber << std::endl;
	}
	else if (randomNumber >= 50 && randomNumber <= 79) {
		WeaponsStateAK74();
		std::cout << "Состояние среднее: " << randomNumber << std::endl;
		
	}
	else {
		WeaponsStateAK74();
		std::cout << "Требуется ремонт: " << randomNumber << std::endl;
	}

	

	std::cin.get();
	return 0;
}