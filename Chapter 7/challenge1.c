#include <stdio.h>

int main(void)
{
    // Declaring pointer variables
    int *iPtr;
    char *cPtr;
    float *fFloat;

    // Declaring variables
    int iNumber = 10;
    float fNumber = 6.7;
    char cCharacter = {'A'};

    // Assigning the adresses of each-non pointer variable to the matching pointer variable
    iPtr = &iNumber;
    fFloat = &fNumber;
    cPtr = &cCharacter;

    printf("\nThe value of iNumber is: %i", iNumber);
    printf("\nThe value of fNumber is: %1.2f", fNumber);
    printf("\nThe value of cCharacter is: %c\n", cCharacter);

    printf("\nThe value of pointer iPtr is: %i", *iPtr);
    printf("\nThe value of pointer fPtr is: %1.2f", *fFloat);
    printf("\nThe value of pointer cPtr is: %c\n", *cPtr);

    printf("\nThe adress of iNumber is: %p", &iNumber);
    printf("\nThe adress of FNumber is: %p", &fNumber);
    printf("\nThe adress of cCharacter is: %p\n", &cCharacter);

    printf("\nThe adress of pointer iPtr is: %p", iPtr);
    printf("\nThe adress of pointer fFloat is: %p", fFloat);
    printf("\nThe adress of pointer cCharacter is: %p\n", cPtr);
}
