/*
Author: Mhirley Lopes
Purpose: Study arrays generating prime numbers from 3-100
Date: 09.07.2020
*/
#include <stdio.h>
#include<stdbool.h>
int main()
{
    int p;
    int i;
    int primeIndex = 2;
    int primeNumbers[50];
    bool isPrime;

    // hardcode prime numbers
    primeNumbers[0] = 2;
    primeNumbers[1] = 3;

    for (p = 5; p <= 100; p += 2)
    {
        isPrime = true;

        for (i = 1; isPrime && p / primeNumbers[i] >= primeNumbers[i]; ++i)
        {
            if (p % primeNumbers[i] == 0)
                isPrime = false;
        }
        if (isPrime == true)
        {
            primeNumbers[primeIndex] = p;
            ++primeIndex;
        }
            
    }

    for (i = 0; i < primeIndex; ++i)
    {
        printf("%d ", primeNumbers[i]);
    }
    
    printf("\n");

    return 0;
}
