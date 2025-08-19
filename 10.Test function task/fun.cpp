#include <iostream>

int Test(int a) {return a;};
float Test(float b) {return b;};
std::string Test(std::string text) {return text;};

int main() {

    int a = 10;
    float b = 2.5;
    std::string name = "Function";

    int resFT = Test(a);
    float resFT1 = Test(b);


    std::cout << resFT << std::endl;
    std::cout << resFT1 << std::endl;

    return 0;
}