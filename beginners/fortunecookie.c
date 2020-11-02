#include <stdio.h>
#include <time.h>

int main(void){
	int randomNum = 0;
	srand(time(NULL));

	randomNum = (rand() % 4) + 1;

	printf("\nFortune Cookie - Ch3\n");

	switch (randomNum) {

		case 1:
			printf("\nYou'll meet a new friend today\n");
			break;

		case 2:
			printf("\nYou will enjoy a long happy life\n");
			break;

		case 3:
			printf("\nOppertunity knocks softly. Can you hear it?\n");
			break;

		case 4:
			printf("\nYou'll Be financially rewarded for your good deeds. \n");
			break;
	}

	printf("\nLucky Lotto Numbers: ");
	printf("\t%d\t", (rand() % 49) + 1);
	printf("%d\t", (rand() % 49) + 1);
	printf("%d\t", (rand() % 49) + 1);
	printf("%d\t", (rand() % 49) + 1);
	printf("%d\t", (rand() % 49) + 1);
	printf("%d\t", (rand() % 49) + 1);

	return 0;
}