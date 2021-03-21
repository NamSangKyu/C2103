#include <stdio.h>

int main(void)
{
	//실수(소수점 있는 숫자)를 저장하기위한 변수 타입
	//float(4 byte)      double(8 byte)
	float f1 = 3.14154444f;//float일 경우 값 끝에 f를 붙임
	double d1 = 3.1415;//f가 안붙으면 무조건 double 형태

	//float, double 출력
	printf("f1 : %.3f\n", f1);
	printf("d1 : %lf\n", d1);

	return 0;
}