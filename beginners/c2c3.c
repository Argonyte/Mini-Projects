#include <stdio.h>

int main(void){
	char name[50];
	printf("\nEnter Your Name: ");
	scanf("%s", &name);
	printf("\nHello %s! Glad to see you here", name);
	return 0;
}