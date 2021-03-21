#include<stdio.h>
/*
	논리 연산자 (and, or, not)
	&& (and) : 양쪽의 조건식이 true 일때만 true
	|| (or) : 양쪽의 조건식 중 하나라도 true면 true
	! (not) : 조건식의 결과를 뒤집음 true면 false로 false면 true
*/
int main(void) {
	int n, result;
	
	printf("숫자 하나 입력 : ");
	scanf_s("%d", &n);
	//조건식 : 관계연산자를 이용한 연산식 --> 하나의 명제
	result = n > 5 && n <= 10;
	printf("n > 5 && n <= 10 : %d\n", result);
	result = n > 5 || n <= 10;
	printf("n > 5 || n <= 10 : %d\n", result);
	printf("!result : %d\n", !result);

	return 0;
}