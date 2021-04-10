#include <stdio.h>
/*
	포인터 변수
	1. 포인터는 메모리 주소값만 저장하는 변수(일반값 X)
	2. 메모리 주소값 정수 -> 1byte - 1주소
*/
int main(void) {
	int num = 10;
	int* ptr;//포인터 변수는 중간에 * 넣어서 선언
	ptr = &num;

	printf("%d %d\n", ptr, &num); //ptr == &num
	printf("%d %d\n", *ptr, num); //*ptr == num
	num++;
	printf("%d %d\n", *ptr, num); //*ptr == num
	*ptr += 10;
	printf("%d %d\n", *ptr, num); //*ptr == num

	return 0;
}