#include <stdio.h>

int main(void) {
	int n1, n2, result;
	char op;

	printf("숫자 두개 입력 : ");
	scanf_s("%d %d", &n1, &n2);
	printf("연산자 입력 : ");
	scanf_s(" %c", &op);

	if (op == '+'){
		result = n1 + n2;
	}
	//위에 있는 조건이 거짓일때 다음 조건에 해당하는 if
	else if (op == '-') {
		result = n1 - n2;
	}
	else if (op == '*') {
		result = n1 * n2;
	}
	else if (op == '/') {
		result = n1 / n2;
	}
	else {
		result = n1 % n2;
	}

	printf("%d %c %d = %d\n", n1, op, n2, result);
	return 0;
}