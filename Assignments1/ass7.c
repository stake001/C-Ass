#include <stdio.h>

void display_face_value(int number) {
    printf("a. Display face value of each decimal digit:\n");
    while (number > 0) {
        int digit = number % 10;
        printf("%d\n", digit);
        number /= 10;
    }
}

void display_place_value(int number) {
    printf("b. Display place value of each decimal digit:\n");
    int divisor = 1000;
    while (divisor > 0) {
        int digit = number / divisor;
        printf("%d ", digit);
        if (divisor > 1) {
            printf("* %d + ", divisor);
        }
        number %= divisor;
        divisor /= 10;
    }
    printf("\n");
}

void display_reverse_number(int number) {
    printf("c. Display number in reverse order by changing decimal place values:\n");
    int reversed = 0;
    int place = 1;
    while (number > 0) {
        int digit = number % 10;
        reversed = reversed + digit * place;
        place *= 10;
        number /= 10;
    }
    printf("%d\n", reversed);
}

int main() {
    int input_number;
    
    printf("Enter a 4-digit number: ");
    scanf("%d", &input_number);
    
    if (input_number >= 1000 && input_number <= 9999) {
        display_face_value(input_number);
        display_place_value(input_number);
        display_reverse_number(input_number);
    } else {
        printf("Invalid input. Please enter a 4-digit number.\n");
    }
    
    return 0;
}

  

