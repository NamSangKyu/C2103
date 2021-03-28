#include <stdio.h>

int main(void) {

	int num;

	printf("숫자 입력 : ");
	scanf_s("%d", &num);

	if (num > 0) {
		printf("입력하신 숫자는 양수 입니다.");
	}
	else {//위에있는 조건들이 전부 거짓일때 실행하는 부분
		printf("입력하신 숫자는 음수 입니다.");
	}
	return 0;

}