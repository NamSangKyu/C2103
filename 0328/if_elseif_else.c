#include <stdio.h>

int main(void) {
	int n1, n2, result;
	char op;

	printf("���� �ΰ� �Է� : ");
	scanf_s("%d %d", &n1, &n2);
	printf("������ �Է� : ");
	scanf_s(" %c", &op);

	if (op == '+'){
		result = n1 + n2;
	}
	//���� �ִ� ������ �����϶� ���� ���ǿ� �ش��ϴ� if
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