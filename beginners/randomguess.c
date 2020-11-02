#include <stdio.h>

int main(void){
	int randomNumber = 0, response = 0;
	randomNumber = (rand() % 10) + 1;

	printf("\nGuess a number between 1 and 10: ");
	scanf("%d", &response);

	if (response == randomNumber)
		printf("\nCorrect!\n");
	else
		printf("\nSorry, Correct answer was: %d", randomNumber);
	return 0;
}