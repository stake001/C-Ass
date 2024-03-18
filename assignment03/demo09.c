#include <stdio.h>

int main() {
    int num1, num2, remainder;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Input validation (handle non-positive numbers)
    if (num1 <= 0 || num2 <= 0) {
        printf("GCD is not defined for non-positive numbers.\n");
        return 1; // Indicate error
    }

    printf("Steps to find GCD of %d and %d using Euclidean algorithm:\n", num1, num2);

    // Find GCD using a while loop
    while (num2 != 0) {
        remainder = num1 % num2;
        printf("%d %% %d = %d\n", num1, num2, remainder); // Print calculation steps

        num1 = num2; // Update num1 with the previous num2 for the next iteration
        num2 = remainder; // Update num2 with the remainder for the next iteration
    }

    printf("GCD of %d and %d is %d\n", num1, num1, num2); // Print GCD (which is stored in num1 after the loop)

    return 0;
}

