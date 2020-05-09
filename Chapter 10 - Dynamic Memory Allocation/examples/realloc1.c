#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p, i;

    printf("\nInitial size of the array is 4\n\n");
    p = (int *)calloc(4, sizeof(int));

    if (p==NULL)
    {
        printf("\nMemory allocation failed\n");
        exit(1);    // exit the program
    }

    for (i = 0; i<4; i++)
    {
        printf("\nEnter element at index %d: ", i);
        scanf("%d", p+i);
    }

    printf("\nIncreasing the size of the array by 5 elements...");

    p = (int *) realloc(p, 9 * sizeof(int));

    if(p == NULL)
    {
        printf("\nMemory allocation failed\n");
        exit(1);    // exit the program
    }

    printf("\nEnter 5 more integers\n\n");

    for (i = 4; i < 9; i++)
    {
        printf("\nEnter element at index %d: ", i);
        scanf("%d", p+i);
    }

    printf("\nFinal array: \n\n");

    for(i = 0; i<9; i++)
    {
        printf(" %d\n", *(p+i));
    }

    return 0;
}