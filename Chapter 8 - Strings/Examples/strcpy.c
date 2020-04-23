// Notes:
// the strcpy() functions copies the content of one string into another
// strcpy((copied into), (copied from)) and prints "copied into"

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[11];
    char *str2 = "C Language";

    printf("\nString 1 now contains %s\n", strcpy(str1, str2));
}