#include <stdio.h>

union phonebook
{
    char *name;
    char *number;
    char *adress;
};

struct magazine
{
    char *name;
    char *author;
    int isbn;
};

int main(void)
{
    union phonebook aBook;
    struct magazine aMagazine;

    printf("\nUnion Details\n");
    printf("Adress for aBook.name: %p\n", &aBook.name);
    printf("Adress for aBook.number: %p\n", &aBook.number);
    printf("Adress for aBook.adress: %p\n",  &aBook.adress);

    printf("\nStructure Details\n");
    printf("Adress for aMagazine.name: %p\n", &aMagazine.name);
    printf("Adress for aMagazine.author: %p\n", &aMagazine.author);
    printf("Adress for aMagazine.isbn: %p\n", &aMagazine.isbn);

    return 0;
}   //end main
