#include <iostream>

void Zero(float* p) {
    *p = 0;
}


int main() {

    float a {10};
    Zero(&a);
    return 0;
}