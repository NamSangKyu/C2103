#include <stdio.h>

int main(void) {
	//�빮���ϳ��� �Է¹޾Ƽ�
	//�Է��� �빮�ڸ� �ҹ��ڷ� ��ȯ
	char ch;
	printf("�빮�� �Է� : ");
	scanf_s("%c", &ch);

	//A - 65, a - 97
	ch += 32;
	printf("��ȯ ��� : %c\n", ch);


	return 0;
}