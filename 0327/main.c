#include <stdio.h>

int main(void) {
	//변수 : 값 하나만 저장하는 공간(값이 계속 변함)
	//변수 타입 : int, float, double
	int a = 10; //변수 a를 만든 후 숫자 10을 저장 --> 초기화
	printf("숫자 입력 : ");
	scanf_s("%d", &a);
	//연산자
	//사칙		+	-	*	/	%
	//복합대입	+=	-=	*=	/=	%=
	//증감		++	--
	//비교		> < >= <= == !=
	//논리		&& || !
	printf("%d\n", !a);//0이 아닌 값은 전부 true
	//서식 문자열 : %d, %lf, %f, %g
	return 0;
}