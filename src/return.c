#include <stdio.h>
#include <stdbool.h>

double cube(double num){
    return num * num * num;
}
int square(int num){
    return num * num;
}
/* data types are important when using return
   the return type must match the function declaration
   if no value is returned, use void as the return type
*/
bool ageCheck(int age){
    if(age >= 18){
        return true;
    } else {
        return false;
    }
}

int getMax(int a, int b){
    if(a > b){
        return a;
    } else {
        return b;
    }
}

int main(){
    // return = returns a value from a function after being called
    // remember functions are replaced by their return value when called
    // use a variable to store the return value
    
    int x = square(2);
    double y = cube(3);
    int z = square(4);

    printf("x: %d\n", x);
    printf("y: %.2f\n", y);
    printf("z: %d\n", z);

    if(ageCheck(20)){
        printf("You are an adult.\n");
    } else {
        printf("You are a minor.\n");
    }

    int max = getMax(10, 20);
    printf("The maximum value is: %d\n", max);

    return 0;
}