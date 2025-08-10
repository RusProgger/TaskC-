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
		std::cout << "Введите номер вектора " << i + 1 << ": ";
		while(!(std::cin >> index)) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Неверный ввод, попробуйте снова: ";
		}
		userV.push_back(index);
	}

	for (int i = 0; i < vectorUser; i++) {
		std::cout << "Вектор " << i + 1 << " = " << userV[i] << std::endl;
	}


	std::cin.get();
	return 0;
}