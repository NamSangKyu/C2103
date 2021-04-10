#include <stdio.h>

/*
	정수형 배열 10개짜리 선언 후
	데이터를 입력 받을 때,
	입력 받은 데이터가 짝수면 맨 뒤에서부터 채우고
	입력 받은 데이터가 홀수면 맨 앞에서 부터 채움
	데이터 입력이 끝나면 배열의 모든 값을 전부 출력
*/
int main(void) {
	int arr[10];
	int start = 0, end = 9, num;
	while(start <= end) {
		printf("숫자 입력 : ");
		scanf_s("%d", &num);
		if (num % 2 == 0)
			arr[end--] = num;
		else
			arr[start++] = num;
	}

	for (start = 0; start < 10; start++) 
		printf("%d ", arr[start]);


	return 0;
}