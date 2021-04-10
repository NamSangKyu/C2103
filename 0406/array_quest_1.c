#include <stdio.h>
/*
	정수형 배열 길이가 10인 배열을 선언 후
	배열에 값을 입력 받은 후
	배열에 저장 된 모든 값의 합과, 최대값, 최소값을 출력하는 코드를 작성

*/
int main(void) {
	//필요한 변수 선언
	int arr[10];
	int i, max, min, sum;

	//데이터 입력 및 초기화
	for (i = 0; i < 10; i++) {
		printf("데이터 입력 : ");
		scanf_s("%d", &arr[i]);
	}

	max = min = sum = arr[0];
	//계산
	for (i = 1; i < 10; i++) {
		sum += arr[i];//총합

		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
	}
	//결과 출력
	printf("최대값 : %d\n", max);
	printf("최소값 : %d\n", min);
	printf("총합 : %d\n", sum);


	return 0;
}