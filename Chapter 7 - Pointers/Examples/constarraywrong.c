#include <stdio.h>

void modifyArray(const int []);

int main(void)
{
    int iNumbers[3] = {2, 4, 6};

    modifyArray(iNumbers);

} // end main

void modifyArray(const int num[])
{
    int x;

    for (x = 0; x < 3; x++)
    {
        num[x] = num[x] * num[x];  // this will not work!
    }
}