#include  <stdio.h>
#include  <string.h>

int main(){
    // Mad Libs Program

    char noun[50] = "";
    char verb[50] = "";
    char adjective1[50] = "";
    char adjective2[50] = "";
    char adjective3[50] ="";

    printf("Enter an adjective (description): ");
    fgets(adjective1, sizeof(adjective1), stdin);
    strtok(adjective1, "\n");

    printf("enter a noun (animal or person): ");
    fgets(noun, sizeof(noun), stdin);
    strtok(noun, "\n");

    printf("enter an adjective (descriptive word): ");
    fgets(adjective2, sizeof(adjective2), stdin);
    strtok(adjective2, "\n");

    printf("enter a verb (ending w/ -ing): ");
    fgets(verb, sizeof(verb), stdin);
    strtok(verb, "\n");

    printf("enter another adjective (descriptive word): ");
    fgets(adjective3, sizeof(adjective3), stdin);
    strtok(adjective3, "\n");

    //debug
    //printf("Debug: %s, %s, %s, %s, %s\n", adjective1, noun, adjective2, verb, adjective3);

    printf("\n Today I went to my %s computer \n", adjective1);
    printf("On a video, I saw a %s.", noun);
    printf(" that was very %s. \n", adjective2);
    printf("It was %s! \n", verb);
    printf("and it looked %s. \n", adjective3);

    return 0;
}