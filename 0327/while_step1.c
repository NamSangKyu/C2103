#include <stdio.h>
/*
	반복(loop)문 - while, for, do-while
		동일한 코드를 하나로 표현을 하여
		원하는 만큼 연속적으로 실행시키는 문법

	조건식 : 비교연산자와 논리 연산자를 이용해서 만든 명제
			 true / false;
	반복문은 조건식이 true 동안만 반복
	while(조건식){
		반복할 코드
	}
*/
int main(void) {
	int i=0;
	//Hello World를 5번 출력하는 코드
	while (i<5) {
		printf("Hello World\n");
		i++;
	}
	
	return 0;
}