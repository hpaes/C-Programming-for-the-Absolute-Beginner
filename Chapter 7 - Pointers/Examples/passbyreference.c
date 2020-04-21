#include <stdio.h>

void demoPassByReference(int *);

int main(void)
{
    int x = 0;

    printf("\nEnter a number: ");
    scanf("%d", &x);

    printf("\nThe original value of x is: %d", x);

    demoPassByReference(&x);

} // end main

void demoPassByReference(int *ptrX)
{
    *ptrX += 5;
    
    printf("\nThe value of x is now: %d\n", *ptrX);

} // end demoPassByReference