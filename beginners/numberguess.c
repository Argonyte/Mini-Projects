#include <stdio.h>

int main(void){
	int digit = 0, randint = 0;
	randint = (rand() % 10) + 1;

	printf("\n Enter a number between 1 and 10: ");
	scanf("%d", &digit);

	if (isdigit(digit == 0)) {
		printf("\nEnter a number!!!\n");
	}
	else
		if (randint == digit)
			printf("\nCorrect Number");
		else
			printf("\nMissed Number. Correct number was: %d", randint);
}