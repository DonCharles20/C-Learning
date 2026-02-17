#include <stdio.h>
#include <stdbool.h>

int main(){
    // ternary operator ? = short hand for if-else statement

    // syntax: condition ? expression1_if_True : expression2_if_False

    int a = 10, b = 20;

    // if a is greater than b, then max will be assigned the value of a, 
    // otherwise it will be assigned the value of b
    int max = (a > b) ? a : b; 

    printf("The maximum value is %d\n", max);

    // check if a is even or odd using ternary operator
    printf("Is a even? %s\n", (a % 2 == 0) ? "Yes" : "No");

    bool isOnline = true;
    printf("User is %s\n", isOnline ? "Online" : "Offline");
    
    return 0;
}