#include <stdio.h>
/*
while_step4.c

�����Ѱ��� �Է� �޾Ƽ�
���ڿ� �ش��ϴ� �������� ���
�����Է� : 5
5 * 1 = 5
5 * 2 = 10
5 * 3 = 15
...
5  * 9 = 45
*/
int main(void) {
	int n, i=1;
	printf("����� ������ �Է� : ");
	scanf_s("%d", &n);

	while (i<10) {
		printf("%d * %d = %d\n", n, i, n * i);
		i++;
	}

	return 0;
}


