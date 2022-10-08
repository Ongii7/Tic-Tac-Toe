//Tic Tac Toe game between 2 players or player vs computer

#include <stdio.h>

void table(char board[]) {
    int i;
    for (i = 0; i < 9; i++){
        printf("|%c", board[i]);
        if (((i + 1) % 3) == 0) {
            printf("|\n");
        }
    }
}

void switch_turn(char *turn){
    if (*turn == 'X') 
    {
        *turn = 'O';
    }
    else {
        *turn = 'X';
    }
}
//to check if player won, check horizontal win: (0-2) (3-5) (6-9)
//vertical win: (0 3 6) (1 4 7) (2 5 8)
//diagonal win: (0 4 8) (2 4 6)
int main() {

    char turn = 'X';
    int choice = 0;
    int winner = 0;
    char board[] = { '-', '-', '-', '-', '-', '-', '-', '-', '-' };
    
    table(board);
    /**
    //prompt user for game they wish to play
    printf("\n===========================");
    printf("\nWELCOME TO TIC TAC TOE!");
    printf("\n1 --- person vs. person");
    printf("\n2 --- person vs. computer");
    printf("\nEnter your choice (1 or 2):");
    choice = getint();
    printf("\nYou have entered choice ");
    putint(choice);
    printf("\nThe current status is:");
    printf("\n+-----------+");
    printf("\n|" + row1[0] + "|" + row1[1] + "|" + row1[2] + "|");
    printf("\n+-----------+");
    printf("\n|" + row2[0] + "|" + row2[1] + "|" + row2[2] + "|");
    printf("\n+-----------+");
    printf("\n|" + row3[0] + "|" + row3[1] + "|" + row3[2] + "|");
    printf("\n+-----------+");
    while(winner == 0) {
        printf("Player1: make your move (enter which row then column)");
        //get two values
        int rowChoice = getInt();
        int colChoice = getInt();
        //if player input valid:
        printf("\nGood!");
        printf("\nThe current status is:");
        printf("\n+-----------+");
        printf("\n|" + row1[0] + "|" + row1[1] + "|" + row1[2] + "|");
        printf("\n+-----------+");
        printf("\n|" + row2[0] + "|" + row2[1] + "|" + row2[2] + "|");
        printf("\n+-----------+");
        printf("\n|" + row3[0] + "|" + row3[1] + "|" + row3[2] + "|");
        printf("\n+-----------+");

    }

    
    //read information from console

    //begin the game and prompt the user to provide their input

    //if two players then ask again for the second player's input

    //function that determines whether they win with their input or not (computer or 2 players)

    //repeat the previous 2 steps until there is a winner or there are no more spots in the rows & cols
    
    //if finished then return the result (winner or tie).
    **/
    return 0;
}