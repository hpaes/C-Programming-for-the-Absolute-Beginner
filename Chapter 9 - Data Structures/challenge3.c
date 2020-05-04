#include <stdio.h>
#include <string.h>

typedef struct phonebook
{
    char cName[10];
    int iNumber;
}
phone;

int showMenu();
void addNumber(phone *);

int main(void)
{   
    phone pBook[5] = {0, 0};
    int iOpt;
    
    do
    {   
        iOpt = 0;
        iOpt = showMenu();

        switch (iOpt)
        {
            case 1:
                addNumber(pBook);
                break;
            
            case 2:
                for (int y = 0; y < 5; y++)
                {   
                    if (pBook[0].iNumber == 0)
                    {
                        printf("\nYour contact list is empty\n");
                        break;
                    }

                    if (pBook[y].iNumber != 0)
                    {
                        printf("\nName: %s\n", pBook[y].cName);
                        printf("Number: %d\n", pBook[y].iNumber);
                    }
                }
        }   // end switch

    } while (iOpt != 3);
    
}

int showMenu()
{
    int answer;
    printf("\n===========================\n");
    printf("Welcome to the phonebook!\n");
    printf("1\tAdd number to contact list\n2\tShow contacts from list\n3\tQuit\n");
    printf("=============================\n");
    printf(":> ");
    scanf(" %d", &answer);
    


    return answer;
}

void addNumber(phone *list)
{
    
    for (int x = 0; x < 5; x++)
    {
        if (list[x].iNumber != 0 && x == 4)
        {
            printf("\nYour contact list is full\n");

            break;
        }
        if (list[x].iNumber == 0)
        {   
            char buffer[10] = {"\0"};
            printf("\nContact %d", x + 1);
            printf("\nName: ");
            scanf(" %s", buffer);
            strcpy(list[x].cName, buffer);
            printf("\nPhone number: ");
            scanf(" %d", &list[x].iNumber);

            break;
        }   // end if
        
    }   // end for

}   // end addNumber
