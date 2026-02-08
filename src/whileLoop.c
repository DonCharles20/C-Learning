#include <stdio.h>
#include <string.h>

int main() {

    int number = 0;

    /* while loops = repeats a block of code while a specified condition is true
       do while loops = like a while loop, but checks the condition at the end of the loop
    */

    while (number <= 0){
        printf("Please enter a positive integer: ");
        scanf("%d", &number);
    }
    

    char name[50] ="";

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0'; // Remove newline character

    do
    {
        printf("name Cannot be empty! Please enter your name: ");
        fgets(name, sizeof(name), stdin);
        name[strlen(name) - 1] = '\0'; // Remove newline character
        
    } while (strlen(name) == 0);
    
    printf("Hello, %s! You entered the positive integer %d.\n", name, number);
    
    



    return 0;
}