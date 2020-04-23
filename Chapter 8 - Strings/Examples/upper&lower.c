#include <stdio.h>
#include <ctype.h>
#include <string.h>

// function prototypes
void convertL(char *);
void convertU(char *);

int main(void)
{
    char name1[] = "Michael";
    char name2[] = "Vine";
    
    convertL(name1);
    convertU(name2);

    return 0;

}   // end main

// function definition
void convertL(char *str)
{
    int x;

    for (x = 0; x <= strlen(str); x++)
    {
        str[x] = tolower(str[x]);

    }   // end for

    printf("\nFirst name converted to lower case is %s\n", str);

}   // end convertL

void convertU(char *str)
{
    int x;
    
    for (x = 0; x <= strlen(str); x++)
    {
        str[x] = toupper(str[x]);

    }   // end for

    printf("\nSLast name converted to upper case is %s\n", str);

}   // end convertU