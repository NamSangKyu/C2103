#include <stdio.h>

int main(void) {
	int i = 1;
	int total = 0;

	while (1) {
		total += i;
		if (total >= 2000)
			break;//break를 감싸고 있는 반복문을 강제 종료
	}
	printf("total : %d\n", total);
	return 0;
}