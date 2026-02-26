#include <stdio.h>

typedef struct 
{
    char model[25];
    int year;
    int price;

}Car;

void printCar(Car car);

int main(){

    Car car1 = {"Mustang", 2005, 10000};
    Car car2 = {"Totota",2001, 7000};
    Car car3 ={"Honda", 2000, 2000};

    Car cars[] ={
        {"Scion", 2002, 10000},
        {"Bmw", 2010, 2000},
        {"Subaru", 2011, 8000}
    };
    int number = sizeof(cars)/sizeof(cars[0]);

    for(int i = 0; i <number; i++){
        printf("%s %d $%d \n", cars[i].model, cars[i].year, cars[i].price);
    }

}

void printCar(Car car){
    printf("%s %d $%d \n", car.model, car.year, car.price);

}