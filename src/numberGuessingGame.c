#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0)); // seed the random number generator with current time

    int guess = 0;
    int tries = 0;
    int min = 1;
    int max = 100;

    int targetNumber = (rand() % (max - min + 1)) + min;

    printf("*** Welcome to the Number Guessing Game! ***\n");
    do
    {
        printf("Enter your guess (between %d and %d): ", min, max);
        scanf("%d", &guess);
        tries++;

        if(guess < targetNumber){
            printf("Too low! Try again.\n");
        } else if(guess > targetNumber){
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You've guessed the correct number!\n");
        }

    } while (guess != targetNumber);

    printf("The answer is %d\n", targetNumber);
    printf("You guessed it in %d tries!\n", tries);
    

    return 0;
}