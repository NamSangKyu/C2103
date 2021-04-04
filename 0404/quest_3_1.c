/*
금액 입력 : 96760

50000원 : 1
10000원 : 4
5000원 : 1
1000원 : 1
500원 : 1
100원 : 2
50원 : 1
10원 : 1
*/
#include <stdio.h>

int main(void) {
	int money, ea=50000,sw=1;
	printf("금액 입력 : ");
	scanf_s("%d", &money);

	while (ea > 5) {
		printf("%d원 : %d\n", ea, money / ea);
		money %= ea;
		if (sw)
			ea /= 5;
		else
			ea /= 2;
		sw = !sw;
	}
	return 0;
}