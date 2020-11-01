#include <stdio.h>

int main(void) {
	float fRevenue = 0, fCost = 0;

	printf("\nEnter the Total Revenue: $");
	scanf("%f", &fRevenue);
	printf("\nEnter total cost: $");
	scanf("%f", &fCost);
	printf("\nYour Profit is: $%.6f\n", fRevenue - fCost);
	return 0;
}