#include <stdio.h>

static int j = 0;

void up (void) {
	/* k is set to 0 when the program starts. */
	static int k = 0;
	j++;
	k++;
	printf("up() called. k=%2d, j=%2d\n", k, j);
}

void down(void) {

	static int k = 0;
	j--;
	k--;
	printf("down() called. k=%2d, j=%2d\n", k, j);
}

int main(void) {

	int i;

	for (i = 0; i < 3; i++)
		up();
	for (i = 0; i < 3; i++)
		down();

	return 0;
}


/* Output 
up() called.   k=  1, j=  1
up() called.   k=  2, j=  2
up() called.   k=  3, j=  3
down() called. k= -1, j=  2
down() called. k= -2, j=  1 */ 