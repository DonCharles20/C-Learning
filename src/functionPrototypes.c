#include <stdio.h>
#include <stdbool.h>

void hello(char name[], int age); // Function Prototype
bool ageCheck(int age); // Function Prototype

int main()
{

    /* Function Prototypes =  Provide the complier w/ information about a function's:
                                name, return type, and parameters before its actual definition.
                                Enable type checking and allows functions to be used before
                                they are defined.
                                Improves readability, organization, and maintainability of code
                                as well as preventing implicit declaration warnings/errors.
        Syntax: returnType functionName(parameterType1, parameterType2, ...);

        In c programs, in order for functions to be used, they must be defined first.
        The compiler will throw an error if a function is declared before its definition unless a function prototype is provided.


    */

    hello("Alice", 30);
    hello("Bob", 15);

    if (ageCheck(20)) {
        printf("You are an adult.\n");
    } else {
        printf("You are a minor.\n");
    }

    return 0;
}

void hello(char name[], int age)
{
    printf("Hello %s \n", name);
    printf("You are %d years old \n", age);
}

bool ageCheck(int age){
    return age >= 18;
}
