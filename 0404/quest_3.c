/*

	��(second)�� �Է¹޾Ƽ� �ú��ʷ� ��ȯ�ؼ� ���

	���ȭ��>
	��(second)�� �Է� : 3675
	h:1, m:1, s:15
*/
#include <stdio.h>

int main(void) {
	int h, m, s;
	printf("��(second)�� �Է� : ");
	scanf_s("%d", &s);
	h = s / 3600;
	s %= 3600;
	m = s / 60;
	s %= 60;
	printf("h : %d, m : %d, s : %d\n", h, m, s);


	return 0;
}