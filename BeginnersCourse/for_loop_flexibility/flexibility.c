/*
Author: Mhirley Lopes
Purpose: Study for loop flexibility
Date: 03.07.2020
*/
#include <stdio.h>
int main()
{
    unsigned long long sum = 0LL;
    unsigned int count;

    printf("Enter the number of integers you want to sum up: ");
    scanf("%u", &count);

    // for(unsigned int i = 1; i <= count; ++i)
    //     sum += i;
    
    for(unsigned int i = 1; i <= count; sum += i++);

    printf("The total for the first %u numbers is %llu\n", count, sum);

    return 0;
}