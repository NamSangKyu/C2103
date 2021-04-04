/*
	숫자 두개를 입력 받은 후
	구구단을 출력하는 함수 작성
	단 구구단을 출력하는 함수는 출력 단을 2개 받아서
	작은 숫자에 해당하는 단부터 큰숫자에 해당하는 단까지 출력

	작업결과>
	출력할단 : 5 2
	2*1=2
	2*2=4
	2*3=6
	2*4=8
	...
	5*9=45
	
*/
#include <stdio.h>
void PrintGuGu(int n1, int n2) {
	int i;
	//n1이 n2보다 크면 n1과 n2를 교환
	if (n1 > n2) {
		int temp = n1;
		n1 = n2;
		n2 = temp;
	}
	for (; n1 <= n2; n1++) {
		printf("-- %d 단 --\n", n1);
		for (i = 1; i < 10; i++)
			printf("%d * %d = %d\n", n1, i, n1 * i);
		printf("\n");
	}
}
int main(void) {
	int n1, n2;
	printf("출력할 단 : "); scanf_s("%d %d", &n1, &n2);
	PrintGuGu(n1, n2);
}