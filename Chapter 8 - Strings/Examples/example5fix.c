#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *str1 = "37";
    char *str2 = "20";

    int iResult;

    iResult = atoi(str1) + atoi(str2);

    printf("\nString 1 + String 2 is %d\n", iResult);

    return 0;

}   // end main