/*#include <stdio.h>
#include <math.h> // For sqrt() function

int main() {
    int num, i = 2;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Input validation (check for positive number)
    if (num <= 0) {
        printf("Prime factors are not defined for non-positive numbers.\n");
        return 1; // Indicate error
    }

    printf("%d = ", num); // Start the output with the number itself

    // Find prime factors using a while loop
    while (num != 1) {
        // Check if i is a prime factor
        if (num % i == 0) {
            printf("%d ", i);
            num /= i; // Divide num by the prime factor
        } else {
            i++; // If not a factor, move on to the next potential prime factor
        }

        // Optimization: avoid checking factors above the square root of num
        if (i > sqrt(num)) {
            break; // Exit the loop if i exceeds the square root
        }
    }

    printf("\n"); // Add a newline for better output formatting

    return 0;
}
*/


/*#include <stdio.h>
#include <math.h> // Include math.h before sqrt() call

int main() {
    // ... rest of your code ...
int i, num;
    // Find prime factors using a while loop
    while ( num != 1) {
        // Check if i is a prime factor
        if ( num % i == 0) {
            printf("%d ", i);
            num /= i; // Divide num by the prime factor
        } else {
            i++; // If not a factor, move on to the next potential prime factor
        }

        // Optimization: avoid checking factors above the square root of num
        if (i > sqrt(num)) {
            break; // Exit the loop if i exceeds the square root
        }
    }

    return 0;
}
*/






