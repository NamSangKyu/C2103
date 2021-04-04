/*

	초(second)를 입력받아서 시분초로 변환해서 출력

	결과화면>
	초(second)를 입력 : 3675
	h:1, m:1, s:15
*/
#include <stdio.h>

int main(void) {
	int h, m, s;
	printf("초(second)를 입력 : ");
	scanf_s("%d", &s);
	h = s / 3600;
	s %= 3600;
	m = s / 60;
	s %= 60;
	printf("h : %d, m : %d, s : %d\n", h, m, s);


	return 0;
}