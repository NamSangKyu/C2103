/*
�ݾ� �Է� : 96760

50000�� : 1
10000�� : 4
5000�� : 1
1000�� : 1
500�� : 1
100�� : 2
50�� : 1
10�� : 1
*/
#include <stdio.h>

int main(void) {
	int money, ea=50000,sw=1;
	printf("�ݾ� �Է� : ");
	scanf_s("%d", &money);

	while (ea > 5) {
		printf("%d�� : %d\n", ea, money / ea);
		money %= ea;
		if (sw)
			ea /= 5;
		else
			ea /= 2;
		sw = !sw;
	}
	return 0;
}