#include <stdio.h>

int main(){

    // Print numbers 1 to 5 in three separate lines using loops
    // this is an example of nested loops structure but without actual nesting
    // also we are repeating similar code blocks
    for(int i = 0; i <= 5; i++){
        printf(" %d", i);
    }
    printf("\n");
    for(int i = 0; i <= 5; i++){
        printf(" %d", i);
    }
    printf("\n");
    for(int i = 0; i <= 5; i++){
        printf(" %d", i);
    }
    printf("\n");
    printf("\n");

    // Improved version using nested loops
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            printf(" %d", j);

        }
        printf("\n"); 
        
    }
    

    

    return 0;
}