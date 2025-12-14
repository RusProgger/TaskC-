#include <stdio.h>


int main() {

    // Day const 

    unsigned short timeDay = 0;

    printf("Enter number time: ");

    scanf_s("%d", &timeDay);

    if(timeDay >= 0 && timeDay <= 3) {
        printf("Night\n");
    } else if(timeDay >= 4 && timeDay <= 11) {
        printf("Morning");
    } else if(timeDay >= 11 && timeDay <= 16) {
        printf("Day");
    } else if(timeDay >= 17 && timeDay <= 23) {
        printf("Evening");
    }


    return 0;
}