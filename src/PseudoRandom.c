#include <stdio.h>
#include <stdlib.h>// for rand() and srand()
#include <time.h>// for time()

int main() {
    /* Pseudo-random = Appear random but are determined by 
                        a mathematical formula that uses a seed value
                        to generate a predicatable sequence of numbers.
                        advanced: mersenne twister or /dev/random
    */
   printf("%d", rand()); // rand() generates a pseudo-random number
   // 41 is the output and it will be the same every time the program is run

   srand(time(0)); // seed the random number generator with current time
   printf("\n%d", rand()); // now rand() will produce different output each time

   int randomNum = rand() % 100; // random number between 0 and 99
   int randomNum2 = (rand() % 100) + 1; // random number between 1 and 100
   printf("\n%d", randomNum);
   printf("\n%d", randomNum2);

   int min = 1;
   int max = 10;
    int randomNum3 = (rand() % (max - min + 1)) + min; // random number between min and max
    // formula: (rand() % (max - min + 1)) + min
    // Explanation: rand() % (max - min + 1) generates a number between 0 and (max - min)
    // Adding min shifts the range to be between min and max
    //rand() generates a number between 0 and RAND_MAX, Rand_MAX is a constant defined in stdlib.h
    // max - min + 1 gives the total number of possible values in the desired range
    //max is the upper limit (inclusive), min is the lower limit (inclusive), and +1 ensures that max is included in the range
    // the + min shifts the range from starting at 0 to starting at min

    printf("\n%d", randomNum3);

    return 0;
}