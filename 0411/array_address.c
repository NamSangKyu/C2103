#include <stdio.h>

int main(void) {
	int arr[5] = { 1,2,3,4,5 };
	int i;
	for (i = 0; i < 5; i++) {
		printf("%d ", &arr[i]);//�迭 ����� ��ü �ּҰ� ���
	}
	printf("\n");
	return 0;
}