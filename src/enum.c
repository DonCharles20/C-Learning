#include<stdio.h>

typedef enum { SUNDAY, 
            MONDAY, 
            TUESDAY, 
            WEDNESDAY, 
            THURSDAY, 
            FRIDAY, 
            SATURDAY } Day;
 
int main(){
    // enum = A user-defined data type that consists 
    // of a set of named integer constants.
    // Benefit: Replaces numbers with readable names
    //
    // Sunday = 0;
    // Monday = 1;
    // Tuesday = 2;

    Day today = SUNDAY;

   

    switch (today)
    {
    case SUNDAY:
        printf("Today is Sunday\n");
        break;
    
    case MONDAY:
        printf("Today is Monday\n");
        break;
    
    case TUESDAY:
        printf("Today is Tuesday\n");
        break;
    
    case WEDNESDAY:
        printf("Today is Wednesday\n");
        break;
    
    case THURSDAY:
        printf("Today is Thursday\n");
        break;
    
    case FRIDAY:
        printf("Today is Friday\n");
        break;
    
    case SATURDAY:
        printf("Today is Saturday\n");
        break;
    
    default:
        break;
    }

     if (today == SUNDAY || today == SATURDAY)
    {

        printf("It's the weekend!\n");
    }else
    {
        printf("It's a weekday.\n");
    }
    



    return 0;
}