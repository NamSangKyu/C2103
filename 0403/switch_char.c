#include <stdio.h>

int main(void) {
	char ch;
	printf("���� �ϳ� �Է� : ");
	scanf_s("%c", &ch);

	switch (ch) {
	case 'a':
	case 'A':
		printf("���� �Դϴ�.");
		break;
	case 'm':
	case 'M':
		printf("���� �Դϴ�.");
		break;
	case 'e':
	case 'E':
		printf("���� �Դϴ�.");
		break;
	}



	return 0;
}