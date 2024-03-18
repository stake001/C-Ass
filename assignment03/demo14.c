#include <stdio.h>
#include <math.h> // For sqrt() function

int is_prime(int num) {
    if (num <= 1) {
        return 0; // 0 and 1 are not considered prime
    } else if (num <= 3) {
        return 1; // 2 and 3 are prime
    } else if (num % 2 == 0 || num % 3 == 0) {
        return 0; // Even numbers except 2 and multiples of 3 are not prime
    }

    int i = 5;
    while (i * i <= num) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return 0; // Not prime if divisible by i or i+2 (optimized check)
        }
        i += 6; // Increment i by 6 to check for divisibility by 6k ± 1
    }

    return 1; // Prime if none of the above conditions are met
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (is_prime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}

