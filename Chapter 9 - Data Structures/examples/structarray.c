#include <stdio.h>
#include <string.h>

typedef struct scores
{
    char name[10];
    int scores;
}
s;

int main(void)
{
    s highScores[3];
    int x;
    
    // assign values to members
    strcpy(highScores[0].name, "Hunter");
    highScores[0].scores = 40768;

    strcpy(highScores[1].name, "Kenya");
    highScores[1].scores = 38565;

    strcpy(highScores[2].name, "Apollo");
    highScores[2].scores = 35985;

    // print array content
    printf("\nTop 3 High Scores\n");

    for (x = 0; x < 3; x++)
    {
        printf("\n%s\t%d\n", highScores[x].name, highScores[x].scores);
    }

    return 0;
}   // end main
