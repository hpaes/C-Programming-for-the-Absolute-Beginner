// Declaring and Initializing Pointer Variables
#include <stdio.h>

int main(void)
{
    int x = 0;
    int iAge = 30;
    int *ptrAge;
    ptrAge = &iAge;  // indirectly referencing a value through a pointer
    x = *ptrAge;  // assign the contents of what the pointer variable points to--a non-pointer data value



    printf("%d\n", x);
}