#include <stdio.h>

int main(void) {

	//1~100���� ���� �� 3�� 5�� ��� ������ ���
	//	- �� ������� 1���� ī��Ʈ ó��
	//���� - i, count
	int i, count;
	for (i = 1, count = 0; i < 101; i++) {
		count += i % 3 == 0 || i % 5 == 0 ? 1 : 0;
	}
	printf("3�� 5�� ��� ���� : %d\n", count);
	return 0;
}