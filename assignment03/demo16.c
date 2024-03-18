#include <stdio.h>
#include <stdlib.h> // For rand() and srand()
#include <time.h>  // For srand() seeding

int main() {
    int magic_number, guess, num_guesses = 0;

    // Seed the random number generator (improves randomness)
    srand(time(NULL));

    // Generate a random magic number between 1 and 1000
    magic_number = rand() % 1000 + 1;

    printf("Guess the magic number between 1 and 1000!\n");
    printf("You have a maximum of 10 guesses.\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        num_guesses++;

        if (guess == magic_number) {
            printf("Congrats! You guessed the magic number in %d guesses.\n", num_guesses);
            break;
        } else if (guess < magic_number) {
            printf("Guess left.\n");
        } else {
            printf("Guess right.\n");
        }
    } while (num_guesses < 10);

    if (num_guesses == 10) {
        printf("You ran out of guesses. The magic number was %d.\n", magic_number);
    }

    return 0;
}

