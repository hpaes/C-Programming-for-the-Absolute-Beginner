#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *name;

    name = (char *) malloc(80*sizeof(char));

    if (name != NULL)
    {
        printf("\nEnter your name: ");
        gets(name);

        printf("\nHi, %s.\n", name);

        free(name); // free memory resources

    }   // end if
    return 0;

}   // end main
