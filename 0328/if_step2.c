#include <stdio.h>
/*
숫자 두개를 입력 받은 다음
연산자를 입력 받아
해당 연산자에 해당하는 사칙연산을 하여 출력

숫자 입력 : 2, 3
연산자 입력 : +
계산 결과 : 5
*/
int main(void) {
	int n1, n2, result;
	char op;

	printf("숫자 두개 입력 : ");
	scanf_s("%d %d", &n1, &n2);
	printf("연산자 입력 : ");
	scanf_s(" %c",&op);

	if(op == '+')
		result = n1 + n2;
	if(op=='-')
		result = n1 - n2;
	if(op=='*')
		result = n1 * n2;
	if(op=='/')
		result = n1 / n2;

	printf("%d %c %d = %d\n", n1, op, n2, result);
	return 0;
}