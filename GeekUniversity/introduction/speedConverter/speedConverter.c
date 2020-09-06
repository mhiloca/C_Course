/*
Create speed conveters from meters/seconds to kilometers/hour
and vice-versa
*/
#include <stdio.h>
#include <stdlib.h>

double toMetersPerSecond(double kph);
double toKilometersPerHour(double mps);

int main() {

    int choice;
    double speed;

    printf(
        "Which conversion would you like to do?\n"
        "1 - kph --> mps\n"
        "2 - mps --> kph\n"
        "Enter your choice: "
    );
    scanf("%d", &choice);

    printf("Enter the speed for conversion: ");
    scanf("%lf", &speed);

    printf("%.2lf\n", speed);

    switch (choice) {

        case 1:
            printf("%.2lfkph to meters per second = %.2lfmps\n", speed, toMetersPerSecond(speed));
            break;

        case 2:
            printf("%.2lfmps to kilometers per hour = %.2lfkph\n", speed, toKilometersPerHour(speed));
            break;
        default:
            printf("Invalid conversion option\n");
    }

    return 0;
}
double toMetersPerSecond(double kph) {

    return kph / 3.6;
}

double toKilometersPerHour(double mps) {

    return mps * 3.6;
}