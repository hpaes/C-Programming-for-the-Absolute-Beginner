// Passing Array to Functions
#include <stdio.h>

int main(void)
{
    int iArray[5] = {1, 2, 3, 4, 5};

    int *iPtr = iArray;

    printf("\nAdress of pointer: %p\n", iPtr);
    printf("First adresss of array: %p\n", &iArray[0]);

    printf("\nPointer points to: %d\n", *iPtr);
    printf("First element of the array contains: %d\n", iArray[0]);

}
