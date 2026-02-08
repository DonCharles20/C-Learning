#include<stdio.h>
#include<string.h>

int main(){
    // array = A fixed-size collection of elements of the same data type 
    //        (similar to a variable, but can hold multiple values)

    // when accessing an array, the first element is at index 0, the second at index 1, and so on
    // arrays are stored in contiguous memory locations, which allows for efficient access and manipulation of data
    // array declaration syntax: dataType arrayName[arraySize];
    // array initialization syntax : dataType arrayName[arraySize] = {};
    // when accessing an item out of the array's bounds, 
    //it can lead to undefined behavior (accessing memory that doesn't belong to the array)
    // 

    int numbers[]= {1, 2, 3, 4, 5}; // array declaration (size of 5)

    printf("%d\n", numbers); // prints the memory address of the first element in the array
    printf("%d\n", numbers[0]); // access first element (index 0)

    char grades[] = {'A', 'B', 'C', 'D', 'F'}; // array of characters
    // 
    printf("%c\n",grades[0]);

    char class[] = "class 2025";// each character within this string can be accessed as indexes 
    class[0] = '$';

    int size = sizeof(class) / sizeof(char[1]);
    // sizeof() can be used to get the size of the array in bytes, 
    // and dividing it by the size of a single element gives the number of elements in the array
    // strlen() can also be used to get the length of the string, but it does not include the null terminator
    // it also requires the #include <string.h> header file to use the strlen() function
    printf("Size of class array: %d\n", size);
    printf("Length of class string: %d\n", strlen(class));

    for (int i =0;  i < strlen(class) ; i++){
        printf("%c",class[i]);
 
    }
    



    return 0;
}