/*
	숫자 두개 입력 받은 후
	두 숫자의 최대 공약수를 출력
*/
#include <stdio.h>

int main(void) {
	int n1, n2,i,gcd;

	printf("숫자 두개 입력 : ");
	scanf_s("%d %d", &n1, &n2);

	if (n1 > n2) {
		int temp = n1;
		n1 = n2;
		n2 = temp;
	}
	for (i = 1; i <= n1; i++) {
		if (n1 % i == 0 && n2 % i == 0)
			gcd = i;
	}
	printf("두 숫자의 최대 공약수 : %d\n", gcd);

	return 0;
}