#include <stdio.h>

int main(void) {
	//숫자 두개를 입력 받은 후
	int n1, n2, result;
	printf("숫자 두개 입력 : ");
	scanf_s("%d %d", &n1, &n2);
	//뺄셈을 진행하였을때 무조건 절대값이 나오도록 출력
	//실행 예시
	//숫자 입력 : 4 6
	//뺄셈 결과 : 2
	//숫자 입력 : 6 4
	//뺄셈 결과 : 2
	if (n1 > n2)//n1-n2>0
		printf("뺄셈 결과 : %d\n", n1 - n2);
	else
		printf("뺄셈 결과 : %d\n", n2 - n1);

	result = n1 - n2;
	if (result < 0)
		result = -result;
	printf("뺄셈결과 : %d\n", result);

	return 0;
}