#include <stdio.h>

int main(void) {
	int n = 0, sum = 0;

	 do{
		printf("���� �Է� : ");
		scanf_s("%d", &n);
		sum += n;
	}while (n != 0);

	printf("�Է��Ͻ� ���ڵ��� ���� : %d\n", sum);

	return 0;
}