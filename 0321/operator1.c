#include <stdio.h>
/*
	사칙연산
	+	:	덧셈
	-	:	뺄셈
	*	:	곱셈
	/	:	나눗셈 (몫)
	%	:	나눗셈 (나머지)	
*/
int main(void) {
	//정수형 변수 두개 선언 n1, n2 값은 각각 5와 3으로 초기화
	int n1=5,n2=3;
	//데이터를 초기화 및 입력
	int result = 0;
	//계산
	result = n1 + n2;
	//결과 출력
	printf("%d + %d = %d\n", n1, n2, result);
	//뺄셈, 곱셈, 나눗셈(몫) 
	return 0;
}