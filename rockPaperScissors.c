#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void CheckVictory(int userNum, int botNum)
{
    //Case 1: Same hand
    if (userNum == botNum)
    {
        printf("There has been a tie.\n");
        if (userNum == 1)
        {
            printf("Your choice: Rock\n");
            printf("Bot choice: Rock\n");
        }
        else if (userNum == 2)
        {
            printf("Your choice: Paper\n", userNum);
            printf("Bot choice: Paper\n", botNum);
        }

        else if (userNum == 3)
        {
            printf("Your choice: Scissors");
            printf("Bot choice: Scissors");
        }
    }

    //Case 2: USER WIN scissors beating paper, paper beating rock
    else if (userNum == botNum + 1)
    {
        printf("You've won.\n");
        printf("Your choice: Scissors\n");
        printf("Bot choice: Paper\n");
    }

    //Case 3: BOT WIN scissors beating paper, paper beating rock
    else if (botNum == userNum + 1)
    {
        printf("You've lost.\n");
        printf("Your choice: Paper\n");
        printf("Bot choice: Scissors\n");
    }

    //Case 4: USER Rock beating Scissors
    else if (userNum == 1 && botNum == 3)
    {
        printf("You've won.\n"); 
        printf("Your choice: Rock\n");
        printf("Bot choice: Scissors\n");
    }

    //Case 5: BOT Rock beating Scissors
    else if (botNum == 1 && userNum == 3)     
    {
        printf("You've won.\n");
        printf("Your choice: Scissors\n");
        printf("Bot choice: Rock\n");
    }
    //Case 6:  USER paper beating rock
    else if (userNum == 2 && botNum == 1)
    {
        printf("You've won.\n");
        printf("Your choice: Paper\n");
        printf("Bot choice: Rock\n");
    }

    //case 7: BOT paper beating rock
    else if (botNum == 2 && userNum == 1)
    {
        printf("You've won.\n");
        printf("Your choice: Rock\n");
        printf("Bot choice: Paper\n");
    }
}

int main (void)
{
    srand(time(NULL));
    //1 = rock, 2 = paper, 3 = scissors

    int botNum = 0, userNum = 0;

    //int r = rand() % (max - min + 1) + min;


    botNum = rand() % (3 - 1 + 1) + 1;

    printf("Welcome to Rock Paper Scissors! (Please type 1 for Rock, 2 for Paper, Or 3 for Scissors)\nYour Num: ");
    fscanf(stdin, "%d", &userNum);

    printf("Bot Num: %d\n", botNum);

    CheckVictory(userNum, botNum);
    return 0;
    
}