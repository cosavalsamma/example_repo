#include <stdio.h>

void display_info(int num1, int num2) {
    printf("Number 1: %d\n", num1);
    printf("Number 2: %d\n", num2);
}

int main() {
    int x = 5;
    int y = 3;

    display_info(x, y);

    return 0;
}
