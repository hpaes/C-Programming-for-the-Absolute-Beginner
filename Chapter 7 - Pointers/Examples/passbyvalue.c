c#include <stdio.h>

// Function prototype
void demoPassByValue(int);

int main(void)
{
    int x = 0;

    printf("\nEnter a number: ");
    scanf("%d", &x);

    demoPassByValue(x);

    printf("\nThe original value of x did not change: %d\n", x);

}  // end main

// Function definition
void demoPassByValue(int x)
{
    x += 5;

    printf("\nThe value of x is: %d\n", x);

} // end of demoPassByValue