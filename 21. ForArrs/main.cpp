#include <iostream>

int main() {

    int arrs[5];

    for(int i = 0; i < 5; i++) {
        std::cin >> arrs[i];
    }

    for(int i = 4; i >= 0; i--) {
        std::cout << arrs[i] << " ";
    }


    return 0;
}