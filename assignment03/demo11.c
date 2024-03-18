#include <stdio.h>

// Function to calculate factorial recursively
unsigned long long factorial(unsigned int n) {
    if (n == 0) {
        return 1; // Base case: factorial of 0 is 1
    } else {
        return n * factorial(n - 1); // Recursive case: factorial(n) = n * factorial(n-1)
    }
}

int main() {
    int num;
    unsigned long long result;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Input validation (check for non-negative number)
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1; // Indicate error
    }

    result = factorial(num);
    printf("The factorial of %d is %llu\n", num, result);

    return 0;
}

