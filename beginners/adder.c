#include <stdio.h>

int main(void){

	int iOperand1 = 0;
	int iOperand2 = 0;

	printf("\n\tEnter The First Number: ");
	scanf("%d", &iOperand1);
	printf("\n\tEnter the Second Number: ");
	scanf("%d", &iOperand2);
	printf("\n\tThe result is: %d\n", iOperand1 + iOperand2 );
	return 0;
}