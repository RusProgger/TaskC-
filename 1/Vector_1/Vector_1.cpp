#include <iostream>
#include <vector>



int main() {
	std::locale::global(std::locale(""));
	
	int vectorUser{ 0 };

	std::vector<int> userV;

	std::cout << "Введите кол-во цифр: ";
	std::cin >> vectorUser;

	// цикл попыток 

	for (int i = 0; i < vectorUser; i++) {
		int index;
		std::cin >> index;
		userV.push_back(index);
	}

	for (int i = 0; i < vectorUser; i++) {
		std::cout <<  userV[i] << std::endl;
	}


	std::cin.get();
	return 0;
}