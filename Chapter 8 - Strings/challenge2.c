#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    char *strSentence = {0};
    strSentence = "When the going gets tough, the tought stay put!";

    char *strFind[3] = {0};
    strFind[0] = "Going";
    strFind[1] = "tou";
    strFind[2] = "ay put!";

    system("clear");
    printf("\n\nFind Words in a string\n\n");
    printf("This program will search for the following words:\n\n*\"Going\"\n*\"tou\"\n*\"ay put!\"\n");
    printf("\nThe string that it will search the words above is: \n\n%s\n\n", strSentence);


    for (int i = 0; i < 3; i++)
    {
        if(strstr(strSentence, strFind[i]) != NULL)
        {
            printf("%s was found!\n", strFind[i]);
        }
        else
        {
            printf("%s was not found!\n", strFind[i]);
        }
        
    }   // end for loop

}   // end main
