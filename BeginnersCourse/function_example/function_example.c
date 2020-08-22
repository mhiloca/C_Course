/*
Author: Mhirley Lopes
Purpose: Study function definitions
Date: 11.07.2020
*/
#include <stdio.h>

int add(int num_list[2])
{
    int total = 0;
    int i;
    
    for (i = 0; i < 2; ++i)
    {
        total += num_list[i];
    }

    return total;
}

int main()
{
    int numbers[2];
    int i;

    for (i = 0; i < 2; ++i)
    {
        printf("Enter a number: ");
        scanf("%d", &numbers[i]);
    }

    printf("The total is %d\n", add(numbers));

    return 0;
}