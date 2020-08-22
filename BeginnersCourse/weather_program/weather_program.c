/*
Author: Mhirley Lopes
Purpose: Create a program that uses a two-dimensaional array 
Date: 11.07.2020
*/
#include <stdio.h>
#define YEARS 5
#define MONTHS 12
int main()
{
    int year, month;
    float subtotal, total;
    float rainfall[5][12] = {
        {1.5, 4.5, 7.6, 9.8, 3.2, 1.4, 0.5, 3.4, 6.5, 4.2, 0.1, 8.7},
        {2.0, 4.3, 5.6, 1.4, 7.8, 4.5, 3.0, 2.1, 0.8, 9.4, 2.1, 0.2},
        {4.5, 2.1, 8.7, 4.3, 7.6, 1.3, 1.0, 2.7, 0.4, 0.6, 2.9, 3.0},
        {5.4, 1.0, 3.0, 5.4, 2.8, 1.7, 2.9, 1.9, 0.1, 0.3, 2.8, 1.5},
        {5.7, 3.9, 0.9, 6.4, 1.9, 5.0, 4.1, 2.7, 0.3, 0.6, 9.5, 8.2}
    };

    printf("YEAR\t\tRAINFALL (inches)\n");

    for (year = 0, total = 0; year < YEARS; ++year)
    {
        for (month = 0, subtotal = 0; month < MONTHS; ++month)
        {
            subtotal += rainfall[year][month];
        }

        printf("201%d   %15.1f\n", year, subtotal);

        total += subtotal;

    }

    printf("The yearly average is %.1f\n\n", (float) total / YEARS);
    printf("MONTHLY AVERAGES: \n");
    printf("Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec\n");

    for (month = 0; month < MONTHS; ++month)
    {
        for (year = 0, subtotal = 0; year < YEARS; ++year)
        {
            subtotal += rainfall[year][month];
        }

        printf("%.1f ", (float) subtotal / YEARS);
    }
    printf("\n");

    return 0;

}