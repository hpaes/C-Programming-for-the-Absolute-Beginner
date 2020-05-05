#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *name;

    name = (char *) malloc(80 * sizeof(char));

    printf("\n%s\n", name);
    
}   // end main
