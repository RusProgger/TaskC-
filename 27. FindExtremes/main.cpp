#include <iostream>
using namespace std;

int main() {
    
    const int SIZE = 5;
    int numbers[SIZE];

    // Ввод 5 чисел
    cout << "Введите 5 чисел через пробел: ";
    for (int i = 0; i < SIZE; ++i) {
        cin >> numbers[i];
    }

    // Инициализируем максимум и минимум первым числом
    int maxNum = numbers[0];
    int minNum = numbers[0];

    // Проходим по остальным числам
    for (int i = 1; i < SIZE; ++i) {
        if (numbers[i] > maxNum) {
            maxNum = numbers[i];
        }
        if (numbers[i] < minNum) {
            minNum = numbers[i];
        }
    }

    // Выводим результат
    cout << "Максимальное: " << maxNum << endl;
    cout << "Минимальное: " << minNum << endl;

    return 0;
}
