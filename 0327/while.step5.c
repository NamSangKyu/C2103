#include <stdio.h>
/*
파일명 : while_step5.c

숫자 0을 입력할때까지 입력을 받아서
 0을 입력하면
입력한 숫자들의 총합을 출력

숫자 입력 : 1
숫자 입력 : 2
숫자 입력 : 3
숫자 입력 : 4
숫자 입력 : 5
숫자 입력 : 0

숫자들의 총합 : 15
*/
int main(void) {
	int n = -1, sum = 0;

	while (n != 0) {
		printf("숫자 입력 : ");
		scanf_s("%d", &n);
		sum += n;
	}

	printf("입력하신 숫자들의 총합 : %d\n", sum);

	return 0;
}