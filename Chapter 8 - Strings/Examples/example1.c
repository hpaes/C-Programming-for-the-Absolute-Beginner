#include <stdio.h>

int main(void)
{
    char *myString = "Mike";
    int x;

    printf("\nThe pointer variable\'s value is: %p\n", myString);
    printf("\nThe pointer variable points to: %s\n", myString);
    printf("\nThe memory location for each character are: \n\n");

    // acess & print each memory adress in hexadecimal format
    for (x = 0; x < 5; x++)
    {
        printf("%p\n", myString[x]);
    }

    return 0;
    
}   //end main