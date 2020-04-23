// Converting Strings to Numbers

// Notes:
// atof - Converts a string to a floating-point number
// apoi - Converts a string to an integer

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *str1 = "123.79";
    char *str2 = "55";

    float x;
    int y;

    printf("\nString 1 is \"%s\"\n", str1);
    printf("String 2 is \"%s\"\n", str2);

    x = atof(str1);
    y = atoi(str2);

    printf("\nString 1 converted to a float is %.2f\n", x);
    printf("String 2 converted to an integer is %d\n", y);

    return 0;

}   // end main