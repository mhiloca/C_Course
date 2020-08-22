/*
Author: Mhirley Lopes
Purpose: Enums
Date: 19.06.2020
*/
#include <stdio.h>
int main()
{
    enum gender {male, female};
    enum gender myGender;
    enum gender anotherGender;
    _Bool isFemale;

    myGender = female;
    anotherGender = male;

    if (myGender == anotherGender){
        isFemale = 1;
    } else {
        isFemale = 0;
    }

    printf("%u", isFemale);

    return 0;
} 