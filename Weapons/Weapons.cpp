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

	int randomNumber = RandomWeaponsState();


	std::cin.get();
	return 0;
}