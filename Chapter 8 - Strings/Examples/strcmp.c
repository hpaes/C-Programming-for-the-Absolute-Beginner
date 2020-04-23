// Notes:
// the strcmp() function os primaly used to compare two strings for equility
// strcmp(str1, str2) == 0  -> str1 is equal to str2
// strcmp(str1, str2) < 0  -> str1 is less than str2
// strcmp(str1, str2) > 0 -> str1 is greater than str2

#include <stdio.h>
#include <string.h>

void main()
{
    char *str1 = "A";
    char *str2 = "A";
    char *str3 = "!";
    char *str4 = "B";

    printf("\nstr1 = %s\n", str1);
    printf("str2 = %s\n", str2);
    printf("str3 = %s\n", str3);
    printf("str4 = %s\n", str4);

    printf("\nstrcmp(str1, str2) = %d\n", strcmp(str1, str2));
    printf("strcmp(str1, str3) = %d\n", strcmp(str1, str3));
    printf("strcmp(str2, str3) = %d\n", strcmp(str2, str3));
    printf("strcmp(str1, str4) = %d\n", strcmp(str1, str4));

    if (strcmp(str1, str2) == 0)
    {
        printf("\nLetter A is equal to letter A\n");
    }

    if (strcmp(str1, str3) > 0)
    {
        printf("Letter A is greater than character !\n");
    }

    if (strcmp(str2, str3) < 0)
    {
        printf("\nCharacter ! is less than A\n");
    }

    if (strcmp(str1, str4) < 0)
    {
        printf("Letter A is less than B\n");
    } 

}   // end main
