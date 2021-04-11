#include <stdio.h>
void SwapNumber(int *n1, int *n2) {
	int temp = *n1;
	*n1 = *n2;
	*n2 = temp;
	printf("SwapNumber : %d %d\n", n1, n2);
}
int main(void) {
	int num1 = 10, num2 = 20;

	SwapNumber(&num1, &num2);

	printf("main : %d %d\n", &num1, &num2);
	printf("%d %d\n", num1, num2);
	return 0;
}