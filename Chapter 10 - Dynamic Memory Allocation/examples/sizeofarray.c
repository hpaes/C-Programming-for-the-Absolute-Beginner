#include <stdio.h>

int main(void)
{
    int array[10];

    printf("\nSize of array: %ld bytes\n", sizeof(array));
    printf("Number of elements in array ");
    printf("%ld\n", sizeof(array) / sizeof(int));

    return 0;
}   // end main
