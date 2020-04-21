#include <stdio.h>

int main(void)
{
    int x = 5;
    int *iPtr;

    iPtr = 5;  // this is wrong
    iPtr = x;  // this is also wrong

    // a pointer can only receive adresses, not non-adress types values
}