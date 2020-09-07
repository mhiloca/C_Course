// Structure as pointers
#include <stdio.h>
int main() {

    struct date {

        int day, month, year;
    };

    struct date today, * datePtr;

    datePtr = &today;

    datePtr -> day = 7;
    datePtr -> month = 9;
    datePtr -> year = 2020;

    printf(
        "Today's date is %i/%i/%i\n", 
        datePtr -> day,
        datePtr -> month,
        datePtr -> year
    );

    return 0;
}