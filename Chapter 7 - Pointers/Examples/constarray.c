#include <stdio.h>

void printArray(const int []);

int main(void)
{
    int iNumbers[3] = {2, 4, 6};

    printArray(iNumbers);

}  // end main

void printArray(const int num[])  // pass by reference, but read-only
{
    int x;

    printf("\nArray contents are: ");

    for (x = 0; x < 3; x++)
    {
        printf("%d ", num[x]);
    }

}  // end printArray
