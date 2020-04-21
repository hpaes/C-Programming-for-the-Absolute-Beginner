#include <stdio.h>

int main(void)
{
    int x = 5;
    int *iPtr;

    iPtr = &x;  // iPtr is assigned adress of x
    printf("\n%i\n", *iPtr);
    *iPtr = 7;  // the value of x is indirectly changed to 7

    printf("%i\n", *iPtr);

    /* This program assigns the memory adress of variable x  to the pointer variable (iPtr) and then
    indirectly assigns the integer value 7 to variable x. */
}