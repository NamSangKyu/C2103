#include <stdio.h>

int main(void) {
	
	char str[100];
	int i=0,len;
	printf("문자열 입력 : ");
	scanf_s("%s", str, sizeof(str));

	/*
		문자열 입력 : Hello
		출력 결과 : olleH
	*/
	while (str[i] != '\0')//str[i] != 0  같은 효과
		i++;

	len = i;

	for (i = 0; i < len / 2; i++) {
		char temp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = temp;
	}
	printf("문자열 뒤집은 결과 : %s\n", str);
	return 0;
}