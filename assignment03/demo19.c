#include <stdio.h>

int main() {
    int start, end, num, i;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    // Validate input (optional)
    if (start > end) {
        printf("Invalid input: Starting number must be less than or equal to ending number.\n");
        return 1; // Indicate error
    }

    printf("\nMultiplication Tables from %d to %d\n", start, end);
    printf("----------------------------------\n");

    // Loop through numbers within the range (start to end)
    for (num = start; num <= end; num++) {
        printf("\nMultiplication Table of %d\n", num);
        printf("--------------------------\n");

        // Loop to print the multiplication table for the current number (num)
        for (i = 1; i <= 10; i++) {
            printf("%d * %d = %d\n", num, i, num * i);
        }
    }

    printf("\n"); // Print a newline after all tables

    return 0;
}

