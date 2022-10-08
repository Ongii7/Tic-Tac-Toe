#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

void table(char board[]) {
    int i;
    printf("+-----+\n");
    for (i = 0; i < 9; i++){
        printf("|%c", board[i]);
        if (((i + 1) % 3) == 0) {
            printf("|\n+-----+\n");
        }
    }
}

void switch_turn(char *turn){
    if (*turn == 'X') 
        *turn = 'O';
    else
        *turn = 'X';
}

void playerChoice(char board[], char *turn, int *game) {
    int choice;
    int upper = 9;
    int lower = 1;
    if(*turn == 'X'){
        printf("\nPlayer1: make your move: (Choose a number 1-9 for the board #.)");
        scanf("%d", &choice);
    }
    if(*turn == 'O'){
        if(*game == 1){
        printf("\nPlayer2: make your move: (Choose a number 1-9 for the board #.)");
        scanf("%d", &choice);
        }
        if(*game == 2){
            printf("\nComputer: make your move:\n");
            choice = (rand() % (upper - lower + 1)) + lower;
        }
    }
    if(board[choice - 1] == '-')
        board[choice - 1] = *turn;
}

bool resultCheck(char board[]) {
    bool win = false;
    //Row check
    if (board[0] != '-') {
        if (board[0] == board[1] && board[0] == board[2])
            win = true;;
    }
    if (board[3] != '-') {
        if (board[3] == board[4] && board[3] == board[5])
            win = true;;
    }
    if (board[6] != '-') {
        if (board[6] == board[7] && board[6] == board[8])
            win = true;;
    }
    //Column check
    if (board[0] != '-') {
        if (board[0] == board[3] && board[6])
            win = true;;
    }
    if (board[2] != '-') {
        if (board[2] == board[4] && board[2] == board[7])
            win = true;
    }
    if (board[3] != '-') {
        if (board[3] == board[5] && board[3] == board[8])
            win = true;
    }
    //Diagonal check
    if (board[0] != '-') {
        if (board[0] == board[4] && board[0] == board[8])
            win = true;
    }
    if (board[2] != '-') {
        if (board[2] == board[4] && board[2] == board[6])
            win = true;
    }
    return win;
}

bool drawCheck(int turns) {
    if (turns < 9) {
        return false;
    }
    else {
        return true;
    }
}