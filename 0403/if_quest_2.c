#include <stdio.h>

int main(void) {
	//���� �ΰ��� �Է� ���� ��
	int n1, n2, result;
	printf("���� �ΰ� �Է� : ");
	scanf_s("%d %d", &n1, &n2);
	//������ �����Ͽ����� ������ ���밪�� �������� ���
	//���� ����
	//���� �Է� : 4 6
	//���� ��� : 2
	//���� �Է� : 6 4
	//���� ��� : 2
	if (n1 > n2)//n1-n2>0
		printf("���� ��� : %d\n", n1 - n2);
	else
		printf("���� ��� : %d\n", n2 - n1);

	result = n1 - n2;
	if (result < 0)
		result = -result;
	printf("������� : %d\n", result);

	return 0;
}