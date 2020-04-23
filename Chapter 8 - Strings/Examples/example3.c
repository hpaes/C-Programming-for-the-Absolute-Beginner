#include <stdio.h>

int main(void)
{
    char *color;

    printf("\nEnter your favorite color: ");
    scanf("%s\n", color);   // This will not work

    printf("\nYour entered: %s", color);

}   // end main