#include <stdio.h>
#include <windows.h>// Sleep function for windows
// #Include <unistd.h> // for sleep function on Unix-based systems and MacOS

int main(){
    /*
        for loop = Repeat a block of code a certain number of times
        for(initialization; condition; increment){
            // code block to be executed
        }
    */

    for(int i=0; i < 5; i++){
        printf("Iteration %d\n", i);
    }

    for (int i = 10; i >= 0; i--)
    { 
        Sleep(1000); // Pause for 1000 milliseconds (1 second)
        printf("Countdown: %d\n", i);
    }
    
   
    return 0;
}