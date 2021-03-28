#include <stdio.h>
int main(void) {

	/*
	* 
	        *			공백 : 4,	* : 1
		   ***			공백 : 3,	* : 3
		  *****			공백 : 2,	* : 5
		 *******		공백 : 1,	* : 7
		*********		공백 : 0,	* : 9
		*				전체 : 5줄
	
		한줄당 공백개수와 * 개수 체크해서 반복
		printf("*");printf(" ");
		printf("\n");
	*/
	int i, j, row;
	printf("삼각형 밑변 길이 : ");
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