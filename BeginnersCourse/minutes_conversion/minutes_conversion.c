/*
Author: Mhirley Lopes
Purpose: Study arithmetic operators
Date: 27.06.2020
*/ 
#include <stdio.h>
int main()
{
    int minutes;
    double minutesInDay, minutesInYear, years, days;

    printf("Enter the minutes for conversion:\n");
    scanf("%d", &minutes);

    minutesInDay = 60 * 24;
    days = minutes / minutesInDay;
    minutesInYear = 60 * 24 * 365;
    years = minutes / minutesInYear;

    printf("%d minutes means %.2g in days and %.4g in years\n", minutes, days, years);
}