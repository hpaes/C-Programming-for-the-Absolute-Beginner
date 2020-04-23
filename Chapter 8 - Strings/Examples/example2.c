// Reading and printing strings
#include <stdio.h>

int main(void)
{
    char color[12] = {'\0'};
    
    printf("\nEnter your favorite color: ");
    scanf("%s", color);

    printf("\nYou entered: %s\n", color);

    return 0;

}   // end main