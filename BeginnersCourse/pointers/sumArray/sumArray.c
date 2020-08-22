/*
Create a function to sum up an array of integers using pointer
*/
#include <stdio.h>
#include <stddef.h>
int sumArray(int array[], const int n);
int arraySum(int * ar, const int x);
int main(void)
{
    int values[10] = {3, 7, -9, 3, 6, -1, 7, 9, 1, -5};

    printf("The sum is %i\n", sumArray(values, 10));

    printf("The soma is %i\n", arraySum(values, 10));

    return 0;
}

int sumArray(int array[], const int n)
{
    int sum = 0;
    int * ptr = NULL;
    int * const arrayEnd = array + n;

    for (ptr = array; ptr < arrayEnd; ++ptr)
    {
        sum += *ptr;
    }

    return sum;
}

int arraySum(int * ar, const int x)
{
    int soma = 0;
    int * const endArray = ar + x;

    for (; ar < endArray; ++ar)
        soma += *ar;

    return soma;
}