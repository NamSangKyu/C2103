#include <stdio.h>
int main(void) {

	int arr[5] = { 1,2,3,4,5 };
	//arr 배열 이름만 쓰면 배열의 첫번째 요소의 주소값이 나옴
	int* ptr = arr;//int* ptr = &arr[0];
	int i;
	//포인터 이용을 해서 배열을 전체 출력하는 방법 - 1
	for (i = 0; i < 5; i++) {
		printf("%d %d\n", ptr + i, *(ptr + i));

	}
	printf("------------------\n");
	//포인터 이용을 해서 배열을 전체 출력하는 방법 - 2
	//포인터를 배열처럼 활용하는 방법
	for (i = 0; i < 5; i++) {
		printf("%d %d\n", &ptr[i], ptr[i]);
	}
	printf("------------------\n");
	//포인터 이용을 해서 배열을 전체 출력하는 방법 - 3
	//포인터 연산을 이용해서 포인터 위치를 변경하면서 접근하는 방법
	while (ptr != &arr[4]+1) {
		printf("%d %d\n", ptr, *ptr);
		ptr++;
	}
	return 0;
}



