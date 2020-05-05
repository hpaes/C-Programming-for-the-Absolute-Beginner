#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *movie;
    
    // use of malloc to allocate a chunk of memory to receive a string not bigger than 80 char
    movie = (char *) malloc(sizeof(char)*80);

    if (movie == NULL)
    {
        printf("\nOut of Memory!\n");
        return 1;
    }
    else
    {
        printf("\nWhat's your favorite movie?\n");
        printf(":> ");
        scanf("%[^\n]", movie);

        printf("%s\n", movie);
    }
    
    // free memory
    free(movie);

    return 0;
}   // end main
