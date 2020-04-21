#include <stdio.h>

int main(void)
{
    char cArray[10] = {"Herbert"};

    char *cPtr = cArray;

    printf("\nAdress of pointer: %p\n", cPtr);
    printf("First adress of array: %p\n", &cArray[0]);

    printf("\nPointer points to: %c\n", *cPtr);
    printf("First element of the array is: %c\n", cArray[0]);
}