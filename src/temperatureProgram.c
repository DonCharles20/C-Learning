#include <stdio.h>

int main(){
    // Temperature Conversion Program
    char choice = 0;
    float fahrenheit = 0.0;
    float celsius = 0.0;


    printf("Temperature Conversion Program\n");
    printf("C. celsius to Fahrenheit\n");
    printf("F. Fahrenheit to Celsius\n");
    printf("Is the temperature in Celsius or Fahrenheit? (C/F): ");
    scanf(" %c", &choice);

    if (choice == 'C' || choice == 'c')
    { //Celsius to Fahrenheit
        printf("Enter temperature in celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("%.2f Celsius is %.2f Fahrenheit\n", celsius, fahrenheit);

    }else if(choice == 'F' || choice == 'f'){
        //Fahrenheit to celsius
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("%.2f Fahrenheit is %.2f Celsius\n", fahrenheit, celsius);

    }else{
        printf("Invalid choice. Please select C or F.\n");
    }
    





    return 0;

}