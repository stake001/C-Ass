#include <stdio.h>

int main() {
    int num, i;

    // Loop to iterate through numbers from 1 to 10
    for (num = 1; num <= 10; num++) {
        printf("Multiplication Table of %d\n", num);
        printf("------------------\n");

        // Loop to print the multiplication table for the current number (num)
        for (i = 1; i <= 10; i++) {
            printf("%d * %d = %d\n", num, i, num * i);
        }

        printf("\n"); // Print a newline after each table
    }

    return 0;
}

