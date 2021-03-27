#include <stdio.h>

int main(void) {
	//대문자하나를 입력받아서
	//입력한 대문자를 소문자로 변환
	char ch;
	printf("대문자 입력 : ");
	scanf_s("%c", &ch);

	//A - 65, a - 97
	ch += 32;
	printf("변환 결과 : %c\n", ch);


	return 0;
}