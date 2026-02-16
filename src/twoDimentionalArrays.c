#include <stdio.h>

int main(){
    /*
      2D array = An array where each element is an array
                 daratype array[][] ={{},{},{},...}

                Accessing an element: array[row][column]

                to print:
                for(int i = 0; i < row; i++){
                    for(int j = 0; j < column; j++){
                        printf("%d", array[i][j]);
                    }
                    printf("\n");
                }

                to get size:
                int row = sizeof(array) / sizeof(array[0]);
                int column = sizeof(array[0]) / sizeof(array[0][0]);
    */

    int numbers[3][3] = {{1,2,3}, 
                         {4,5,6}, 
                         {7,8,9}};

    printf("%d\n", numbers[0][0]);

    int row = sizeof(numbers) / sizeof(numbers[0]);
    int column = sizeof(numbers[0]) / sizeof(numbers[0][0]);

    for (int i = 0; i < row; i++)// loop for rows
    {
        for (int j = 0; j < column; j++)// loop for columns
        {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
        
    }
    

    return 0;
}