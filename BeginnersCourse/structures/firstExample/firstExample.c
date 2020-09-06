/*
Structure definition and declaring a variable of 
that particular struct type
*/
#include <stdio.h>
int main() {

    struct date {
        int month;
        int day;
        int year;
    };

    struct date today;

    today.month = 8;
    today.day = 29;
    today.year = 2020;

    printf("Todays is %i/%i/%i\nMarcelo's birthday:\n", 
            today.day, today.month, today.year);
            
    for (size_t i = 0; i < 10; i++)
    {
         printf("HAPPY BIRTHDAY!!!\n");
    }

    return 0;
   
}