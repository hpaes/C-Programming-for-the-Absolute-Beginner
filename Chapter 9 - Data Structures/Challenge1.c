#include <stdio.h>
#include <string.h>

typedef struct Cars
{
    char make[10];
    char model[10];
    int year;
    float Km;
}
car;

void processMycars (car *); // supply prototype with pointer of structure type

int main(void)
{
    car myCars[4] = {0, 0, 0, 0};
    int x;

    processMycars(myCars);  // pass array name

    for (x = 0; x < 3; x++)
    {
        printf("\nThe make of the car is : %s\n", myCars[x].make);
        printf("The car's model is: %s\n", myCars[x].model);
        printf("The car's year is: %d\n", myCars[x].year);
        printf("The car already ran %.1f Kms\n", myCars[x].Km);    

    }   // end loop

    return 0;

}   // end main

void processMycars(car *myCars)
{
    strcpy(myCars[0].make, "Chevrolet");
    strcpy(myCars[0].model, "Celta");
    myCars[0].year = 2012;
    myCars[0].Km = 47000.1;

    strcpy(myCars[1].make, "Fiat");
    strcpy(myCars[1].model, "Uno");
    myCars[1].year = 2016;
    myCars[1].Km = 17900.2;

    strcpy(myCars[2].make, "Citroen");
    strcpy(myCars[2].model, "C4 Pallas");
    myCars[2].year = 2008;
    myCars[2].Km = 78000;

}   // end processMycars
