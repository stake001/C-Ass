#include <stdio.h>

int main() {
    int num, i = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Multiplication table of %d:\n", num);

    // Use a while loop to iterate from 1 to 10
    while (i <= 10) {
        printf("%d x %d = %d\n", num, i, num * i);
        i++; // Increment counter after each print
    }

    return 0;
}

