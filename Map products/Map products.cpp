#include <map>
#include <iostream>

int main() {

	std::locale::global(std::locale(""));

	std::map<std::string, unsigned> products;

	// заполняем контейнер Мар

	products["Кефир"] = 45;
	products["Яблоко"] = 30;
	products["Печенье"] = 120;
	products["Мясо"] = 200;
	products["Газировка"] = 50;

	// Выводим товары через цикл

	for (const auto& [item, price] : products) {
		std::cout << item << " = " << price << std::endl;
	}

	std::cin.get();
	return 0;
}