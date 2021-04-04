#include <stdio.h>

int main(void) {
	int num;

	printf("숫자 입력 : ");
	scanf_s("%d", &num);

	//홀짝 구분해서 출력 - if
	if (num % 2 == 0)
		printf("짝수\n");
	else
		printf("홀수\n");
//	조건식		 ?	 조건식 true일때 : 조건식 false 일때
	num % 2 == 0 ? printf("짝수\n") : printf("홀수\n");

	return 0;
}