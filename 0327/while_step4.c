#include <stdio.h>
/*
while_step4.c

숫자한개를 입력 받아서
숫자에 해당하는 구구단을 출력
숫자입력 : 5
5 * 1 = 5
5 * 2 = 10
5 * 3 = 15
...
5  * 9 = 45
*/
int main(void) {
	int n, i=1;
	printf("출력할 구구단 입력 : ");
	scanf_s("%d", &n);

	while (i<10) {
		printf("%d * %d = %d\n", n, i, n * i);
		i++;
	}

	return 0;
}


