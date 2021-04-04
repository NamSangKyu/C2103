#include <stdio.h>
int sum(int n1, int n2) {
	int result = n1 + n2;
	return result;
}
//지역변수와 전역변수가 이름이 같으면 지역변수를 우선적으로 탐색
//전역변수에 접근할수 없다.
int result = 100;
int main(void) {
	int result = sum(10, 20);
	printf("%d\n", result);

	return 0;
}