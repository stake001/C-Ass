#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Input validation (check for positive number)
    if (num <= 0) {
        printf("Multiplication table is not defined for non-positive numbers.\n");
        return 1; // Indicate error
    }

    printf("Multiplication Table of %d:\n", num);

    // Print table using a for loop
    for (i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", num, i, num * i);
    }

    return 0;
}

