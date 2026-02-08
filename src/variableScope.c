#include <stdio.h>

 int result = 0; // Global scope(Hard to debug)
 // Any function can access this variable and modify it unintentionally

int add(int a, int b){
    int result = a+b; // Local scope within add function
    return result;
}

int subtract(int a, int b){
    int result = a-b; // Local scope within subtract function
    return result;
}

int main(){

    /*Varible scope = Refers to Where a varible is recognized and accessible
                varibles can chare the same name if they're in diffrent scope {}

                Local scope = varible declared within a function or block {}

                Global scope = varible declared outside of all functions

            Use local scope when possible to avoid unintentional modifications
        

    */

    int result = 10; // Global scope within main function
    printf("Global x: %d\n",result);

    result = add(5,7);
    printf("Result from add function: %d\n",result);

    result = subtract(10,3);
    printf("Result from subtract function: %d\n",result);


    return 0;
}