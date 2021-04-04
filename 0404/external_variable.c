#include <stdio.h>
//전역변수(외부변수) : 함수 밖에 선언한 변수
//					  전역변수 선언시 초기화를 하지않으면
//					  자동으로 0으로 초기화
double pi = 3.1415;
int n;//자동으로 0으로 초기화
double circleArea(double r) {
	printf("circle : %d\n", &pi);
	return r * r * pi;
}

int main(void) {
	printf("main : %d\n", &pi);
	printf("n : %d\n", n);
	printf("원넓이 : %lf\n", circleArea(3.5));
	printf("원넓이 : %lf\n", 3.5*3.5*pi);

	return 0;
}