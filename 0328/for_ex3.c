#include <stdio.h>
/*
숫자한개를 입력 받아서
숫자에 해당하는 구구단을 출력
숫자입력 : 5
5 * 1 = 5
5 * 2 = 10
5 * 3 = 15
...
5  * 9 = 45
*/
int main(void) {
	int n, i = 1;
	printf("출력할 구구단 입력 : ");
	scanf_s("%d", &n);
	//while이나 for에서 반복할 영역 {}를 안쓰면 
	//다음 ; 까지가 반복할 영역
	for (i = 1; i < 10;i++) 
		printf("%d * %d = %d\n", n, i, n * i);
	

	return 0;
}
