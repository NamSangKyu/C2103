#include <stdio.h>
void ArrayAddNum(int* ptr, int len, int add) {
	//printf("sizeof : %d\n", sizeof(ptr));
	int i;
	for (i = 0; i < len; i++) {
		//�迭 ��Ҹ� add��ŭ ����
		ptr[i] += add;
	}
}
void PrintArray(int* ptr, int len) {
	int i;
	for (i = 0; i < len; i++) {
		printf("%d ", ptr[i]);
	}
	printf("\n");
}
int main(void) {
	int arr[5] = { 1,2,3,4,5 };

	ArrayAddNum(arr, sizeof(arr) / sizeof(int), 2);
	PrintArray(arr, sizeof(arr) / sizeof(int));
	ArrayAddNum(arr, sizeof(arr) / sizeof(int), -1);
	PrintArray(arr, sizeof(arr) / sizeof(int));

	return 0;
}