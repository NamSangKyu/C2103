#include <stdio.h>

int main(void) {
	//1~100까지 숫자 3의 배수를 제외하고 출력
	int i;
	for (i = 1; i <= 100; i++) {
		if (i % 3 == 0)
			continue;
		printf("%d ",i);
	}
	return 0;
}