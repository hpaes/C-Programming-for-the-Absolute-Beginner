#include <stdio.h>

int main(void)
{
    int x = 5;
    int y = 10;
    int *iPtr = NULL;

    printf("\nx is equal to: %d\n", x);
    printf("y is equal to: %d\n", y);
    printf("\niPtr points to: %p\n", iPtr);

    // assign memory adress of y to pointer
    iPtr = &y;
    printf("\niPtr now points to: %p\n", iPtr);

    // change the value of x to the value of y
    x = *iPtr;
    printf("\nThe value of x is now: %d\n", x);

    // change the value of y to 15
    *iPtr = 15;
    printf("\nThe value of y is now: %d\n", y);
}   