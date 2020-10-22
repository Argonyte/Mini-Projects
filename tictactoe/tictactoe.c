/*****************************
Simple Tic-Tac-Toe game.
*****************************/
#include <stdio.h>
#include <stdlib.h>

/****************
Prototyping
****************/

char** createboard();
void print(char** Board);
int isdraw(char** Board);
char winningMove(char** Board, int i, int j);

/*****************
Main
*****************/

int main(){
	char** Board = createboard();
	char winner = '\0';
	char row;
	char col;
	char turn = 'X';

	while(!winner && !isdraw(Board)){
		print(Board);

		//Read Move
		printf("Player %c, make your move: ", turn);
		fflush(stdout);
		scanf(" %c %c ", &row, &col);

		//Make move if square if free
		int rowind = row - 'A';
		int colind = col - '1';
		if(Board[rowind][colind] == ' '){
			Board[rowind][colind] = turn;
			if (turn == 'X'){
				turn = 'O';
			} else {
				turn = 'X';
			}
			winner = winningMove(Board, rowind, colind);
		} else {
			printf("Square Occupied; Try again\n");
		}
	}

	//Game Declaration

	print(Board);
	if (winner == 'X' || winner == 'O') {
		printf("Congratulations %c!\n", winner);
	} else {
		printf("Game ends in a Draw\n");
	}
	return 0;
}

/**********************
Function Definations
**********************/

//Creates the board with all squares init to ''
char** createboard(){
	char** B = calloc(3, sizeof(char*));
	for(int i = 0; i < 3; ++i){
		B[i] = calloc(3, sizeof(char));
	}

	for(int j = 0; j < 3; ++j){
		for(int k = 0; k < 3; ++k) {
			B[j][k] = ' ';
		}
	}
	return B;
}

//Prints the Board

void print(char** Board) {
	printf(" |1|2|3|\n");
	for (int i = 0; i < 3; ++i) {
		printf("%c|", 'A' + i );
		for (int j = 0; j < 3; ++j)
		{
			printf("%c|", Board[i][j]);
		}
		printf("\n");
	}
}

//Returns True if the game is draw
int isdraw(char** Board){
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			if (Board[i][j] == ' '){
				return 0;
			}
		}
	}
	return 1;
}

// returns X if i,j was a winning move for X
// returns Y if i,j was a winning move for Y
// returns ASCII value of 0 otherwise
char winningMove(char** Board, int i, int j) {
  if (Board[i][j] == Board[i][(j+1)%3] && Board[i][j] == Board[i][(j+2)%3])
  {
    // got a column
    return Board[i][j];
  }
  else if (Board[i][j] == Board[(i+1)%3][j] && Board[i][j] == Board[(i+2)%3][j])
  {
    // got a row
    return Board[i][j];
  }
  else if (i == j && Board[i][j] == Board[(i+1)%3][(j+1)%3] && Board[i][j] == Board[(i+2)%3][(j+2)%3])
  {
    // got the forward diagonal
    return Board[i][j];
  }
  else if (i+j == 2 && Board[i][j] == Board[(i+2)%3][(j+1)%3] && Board[i][j] == Board[(i+1)%3][(j+2)%3])
  {
    // got the reverse diagonal
    return Board[i][j];
  }
  else {
    // got nothing
    return 0;
  }
}