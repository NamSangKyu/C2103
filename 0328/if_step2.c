#include <stdio.h>
/*
���� �ΰ��� �Է� ���� ����
�����ڸ� �Է� �޾�
�ش� �����ڿ� �ش��ϴ� ��Ģ������ �Ͽ� ���

���� �Է� : 2, 3
������ �Է� : +
��� ��� : 5
*/
int main(void) {
	int n1, n2, result;
	char op;

	printf("���� �ΰ� �Է� : ");
	scanf_s("%d %d", &n1, &n2);
	printf("������ �Է� : ");
	scanf_s(" %c",&op);

	if(op == '+')
		result = n1 + n2;
	if(op=='-')
		result = n1 - n2;
	if(op=='*')
		result = n1 * n2;
	if(op=='/')
		result = n1 / n2;

	printf("%d %c %d = %d\n", n1, op, n2, result);
	return 0;
}