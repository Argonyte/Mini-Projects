#include <stdio.h>

int main(void){
	float rate = 0, price = 0, cost = 0, commission = 0;
	printf("\nEnter The Rate: ");
	scanf("%f", &rate);
	printf("\n Enter the Cost: ");
	scanf("%f", &cost);
	printf("\n Enter the Price ");
	scanf("%f", &price);
	commission = rate * (price - cost);
	printf("\nCommission is = %.6f", commission);
	return 0;
}