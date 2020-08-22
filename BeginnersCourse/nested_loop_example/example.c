/*
Authos: Mhirley Lopes
Purpose: Study nested loops
Date: 03.07.2020
*/
#include <stdio.h>
int main()
{
    int count, sum;

    printf("Enter a value: ");
    scanf("%d", &count);

    for(int i = 1; i <= count; ++i)
    {
        sum = 0;

        for(int j = 1; j <= i; ++j)
        {
            sum += j;
        }

        printf("\n%d\t%d", i, sum);
    }
    printf("\n");
}