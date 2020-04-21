#include <stdio.h>

int main(void)
{
    int iNumber = 0;
    int iSelection = 0;
    int *iPtr = &iNumber;

    while (iSelection != 5)
    {
        printf("\n\n1\tEnter New Integer Value\n");
        printf("2\tPrint Pointer Adress\n");
        printf("3\tPrint Integer Adress\n");
        printf("4\tPrint Integer Value\n");
        printf("5\tQuit\n");
        printf("Select a menu option: ");
        scanf("%d", &iSelection);

        switch (iSelection)
        {
            case 1: 
                printf("\nPlease enter a new integer: ");
                scanf("%d", iPtr); 
                break;
            
            case 2:
                printf("\nThe pointer adress is: %p\n", iPtr);
                break;
            
            case 3:
                printf("\nThe integer adress is: %p\n", &iNumber);
                break;
            
            case 4:
                printf("\nThe integer value is: %d", *iPtr);
                break;

        }  // end switch

    }  // end while loop

} // end main
