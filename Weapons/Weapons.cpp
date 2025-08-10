#include <iostream>
#include <random>

void WeaponsStateAK74() {
	std::cout << "Cостояние АК74 ";
}

// Функция рандом
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


	if (randomNumber >= 92 ) {
		WeaponsStateAK74();
		std::cout << "отличное: " << randomNumber << "%" << std::endl;
	}

	else if (randomNumber >= 73) {
		WeaponsStateAK74();
		std::cout << "нормальное: " << randomNumber << "%" << std::endl;
	}

	else if (randomNumber >= 40) {
		WeaponsStateAK74();
		std::cout << "среднее: " << randomNumber << "%" << std::endl;
	}
	else {
		WeaponsStateAK74();
		std::cout << "требуется ремонт: " << randomNumber << "%" << std::endl;
	}

	std::cout << "Для выхода нажмите любую клавишу...";

	std::cin.get();
	return 0;
}