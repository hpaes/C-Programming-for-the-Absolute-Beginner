#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    char *name;
    int y = 0;
    int x = 0;

    name = (char *) calloc(30, sizeof(char));
    
   

    if (name == NULL)
    {
        printf("\nOut of Memory!\n");
        return 1;
    }
    else
    {
        printf("\nEnter your name: ");
        scanf("%[^\n]", name);

        // count characters
        while (name[y] != '\0' && y < 30)
        {
            y++;
            if (name[y] == ' ')
            {
                x++;
            }
        }
    }

    printf("\nThe number of characters in your name is %d\n", y - x);

    // free memory
    free(name);

    return 0;

}   // end main
