#include <stdio.h>

typedef struct phonebook
{
    char cName[15];
    int iNumber;
}
phone;

int showMenu();
void addNumber(phone *);

int main(void)
{
    phone pbook[5] = {0, 0};
    int iOpt = 0;

    do
    {
       iOpt = showMenu();

       switch (iOpt)
       {
            case 1:
                for (int i = 0; i < 5; i++)
                {
                    if (pbook[i].iNumber != 0)
                    {
                        printf("\nName: %s\n", pbook[i].iNumber);
                        printf("Number: %d\n", pbook[i].iNumber);
                    
                    }
                }
                break;
       
            case 2:
                addNumber(pbook) ;
                break;
    
       }    
        
    } while (iOpt != 3);

}
