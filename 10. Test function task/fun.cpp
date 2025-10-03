#include <iostream>

int Test(int a) {return a;};
float Test(float b) {return b;};
std::string Test(std::string text) {return text;};

int main() {

    int a = 10;
    float b = 2.5;
    std::string name = "Function";

    int resFunInt = Test(a);
    float resFunFloat = Test(b);
    std::string resFunString = Test("Function text");

    std::cout << resFunInt << std::endl;
    std::cout << resFunFloat << std::endl;
    std::cout << resFunString << std::endl;

    std::cin.get();
    return 0;
}