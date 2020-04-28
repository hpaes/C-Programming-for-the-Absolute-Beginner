#include <stdio.h>
#include <string.h>

typedef struct employee
{
    char fname[10];
    char lname[10];
    int id;
    float salary;
}
emp;

int main(void)
{
    // create an instance of employee structure using emp
    emp emp1;

    // assing values to members
    strcpy(emp1.fname, "Michael");
    strcpy(emp1.lname, "Vine");
    emp1.id = 123;
    emp1.salary = 50000.00;

    // print member conents
    printf("\nFirst Name: %s\n", emp1.fname);
    printf("Last Name: %s\n", emp1.lname);
    printf("Employee ID: %d\n", emp1.id);
    printf("Salary: %.2f\n", emp1.salary);

    return 0;
}   // end main

