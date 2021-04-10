#include <stdio.h>

int main(void) {
	//배열 선언 및 초기화
	//		       0 1 2 3 4
	int arr1[5] = {1,2,3,4,5};
	//			   0 1 2 3  --> 개수가 모자르면 모자른 부분은 0으로 초기화
	int arr2[7] = {1,2,3,4};
	int arr3[4] = {0};//배열 모든 요소에 0으로 초기화하는 방법
	
	printf("arr1 size : %d\n", sizeof(arr1));
	printf("arr2 size : %d\n", sizeof(arr2));
	printf("arr3 size : %d\n", sizeof(arr3));
	printf("arr1 length : %d\n", sizeof(arr1)/sizeof(int));
	printf("arr2 length : %d\n", sizeof(arr2)/sizeof(int));
	printf("arr3 length : %d\n", sizeof(arr3)/sizeof(int));
	//arr1~arr3 전부 출력
	int i;
	for (i = 0; i < 5; i++)
		printf("%d ", arr1[i]);
	printf("\n");
	for (i = 0; i < 7; i++)
		printf("%d ", arr2[i]);
	printf("\n");
	for (i = 0; i < 4; i++)
		printf("%d ", arr3[i]);
	printf("\n");
	return 0;
}