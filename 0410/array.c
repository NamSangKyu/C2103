#include <stdio.h>
/*
	�迭

	���� ������ �ϳ��� �����ϴ� ����
	�ϳ��� �̸����� ������ ������ �����ϴ� ������ �迭�̶�� ��

	�ε��� : �迭 ����� �������� �����ϱ� ������ �� ������ �����ϱ� ���� ����
			�ε����� 0���� ����
			ex> �迭 ������ 10���� �ε��� 0 ~ 9
										0 ~ �迭����-1
*/
int main(void) {
	int arr[5];//arr�迭�� 5��¥���� ����
	int i;
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;

	//�迭 ������ ���
	for(i=0;i<5;i++)
		printf("%d\n", arr[i]);
	return 0;
}