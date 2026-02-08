#include <stdio.h>

int main(){
    /*
        Break and Continue Statements:
        - break: Exits the nearest enclosing loop or switch statement.(STOP)
        - continue: Skips the current iteration of the nearest enclosing loop and proceeds to the next iteration.(SKIP)
    */

    for (int i = 0; i <= 10; i++)
    {
        if (i == 5)
        {
            continue;
        }
        printf("Iteration %d\n", i);
        if (i == 6)
        {
            break;
        }
        
        
        
        
        
    }
    
    return 0;
}