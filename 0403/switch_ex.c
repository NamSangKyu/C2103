#include <stdio.h>

int main(void) {
	int n;
	printf("1부터 5까지 숫자 입력 : ");
	scanf_s("%d", &n);
	/*
		switch는 조건식 X, switch는 오로지 값만 이용해서 처리
	*/
	switch(n)
	{
	case 1:
		printf("One\n");
		break;
	case 2:
		printf("Two\n");
		break;
	case 3:
		printf("Three\n");
		break;
	case 4:
		printf("Four\n");
		break;
	case 5:
		printf("Five\n");
		break;
	default:
		printf("잘못된 값을 입력했습니다.\n");
		break;//필요하지 않음
	}

	return 0;
}