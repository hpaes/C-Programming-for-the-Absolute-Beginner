#include <stdio.h>

int main(void)
{
    char *colors[3][10] = {'\0'};

    printf("\nEnter 3 colors separeted by spaces: ");
    scanf("%s %s %s", colors[0], colors[1], colors[2]);

    printf("\nYou entered: ");
    printf("%s %s %s\n", colors[0], colors[1], colors[2]);

}   // end main
