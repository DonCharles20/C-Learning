#include <stdio.h> 

int main(){
    // switch = an alternative to multiple "if" statements
    //          used to execute different parts of code based on the value of a variable

    // Switches use break; to prevent other cases from showing
    // without it you would see the other cases regardless of choice

    int dayOfWeek = 1;

    printf("Enter a day of the week (1-7): ");
    scanf("%d", &dayOfWeek);

    switch (dayOfWeek)
    {
    case 1 :
        printf("Monday\n");
        break;
    case 2 :
        printf("Tuesday\n");
        break;
    case 3 :
        printf("Wednesday\n");
        break;
    case 4 :
        printf("Thursday\n");
        break;
    case 5 :
        printf("Friday\n");
        break;
    case 6 :
        printf("Saturday\n");
        break;
    case 7 :
        printf("Sunday\n");
        break;
    
    default:
        break;
    }

    return 0;
}