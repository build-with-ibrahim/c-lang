#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));  // Initialize random number generator

    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed;

    // Print the random number (for testing - keep it commented)
    // printf("Random Number: %d\n", randomNumber);

    do {
        printf("Guess the number: ");
        scanf("%d", &guessed);

        if (guessed > randomNumber) {
            printf("Lower number please!\n");
        } else if (guessed < randomNumber) {
            printf("Higher number please!\n");
        }

        no_of_guesses++;
    } while (guessed != randomNumber);

    printf("You guessed the number in %d guesses\n", no_of_guesses);

    return 0;
}