#include <stdio.h>

int main()
{
    /*
        Format specifier = Special tokens that begin with % symbol,
                            followed by a character that indicates the type of data to be printed.


        Printf Syntax: printf("string % width .precision format", variable1, variable2, ...);

        Format Specifiers in C:
        %d - Integer (decimal) format specifier, used for int data type
        %f - Float format specifier, used for float data type
        %lf - Double format specifier, specifically for double data type
        %c - Character format specifier, used for char data type
        %s - String format specifier, used for char arrays (strings)

        Width Specifier = An optional number that specifies the minimum number of characters to be printed.
                          If the value to be printed is shorter than the specified width,
                          it will be padded with spaces (by default) to meet the width requirement.
                          If the value is longer than the specified width, it will be printed in full without truncation.

        Precision Specifier = A dot (.) followed by a number that specifies the number of digits to be printed
                        after the decimal point for float and double types.
                        It can also specify the maximum number of characters to be printed from a string.
                        by default, float and double types print 6 digits after the decimal point.
    */

    int number = 42;
    float decimalNumber = 3.14f;
    double preciseNumber = 2.718281828459;
    char character = 'C';
    char string[] = "Hello, C!";

    printf("Integer: %d\n", number);
    printf("Float: %f\n", decimalNumber);
    printf("Double: %lf\n", preciseNumber);
    printf("Character: %c\n", character);
    printf("String: %s\n", string);

    // width
    int num1 = 7;
    int num2 = 70;
    int num3 = 700;
    int num4 = 7000;
    printf("%3d\n", num1); //adds 3 spaces before the number if it is less than 3 digits
    printf("%-3d\n", num2); //using - adds spaces after the number if it is less than 3 digits
    printf("%03d\n", num3);//using 0 adds leading zeros if the number is less than 3 digits 
    printf("%3d\n", num4);

    //precision
    float pi = 3.14159265359;
    printf("Pi to 2 decimal places: %.2f\n", pi);
    printf("Pi to 5 decimal places: %.5f\n", pi);

    return 0;
}