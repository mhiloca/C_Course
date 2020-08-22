/*
Examples of pointer usage
*/ 
#include <stdio.h>
#include <stddef.h>

void firstExample();
void secondExample();

int main(void)
{
    firstExample();
    secondExample();

    return 0;
}

void firstExample()
{
    int count = 10, x;
    int * int_pointer;

    int_pointer = &count;
    x = *int_pointer;

    printf("count = %i, x = %i\n", count, x);
}

void secondExample()
{
    int number = 0;
    int * pnumber = NULL;

    number = 10;

    printf("number's address: %p\n", &number);
    printf("number's value: %d\n", number);

    pnumber = &number;

    printf("pnumber's values: %p\n", pnumber);
    printf("pnumber's address: %p\n", (void*)&pnumber);
    printf("pnumber's size: %d\n", (int)sizeof(pnumber));
}