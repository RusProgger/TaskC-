#include <iostream>

int main() {
    int n;
    std::cin >> n;

    if (n < 1 || n > 1000) {
        return 1;
    }
    
    // выделяем память
    double* arr = new double[n];

    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    double maxVal = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

    std::cout << maxVal << std::endl;
    // Освобождаем память
    delete[] arr;
    // Обнуляем указатель (для хорошего тона)
    arr = nullptr;
    return 0;
}
