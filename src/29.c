#include <stdio.h>
#include <stdlib.h>

void print_numbers(int numbers[]) {
    printf("Numbers: ");
    for (int i = 0; i < 5 && numbers[i] != 10; ++i) {
        if (numbers[i] == 10)
            break;
        printf("%d ", numbers[i]);
    }
}

int main() {
    int numbers[5];
    for (int i = 0; i < 5; ++i) {
        numbers[i] = i + 1;
    }

    print_numbers(numbers);
    return 0;
}
