#include <stdio.h>

int main(void){
	int response = 0;

	printf("\nEnter a number between 1 to 10: ");
	scanf("%d", &response);

	if (response < 1 || response > 10){
		printf("\nNumber not in range");
	}
	else {
		printf("\n %d is in range", response);
	}
}