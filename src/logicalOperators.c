#include <stdio.h>
#include <stdbool.h>

int main()
{
    // Logical operators = used to combine or modify boolean expressions.

    //&& = AND
    //|| = OR
    // ! = NOT

    int temp = 0;
    bool isSunny = true;

if (temp >= 0 && temp <= 30)//Both must be true
    {
        printf("The temperature is Good");
    }else{
         printf("The temperature is Bad");
    }


    if (temp <= 0 || temp >= 30)//Only one needs to be true
    {
        printf("The temperature is Bad");
    }else{
         printf("The temperature is Good");
    }

    if (!isSunny)//Makes true become false vice versa
    {
        printf("it is Sunny outside");
    }
    else{
        printf("it is Cloudy outside");
    }
    
    

    return 0;
}