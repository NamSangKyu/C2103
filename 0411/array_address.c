#include <stdio.h>

int main(void) {
	int arr[5] = { 1,2,3,4,5 };
	int i;
	for (i = 0; i < 5; i++) {
		printf("%d ", &arr[i]);//배열 요소의 전체 주소값 출력
	}
	printf("\n");
	return 0;
}