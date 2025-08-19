#include <iostream>

int Test(int a);
float Test(float b);
std::string Test(std::string text);

int main() {

    int a = 10;
    float b = 2.5;
    std::string name = "Function";

    int resFT = Test(a);



    return 0;
}