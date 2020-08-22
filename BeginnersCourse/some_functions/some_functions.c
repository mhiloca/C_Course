/*
Author: Mhirley Lopes
Purpose: Study functions - wirte a gcd, asbolute and square root function
Date: 12.07.2020
*/
#include <stdio.h>
int gcd(int num1, int num2);
float absolute(float num);
double squareRoot(float num);

int gcd(int num1, int num2)
{
    int larger, smaller, remainder;

    if (num1 < 0 || num2 < 0)
    {
        printf("Only positive integers allowed.\n");

        return -1;

    }

    larger = num1 > num2 ? num1 : num2;
    smaller = num1 < num2 ? num1 : num2;

    remainder = larger % smaller;

    return remainder > 0 ? gcd(smaller, remainder) : smaller;

}

float absolute(float num)
{

    return num > 0 ? num : -num;
}

double squareRoot(float num)
{
    if (num == absolute(num))
    {
        int i, pos1, pos2, almostResult;
        double x, estimative, totalPos,  estimatedResult;

        for (i = 1; i * i <= num; ++i)
        {
            pos1 = i;
        } 

        pos2 = pos1 + 1;

        almostResult = num - (pos1 * pos1);
        totalPos = (pos2 * pos2) - almostResult;

        estimative = (double) almostResult / totalPos;
        estimative += (double) pos1;

        for (x = estimative; x * x < num; x += 0.00001)
        {
            estimatedResult = x;
        }
        
        return estimatedResult - 0.00001;
    }
    else
    {
        printf("Only positive integers allowed\n");

        return 0;
    }
}

float squareRoot2(float x)
{
    const float epsilon = 0.00001;
    float guess = 1.0;
    
    while (absolute(guess * guess - x) >= epsilon)
        guess = (x / guess + guess) / 2.0;
    
    return guess;
}


int main(void)
{
    printf("%d ", gcd(150, 35));
    printf("%d\n", gcd(1026, 405));

    printf("%.2f ", absolute(-50));
    printf("%.2f\n", absolute(5));


    printf("%.5f\n", squareRoot(6));
    printf("%.5f\n", squareRoot2(6));

    return 0;
}