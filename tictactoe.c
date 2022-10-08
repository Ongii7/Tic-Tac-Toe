//Tic Tac Toe game between 2 players or player vs computer

#include <stdio.h>
#include "tictactoe.h"
//to check if player won, check horizontal win: (0-2) (3-5) (6-9)
//vertical win: (0 3 6) (1 4 7) (2 5 8)
//diagonal win: (0 4 8) (2 4 6)

int main() {
    char turn = 'X';
    int game = 0;
    int turns = 0;
    int playerCounter = 1;
    char board[] = { '-', '-', '-', '-', '-', '-', '-', '-', '-' };
    printf("\n===========================");
    printf("\nWELCOME TO TIC TAC TOE!");
    printf("\n1 --- person vs. person");
    printf("\n2 --- person vs. computer");
    printf("\nEnter your choice (1 or 2):");
    scanf("%d", &game);
    printf("\nYou have entered choice %d", game);
    printf("\nThe current status is:\n");
    while (resultCheck(board) == 0) {
        table(board);
        playerChoice(board, &turn, &game);
        turns++;
        playerCounter++;
        if (resultCheck(board)) {
            table(board);
            if(playerCounter % 2 == 0)
                printf("Awesome! Player1 Wins!\n");
            if(playerCounter % 2 == 1)
                printf("Awesome! Player2 Wins!\n");
        }
        if (drawCheck(turns)) {
            printf("Tie.\n");
        }
        switch_turn(&turn);
    }
    /**
    //read information from console

    //begin the game and prompt the user to provide their input

    //if two players then ask again for the second player's input

    //function that determines whether they win with their input or not (computer or 2 players)

    //repeat the previous 2 steps until there is a winner or there are no more spots in the rows & cols
    
    //if finished then return the result (winner or tie).
    **/
    return 0;
}