#include <stdio.h>
#include <string.h>

int main(){

    //Array of Strings

    char fruits[][10] ={"apple","orange","coconut"};
    /*
    This is how C sees the array of strings:
    char fruits[3][10] = {
        {'a','p','p','l','e','\0'},
        {'o','r','a','n','g','e','\0'},
        {'c','o','c','o','n','u','t','\0'}
    };
    */
   //when intilializing an array of strings set it to zero so it does not contain garbage values
   //char fruits[3][10] = {0};
    int size = sizeof(fruits) / sizeof(fruits[0]);
    for (int i = 0; i < size; i++)
    {
        printf("%s\n", fruits[i]);
    }
    printf("\n");

    fruits[0][0] = 'k'; // changing the first letter of the first fruit to 'k'
    fruits[0][1] = 'i'; // changing the second letter of the first fruit to 'i'
    fruits[0][2] = 'w'; // changing the third letter of the first fruit to 'w'
    fruits[0][3] = 'i'; // changing the fourth letter of the first fruit to 'i'
    fruits[0][4] = '\0'; // adding the null terminator at the end of the string

    for (int i = 0; i < size; i++)
    {
        printf("%s\n", fruits[i]);
    }

    char names[3][20] = {0}; // array of strings with 3 rows and 20 columns, initialized to zero

    printf("enter 3 names: \n");
    // we can use a loop to take user input for the names and remove the newline character at the end of each name
    // fgets(names[0], 20, stdin); // taking user input for the first name
    // fgets(names[1], 20, stdin); // taking user input for the second name
    // fgets(names[2], 20, stdin); // taking user input for the third name
    // names[0][strlen(names[0]) - 1] = '\0'; // removing the newline character from the first name
    // names[1][strlen(names[1]) - 1] = '\0'; // removing the newline character from the second name
    // names[2][strlen(names[2]) - 1] = '\0'; // removing the newline character from the third name 
    
    for (int i = 0; i < 3; i++)
    {
        fgets(names[i], 20, stdin); // taking user input for the names
        names[i][strlen(names[i]) - 1] = '\0'; // removing the newline character from the names
    }
    
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", names[i]);
    }


    return 0;
}