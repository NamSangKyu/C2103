#include <stdio.h>

int main(void) {
	int num;

	printf("숫자 입력 : ");
	scanf_s("%d", &num);

	if (num%2==0) {
		printf("입력하신 숫자는 짝수 입니다.\n");
	}
	if (num % 2 == 1) {
		printf("입력하신 숫자는 홀수 입니다.\n");
	}

	return 0;
}