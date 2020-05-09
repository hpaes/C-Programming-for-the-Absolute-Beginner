#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int showMenu();

int main(void)
{
    int *iPhoneBook_number = (int *) calloc(1, sizeof(int));
    char *cPhoneBook_name = (char *) calloc(1, 80 * sizeof(char));
    int iOpt = 0;
    int iContacts = 0;
    int iModifyContact = 0;

    do
    {
        // check if memory is available
        if (iPhoneBook_number == NULL || cPhoneBook_name == NULL)
        {
            printf("\nOut of Memory!\n");
            return 1;
        }
        iOpt = showMenu();

        switch (iOpt)
        {
            case 1:
                // Add new contact
                printf("\nEnter name: ");
                scanf(" %s", &cPhoneBook_name[80 * iContacts]);
                printf("\nEnter number: ");
                scanf(" %d", &iPhoneBook_number[iContacts]);
                cPhoneBook_name = realloc(cPhoneBook_name, (iContacts + 1) * sizeof(char) * 80);
                iPhoneBook_number = realloc(iPhoneBook_number, (iContacts + 1) * sizeof(int));
                iContacts++;
                break;

            case 2:
                // Modify contact
                printf("\nEnter contact number to change: ");
                scanf("%d", &iModifyContact);
                printf("\nEnter new name: ");
                scanf(" %s", &cPhoneBook_name[80 * (iModifyContact - 1)]);
                printf("\nEnter new number: ");
                scanf(" %d", &iPhoneBook_number[iModifyContact - 1]);
                break;
            
            case 3:
                // show contacts
                if (*iPhoneBook_number == 0)
                {
                    printf("\nYour list is empty\n");
                    break;
                }

                for (int i = 0; i < iContacts; i++)
                {  
                        printf("\n%d.\t%s\t%d\n", i + 1, &cPhoneBook_name[i * 80], iPhoneBook_number[i]);                    
                }
                break;

        }   // end switch

    } while (iOpt != 4);

    // free memory
    free(cPhoneBook_name);
    free(iPhoneBook_number);
    
    return 0; 
}   // end main

int showMenu()
{
    int iOpt = 0;
    printf("\n\tPhone Book\n");
    printf("======================\n");
    printf("1\tAdd new number\n2\tModify contact\n3\tShow contacts\n4\tQuit\n");
    printf("======================\n");
    printf(":> ");
    scanf(" %d", &iOpt);

    return iOpt;

}   // end of showMenu() function