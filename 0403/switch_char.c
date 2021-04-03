#include <stdio.h>

int main(void) {
	char ch;
	printf("문자 하나 입력 : ");
	scanf_s("%c", &ch);

	switch (ch) {
	case 'a':
	case 'A':
		printf("오후 입니다.");
		break;
	case 'm':
	case 'M':
		printf("오전 입니다.");
		break;
	case 'e':
	case 'E':
		printf("저녁 입니다.");
		break;
	}



	return 0;
}