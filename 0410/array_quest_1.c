#include <stdio.h>
/*
	������ �迭 ���̰� 10�� �迭�� ���� ��
	�迭�� ���� �Է� ���� ��
	�迭�� ���� �� ��� ���� �հ�, �ִ밪, �ּҰ��� ����ϴ� �ڵ带 �ۼ�

*/
int main(void) {
	//�ʿ��� ���� ����
	int arr[10];
	int i, max, min, sum;

	//������ �Է� �� �ʱ�ȭ
	for (i = 0; i < 10; i++) {
		printf("������ �Է� : ");
		scanf_s("%d", &arr[i]);
	}

	max = min = sum = arr[0];
	//���
	for (i = 1; i < 10; i++) {
		sum += arr[i];//����

		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
	}
	//��� ���
	printf("�ִ밪 : %d\n", max);
	printf("�ּҰ� : %d\n", min);
	printf("���� : %d\n", sum);


	return 0;
}