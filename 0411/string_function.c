#include <stdio.h>
//C���� �����ϴ� ���ڿ� �Լ��� ����� �ҷ���
//string.h ��������� include �ؾߵ�
#include <string.h>

int main(void) {
	char str1[] = "Hello World";
	char str2[50];
	char str3[] = "Aest world";
	//���ڿ� ���� - strlen
	int len = strlen(str1);
	printf("str1�� ���ڿ� ���� : %d\n", len);
	//���ڿ� ����
	//strcpy(str2, str1);//SDL üũ�� ���� �Ǿ�����
	strcpy_s(str2, sizeof(str2), str1);//SDL üũ�� �Ǿ� ������
	fputs(str2, stdout);//����� ����� ����, ������ �ִ� ���븸 ���
	puts(str2);//���ڿ� ����Լ�, �ڵ����� �ٹٲ�
	//���ڿ� �� : ��������� 0(�� ���ڿ��� ������)
	//             (�� ���ڿ��� �ٸ���) --> 1, -1
	printf("str1, str2 ���ڿ� �� : %d\n", strcmp(str1, str2));
	printf("str1, str3 ���ڿ� �� : %d\n", strcmp(str1, str3));
	return 0;
}