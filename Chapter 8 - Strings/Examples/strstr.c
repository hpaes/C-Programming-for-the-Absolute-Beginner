// Notes:
// the strstr() function takes two strings as arguments. The strstr function looks for the first occurence of the second
// argument in the first argument. If the string in the second argument is found in the string in the first argument
// the strstr() function returns a pointer to the string in the first argument. Otherwise NULL is returned.

#include <stdio.h>
#include <string.h>

void main()
{
    char *str1 = "Analyzing strings with the strstr() function";
    char *str2 = "ing";
    char *str3 = "xyz";

    printf("\nstr1 = %s\n", str1);
    printf("str2 = %s\n", str2);
    printf("str3 = %s\n", str3);

    if (strstr(str1, str2) != NULL)
    {
        printf("\nstr2 was found in str1\n");
    }
    else
    {
        printf("\nstr2 was not found in str1\n");
    }
    
    if (strstr(str1, str3) != NULL)
    {
        printf("\nstr3 was found in str1\n");
    }
    else
    {
        printf("\nstr3 was not found in str1\n");
    }
    
}   // end main
