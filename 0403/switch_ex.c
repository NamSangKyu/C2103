#include <stdio.h>

int main(void) {
	int n;
	printf("1���� 5���� ���� �Է� : ");
	scanf_s("%d", &n);
	/*
		switch�� ���ǽ� X, switch�� ������ ���� �̿��ؼ� ó��
	*/
	switch(n)
	{
	case 1:
		printf("One\n");
		break;
	case 2:
		printf("Two\n");
		break;
	case 3:
		printf("Three\n");
		break;
	case 4:
		printf("Four\n");
		break;
	case 5:
		printf("Five\n");
		break;
	default:
		printf("�߸��� ���� �Է��߽��ϴ�.\n");
		break;//�ʿ����� ����
	}

	return 0;
}