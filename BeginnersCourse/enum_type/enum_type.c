/*
Author: Mhirley Lopes
Purpose: Create and use enum type company
Date: 19.06.2020
*/
#include <stdio.h>
int main()
{
    enum companies {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};

    enum companies xerox = XEROX;
    enum companies google = GOOGLE;
    enum companies ebay = EBAY;

    printf("The company Xerox is: %d\n", XEROX);
    printf("The company Google is: %d\n", GOOGLE);
    printf("The company Ebay is: %d\n", EBAY);

    return 0;
}