#include <stdio.h>
/*
�����Ѱ��� �Է� �޾Ƽ�
���ڿ� �ش��ϴ� �������� ���
�����Է� : 5
5 * 1 = 5
5 * 2 = 10
5 * 3 = 15
...
5  * 9 = 45
*/
int main(void) {
	int n, i = 1;
	printf("����� ������ �Է� : ");
	scanf_s("%d", &n);
	//while�̳� for���� �ݺ��� ���� {}�� �Ⱦ��� 
	//���� ; ������ �ݺ��� ����
	for (i = 1; i < 10;i++) 
		printf("%d * %d = %d\n", n, i, n * i);
	

	return 0;
}