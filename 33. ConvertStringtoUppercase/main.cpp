#include <iostream>
#include <cctype>
#include <string>



int main() {

    std::string text {};
    std::cout << "Enter text: ";
    std::getline(std::cin, text);

    // проверка если строка пустая то выводим сообщение о ошибке

    if(text.empty()) {
        std::cout << "String is empty!\n";
        return 1;
    }

    return 0;
}