/*
	���� �ΰ��� �Է� ���� ��
	�������� ����ϴ� �Լ� �ۼ�
	�� �������� ����ϴ� �Լ��� ��� ���� 2�� �޾Ƽ�
	���� ���ڿ� �ش��ϴ� �ܺ��� ū���ڿ� �ش��ϴ� �ܱ��� ���

	�۾����>
	����Ҵ� : 5 2
	2*1=2
	2*2=4
	2*3=6
	2*4=8
	...
	5*9=45
	
*/
#include <stdio.h>
void PrintGuGu(int n1, int n2) {
	int i;
	//n1�� n2���� ũ�� n1�� n2�� ��ȯ
	if (n1 > n2) {
		int temp = n1;
		n1 = n2;
		n2 = temp;
	}
	for (; n1 <= n2; n1++) {
		printf("-- %d �� --\n", n1);
		for (i = 1; i < 10; i++)
			printf("%d * %d = %d\n", n1, i, n1 * i);
		printf("\n");
	}
}
int main(void) {
	int n1, n2;
	printf("����� �� : "); scanf_s("%d %d", &n1, &n2);
	PrintGuGu(n1, n2);
}