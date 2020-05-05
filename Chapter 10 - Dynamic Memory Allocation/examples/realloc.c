#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *number;
    int *newNumber;
    int x;

    number = malloc(sizeof(int) * 5);

    if (number == NULL)
    {
        printf("\nOut of memory!\n");
        return 1;

    }   // end if

    printf("\nOriginal memory:\n");

    for (x = 0; x < 5; x++)
    {
        number[x] = x * 100;
        printf("number[%d] = %d\n", x, number[x]);

    }   // end for loop

    newNumber = realloc(number, 10 * sizeof(int));

    if (newNumber == NULL)
    {
        printf("\nOut of memory!\n");
        return 1;
    }
    else
    {
        number = newNumber;
    }

    // initialize new memory only
    for (x = 5; x < 10; x++)
    {
        number[x] = x * 100;
    }

    printf("\nExpanded memory:\n");
    
    for(x = 0; x < 10; x++)
    {
        printf("number[%d] = %d\n", x, number[x]);
    }

    //  free memory
    free(number);
    
    return 0;
}   // end main
