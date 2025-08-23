#include <iostream>

int main() {
    int a {0};
    int b {0};
    std::cin >> a >> b;
    
    int res = (a * 10) + (a % 10);
    std::cout << res << std::endl;
}
