#include <stdio.h>
int main(void) {

	/*
	* 
	        *			���� : 4,	* : 1
		   ***			���� : 3,	* : 3
		  *****			���� : 2,	* : 5
		 *******		���� : 1,	* : 7
		*********		���� : 0,	* : 9
		*				��ü : 5��
	
		���ٴ� ���鰳���� * ���� üũ�ؼ� �ݺ�
		printf("*");printf(" ");
		printf("\n");
	*/
	int i, j, row;
	printf("�ﰢ�� �غ� ���� : ");
	scanf_s("%d", &row);

	for (i = 0; i < row; i++) {
		for (j = 0; j < row - (i+1); j++) {
			printf(" ");
		}
		for (j = 0; j < (i + 1) * 2 - 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}