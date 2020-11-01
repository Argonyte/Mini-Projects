#include <stdio.h>

int main(void){
	float price = 0, revenue = 0;
	int  quantity = 0;
	printf("\nEnter the Price: ");
	scanf("%f", &price);
	printf("\nEnter the Quantity: ");
	scanf("%d", &quantity);
	revenue = price * quantity;
	printf("\n The Total Revenue is: %.6f", revenue);
	return 0;
}