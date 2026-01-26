#include <stdio.h>

int main(){
    /*
        Arithmetic Operators = special symbols used to perform mathematical calculations
        +   Addition
        -   Subtraction
        *   Multiplication
        /   Division use float or double to get precise results
        %   Modulus (Remainder)
        ++  Increment in a value by 1
        --  Decrement in a value by 1
    */
   int num1 = 10;
   int num2 = 3;

   int sum = num1 + num2; // Addition
   int difference = num1 - num2; // Subtraction
   int product = num1 * num2; // Multiplication
   int quotient = num1 / num2; // Division
   // when using division with integers, the result will also be an integer (decimal part is truncated)
   // to get a precise result, at least one operand must be a float or double
   // change int to float for precise division without truncation
   float preciseQuotient = (float)num1 / (float)num2;
   int remainder = num1 % num2; // Modulus

   //shortcut assignment with arithmetic operators
   // num1 += 5;
   // num1 -= 5;
   // num1 *= 5;
   // num1 /= 5;
   // num1 %= 5;


   printf("Sum: %d\n", sum);
   printf("Difference: %d\n", difference);
   printf("Product: %d\n", product);
   printf("Quotient: %d\n", quotient);
   printf("Precise Quotient: %.2f\n", preciseQuotient);
   printf("Remainder: %d\n", remainder);
   

    // Increment and Decrement
    int a = 5;
    printf("Original a: %d\n", a);
    a++; // Increment
    printf("After Increment a: %d\n", a);
    a--; // Decrement
    printf("After Decrement a: %d\n", a);


    return 0;
}