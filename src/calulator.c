#include <stdio.h>

int main(){
    // Calculator Program

    char operator = '\0';
    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;

    printf("Enter the first number: ");
    scanf("%1f" , &num1);

    printf("Enter the operator (+ - * /): ");
    scanf(" %c" , &operator);// clear \n from input character using space

    printf("Enter the second number: ");
    scanf("%1f" , &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
    if (num2 == 0){
        printf("You cant divide by zero!\n");
        
    }else{
        result = num1 / num2;
    }
    break;
        
    
    default:
        break;
    }
    printf("Result: %.41f", result);



    return 0;
}