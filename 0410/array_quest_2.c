#include <stdio.h>

/*
	������ �迭 10��¥�� ���� ��
	�����͸� �Է� ���� ��,
	�Է� ���� �����Ͱ� ¦���� �� �ڿ������� ä���
	�Է� ���� �����Ͱ� Ȧ���� �� �տ��� ���� ä��
	������ �Է��� ������ �迭�� ��� ���� ���� ���
*/
int main(void) {
	int arr[10];
	int start = 0, end = 9, num;
	while(start <= end) {
		printf("���� �Է� : ");
		scanf_s("%d", &num);
		if (num % 2 == 0)
			arr[end--] = num;
		else
			arr[start++] = num;
	}

	for (start = 0; start < 10; start++) 
		printf("%d ", arr[start]);


	return 0;
}