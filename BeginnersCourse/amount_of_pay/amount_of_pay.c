/*
Author: Mhirley Lopes
Purpose: Challenge that calculates your weekly pay
Date: 27.06.2020
*/
#include <stdio.h>
#define PAY_RATE 12.00 //create constants with #define CONSTANT value
#define TAXRATE_300 0.15
#define TAXRATE_150 0.2
#define TAXRATE_REST 0.25
#define OVERTIME 40

int main()
{
    int hours;
    double grossPay = 0.0;
    double netPay = 0.0;
    double taxes = 0.0;

    printf("Enter the total hours worked this week: ");
    scanf("%d", &hours);

    //calculate the grosspay
    if (hours > OVERTIME)
        grossPay = (hours - OVERTIME) * (PAY_RATE * 1.5);
    
    grossPay += hours * PAY_RATE;

    //calculate taxes
    if (grossPay <= 300)
    {
        taxes = grossPay * TAXRATE_300;
    }
    else
    {
        if (grossPay <= 450)
            {
                taxes = 300 * TAXRATE_300;
                taxes += (grossPay - 300) * TAXRATE_150;
            }
        else
        {
            taxes = 300 * TAXRATE_300;
            taxes += 150 * TAXRATE_150;
            taxes += (grossPay - 450) * TAXRATE_REST;
        }   
    }
    //calculate netpay
    netPay = grossPay - taxes;

    //display output
    printf("Your gross pay this week is: %.2f\n", grossPay);
    printf("Your taxes this week is: %.2f\n", taxes);
    printf("Your net pay this week is: %.2f\n", netPay);

    return 0;
}