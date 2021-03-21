#include <stdio.h>

int main(void)
{
	int n = 10;
	int result = 0;
	result = n++ * 3 + ++n;

	printf("%d\n", result);

	return 0;
}