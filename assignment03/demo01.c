#include <stdio.h>

int main() {
    char character;
    int number;

    printf("Enter a character: ");
    scanf(" %c", &character); // Read character with a space before %c to avoid issues with whitespace

    printf("Enter a number: ");
    scanf("%d", &number);

    int count = 0; // Initialize a counter variable

    while (count < number) {
        printf("%c", character);
        count++;
    }

    printf("\n"); // Add a newline for better output formatting

    return 0;
}

