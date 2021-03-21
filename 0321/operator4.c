#include <stdio.h>
/*
	관계 연산자(비교 연산자)
	>  <   >=  <=  ==   !=

	n1 > 10 ---> true면 1, false 0으로 나타냄
*/
int main(void) {
	int n1, n2;

	printf("숫자 두개 입력 : ");
	scanf_s("%d %d", &n1, &n2);

	printf("n1 > n2 : %d\n", n1 > n2);
	printf("n1 < n2 : %d\n", n1 < n2);
	printf("n1 >= n2 : %d\n", n1 >= n2);
	printf("n1 <= n2 : %d\n", n1 <= n2);
	printf("n1 == n2 : %d\n", n1 == n2);
	printf("n1 != n2 : %d\n", n1 != n2);
	return 0;
}