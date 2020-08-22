/*
Author: Mhirley Lopes
Purpose: Study arrays
Date: 08.07.2020
*/
#include <stdio.h>
int main()
{
    int grades[10];         // Array storing 10 values
    int count = 10;         // Number of values to be read
    long sumUp = 0;         // Sum of the numbers
    float average = 0.0f;   // Average of the numbers

    printf("\nEnter the 10 grades:\n");     // Prompt for the input

    // Read the ten numbers to be averaged
    for (int i = 0; i < count; ++i)
    {
        printf("Grade %2u: ", i + 1);
        scanf("%d", &grades[i]);        // Read a grade
        
        sumUp += grades[i];             // Add it to sumUp
    }

    average = (float) (sumUp / count);

    // Print on the screen the grades entered
    for (int i = 0; i < count; ++i)
    {
        printf("\nGrade %i: %i", i + 1, grades[i]);
    }
    
    printf("\nThe average of the grades entered is: %.2f\n", average);
    
    return 0;
}