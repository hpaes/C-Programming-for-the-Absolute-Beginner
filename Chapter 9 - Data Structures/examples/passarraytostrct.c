#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int id;
    char name[10];
    float salary;
}
e;

void processEmp(e *);   // supply prototype with pointer of structure type

int main(void)
{
    e emp1[3] = {0, 0, 0};
    int x;

    processEmp(emp1);   // pass array name, which is a pointer

    for (x = 0; x < 3; x++)
    {
        printf("\nID: %d\n", emp1[x].id);
        printf("Name: %s\n", emp1[x].name);
        printf("Salary: %.2f\n\n", emp1[x].salary);

    }   // end loop

    return 0;
}   // end main

void processEmp(e * emp)    // function receives a pointer
{
    emp[0].id = 123;
    strcpy(emp[0].name, "Sheila");
    emp[0].salary = 65000.00;

    emp[1].id = 245;
    strcpy(emp[1].name, "Hunter");
    emp[1].salary = 28000.00;

    emp[2].id = 678;
    strcpy(emp[2].name, "Kenya");
    emp[2].salary = 48000.00;

}   // end processEmp
