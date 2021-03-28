#include <stdio.h>

int main(void) {
	int n = 0, sum = 0;

	 do{
		printf("숫자 입력 : ");
		scanf_s("%d", &n);
		sum += n;
	}while (n != 0);

	printf("입력하신 숫자들의 총합 : %d\n", sum);

	return 0;
}