// Printing Pointer Variable Contents
#include <stdio.h>

int main(void)
{
    int x = 1;
    int *iPtr;

    iPtr = &x;
    *iPtr = 5;

    printf("\n*iPtr = %p\n&x = %p\n", iPtr, &x);
}