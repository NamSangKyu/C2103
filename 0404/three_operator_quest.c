#include <stdio.h>

int main(void) {

	//1~100까지 숫자 중 3과 5의 배수 개수를 출력
	//	- 단 공배수는 1개로 카운트 처리
	//변수 - i, count
	int i, count;
	for (i = 1, count = 0; i < 101; i++) {
		count += i % 3 == 0 || i % 5 == 0 ? 1 : 0;
	}
	printf("3과 5의 배수 개수 : %d\n", count);
	return 0;
}