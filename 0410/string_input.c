#include <stdio.h>
int main(void) {

	char str[10];

	printf("���ڿ� �Է� : ");
	//SDL������ ���� ������, ������ ���� ���, �����Ϸ� ������
	//scanf("%9s", str);
	//SDL ������ �Ǿ�������, ���� �����Ϸ� ���� 
	scanf_s("%s", str, sizeof(str));

	printf("%s\n", str);


	return 0;
}