#include <stdio.h>

/*
	반지름 하나를 입력 받아서
	반지름에 해당하는 원넓이를 출력
*/

int main(void) {
	int r;//반지름
	double area = 0.0; //원넓이

	printf("반지름 하나 입력 하세요 : ");
	scanf_s("%d", &r);
	//데이터 타입이 자동으로 형 변환 -> auto casting
	//area = r * r * 3.1415;
	//강제로 데이터를 형변환 --> casting
	//(변수타입)변수 --> () 변수타입으로 뒤에나온 변수를 형변환
	area = (double)r * r * 3.1415;
	printf("반지름 %d의 원넓이 : %g\n", r, area);
	return 0;
}