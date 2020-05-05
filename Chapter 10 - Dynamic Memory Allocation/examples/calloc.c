#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *numbers;

    numbers = (int *) calloc(10, sizeof(int));

    if (numbers == NULL)
    {
        return 1;   // return if calloc is not sucessful
    }
    
}   // end main
