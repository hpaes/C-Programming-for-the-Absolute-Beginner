#include <stdio.h>

int nameLenght(char []);

int main(void)
{
    char aName[20] = {'\0'};

    printf("\nEnter your first name: ");
    scanf("%s", aName);

    printf("\nYour first name contains ");
    printf("%d characters\n", nameLenght(aName));

} // end main

int nameLenght(char name[])
{
    int x = 0;

    while (name[x] != '\0')
    {
        x++;
    }

    return x;
} // end nameLenght
