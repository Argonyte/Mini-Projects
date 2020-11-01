#include <stdio.h>

int main(void){
	int x,y,a,b,f;
	printf("\nEnter value of a: ");
	scanf("%d", &a);
	printf("\nEnter Value of b: ");
	scanf("%d", &b);
	printf("\nEnter value of x: ");
	scanf("%d", &x);
	printf("\nEnter value of y: ");
	scanf("%d", &y);
	f = (a - b)*(x - y);
	printf("\nThe Answer is = %d", f);
	return 0;
}