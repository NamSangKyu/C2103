#include <stdio.h>
/*
	배열

	기존 변수를 하나만 선언하던 것을
	하나의 이름으로 변수를 여러개 선언하는 문법을 배열이라고 함

	인덱스 : 배열 선언시 변수명이 동일하기 떄문에 각 변수들 구분하기 위한 순번
			인덱스는 0부터 시작
			ex> 배열 개수가 10개면 인덱스 0 ~ 9
										0 ~ 배열개수-1
*/
int main(void) {
	int arr[5];//arr배열은 5개짜리로 선언
	int i;
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;

	//배열 내용을 출력
	for(i=0;i<5;i++)
		printf("%d\n", arr[i]);
	return 0;
}