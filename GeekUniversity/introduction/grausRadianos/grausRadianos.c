/*
Convert degrees to radians and vice-versa
*/
#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

double toDegrees(double rad);
double toRadians(double degrees);

int main () {

    int option;
    double value;

    printf(
        "What conversion would you like to make?\n"
        "0 - Deegrees to radians\n"
        "1 - Radians to degrees\n"
        "Enter your option: "
    );
    scanf("%d", &option);

    printf("What is the value you'd like converted? ");
    scanf("%lf", &value);

    switch(option) {
        case 0:
            printf("%.1lf° to radians = %.1lfrad\n", value, toRadians(value));
            break;
        
        case 1:
            printf("%.1frad to degrees = %.1lf°\n", value, toDegrees(value));
            break;
        
        default:
        printf("Invalid option\n");
    }

    return 0;
}

double toDegrees(double rad) {
    return rad * (180 / PI);
}

double toRadians(double degrees) {
    return degrees * (PI / 180);
}