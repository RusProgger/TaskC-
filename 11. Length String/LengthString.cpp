#include <iostream>
#include <string>

int main() {

     std::string name;
     std::getline(std::cin, name);
     std::cout << name.size() << std::endl;

    std::cin.get(); 
    return 0;
}