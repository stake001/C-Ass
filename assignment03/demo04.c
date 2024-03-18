#include <stdio.h>

int main() {
    int num, i, factorial = 1;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Input validation (check for non-negative number)
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1; // Indicate error
    }

    // Calculate factorial using a while loop
    i = 1;
    while (i <= num) {
        factorial *= i;
        i++;
    }

    printf("Factorial of %d: %d\n", num, factorial);

    return 0;
}

