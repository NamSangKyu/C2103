#include <stdio.h>

int main(void) {
	//�迭 ���� �� �ʱ�ȭ
	//		       0 1 2 3 4
	int arr1[5] = {1,2,3,4,5};
	//			   0 1 2 3  --> ������ ���ڸ��� ���ڸ� �κ��� 0���� �ʱ�ȭ
	int arr2[7] = {1,2,3,4};
	int arr3[4] = {0};//�迭 ��� ��ҿ� 0���� �ʱ�ȭ�ϴ� ���
	
	printf("arr1 size : %d\n", sizeof(arr1));
	printf("arr2 size : %d\n", sizeof(arr2));
	printf("arr3 size : %d\n", sizeof(arr3));
	printf("arr1 length : %d\n", sizeof(arr1)/sizeof(int));
	printf("arr2 length : %d\n", sizeof(arr2)/sizeof(int));
	printf("arr3 length : %d\n", sizeof(arr3)/sizeof(int));
	//arr1~arr3 ���� ���
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