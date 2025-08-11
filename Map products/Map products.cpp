#include <map>
#include <iostream>
#include <string>

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


	std::cout << std::endl;
	std::cout << "-------------------------" << std::endl;

	// заполняем контейнер Map от пользователя 

	std::map<std::string, unsigned> product;

	int count = 0;

	std::cout << "Сколько товаров вы хотите ввести: ";

	// цикл попыток

	while (!(std::cin >> count) || count <= 0) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Ошибка ввод должен быть только положительным: ";
	}

	std::cin.ignore();

	for (int i = 0; i < count; i++) {
		std::string prod;
		unsigned price;

		std::cout << "\nВведите название товара: " << i + 1 << ": ";
		std::getline(std::cin, prod);

		std::cout << "Введите цену товара " << prod << ": ";

		// проверка на корректность ввода

		while (!(std::cin >> price)) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Ошибка. Введите положительное число: ";
		}
		std::cin.ignore();

		product[prod] = price;
	}

	for (const auto& [productItem, priceItem] : product) {
		std::cout << productItem << " = " << priceItem << std::endl;
	}
	std::cout << " Кол-во элементов:  " << product.size() << std::endl;
	std::cout << "Для выхода нажмите любую клавишу...";

	std::cin.get();
	return 0;
}