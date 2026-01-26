#include <stdio.h>
#include <stdbool.h> // Include boolean data type support

int main(){
    //variable = A reusable container for storing data values.
    //            behaves as if it is the value it contains.

    /*
        int = whole numbers takes up 4 bytes of memory
        float = single precision decimal numbers takes up 4 bytes of memory
        double = double precision decimal numbers takes up 8 bytes of memory
        char = single characters/letters/numbers/symbols takes up 1 byte of memory
        char[] = array of characters, used to store a sequence of characters 
        aka string(size depends on the number of characters)
        bool = true or false takes up 1 byte of memory

    */

    int age = 25; // 'int' is a data type that represents integer values
                        // cannot store decimal values, only whole numbers
                        // if a decimal value is assigned, it will be truncated (not rounded)
                        // negative and positive whole numbers can be stored
    int year = 2026;

    float gpa = 2.5;// 'float' is a data type that represents single precision decimal type values
                        // can store store both whole numbers and decimal values
                        // can only store 6-7 digits after the decimal

    double pi = 3.14159265359; // 'double' is a data type that represents double precision decimal type values
                        // can store both whole numbers and decimal values
                        // can store 15-16 digits after the decimal, more precision than float
    
    char grade = 'A'; // 'char' is a data type that represents single characters/letters/numbers/symbols
                        // must be enclosed in single quotes '' and can only store one character

    char name[] = "Don"; // 'char' array is used to store a sequence of characters (string)
                        // must be enclosed in double quotes ""
                // strings in C are null-terminated, meaning they end with a special '\0' character
    
    bool isStudent = true; // 'bool' is a data type that represents boolean values
                        // can only store two values: true or false
                        // requires #include <stdbool.h> to use bool type

    /* There are different print formats in C
        %d means integer format specifier(decimal, base 10), used for int data type
        %f means float or double format specifier for, double and float data types
        %c means character format specifier, used for char data type
        %s means string format specifier, used for char arrays (strings)
              */
    printf("I am %d years old.\n", age); // Print the value of 'age' using format specifier %d
    printf("The year is %d\n",year);
    printf("My gpa is %f\n",gpa);
    printf("The value of pi is %f\n",pi);
    printf("My grade is %c\n",grade);
    printf("My name is %s\n",name);
    printf("Am I a student? %d\n",isStudent); // In C, true is represented as 1 and false as 0
                // so when printing a boolean value using %d, true will print as 1 and false as 0

    if(isStudent){ // use a conditional statement to check the boolean value
        printf("Yes, I am a student.\n");
    } else {
        printf("No, I am not a student.\n");
    }
    return 0;
}