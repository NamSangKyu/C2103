#include <stdio.h>

int main(void) {

	int num;

	printf("���� �Է� : ");
	scanf_s("%d", &num);

	if (num > 0) {
		printf("�Է��Ͻ� ���ڴ� ��� �Դϴ�.");
	}
	else {//�����ִ� ���ǵ��� ���� �����϶� �����ϴ� �κ�
		printf("�Է��Ͻ� ���ڴ� ���� �Դϴ�.");
	}
	return 0;

}