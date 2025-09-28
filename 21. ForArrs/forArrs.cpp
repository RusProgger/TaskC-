#include <iostream>

int main() {

    unsigned int userArr;

    std::cout << "Enter element: ";

    std::cin >> userArr;

    int* arrMax = new int[userArr];

    for(int i = 0; i < userArr; i++) {
        std::cin >> arrMax[i];
        std::cout << std::endl;
    }
    

    for(int j = 0; j < userArr; j++ ) {
        std::cout << "Element arrry - " << arrMax[j] << " " << "\n";
    }

    delete[] arrMax;
    arrMax = nullptr;

    return 0;
}