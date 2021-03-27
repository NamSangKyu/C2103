#include <stdio.h>

int main(void) {
	//상수는 선언과 동시에 초기화를 해야함
	const double PI = 3.1415;
	//PI = 3.1415;
	//상수로 선언이 되면 값을 바꿀수 없다.
	/*PI++;
	PI += 20;*/	
	double area = 3 * 3 * PI;

	return 0;
}