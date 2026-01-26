#include <stdio.h>
#include <string.h>
int main(){
    // Variables to store user input, they are declared but not initialized
    // Note: its best practice to initialize variables before use
    // to avoid undefined behavior from garbage values
    int age = 0; //int age;
    float gpa = 0.0; //float gpa;
    char grade = '\0';// char grade;
    char name[30] = {0};// char name[30];

    /* scanf = function used to read formatted input from the standard input (keyboard)
        Syntax: scanf("format specifier", &variable);
        Note: The '&' operator is used to get the memory address of the variable
              so that scanf can store the input value at that address.

        beware of buffer overflow when using scanf for strings
        always limit the number of characters to be read to avoid overflow
        use space before %c to consume any leftover newline character in the input buffer
        newline character is generated when user presses enter key after input 
        and will be read by next scanf if not consumed

        scanf will stop reading input at the first whitespace character (space, tab, newline)
        so for strings with spaces, consider using fgets() instead

        or use fgets() to read strings with spaces
        syntax: fgets(variable, size, stdin);
        example: fgets(name, sizeof(name), stdin);

        also consider using getc() or getchar() to read single character input

        String.h library is included for using string functions if needed
        using name[strlen(name)-1] = '\0'; to remove newline character from fgets input
    */

    printf("Enter your age: \n");
    scanf("%d", &age); // Read an integer input from the user

    printf("Enter your GPA: \n");
    scanf("%f", &gpa); // Read a float input from the user

    printf("Enter your name: \n");
    scanf("%29s", name); // Read a string input from the user (up to 29 characters to leave space for the null terminator)
    // fgets(name, sizeof(name), stdin); // alternative way to read string with spaces
    // name[strlen(name)-1] = '\0';
    // using getChar() to read a single character input and consume leftover newline

    printf("Enter your grade: \n");
    scanf(" %c", &grade); // Read a character input from the user (note the space before %c to consume any leftover whitespace)

    printf("You entered: Age = %d, GPA = %.2f, Name = %s, Grade = %c\n", age, gpa, name, grade);
    return 0;
}