#include <stdio.h>

int main(void) {
	
	char str[100];
	int i=0,len;
	printf("���ڿ� �Է� : ");
	scanf_s("%s", str, sizeof(str));

	/*
		���ڿ� �Է� : Hello
		��� ��� : olleH
	*/
	while (str[i] != '\0')//str[i] != 0  ���� ȿ��
		i++;

	len = i;

	for (i = 0; i < len / 2; i++) {
		char temp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = temp;
	}
	printf("���ڿ� ������ ��� : %s\n", str);
	return 0;
}