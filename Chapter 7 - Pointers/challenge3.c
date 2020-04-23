#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

// function prototype
void TossDie(int []);
void ShowDices(int []);
void ResetArray(int []);


int i = 0;

int main(void)
{
    // declaring variables
    int iArray[7] = {'\0'};
    int iSelection = 0;
    srand(time(NULL));

    while (iSelection != 4)
    {
            // game menu
        printf("-----------------------------\n");
        printf("Welcome to the dice game!\n");
        printf("-----------------------------\n");
        printf("You can roll the dice up to six times\n\n");
        printf("1\tRoll the dice\n");
        printf("2\tShow dices rolled\n");
        printf("3\tReset dices\n");
        printf("4\tQuit\n");
        printf("Select an option: ");
        scanf("%d", &iSelection);

        switch (iSelection)
        {
            case 1:
                TossDie(iArray);
                break;

            case 2:
                ShowDices(iArray);
                break;

            case 3:
                ResetArray(iArray);
                break;

            default:
                break;

        }   // end switch
    
    }   // end while loop

}   // end main

// function definitions

void TossDie(int dice[])
{
    if (dice[5] == '\0')
    {
        int iRand;
        iRand = (rand() % 6) + 1;
        dice[i] = iRand;
        i++;
        printf("\nRolling dice number [%d] ", i);
        
        printf("\n...");
        sleep(1.5);
        
        printf("\nYou rolled: %d\n", dice[i - 1]);
        sleep(1.5);
    } 
    else
    {
        printf("\nYou already rolled six dices.\n");
    }
    
}

void ShowDices(int dice[])
{
    int x = 0;

    printf("\nShowing rolled dices: ");
    while (dice[x] != '\0')
    {
        printf("%d ", dice[x]);
        x++;
    }
    printf("\n");
}

void ResetArray(int dice[])
{
    for (int x = 0; x < 6; x++)
    {
        dice[x] = '\0';
    }

    printf("\nErased rolled dices\n");
}