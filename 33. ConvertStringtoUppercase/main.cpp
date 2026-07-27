#include <iostream>
#include <cctype>
#include <string>

std::string funUpperText(std::string text) {

    for(int i = 0; i < text.length(); i++) {
        if(islower(text[i])) {
            text[i] = toupper(text[i]);
        } else {
            text[i] = tolower(text[i]);
        }
    }

    return text;
}


int main() {

    std::string text {};
    std::cout << "Enter text: ";
    std::getline(std::cin, text);

    // проверка если строка пустая то выводим сообщение о ошибке

    if(text.empty()) {
        std::cout << "String is empty!\n";
        return 1;
    }

    std::string result  = funUpperText(text);

    std::cout << result;

    return 0;
}