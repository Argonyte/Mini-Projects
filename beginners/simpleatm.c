#include <stdio.h>

int main(void){
	int select = 0;
	float transAmount = 0.0, balance = 225.34;

	printf("\n\tATM\n");
	printf("\n1\tDeposit Funds\n");
	printf("\n2\tWithdraw Funds\n");
	printf("\nEnter your selection: ");
	scanf("%d", &select);

	if (select == 1){
		printf("\nEnter fund amount to Deposit: ");
		scanf("%f", &transAmount);
		printf("\nYour new amount is: %.3f\n", balance + transAmount);
	}

	if (select == 2){
		printf("\nEnter fund amount to withdraw: ");
		scanf("%f", &transAmount);

		if (transAmount > balance)
			printf("\nInsufficiant Balance");
		else
			printf("\nYour new balance is: %.3f\n", balance - transAmount);
	}
	return 0;
}