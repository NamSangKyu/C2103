#include <stdio.h>

int main(void) {
	char str[100];
	int i = 0;
	/*
		���ڿ� �Է� �ް�
		�ش� ���ڿ��� ���, ���� ������ ���
	*/
	printf("���ڿ� �Է� : ");
	scanf_s("%s", str, sizeof(str));

	while (str[i] != '\0')//str[i] != 0  ���� ȿ��
		i++;
	printf("�Է��� ���ڿ��� ���� : %d\n", i);
	return 0;
}