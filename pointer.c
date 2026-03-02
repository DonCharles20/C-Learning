#include <stdio.h>

void birthday(int* age);

int main()
{
    // pointer = A varible that stores the memory address of
    // another varible.
    // Benefit: They help avoid wasting memory by allowing you to pass
    // the address of a large data strctutreu insead of copying the
    // entire data.

    int age = 22;

    printf("%p \n", &age); // use the format specfier p and & when getting a adress in memory

    int *pAge = &age;
    // this is how you make a pointer varible
    printf("%p \n", pAge);

    birthday(pAge);
    printf("You are %d years old", age);

    return 0;
}

void birthday(int* age){
    // functions are pass by value by default
    // which means that c creates a copy of the value
    // this does not affect the orginal value

    //use Pass by refrence
    // you need to directly access the memeory addres of the varible to 
    // modify it
    // use int* x, this will have the function take the memory addres of the varible
    //age++;// this will increment the addres memory buy not modify it

    // to affect the acutal value, you must derefrence it.
    (*age)++; //like this put an astrisk before the varible
    // use paraentehsis or else the memory will be updated instead of the value
}