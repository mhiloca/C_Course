/*
Create a progm with various converters type
centimeters to inches, liters to m3, kilos to pounds,
meters to yards, acres to m2, hectares to m2
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double inchesAndCentimeters(int conversion, double val); 
double CubicmetersAndLiters(int conversion, double val);
double kilogramsAndPounds(int conversion, double val); 
double metersAndYards(int conversion, double val);
double acresAndMeterSquare(int conversion, double val); 
double hectaresandMeterSquare(int conversion, double val);

int main () {

    int option;
    double value, convertedValue;

    printf(
        "Choose your conversion:\n"
        "0 - Centimeters to inches\n"
        "1 - Inches to centimeters\n"
        "2 - Cubic meters to liters\n"
        "3 - Liters to cubic meters\n"
        "4 - Meters to yards\n"
        "5 - Yards to meters\n"
        "6 - Square meters to acres\n"
        "7 - Acres to square meters\n"
        "8 - Hectare to square meters\n"
        "9 - Square meters to hectare\n"
        "10 - Kilograms to pounds\n"
        "11 - Pounds to kilograms\n"
        "Enter you option: "
    );
    scanf("%d", &option);

    printf("Enter the value to be converted: ");
    scanf("%lf", &value);

    switch(option) {
        case 0: case 1:
            convertedValue = inchesAndCentimeters(option, value); break;
        
        case 2: case 3:
            convertedValue = CubicmetersAndLiters(option, value); break;
        
        case 10: case 11:
            convertedValue = kilogramsAndPounds(option, value); break;
        
        case 4: case 5:
            convertedValue = metersAndYards(option, value); break;
        
        case 6: case 7:
            convertedValue = acresAndMeterSquare(option, value); break;
        
        case 8: case 9:
            convertedValue = hectaresandMeterSquare(option, value); break;
        
        default:
            convertedValue = 0;
            printf("Invalid value\n"); break;
    }
    
    if (convertedValue) {
        printf("%.1lf converted is = %.1lf\n", value, convertedValue);
    }
    
    return 0;
}

double inchesAndCentimeters(int conversion, double val) {
    return conversion == 0 ? (val / 2.54) : (val * 2.54);
} 
double CubicmetersAndLiters(int conversion, double val) {
    return conversion == 2 ? (1000 * val) : (val / 1000);
}
double kilogramsAndPounds(int conversion, double val) {
    return conversion == 10 ? (val / 0.45) : (val * 0.45);
} 
double metersAndYards(int conversion, double val) {
    return conversion == 4 ? (val / 0.91) : (val * 0.91);
}
double acresAndMeterSquare(int conversion, double val) {
    return conversion == 6 ? (val * 0.000247) : (val * 4040.58);
} 
double hectaresandMeterSquare(int conversion, double val) {
    return conversion == 8 ? (val * 10000) : (val * 0.001);
}