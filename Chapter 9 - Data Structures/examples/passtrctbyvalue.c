#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int id;
    char name[10];
    float salary;
}
e;

void processEmp(e); //supply prototype with structure alias name

int main(void)
{
    e emp1 = {0,0,0}; // initialize members

    processEmp(emp1);   // pass structure by value

    printf("\nID : %d\n", emp1.id);
    printf("Name: %s\n", emp1.name);
    printf("Salary: %.2f\n", emp1.salary);

    return 0;
}   // end main

void processEmp(e emp)  // receives a copy of the sctructure
{
    emp.id = 123;
    strcpy(emp.name, "Sheila");
    emp.salary = 65000.00;

}   // end processEmp
