#include <stdio.h>

int main() {
    int num1 = 5;
    int num2 = 3;

    printf("The sum is: %d\n", num1 + num2);
    printf("The difference is: %d - %d = %d\n", num1, num2, (num1 + num2) - (num1 == num2 ? 0 : (long long) num1));

    return 0;
}
