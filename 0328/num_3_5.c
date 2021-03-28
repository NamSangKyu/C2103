#include <stdio.h>
/*
	숫자 1~100까지의 숫자들 중
	3과 5의 배수만 출력 하시오
	3과 5의 공배수는 한번만 출력

	3 5 6 9 10 12 15 18 20 21 ...
*/
int main(void) {
	int i;

	for (i = 1; i < 101; i++) {
		if(i % 3 == 0 || i % 5 == 0)
			printf("%d ", i);
	}

	return 0;
}