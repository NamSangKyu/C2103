#include <stdio.h>

int main(void) {
	int num;

	printf("���� �Է� : ");
	scanf_s("%d", &num);

	//Ȧ¦ �����ؼ� ��� - if
	if (num % 2 == 0)
		printf("¦��\n");
	else
		printf("Ȧ��\n");
//	���ǽ�		 ?	 ���ǽ� true�϶� : ���ǽ� false �϶�
	num % 2 == 0 ? printf("¦��\n") : printf("Ȧ��\n");

	return 0;
}