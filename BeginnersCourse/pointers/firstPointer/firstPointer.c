/*
Create, initialize, assign and acess a pointer
*/
#include <stdio.h>
#include <stddef.h>

int main (void)
{
    int number = 0;
    int * pnumber = NULL;

    printf("number's address: %p\n", &number);
    printf("pnumber's address: %p\n", (void*)&pnumber);
    printf("pnumber's value: %p\n", pnumber);

    printf("- - - - - - - - - - - - - - - - - - - - -\n");

    number = 45 * 90;
    pnumber = &number;

    printf("number's value: %d\n", number);
    printf("pnumber's value: %p\n", pnumber);
    printf("pnumber's address: %p\n", (void*)&pnumber);
    printf("value pnumber points to: %d\n", *pnumber);
    printf("pnumber's size: %d\n", (int)sizeof(pnumber));

    return 0;

}