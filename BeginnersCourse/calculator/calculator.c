/*
Author: Mhirley Lopes
Purpose: Study switch case statements2
Date: 27.06.2020
*/
#include <stdio.h>
int main()
{
    float value1, value2;
    char operator;

    printf("Enter the 1st operand: ");
    scanf("%f", &value1);

    printf("Enter the operator: ");
    scanf("\n%c", &operator);

    printf("Enter the 2nd operator: ");
    scanf("\n%f", &value2);

    switch (operator)
    {
        case '+':
            printf("%.2f\n", value1 + value2);
            break;
        
        case '-':
            printf("%.2f\n", value1 - value2);
            break;
        
        case '*':
            printf("%.2f\n", value1 * value2);
            break;
        
        case '/':
            if (value2 == 0)
                printf("Division by zero\n");
            else
                printf("%.2f\n", value1 / value2);
            break;
        
        default:
            printf("Unkonw operator\n");
            break;
    }
    return 0;
}