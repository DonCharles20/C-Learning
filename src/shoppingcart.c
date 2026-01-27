#include <stdio.h>
#include <string.h>

int main(){
    //Shopping Cart Program
    char item[50] ="";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("what item would you like to purchase?:  ");
    fgets(item, sizeof(item), stdin);
    // Remove trailing newline from item using strtok
    strtok(item, "\n");

    printf("What is the price of the item?:  ");
    scanf("%f", &price);

    printf("How many %s would you like to buy?: ", item);
    scanf("%d", &quantity);

    total = price * quantity;

    printf("The total cost for %d %s/s is: %c%.2f\n", quantity, item, currency, total);




    return 0;
}