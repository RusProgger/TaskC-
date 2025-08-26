#include <stdio.h>

void funcLine() {
  int line = 1;
  while(line <= 32) {
    printf("-");
    line++;
  }
}

int main() {
    int enterNumber;
    scanf("%o", &enterNumber);
          funcLine();
          printf("\n| десятичная        |%-10d|", enterNumber);
          printf("\n| восьмеричная      |%-10o|", enterNumber);
          printf("\n| шестнадцатеричная |%-10x|\n", enterNumber);
          funcLine();
    return 0;
}