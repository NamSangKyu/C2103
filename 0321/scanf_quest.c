#include <stdio.h>
/*
	������ ���� �ΰ��� ���� �� ��
	���� �ΰ��� �Է��� ��
	�� ������ ��Ģ���� ����� ���(+ - * / %)
*/
int main(void) {
	int n1=0, n2=0;
	printf("���� �Է� : ");
	scanf_s("%d", &n1);
	printf("���� �Է� : ");
	scanf_s("%d", &n2);

	printf("%d + %d = %d\n", n1, n2, n1 + n2);
	printf("%d - %d = %d\n", n1, n2, n1 - n2);
	printf("%d * %d = %d\n", n1, n2, n1 * n2);
	printf("%d / %d = %d\n", n1, n2, n1 / n2);
	printf("%d %% %d = %d\n", n1, n2, n1 % n2);
	return 0;
}


