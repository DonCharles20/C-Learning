#include <stdio.h>
#include <string.h>

void happyBirthday(char name[], int age)
{
    // name[] and age are arguments, they receive the values passed to the function
    //the types of the arguments must match the types of the parameters, names can be different
    // arguments are variables that are passed to a function when it is called
    // parameters are variables that are used in the function definition to refer to the arguments
    printf("\n Happy Birthday to you!");
    printf("\n Happy Birthday to you!");
    printf("\n Happy Birthday dear %s!",name);
    printf("\n Happy Birthday to you!");
    printf("\n You are %d years old !\n", age);
}
/* functions help reduce code repetition
*/

int main()
{
    // function = A reusable section of code that can be invoked "called"
    //              Arguments can be sent to a function so that it can use them
    char name[50] = "";
    int age = 0;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0'; // remove newline character from fgets   

    printf("Enter your age: ");
    scanf("%d", &age);


    happyBirthday(name,age);
    happyBirthday(name,age);
    happyBirthday(name,age);
    
    return 0;
}