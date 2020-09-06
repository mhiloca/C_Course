/*
Program to convert miles to kilometers
and vice-versa
*/
#include <stdio.h>
#include <stdlib.h>

double toMiles(double kilometers);
double toKilometers(double miles);

int main() {

    int option;
    double m;

    printf(
        "*** MEASURE CONVERTER ***\n"
        "Select the conversion:\n"
        "1 - miles to kilometers\n"
        "2 - kilometers to mile\n"
        "Enter your option: "
    );
    scanf("%d", &option);

    printf("Enter how much you'd like to convert: ");
    scanf("%lf", &m);

    switch (option) {
        case 1:
            printf("%.1lfkm in miles = %.1lfm\n", m, toMiles(m));
            break;
        case 2:
            printf("%.1lfm in kilometers = %.1lfkm\n", m, toKilometers(m));
            break;
        default:
            printf("Invalid option\n");
    }

    return 0;
}

double toMiles(double kilometers) {
    return kilometers / 1.61;
}

double toKilometers(double miles) {
    return miles * 1.61;
}