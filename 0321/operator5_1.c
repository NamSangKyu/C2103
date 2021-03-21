#include <stdio.h>

int main(void) {
	int n = 5;
	//단락 회로(short-circuit)
	//AND나 OR 연산에서 앞쪽 연산에서 이미 TRUE FALSE가 결정나면
	//뒤에 남은 연산은 생략하고 다음 명령으로 넘어감
	int result = n > 0 || ++n < 10;
	printf("n : %d\n", n);
	result = n < 0 && ++n > -5;
	printf("n : %d\n", n);

	return 0;
}