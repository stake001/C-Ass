#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Input validation (check for positive number)
    if (num <= 0) {
        printf("Factors are not defined for non-positive numbers.\n");
        return 1; // Indicate error
    }

    printf("All factors of %d (excluding the number itself):\n", num);

    // Find factors using a while loop
    i = 1;
    while (i < num) {
        if (num % i == 0) {
            printf("%d ", i);
        }
        i++;
    }

    printf("\n"); // Add a newline for better output formatting

    return 0;
}

