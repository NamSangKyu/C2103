#include <stdio.h>

int main(void) {
	//변수선언 : 제어변수, 입력한 변수
	int i, n;
	//초기화 및 입력
	i = 0;
	printf("출력할 개수 : ");
	scanf_s("%d", &n);
	//반복문 - n까지
	while (i < n) {
	//	출력
		printf("Hello World\n");
		i++;
	}



	return 0;
}