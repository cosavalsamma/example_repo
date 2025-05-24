#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;

    printf("Please enter an integer: ");
    scanf("%d", &i);

    if (i % 2 == 0) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }

    return 0;
}
