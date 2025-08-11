#include <map>
#include <iostream>

int main() {

	std::map<std::string, unsigned> products;

	// заполняем контейнер Мар

	products["Кефир"] = 45;
	products["Яблоко"] = 30;
	products["Печенье"] = 120;
	products["Мясо"] = 200;
	products["Газировка"] = 50;



	std::cin.get();
	return 0;
}