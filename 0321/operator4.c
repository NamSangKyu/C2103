#include <stdio.h>
/*
	���� ������(�� ������)
	>  <   >=  <=  ==   !=

	n1 > 10 ---> true�� 1, false 0���� ��Ÿ��
*/
int main(void) {
	int n1, n2;

	printf("���� �ΰ� �Է� : ");
	scanf_s("%d %d", &n1, &n2);

	printf("n1 > n2 : %d\n", n1 > n2);
	printf("n1 < n2 : %d\n", n1 < n2);
	printf("n1 >= n2 : %d\n", n1 >= n2);
	printf("n1 <= n2 : %d\n", n1 <= n2);
	printf("n1 == n2 : %d\n", n1 == n2);
	printf("n1 != n2 : %d\n", n1 != n2);
	return 0;
}