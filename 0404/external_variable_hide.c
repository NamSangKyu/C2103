#include <stdio.h>
int sum(int n1, int n2) {
	int result = n1 + n2;
	return result;
}
//���������� ���������� �̸��� ������ ���������� �켱������ Ž��
//���������� �����Ҽ� ����.
int result = 100;
int main(void) {
	int result = sum(10, 20);
	printf("%d\n", result);

	return 0;
}