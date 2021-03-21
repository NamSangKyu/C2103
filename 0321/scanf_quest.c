#include <stdio.h>
/*
	정수형 변수 두개를 선언 한 후
	숫자 두개를 입력한 후
	두 숫자의 사칙연산 결과를 출력(+ - * / %)
*/
int main(void) {
	int n1=0, n2=0;
	printf("숫자 입력 : ");
	scanf_s("%d", &n1);
	printf("숫자 입력 : ");
	scanf_s("%d", &n2);

	printf("%d + %d = %d\n", n1, n2, n1 + n2);
	printf("%d - %d = %d\n", n1, n2, n1 - n2);
	printf("%d * %d = %d\n", n1, n2, n1 * n2);
	printf("%d / %d = %d\n", n1, n2, n1 / n2);
	printf("%d %% %d = %d\n", n1, n2, n1 % n2);
	return 0;
}


