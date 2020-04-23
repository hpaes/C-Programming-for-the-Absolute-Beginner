#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

// function prototype
void arraySort(char *[], int);

int main(void)
{
    char *strStates[4] = {"Florida", "Oregon", "California", "Georgia"};
    int sizeArray = (sizeof(strStates)/ 8);

    printf("\nBefore sorting array:\n\n");
    for (int i = 0; i < sizeArray; i++)
    {
        printf("%s\n", strStates[i]);
    }

    arraySort(strStates, sizeArray);
    
    return 0;

}   // end main

void arraySort(char *states[], int lenght)
{
    char *temp[1] = {0};

    temp[0] = *states;

    for (int i = 0; i < lenght; i++)
    {   
        for (int k = 0; k < lenght -1; k++)
        {
            if (strcmp(states[k], states[k + 1]) > 0)
            {
                temp[0] = states[k];
                states[k] = states[k + 1];
                states[k + 1] = temp[0];
            }
        }
    }

    printf("\nAfter sorting array:\n\n");

    for (int i = 0; i <= lenght; i++)
    {
        printf("%s\n", states[i]);
    }
}