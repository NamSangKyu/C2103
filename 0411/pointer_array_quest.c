#include <stdio.h>
/*
	������ �迭 10��¥�� ���� ��
	�����͸� �Է� ���� ��,
	�Է� ���� �����Ͱ� ¦���� �� �ڿ������� ä���
	�Է� ���� �����Ͱ� Ȧ���� �� �տ��� ���� ä��
	������ �Է��� ������ �迭�� ��� ���� ���� ���
	��, �����͸� �̿��ؼ� ���� O, ������� Ȱ���� �ε��� ���� X
*/
int main(void) {
	int arr[10] = { 0 };
	int* start = NULL;//����� ���� �����ͳ�, �� ������ ���� - NULL
	int* end = NULL;
	int num = 0;//�Է��� ���� �ӽú���
	start = arr;
	end = &arr[9];

	while (start <= end) {
		printf("�����Է� : "); scanf_s("%d", &num);
		if (num % 2 == 0) {
			*end = num;
			end--;
		}
		else {
			*start = num;
			start++;
		}
	}
	for (start = arr; start != &arr[9] + 1; start++) {
		printf("%d ", *start);
	}
	return 0;
}