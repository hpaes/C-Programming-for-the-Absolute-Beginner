// Notes:
// the strcat() function concatenates one or more pieces of data together
// strcat(arg1, arg2) and prints "arg1arg2"
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[40] = "Computer Science ";
    char str2[] = "is applied mathematics";

    printf("\n%s\n", strcat(str1, str2));

    return 0;

}   // end main
