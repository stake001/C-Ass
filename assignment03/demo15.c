#include <stdio.h>

int main() {
    int choice, num1, num2;
    float result;

    do {
        // Display menu
        printf("\nMenu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");

        // Get user choice
        scanf("%d", &choice);

        // Input validation (optional)
        // You can add an `if` statement here to check for invalid choices (1-5 only)
        // and provide an error message if needed.

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                result = num1 + num2;
                printf("%d + %d = %.2f\n", num1, num2, result);
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                result = num1 - num2;
                printf("%d - %d = %.2f\n", num1, num2, result);
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                result = num1 * num2;
                printf("%d * %d = %.2f\n", num1, num2, result);
                break;
            case 4:
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                if (num2 == 0) {
                    printf("Division by zero is not allowed.\n");
                } else {
                    result = (float) num1 / num2; // Cast to float for floating-point division
                    printf("%d / %d = %.2f\n", num1, num2, result);
                }
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5); // Loop continues until user chooses exit (option 5)

    return 0;
}

