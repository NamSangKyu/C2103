/*
	���� �ΰ� �Է� ���� ��
	�� ������ �ִ� ������� ���
*/
#include <stdio.h>

int main(void) {
	int n1, n2,i,gcd;

	printf("���� �ΰ� �Է� : ");
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
	printf("�� ������ �ִ� ����� : %d\n", gcd);

	return 0;
}