#include <stdio.h>
#include <ctype.h>

int main(void) {
	int dice1 = 0, dice2 = 0, sum = 0;
	char pressEnter = '\0';

	printf("\nLets play a game! Your Numbers are 7 and 11. Press Enter to roll the dice!");
	scanf("%c", &pressEnter);

	srand(time(NULL));
	dice1 = ((rand() % 6) + 1);
	dice2 = ((rand() % 6) + 1);
	sum = dice1 + dice2;

	printf("\n Dice 1 = %d \n \n Dice 2 = %d", dice1, dice2);

	if((sum == 7) || (sum == 11)) {
		printf("\n Congratulations! You win the game! Dice 1 = %d, Dice 2 = %d, Sum = %d", dice1, dice2, sum);
	}else{
		printf("\nSorry. You lost. Dice 1 = %d, Dice 2 = %d, Sum = %d", dice1, dice2, sum);
	}
return 0;
}