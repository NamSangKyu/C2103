#include <stdio.h>
#include <stdlib.h>
/*
	처음에는 배열을 동적할당으로 10개짜리 할당 후에
	숫자를 0을 입력할떄까지 계속 입력
	입력을 받다가 배열이 전부 가득차면 추가적으로 3개씩 배열을 늘림
	0을 입력한 순간 입력한 숫자들의 총합을 출력하는 코드를 작성
*/

int main(void) {
	int* arr;
	int size = 10;
	int idx = 0, i, total = 0;
	//동적할당
	arr = (int*)malloc(sizeof(int) * size);

	while (1) {
		//사이즈 모자를때마다 재할당
		if (idx == size) {
			size += 3;
			arr = (int*)realloc(arr, sizeof(int) * size);
		}
		printf("숫자 입력 : ");
		scanf_s("%d", &arr[idx]);
		idx++;
		if (arr[idx-1] == 0) break;
	}
	//총합
	for (i = 0; i < idx; i++) {
		total += arr[i];
	}

	printf("총합 : %d\n", total);
	
	//해제
	free(arr);
	return 0;
}