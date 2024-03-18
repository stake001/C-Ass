#include <stdio.h>

int main() {
    int n, i;
    unsigned long long term1 = 0, term2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Input validation (handle non-positive numbers)
    if (n <= 0) {
        printf("Invalid input: Please enter a positive integer.\n");
        return 1; // Indicate error
    }

    printf("Fibonacci Series: ");
    for (i = 1; i <= n; ++i) {
        printf("%llu ", term1);
        nextTerm = term1 + term2;
        term1 = term2;
        term2 = nextTerm;
    }
    printf("\n");

    return 0;
}

