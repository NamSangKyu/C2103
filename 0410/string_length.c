#include <stdio.h>

int main(void) {
	char str[100];
	int i = 0;
	/*
		문자열 입력 받고
		해당 문자열을 출력, 글자 개수를 출력
	*/
	printf("문자열 입력 : ");
	scanf_s("%s", str, sizeof(str));

	while (str[i] != '\0')//str[i] != 0  같은 효과
		i++;
	printf("입력한 문자열의 개수 : %d\n", i);
	return 0;
}