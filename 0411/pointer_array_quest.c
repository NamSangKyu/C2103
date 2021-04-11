#include <stdio.h>
/*
	정수형 배열 10개짜리 선언 후
	데이터를 입력 받을 때,
	입력 받은 데이터가 짝수면 맨 뒤에서부터 채우고
	입력 받은 데이터가 홀수면 맨 앞에서 부터 채움
	데이터 입력이 끝나면 배열의 모든 값을 전부 출력
	단, 포인터를 이용해서 제어 O, 제어변수를 활용한 인덱스 제어 X
*/
int main(void) {
	int arr[10] = { 0 };
	int* start = NULL;//사용이 끝난 포인터나, 빈 포인터 설정 - NULL
	int* end = NULL;
	int num = 0;//입력을 받을 임시변수
	start = arr;
	end = &arr[9];

	while (start <= end) {
		printf("숫자입력 : "); scanf_s("%d", &num);
		if (num % 2 == 0) {
			*end = num;
			end--;
		}
		else {
			*start = num;
			start++;
		}
	}
	for (start = arr; start != &arr[9] + 1; start++) {
		printf("%d ", *start);
	}
	return 0;
}