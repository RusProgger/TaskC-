#include <iostream>
#include <vector>
#include <thread>
#include <chrono>


int main() {
	std::locale::global(std::locale(""));
	
	int vectorUser{ 0 };

	std::vector<int> userV;

	std::cout << "Введите кол-во цифр: ";

	while (!(std::cin >> vectorUser)) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		// Добавляем задержку

		std::this_thread::sleep_for(std::chrono::seconds(1));

		std::cout << "Ошибка! Введите целое число: ";
	}

	// цикл попыток 

	for (int i = 0; i < vectorUser; i++) {
		int index;
		std::cout << "Введите номер вектора " << i + 1 << ": ";
		while(!(std::cin >> index)) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Неверный ввод, введите только целое число: ";
		}
		userV.push_back(index);
	}

	for (int i = 0; i < vectorUser; i++) {
		std::cout << "Идет подсчет. Подождите!" << std::endl;
		std::cout << "Вектор " << i + 1 << " = " << userV[i] << std::endl;
	}

	std::cout << "Нажмите Enter для выхода...";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin.get();
	return 0;
}