#include <stdio.h>
/*
�빮�� A���� Z����
�ݺ��� �̿��ؼ� ���
*/
int main(void) {
	char ch = 'A';

	while (ch <= 'Z') {
		printf("%c ", ch);
		ch++;
	}
	printf("\n");

	return 0;
}