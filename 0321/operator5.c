#include<stdio.h>
/*
	�� ������ (and, or, not)
	&& (and) : ������ ���ǽ��� true �϶��� true
	|| (or) : ������ ���ǽ� �� �ϳ��� true�� true
	! (not) : ���ǽ��� ����� ������ true�� false�� false�� true
*/
int main(void) {
	int n, result;
	
	printf("���� �ϳ� �Է� : ");
	scanf_s("%d", &n);
	//���ǽ� : ���迬���ڸ� �̿��� ����� --> �ϳ��� ����
	result = n > 5 && n <= 10;
	printf("n > 5 && n <= 10 : %d\n", result);
	result = n > 5 || n <= 10;
	printf("n > 5 || n <= 10 : %d\n", result);
	printf("!result : %d\n", !result);

	return 0;
}