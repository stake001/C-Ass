#include <stdio.h>

unsigned long long calculate_power(unsigned int base, int index) {
    unsigned long long result = 1;
    int i;

    // Input validation for negative index (if needed)
    if (index < 0) {
        printf("Power is not defined for negative exponents.\n");
        return 0; // Indicate error or a suitable default value
    }

    // Calculate power using a loop
    for (i = 1; i <= index; i++) {
        result *= base; // Efficiently multiply base by itself 'index' times
    }

    return result;
}

int main() {
    unsigned int base;
    int index;

    printf("Enter the base: ");
    scanf("%u", &base);

    printf("Enter the index: ");
    scanf("%d", &index);

    unsigned long long power = calculate_power(base, index);
    printf("%u raised to the power of %d is %llu\n", base, index, power);

    return 0;
}

