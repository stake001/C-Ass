#include <stdio.h>

int main() {
    int i, j;

    // Loop for the number of lines (5 in this case)
    for (i = 1; i <= 5; i++) {
        // Loop to print asterisks in each line (5 times)
        for (j = 1; j <= 5; j++) {
            printf("* ");
        }
        // Move to the next line after printing 5 asterisks
        printf("\n");
    }

    return 0;
}

