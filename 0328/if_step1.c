#include <stdio.h>

int main(void) {
	int num;

	printf("���� �Է� : ");
	scanf_s("%d", &num);

	if (num%2==0) {
		printf("�Է��Ͻ� ���ڴ� ¦�� �Դϴ�.\n");
	}
	if (num % 2 == 1) {
		printf("�Է��Ͻ� ���ڴ� Ȧ�� �Դϴ�.\n");
	}

	return 0;
}