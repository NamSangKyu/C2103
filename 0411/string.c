#include <stdio.h>

int main(void) {
	char str[] = "Hello World";
	char* ptr = "Hello World"; //���ڿ� ���
	//SDL üũ�� �Ǿ� ������
	const char* ptr1 = "Hello World";
	printf("%s %s\n", str, ptr);
	str[6] = 'K';
	//����, ����Ű�� �ִ� ���ڿ��� ����̱� ������ ������ �Ұ���
	ptr[6] = 'K';
	//ptr1[6] = 'K';
	printf("%s %s\n", str, ptr);
	//���
	//const int n = 100;//ó�� �ʱ�ȭ�� ���� ���ȭ
	//n++;//n�� ����̱� ������ ������ �Ұ�
	return 0;
}