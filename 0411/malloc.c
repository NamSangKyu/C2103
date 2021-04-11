#include <stdio.h>
#include <stdlib.h>

int main(void) {
	//동적할당 --> heap 메모리 영역을 사용
	int size;
	int* arr;
	int i;
	printf("할당할 배열 개수를 입력 : ");
	scanf_s("%d", &size);

	arr = (int *)malloc(sizeof(int)*size);//동적 메모리 할당
	for (i = 0; i < size; i++) {
		arr[i] = i+1;
	}
	for (i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	//재할당
	 //맨뒤에서 부터 해제하거나 추가로 동적할당함
	arr = (int*)realloc(arr, sizeof(int) * 5);
	for (i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	free(arr);//동적할당한 메모리 해제
	
	for (i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}