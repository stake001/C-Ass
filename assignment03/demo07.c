#include <stdio.h>

int main() {
    int num, i = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Input validation (check for positive number)
    if (num <= 0) {
        printf("Pairs are not defined for non-positive numbers.\n");
        return 1; // Indicate error
    }

    printf("Unique pairs whose product is %d:\n", num);

    // Find pairs using a while loop
    while (i <= num) {
        if (num % i == 0) { // Check if i is a factor of num
            int pair = num / i;
            if (pair != i) { // Print only unique pairs (avoid duplicates)
                printf("%d * %d = %d\n", i, pair, num);
            }
            i++; // Increment i even if not a factor (to check other possibilities)
        } else {
            i++; // Increment i if not a factor (to move on to the next potential pair)
        }
    }

    return 0;
}

