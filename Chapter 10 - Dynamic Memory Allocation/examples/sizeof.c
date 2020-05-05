#include <stdio.h>

int main(void)
{
    int x;
    float f;
    double d;
    char c;

    typedef struct employee
    {
        int id;
        char *name;
        float salary;
    }
    e;

    printf("\nSize of integer: %ld bytes\n", sizeof(x));
    printf("Size of float: %ld bytes\n", sizeof(f));
    printf("Size of double: %ld bytes\n", sizeof(d));
    printf("Size of char: %ld bytes\n", sizeof(c));
    printf("Size of employee structure: %ld bytes\n", sizeof(e));

    return 0;
}   // end main
