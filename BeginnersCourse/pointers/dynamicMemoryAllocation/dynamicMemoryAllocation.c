/*
Dynamically allocate memory for a string
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {

    char * str = NULL;
    char enough;
    int limit;

    printf("You are going to enter a text\nBut before we need the limit to this text: ");
    scanf("%d", &limit);

    str = (char *) calloc(limit, sizeof(char));

    if (str != NULL){

        printf("Now enter the text: ");
    
        scanf("%s",str);

        printf("This is the string you wrote: %s\n", str);
        printf("Is that enough [Y/N]? ");
        scanf(" %c", &enough);

        if (enough == 'N'){
            printf("How many more chacters would you like to write?");
            scanf("%d", &limit);
            realloc(str, limit);

            char new[limit];
            scanf(" %s", new);
            strcat(str, new);
    }
    
    printf("This is your string: %s\n", str);

    }

    free(str);

    return 0;

}