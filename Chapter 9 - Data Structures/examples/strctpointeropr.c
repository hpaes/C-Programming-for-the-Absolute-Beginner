#include <stdio.h>
#include <string.h>

int main(void)
{
    typedef struct player
    {
        char name[15];
        float score;
    }
    p;

    p aPlayer = {0, 0}; // create instance of structure
    p *ptrPlayer;   // create pointer of structure type

    ptrPlayer = &aPlayer;   // assign adress to pointer of structure type

    strcpy(ptrPlayer->name, "Pinball Wizard");  // acess through indirection
    ptrPlayer->score = 1000000.00;

    printf("\nPlayer: %s\n", ptrPlayer->name);
    printf("Score: %.0f\n", ptrPlayer->score);

    return 0;    
}   // end main
