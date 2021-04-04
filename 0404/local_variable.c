#include <stdio.h>
/*
	local variable(지역변수) : 해당 영역에서만 쓸수 있는 변수
	예> 매개변수, {}안에서 선언된 변수(함수에서 선언된 변수)
	특징> stack 메모리에 저장, {} 영역이 끝나면 
		 바로 회수되는 메모리
*/
int sum(int n1, int n2) {
	//&n1 --> n1이 실제로 저장된 주소값
	printf("sum n1 : %d\n", &n1);
	return n1 + n2;
}
int main(void) {
	int n1=5, n2=6;
	printf("main n1 : %d\n", &n1);
	sum(n1, n2);

	return 0;
}