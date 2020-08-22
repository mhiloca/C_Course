/*
Author: Mhirley Lopes
Purpose: create a guess the number game
        from 0-20, 5 times can guess, too high too low 
Date: 04.07.2020
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int generated_number, guessed_number, play = 1;
    time_t t;
    _Bool win = 0;

    printf("*** THIS IS A GUESSING GAME ***\n");

    while (play == 1){

        srand((unsigned) time(&t));

        generated_number = rand() % 21;

        printf("I have chosen a number between 0 and 20 which you must guess\n");

        for (int tries = 5; tries > 0; --tries)
        {
            printf("You have %i tries left.\n", tries);
            printf("Enter a guess: ");
            scanf("%d", &guessed_number);

            if (guessed_number < 0 || guessed_number > 20)
            {
                printf("Nops! I said between 0 and 20 :( \n");
                continue;
            }

            if (guessed_number == generated_number)
            {
                printf("Congratulations. You guessed it!\n");
                printf("- - - - - - - - - - - - - - - - - - - -\n");
                printf("\n");

                win = 1;
                break;
            }
            else
            {
                printf("Sorry, %i is wrong. ", guessed_number);

                if (guessed_number < generated_number)
                {
                    printf("My number is greater than that.\n");
                } 
                else
                {
                    printf("My number is less that that.\n");
                }
            }
            printf("- - - - - - - - - - - - - - - - - - - -\n");
            printf("\n");
        }

        if (win == 0)
        {
            printf("It wasn't this time, buddy...\n");
        }

        printf("Would you like to play again [Y/N]? ");
        scanf("%d", &play);

    }

    printf("END GAME!\n");

    return 0;
}