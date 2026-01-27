#include <stdio.h>
#include <stdbool.h>

int main(){

    int age = 0;
    bool isStudent = false;

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >= 18){
        printf("You are an adult.\n");

    } else if(age < 0){

        printf("You have not been born yet.\n");

    }else if (age == 0)
    {
        printf("You are a newborn.\n");
    }else if (age >= 65)
    {
        printf("You are a senior citizen.\n");
    }
    else{
        printf("You are a minor.\n");
    }

    if (isStudent)
    {
        printf("You are a student.\n");
    }else{
        printf("You are not a student.\n");
    }
    
    








    

    return 0;
}