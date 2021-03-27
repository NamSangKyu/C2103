#include <stdio.h>
/*
대문자 A부터 Z까지
반복문 이용해서 출력
*/
int main(void) {
	char ch = 'A';

	while (ch <= 'Z') {
		printf("%c ", ch);
		ch++;
	}
	printf("\n");

	return 0;
}