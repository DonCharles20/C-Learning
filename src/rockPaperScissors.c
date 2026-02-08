#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getComputerChoice();
int getUserChoice();
void determineWinner(int userChoice, int computerChoice);

int main(){
    //Rock Paper Scissors Game
    srand(time(0)); // seed the random number generator with current time

    printf("*** Welcome to Rock Paper Scissors! ***\n");
    int userChoice = getUserChoice();
    int computerChoice = getComputerChoice();

    determineWinner(userChoice, computerChoice);
    return 0;
}

int getComputerChoice(){
    int min = 1;
    int max = 3;
    return (rand() % (max - min + 1)) + min; // random number between min and max
}
int getUserChoice(){
    int choice;
    printf("Enter your choice (1 = Rock, 2 = Paper, 3 = Scissors): ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("You chose Rock.\n");
    }
    else if (choice == 2)
    {
        printf("You chose Paper.\n");
    }
    else if (choice == 3)
    {
        printf("You chose Scissors.\n");
    }
    else
    {
        printf("Invalid choice. Please choose 1, 2, or 3.\n");
        return getUserChoice(); // Recursively ask for a valid choice
    }
    
    
    return choice;
}
void determineWinner(int userChoice, int computerChoice){
    // 1 = Rock, 2 = Paper, 3 = Scissors
    if(userChoice == computerChoice){
        if (computerChoice == 1)
        {
            printf("Computer chose Rock.\n");
        } else if (computerChoice == 2)
        {
            printf("Computer chose Paper.\n");
        } else if (computerChoice == 3)
        {
            printf("Computer chose Scissors.\n");
        }
        
        printf("It's a tie!\n");
    } else if((userChoice == 1 && computerChoice == 3) ||
              (userChoice == 2 && computerChoice == 1) ||
              (userChoice == 3 && computerChoice == 2)){
        printf("You win!\n");
    } else {
        printf("Computer chose ");;
        if(computerChoice == 1){
            printf("Rock.\n");
        } else if(computerChoice == 2){
            printf("Paper.\n");
        } else if(computerChoice == 3){
            printf("Scissors.\n");
        }
        printf("Computer wins!\n");
    }
}
