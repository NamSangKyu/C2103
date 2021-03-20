#include <stdio.h>
/*
	변수(variable) : 하나의 값을 저장하는 공간
	변수타입 변수명; <<--- 기본 선언 방법
*/
int main(void) {
	int num; // 정수 하나 저장할 변수를 선언
	num = 10; // = 오른쪽에 있는 데이터를 왼쪽 변수에 저장(대입연산자)
	num + 10; // num 과 10을 더하겠다. 저장? X 
	//변수 오른쪽에 =  없으면? 피연산자,
	//해당 위치에 num에 저장되있는 값을 읽어옴
	printf("num = %d\n", num); 

	//초기화 : 변수를 선언한 후에 기본값을 저장하는 행위
	int age=20;//변수를 선언한 후에 값 20으로 초기화 하였음
	printf("age = %d\n", age);

	//동일한 타입으로 선언하는 경우에는
	//, 찍고 변수명만 지으면 됨
	int n1=10, n2=20; 
	printf("n1 = %d, n2 = %d\n", n1, n2);

	return 0;
}

