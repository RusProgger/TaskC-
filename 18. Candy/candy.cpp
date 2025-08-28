#include <iostream>
using namespace std;

int main() {
    int candy {2500};
    int student {789};
    int teacher {42};
    
    // решение
    int resCandy =  candy / student;
    int resStudent = candy % student;
    int resTeacher = resStudent / teacher;
    int resDirector = resStudent % teacher;
    std::cout << resCandy << std::endl;
    std::cout << resTeacher << std::endl;
    std::cout << resDirector << std::endl;
}