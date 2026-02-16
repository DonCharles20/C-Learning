#include <stdio.h>

int main()
{
    int scores[5] = {0};
    // how to declare an array and initialize it with values
    // this is partial initialization, if we initialize the first element, the rest will be initialized to 0
    // this will initialize all elements to 0

    int size = sizeof(scores) / sizeof(scores[0]);

    for (int i = 0; i < size; i++)
    {
        printf("enter a score: ");
        scanf("%d", &scores[i]);
        // how to take user input and store it in an array
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d\n", scores[i]);
    }

    return 0;
}