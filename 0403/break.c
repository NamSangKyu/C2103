#include <stdio.h>

int main(void) {
	int i = 1;
	int total = 0;

	while (1) {
		total += i;
		if (total >= 2000)
			break;//break�� ���ΰ� �ִ� �ݺ����� ���� ����
	}
	printf("total : %d\n", total);
	return 0;
}