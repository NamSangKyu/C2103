#include <stdio.h>

int main(void) {
	/*
		������ �迭(Array) 6��¥�� ������
		�迭�� ��� ������ �Է��ϴ� �ݺ����� �ۼ�
	*/
	//����
	int arr[6];
	int i;
	//�Է� �� ������ ����
	for (i = 0; i < 6; i++) {
		printf("%d��° ���� �Է� : ", i);
		scanf_s("%d", &arr[i]);
	}
	//���
	//���
	for (i = 0; i < 6; i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	return 0;
}