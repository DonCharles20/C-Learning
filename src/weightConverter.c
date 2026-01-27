#include <stdio.h>

int main(){

    int choice = 0;
    float pounds = 0.0;
    float kilograms = 0.0;

    printf("Weight Converter\n");
    printf("1. Pounds to Kilograms\n");
    printf("2. Kilograms to Pounds\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1)// kilograms to pounds
    {
        printf("Enter weight in kilograms: ");
        scanf("%f", &kilograms);
        pounds = kilograms * 2.20462;
        printf("%.2f kilograms is equal to %.2f pounds.\n", kilograms, pounds);
    }else if (choice == 2)// pounds to kilograms
    {
        printf("Enter weight in pounds: ");
        scanf("%f", &pounds);
        kilograms = pounds / 2.20462;
        printf("%.2f pounds is equal to %.2f kilograms.\n", pounds, kilograms);
        /* code */
    }else{
        printf("Invalid choice. Please select 1 or 2.\n");
    }
    
    

    return 0;
}