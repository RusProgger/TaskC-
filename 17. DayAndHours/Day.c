#include <stdio.h>


int main() {

    // Day const 

    unsigned short timeDay = 0;

    printf("Enter number time: ");

    scanf_s("%d", &timeDay);

    if(timeDay >= 0 && timeDay <= 3) {
        printf("Night\n");
    }


    return 0;
}