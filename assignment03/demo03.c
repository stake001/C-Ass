/*#include <stdio.h>

int main() {
    int num, originalNum, sum = 0, digit;
	

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Store original number for output formatting later
    originalNum = num;

    // Calculate sum of digits
    while (num != 0) {
        digit = num % 10; // Extract the last digit
        sum += digit;      // Add the digit to the sum
        num /= 10;        // Remove the last digit for next iteration
    }

    printf("Sum of digits of %d (originally %d): %d\n", num, originalNum, sum);

    return 0;
}
*/


/*#include <stdio.h>
#include <math.h> // For pow() function in part (d)

int main() {
    int num, originalNum, remainder, sum = 0, reversed = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num; // Store original number for output formatting later

    // (a) Calculate sum of digits
    while (num != 0) {
        remainder = num % 10;
        sum += remainder;
        num /= 10;
    }

    printf("Sum of digits of %d (originally %d): %d\n", num, originalNum, sum);

    // (b) Reverse the number
    num = originalNum; // Restore original number for reversal
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    printf("Reversed number: %d\n", reversed);

    // (c) Check for numeric palindrome
    num = originalNum; // Restore original number for palindrome check
    reversed = 0;
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if (originalNum == reversed) {
        printf("%d is a numeric palindrome\n", originalNum);
    } else {
        printf("%d is not a numeric palindrome\n", originalNum);
    }

    // (d) Check for Armstrong number
    num = originalNum; // Restore original number for Armstrong check
    int originalSum = 0, temp = num;
    int n = 0; // Count the number of digits

    while (num != 0) {
        remainder = num % 10;
        n++;
        num /= 10;
    }

    num = originalNum;
    while (num != 0) {
        remainder = num % 10;
        originalSum += pow(remainder, n);
        num /= 10;
    }

    if (originalSum == temp) {
        printf("%d is an Armstrong number\n", temp);
    } else {
        printf("%d is not an Armstrong number\n", temp);
    }

    return 0;
}
*/






#include <stdio.h>

int main() {
    int num, originalNum, remainder, sum = 0, reversed = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num; // Store original number for output formatting later

    // (a) Calculate sum of digits
    while (num != 0) {
        remainder = num % 10;
        sum += remainder;
        num /= 10;
    }

    printf("Sum of digits of %d (originally %d): %d\n", num, originalNum, sum);

    // (b) Reverse the number
    num = originalNum; // Restore original number for reversal
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    printf("Reversed number: %d\n", reversed);

    // (c) Check for numeric palindrome
    num = originalNum; // Restore original number for palindrome check
    reversed = 0;
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if (originalNum == reversed) {
        printf("%d is a numeric palindrome\n", originalNum);
    } else {
        printf("%d is not a numeric palindrome\n", originalNum);
    }

    // (d) Check for Armstrong number
    num = originalNum; // Restore original number for Armstrong check
    int originalSum = 0, temp = num;
    int n = 0; // Count the number of digits

    while (num != 0) {
        remainder = num % 10;
        n++;
        num /= 10;
    }

    num = originalNum;
    while (num != 0) {
        remainder = num % 10;
        int power = 1;
        for (int i = 0; i < n; i++) { // Calculate power iteratively
            power *= remainder;
        }
        originalSum += power;
        num /= 10;
    }

    if (originalSum == temp) {
        printf("%d is an Armstrong number\n", temp);
    } else {
        printf("%d is not an Armstrong number\n", temp);
    }

    return 0;
}

