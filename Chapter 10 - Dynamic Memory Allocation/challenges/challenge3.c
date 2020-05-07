#include <stdio.h>
#include <stdlib.h>

// function prototypes
int showMenu();

int main(void)
{
    // variable declaration
    char *cPhoneBook_name = (char *) calloc(1, 80 * sizeof(char));
    int *iPhoneBook_number = (int *) calloc(1, sizeof(int));
    int iOpt = 0;
    int iContacts = 0;
    int iModifyUser = 0;
    

    do
    {   
        // Memory check
        if (iPhoneBook_number == NULL || cPhoneBook_name == NULL)
        {
            printf("\nOut of Memory!\n");
            return 1;
        }

        // Show menu
        iOpt = 0;
        iOpt = showMenu();
        
        switch (iOpt)
        {
            case 1:
                // Add Contact
                printf("\nEnter Name: ");
                scanf(" %s", &cPhoneBook_name[80 * iContacts]);
                printf("\nEnter Number: ");
                scanf(" %d", &iPhoneBook_number[iContacts]);
                cPhoneBook_name = realloc(cPhoneBook_name, (iContacts + 1) * 80 * sizeof(char));
                iPhoneBook_number = realloc(iPhoneBook_number, (iContacts + 1) * sizeof(int));
                iContacts++;
                break;

            case 2:
                // Modify contact
                printf("\nEnter contact number to change: \n");
                scanf(" %d", &iModifyUser);
                printf("\nEnter name: ");
                scanf(" %s", &cPhoneBook_name[80 * (iModifyUser - 1)]);
                printf("\nEnter number: ");
                scanf(" %d", &iPhoneBook_number[iModifyUser - 1]);
                break;
            
            case 3:
                // Show Contacts
                for (int i = 0; i < iContacts; i++)
                {
                    printf("\n%d. %s %d\n", i+1, &cPhoneBook_name[i * 80], iPhoneBook_number[i]);
                }
                break;
        }   // end switch
        

    } while (iOpt != 4);    // end do while

    free(cPhoneBook_name);
    free(iPhoneBook_number);
    return 0;
}   // end main

int showMenu()
{   
    int iOpt = 0;

    printf("\tPhoneBook\n");
    printf("\n========================\n");
    printf("1\tAdd new contact\n2\tModify contact\n3\tShow contacts\n4\tExit PhoneBook");
    printf("\n========================\n");
    printf(":>");
    scanf(" %d", &iOpt);
    
    return iOpt;
}
