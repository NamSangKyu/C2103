#include <stdio.h>

int main(void) {
	int* ptr1 = 10;
	double* ptr2 = 10;

	printf("%d %d\n", ptr1, ptr2);
	printf("%d %d\n", ptr1+1, ptr2+1);
	printf("%d %d\n", ptr1+2, ptr2+2);
	return 0;
}