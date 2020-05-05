#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *name;

    name = (char *) malloc(80 * sizeof(char));

    if (name == NULL)
    {
        printf("\nOut of memory!\n");
    }
    else
    {
        printf("\nMemory allocated.\n");
    }
    
    return 0;
}   // end main
