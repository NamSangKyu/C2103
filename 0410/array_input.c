#include <stdio.h>

int main(void) {
	/*
		정수형 배열(Array) 6개짜리 선언후
		배열에 모든 내용을 입력하는 반복문을 작성
	*/
	//선언
	int arr[6];
	int i;
	//입력 및 데이터 셋팅
	for (i = 0; i < 6; i++) {
		printf("%d번째 숫자 입력 : ", i);
		scanf_s("%d", &arr[i]);
	}
	//계산
	//출력
	for (i = 0; i < 6; i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	return 0;
}