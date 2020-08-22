/*
Author: Mhirley Lopes
Purpose: Create a tic-tac-toe for 2 players
Date: 22.07.2020
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool validInsert (char gameMove, char gameBoard[3][3]);
bool checkDraw(char gameBoard[3][3]);
bool straightWin(char gameBoard[3][3]);
bool diagonalWin(char gameBoard[3][3]);
bool checkEnd (char gameBoard[3][3]);
char changePlayer (char gamePlayer);
void markBoard (char gameMove, char gamePlayer, char gameBoard[3][3], int *line, int *col);
void drawBoard (char gameBoard[3][3]);
void displayWinner (char gameWinner);

int main ()
{
    int li, co;
    char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
    char player = 'X';
    char move;
    bool keepGame = true;

    printf("\n*** TIC-TAC-TOE ***\n\n");
    printf("Player 'X'   Player 'O'\n\n");

    drawBoard(board);

    while (keepGame)
    {
        printf("Player '%c'\nEnter a number from the board: ", player);
        scanf(" %c", &move);
        
        if (validInsert(move, board))
        {
            markBoard(move, player, board, &li, &co);
            board[li][co] = player;
            printf("\n");
            drawBoard(board);
            if (checkEnd(board))
            {
                keepGame = false;
            }
        }
        player = changePlayer(player);

    }
    printf("END GAME\n");

    return 0;

}

void drawBoard(char gameBoard[3][3]) 
{
    system("clear");
    printf("\n");
    
    for (int l = 0; l < 3; l++)
    { 
        for (int c = 0; c <3; c ++)
        {
    
            printf("  %c  ", gameBoard[l][c]);
            if (c < 2)
            {
                printf("|");
            }
        }
        printf("\n");
        if (l < 2)
        {
            printf("_____|_____|_____\n");
            printf("     |     |");
            
        }
        printf("\n");
    }
}

bool validInsert(char gameMove, char gameBoard[3][3])
{
    int check;
    bool valid = false;
    check = (int) gameMove - 48;

    if ((check >= 1) && (check < 10))
    {
        for (int line = 0; line < 3; line++)
        {
            for (int col = 0; col < 3; col++)
            {
                if (gameBoard[line][col] == gameMove)
                {
                    valid = true;
                    break;
                }  
            }
            if (valid)
            {
                break;
            }
        }
    }
    else
    {
        printf("Invalid number, you lost your turn :\( \n");
    }

    return valid;

}

char changePlayer(char gamePlayer)
{
    if (gamePlayer == 'X')
    {
        gamePlayer = 'O';
    }  
    else
    {
        gamePlayer = 'X';
    }
    return gamePlayer; 
}

void markBoard(char gameMove, char gamePlayer, char gameBoard[3][3], int *line, int *col)
{
    bool marked = false;

    for (int l = 0; l < 3; l++)
    {
        for (int c = 0; c < 3; c++)
        {
            if (gameBoard[l][c] == gameMove)
            {
                *line = l;
                *col = c;
                marked = true;
                break;
            }  
        }
        if (marked)
        {
            break;
        }
    }
}

bool straightWin(char gameBoard[3][3])
{
    int counterHorX, counterHorO, counterVerX, counterVerO;
    char winner;
    bool finished = false;

    for (int line = 0; line < 3; line++)
    {
        counterHorX = 0;
        counterVerX = 0;
        counterHorO = 0;
        counterVerO = 0;

        for (int col = 0; col < 3; col ++)
        {
            if (gameBoard[line][col] == 'X')
            {
                counterHorX += 1;
            }   
            else if (gameBoard[line][col] == 'O')
            {
                counterHorO += 1;
            }
            if (gameBoard[col][line] == 'X')
            {
                counterVerX += 1;
            }
            else if (gameBoard[col][line] == 'O')
            {
                counterVerO += 1;
            }
        }

        if ((counterHorO > 2) || (counterVerO > 2))
        {
            winner = 'O';
            finished = true;
            break;
        }
        else if ((counterHorX > 2) || (counterVerX > 2))
        {
            winner = 'X';
            finished = true;
            break;
        }
    }
    if (finished)
    {
        displayWinner(winner);
    }
    return finished;
}

bool diagonalWin(char gameBoard[3][3])
{
    int counterMainX = 0, counterMainO = 0, counterSecX = 0, counterSecO = 0;
    char winner;
    bool finished = false;

    for (int line = 0, col = 2; line < 3; line++, col--)
    {

        if (gameBoard[line][line] == 'X')
        {
            counterMainX += 1;
        }
        else if (gameBoard[line][line] == 'O')
        {
            counterMainO += 1;
        }
        if (gameBoard[line][col] == 'X')
        {
            counterSecX += 1;
        }
        else if (gameBoard[line][col] == 'O')
        {
            counterSecO += 1;
        }
    }

    if ((counterMainX > 2) || (counterSecX > 2))
    {
        winner = 'X';
        finished = true;
    }
    else if ((counterMainO > 2) || (counterSecO > 2))
    {
        winner = 'O';
        finished = true;
    }

    if (finished)
    {
        displayWinner(winner);
    }
    return finished;
}

bool checkDraw(char gameBoard[3][3])
{
    int playCount = 0;
    bool finished;

    for (int line = 0; line < 3; line++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (gameBoard[line][col] == 'X' || gameBoard[line][col] == 'O')
            {
                playCount += 1;
            }
        }
    }
    if (playCount > 8)
    {
        printf("It's a draw!\n");
        finished = true;
    }
    
    return finished;

}

bool checkEnd(char gameBoard[3][3])
{
    bool finished = false;
    
    if (straightWin(gameBoard))
    {
        finished = true;
    }
    else if (diagonalWin(gameBoard))
    {
        finished = true;
    }
    else if (checkDraw(gameBoard))
    {
        finished = true;
    }
    
    return finished;
}

void displayWinner(char gameWinner)
{
    printf("The winner is Player '%c'\n", gameWinner);
}