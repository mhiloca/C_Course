/*
Author: Mhirley Lopes
Purpose: Calculate the area and the perimeter of a rectangle
Date: 19.06.2020
*/
#include <stdio.h>
int main() 
{
    double height, width, area, perimeter;

    printf("Please enter the height: ");
    scanf("%lf", &height);

    printf("Please enter the width: ");
    scanf("%lf", &width);
    
    area = height * width;
    perimeter = 2 * (height + width);

    printf("The area of the rectangle is: %.2f\n", area);
    printf("The perimeter of the rectangle is: %.2f\n", perimeter);

    return 0;
}