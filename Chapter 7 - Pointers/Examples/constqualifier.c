#include <stdio.h>

void printArgument(const int *);

int main(void)
{
    int iNumber = 5;

    printArgument(&iNumber);  // pass read-only argument

} // end main

void printArgument(const int *num) // pass by reference, but read-only
{
    printf("\nRead Only Argument is: %d \n", *num);
}