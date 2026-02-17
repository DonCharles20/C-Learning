#include<stdio.h>

typedef int wholeNumber; // now we can use wholeNumber as an alias for int

int main(){
    // typedef = reserved keyword that gives an existing datatype a "nickname"
    //            helps simplify complex types and increase code readability
    // typedef syntax: typedef existing_datatype new_datatype_name;

    wholeNumber x = 10;
    wholeNumber y = 20;
    wholeNumber z = x + y;
    printf("The sum of x and y is %d\n", z);


    return 0;
}