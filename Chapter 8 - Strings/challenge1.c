#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main()
{
    char cName[20] = {"\0"};

    printf("\nEnter your first name: ");
    scanf("%s", cName);

    printf("\nHello, %s, your name has %ld characters\n", cName, strlen(cName));

    for (int x = 0, n = strlen(cName); x <= n; x++)
    {
        cName[x] = toupper(cName[x]);
    }

    printf("Uppercased name: %s\n", cName);
}   // end main
