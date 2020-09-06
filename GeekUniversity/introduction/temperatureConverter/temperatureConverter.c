/*
Temperature converters:
Celsius to Fahrenheit, Fahrenheit to Celsius,
Celsius to Kelvin, Kelvin to Celsius
*/
#include <stdio.h>
#include <stdlib.h>
void celsiusToFahrenheit (double celsiusTemp);
void fahrenheitToCelsius (double fahrenheitTemp);
void kelvinToCelsius (double kelvinTemp);
void celsiusToKelvin (double celsiusTemp);
int main () {

    int converter;
    double temp;

    printf("Welcome to the TEMPERATURE CONVERTER\n");
    printf("What temperature scale convertion you want?\n"
            "0 - Celsius to Fahrenheit\n"
            "1 - Fahrenheit to Celsius\n"
            "2 - Kelvin to Celsius\n"
            "3 - Celsius to Kelvin\n"
            "Enter your option: "
    );
    scanf(" %d", &converter);

    printf("What is the temperature to be converted? ");
    scanf(" %lf", &temp);

    switch (converter) {

        case 0:
            celsiusToFahrenheit(temp); break;
        case 1:
            fahrenheitToCelsius(temp); break;
        case 2:
            kelvinToCelsius(temp); break;
        case 3:
            celsiusToKelvin(temp); break;
        default:
            printf("Invalid conversion\n");
    }


     return 0;
}
void celsiusToFahrenheit (double celsiusTemp){
    
    double tempFahrenheit;
    tempFahrenheit = celsiusTemp * (9.0/5.0) + 32.0;

    printf("%.1lf°C in Fahrenheit is: %.1lf°F\n", celsiusTemp, tempFahrenheit);
}
void fahrenheitToCelsius (double fahrenheitTemp){

    double tempCelsius;
    tempCelsius = 5.0 * ((fahrenheitTemp - 32) / 9.0);

    printf("%.lf°F in Celsius is: %.1lf°C\n", fahrenheitTemp, tempCelsius);
}
void kelvinToCelsius (double kelvinTemp){

    double tempCelsius;
    tempCelsius = kelvinTemp - 273.15;

    printf("%.1lfK in Celsius is: %.1lf°C\n", kelvinTemp, tempCelsius);

}
void celsiusToKelvin (double celsiusTemp){

    double tempKelvin;
    tempKelvin = celsiusTemp + 273.15;

    printf("%.1lf°C in Celsius is: %.1lfK\n", celsiusTemp, tempKelvin);
}