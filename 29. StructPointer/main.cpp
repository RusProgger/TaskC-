#include <iostream>

/*

    Напишите структуру, которая описывает точку на плоскости с координатами x и y, и для двух точек введеных пользователем найходит расстояние между ними.

*/

struct Pointer {
    double x;
    double y;
};

int main() {

    std::locale::global(std::locale());

    Pointer a, b;

    std::cout << "Введите координаты точки x: ";
    std::cin >> a.x >> a.y;

    std::cout << "Введите координаты точки y: ";
    std::cin >> b.x >> b.y;

    // Формула расстояния между точками

    double result = std::sqrt(std::pow(b.x - a.x, 2) + std::pow(b.y - a.y, 2));

    // вывод результата 

    
    return 0;
}