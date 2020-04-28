#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int id;
    char name[10];
    float salary;
}
emp;

void processEmp(emp *);

int main(void)
{
    emp emp1 = {0 ,0 ,0};
    emp *ptrEmp;

    ptrEmp = &emp1;

    processEmp(ptrEmp);

    printf("\nID: %d\n", ptrEmp->id);
    printf("Name: %s\n", ptrEmp->name);
    printf("Salary: %0.2f\n", ptrEmp->salary);
    
    return 0;
}   // end main

void processEmp(emp *e)
{
    e->id = 123;
    strcpy(e->name, "Sheila");
    e->salary = 65000.00;

}   // end processEmp
