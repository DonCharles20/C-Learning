#include <stdio.h>
#include <string.h>

void checkBalance(float balance);
float deposit();
float withdraw(float balance);

int main(){
    // Banking program

    int choice = 0;
    float balance = 0.0;

    printf("Welcome to the Bank!\n");

    do
    {

        printf("Please select an option:\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                checkBalance(balance);
                break;
            case 2:
                balance += deposit();
                break;
            case 3:
                balance -= withdraw(balance);
                break;
            case 4:
                printf("Thank you for banking with us!\n");
                break;
            default:
                printf("Invalid choice, please select a valid option.\n");
        }
    } while (choice != 4);
    


    return 0;
}


void checkBalance(float balance){
    printf("Your current balance is: $%.2f\n", balance);
};
float deposit(){
    float amount= 0.0;
    printf("Enter the amount to deposit: ");
    scanf("%f", &amount);
    if(amount < 0){
        printf("Invalid amount. Please enter a positive value.\n");
        return 0.0;
    }else
    {
        printf("You have deposited: $%.2f\n", amount);
    }
    
    return amount;
};
float withdraw(float balance){
    float amount = 0.0;
    printf("Enter the amount to withdraw: ");
    scanf("%f", &amount);
    if(amount < 0){
        printf("Invalid amount. Please enter a positive value.\n");
        return 0.0;
    }
    if(amount > balance){
        printf("Insufficient balance. Withdrawal amount exceeds current balance.\n");
        return 0.0;
    }else
    {
        printf("You have withdrawn: $%.2f\n", amount);
    }
    return amount;
};