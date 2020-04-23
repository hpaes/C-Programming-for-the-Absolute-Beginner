#include <stdio.h>
#include <string.h>

int main(void)
{
    char *str1 = "Michael";
    char str2[] = "Vine";

    printf("\nThe lenght of string 1 is %ld\n" , strlen(str1));
    printf("The lenght of string 2 is %ld\n", strlen(str2));

    return 0;

}   // end main