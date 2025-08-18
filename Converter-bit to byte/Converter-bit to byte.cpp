#include <iostream>
#include <Windows.h>


void localeWinApi() {
    SetConsoleOutputCP(1251); 
    SetConsoleCP(1251);       
}

int main() {
    
    // локаль 
    localeWinApi();


    return 0;
}

